package chato;

public class QueueApp {
	public static boolean isInteger(String s) {
		try {
			Integer.parseInt(s);
		} catch (NumberFormatException nfe) {
			return false;
		}
		return true;
	}

	static String evalPrefixString(String x, String y, String z) {
		if (x.equals("+"))
			return "" + (Integer.parseInt(y) + Integer.parseInt(z));
		else if (x.equals("-"))
			return "" + (Integer.parseInt(y) - Integer.parseInt(z));
		else if (x.equals("*"))
			return "" + Integer.parseInt(y) * Integer.parseInt(z);
		else if (x.equals("/"))
			return "" + Integer.parseInt(y) / Integer.parseInt(z);
		else if (x.equals("%"))
			return "" + Integer.parseInt(y) % Integer.parseInt(z);
		else
			return "can't be evaluated";
	}

	static boolean isPrefix(String x, String y, String z) {
		// Exercise 2.a
		// Replace the following line with your code
		if (!isInteger(x) & isInteger(y) & isInteger(z)) {
			return true;

		}
		return false;
	}

	static String prefixEval(String[] input) {
		Queue<String> Q = new Queue<String>();
		for (int i = 0; i < input.length; i++) {
			Q.enqueue(input[i]);
		}

		// Exercise 2.b
		// Replace the following line with your codes
		String x = Q.dequeue();
		String y = Q.dequeue();
		String z = Q.dequeue();
		String e;
		
		if (Q.list.size == 0) {
			while (!isPrefix(x, y, z)) {
				x = y;
				y = z;
				z = x;

			}
			return evalPrefixString(x, y, z);
		} else // size != 0
		{

			if (isPrefix(x, y, z)) {
				e = evalPrefixString(x, y, z);
				if (Q.isEmpty()) {
					return e;
				}
			} else {
				Q.enqueue(x);
				x = y;
				y = z;
				z = Q.dequeue();

				while (!Q.isEmpty()) {
					
					if (isPrefix(x, y, z)) {
						e = evalPrefixString(x, y, z);
						if (Q.isEmpty()) {
							return e;
						} else {
							Q.enqueue(e);
							x = Q.dequeue();
							y = Q.dequeue();
							z = Q.dequeue();
							
						}
					} else {
						x = y;
						y = z;
						z = Q.dequeue();
					}
				}

				while (!isPrefix(x, y, z)) {
					x = y;
					y = z;
					z = x;

				}
				return evalPrefixString(x, y, z);
			}

		}

		return null;
	}

	// Exercise 5
	static void makeRoundRobin(Queue<Integer> Q, Queue<String> P, int limit, int resourceAmt) {
		printRoundRobin(Q, P, resourceAmt);

		while (!Q.isEmpty() && resourceAmt != 0) {
			int temp = Q.dequeue();
			String name = P.dequeue();
			if (limit <= resourceAmt) {
				if (temp >= limit) { // add your codes here
					temp = temp - limit;
					resourceAmt = resourceAmt - limit;
					if (temp > 0) {
						Q.enqueue(temp);
						P.enqueue(name);
					}
					printRoundRobin(Q, P, resourceAmt);
				} else { // add your code here
					resourceAmt = resourceAmt - temp;

					printRoundRobin(Q, P, resourceAmt);
				}
			} else {
				if (temp > resourceAmt) { // add your code here
					temp = temp - resourceAmt;
					resourceAmt = 0;
					Q.enqueue(temp);
					P.enqueue(name);

				} else { // add your code here
					resourceAmt = resourceAmt - temp;
					temp = 0;

				}
				printRoundRobin(Q, P, resourceAmt);
			} // end if
		} // end while

	}

	static void printRoundRobin(Queue<Integer> Q, Queue<String> N, int remain) {
		System.out.print(remain + ": ");
		for (int i = 0; i < Q.list.size; i++) {
			String name = N.dequeue();
			Integer need = Q.dequeue();
			System.out.print(name + "-" + need + " ");
			N.enqueue(name);
			Q.enqueue(need);
		}
		System.out.println();
	}

}
