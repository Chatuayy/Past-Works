package chato;

class Stack < T > {

    private SList < T > list = new SList < T > ();

    Stack() {}

    void push(T element) {
        //Ex1a
        list.addFirst(element);
    }

    T pop() {
        //Ex1b
    	return list.removeFirst();
        
    }

    T peek() {
        //ex1c
    	return list.getElementAtIndex(0);
        
    }

    boolean isEmpty() {
        return list.isEmpty();
    }


    Stack < T > reversedStack() { 
    	//ex1d: write your code here
    	Stack<T> r = new Stack<T>();
    	Stack<T> o = new Stack<T>();
    	while (!isEmpty()){
    		T e = pop();
    		r.push(e);
    		o.push(e);
    	}
    	while (!o.isEmpty()){
    		T e = o.pop();
    		push(e);
    		
    	}
    	return r;
        
    }


    Stack < T > copyStack() {
        Stack < T > rvStack = reversedStack();
        return rvStack.reversedStack();
    }

    void printVertical() {
        list.printVertical();
    }

}