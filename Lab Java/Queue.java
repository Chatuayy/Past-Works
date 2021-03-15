package chato;

public class Queue<T> {
	SList<T> list = new SList<T>();

	Queue() {
	}

	void enqueue(T element) {
		// Exercise 1.a
		// insert your code here
		list.addLast(element);
	}

	boolean isEmpty() {
		return list.isEmpty();
	}

	T dequeue() {
		// Exercise 1.b
		// Replace the following line your code here
		return list.removeFirst();
	}

	T queuefront() {
		// Exercise 1.c
		// Replace the following line your code here
		return list.first.element;
	}

	T queuerear() {
		// Exercise 1.c
		// Replace the following line your code here
		return list.last.element;
	}

	Queue<T> copyQueue() // Copy this Queue (itself) to another Queue
	{
		Queue<T> Q2 = new Queue<T>();
		int size = list.size;

		// Exercise 1.d
		// insert your codes here

		for (int i = 0; i < size; i++) {
			T cq = dequeue();
			Q2.enqueue(cq);
			enqueue(cq);

		}
		return Q2;
	}

	Queue<T> mergeQueue(Queue<T> Q2) // Merge this Queue with the input Queue Q2
										// to another output Queue called Q3
	{
		Queue<T> Q3 = copyQueue();
		int size = Q2.list.size;

		// Exercise 1.e
		// insert your codes here
		while (!Q2.isEmpty())
			Q3.enqueue(Q2.dequeue());

		return Q3;
	}

	boolean isIdentical(Queue<T> Q2) // Check if this Queue(itself) has the same
										// content as Q2
	{
		boolean ans = true;
		if (list.size != Q2.list.size)
			ans = false;

		// Exercise 1.f
		// insert your codes here
		else
			for (int i = 0; i < list.size; i++) {
				T cq = dequeue();
				T cq2 = Q2.dequeue();
				if (cq == cq2) {
					ans = true;

				} else
					ans = false;

			}

		return ans;
	}

	int distance2Front(T x) {
		int distance = -1, flag = 0;
		T temp;
		for (int i = 0; i < list.size; i++) {
			if (queuefront().equals(x) && flag == 0) {
				distance = i;
				flag = 1;
			}
			temp = dequeue();
			enqueue(temp);
		}
		return distance;
	}

	int distance2Rear(T x) {
		return list.size - distance2Front(x) - 1;

	}

	void printHorizontal() {
		Node<T> walker = list.first;
		for (int i = 0; i < list.size; i++) {
			System.out.print(walker.element + " ");
			walker = walker.next;
		}
		System.out.println();
	}

}