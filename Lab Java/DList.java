package chato;


public class DList<T>   {
//properties

    int size;
    DNode<T> first;
    DNode<T> last;

    DList() {
        size = 0;
        first = null;
        last = null;
    }



    void addFirst(T element) {
        DNode<T> newNode = new DNode<T>(element);
        newNode.next = first;
        newNode.prev = null;
        if (size > 0) {
            first.prev = newNode;
        }
        first = newNode;
        size++;
        if (last == null) {
            last = first;
        }
    }

    void addLast(T element) {
    	DNode<T> newNode = new DNode<T>(element);
        newNode.next = null;
        newNode.prev = last;
        if (size > 0) {
            last.next = newNode;
        }
        last = newNode;
        size++;
        if (last == null) {
            last = first;
        }
        
    }

    void addAtIndex(int index, T element) {
        if (index == 0) {
            addFirst(element);
        } else if (index == size) {
            addLast(element);
        } else if (index < size / 2) {
            DNode<T> current = first;
            for (int i = 1; i < index; i++) {
                current = current.next;
            }

            DNode<T> temp = current.next;
            DNode<T> newNode = new DNode<T>(element);
            current.next = newNode;
            newNode.prev = current;
            temp.prev = newNode;
            newNode.next = temp;
            size++;
        } else {
            DNode<T> before = last;
            //get to the node at index-1

            for (int i = 0; i < size - index; i++) {
                before = before.prev;
            }

            DNode<T> newNode = new DNode<T>(element);
            DNode<T> after = before.next;
            // System.out.println("newNode = " + newNode.element);
            // System.out.println("after = " + after.element);
            before.next = newNode;
            newNode.next = after;
            newNode.prev = before;
            after.prev = newNode;
            size++;
        }
    }

    T removeFirst() {
        if (size == 0) {
            return null;
        } else {
            DNode<T> temp = first;
            first = first.next;
            first.prev = null;
            size--;
            if (first == null) {
                last = null;
            }
            return temp.element;
        }
    }

    T removeLast() {
    	if (size == 0) {
            return null;
        } else {
            DNode<T> temp = last;
            last = last.prev;
            last.next = null;
            size--;
            if (first == null) {
                last = null;
            }
            return temp.element;
        }
        
    }

    T removeAtIndex(int index) {
    	if(index<0 || index>size ){
    		return null;
    	}
    	else if (index == 0) {
            return removeFirst();
        } else if (index == size-1) {
            return removeLast();
        } else if (index < size / 2) {
            DNode<T> current = first;
            for (int i = 1; i < index; i++) {
                current = current.next;
            }

            DNode<T> temp = current.next;
            current.next = current.next.next;
            temp.next.prev = current;
            temp.next = null;
            temp.prev = null;
            size--;
            return temp.element;
        } else {
            DNode<T> before = last;
            //get to the node at index-1

            for (int i = 0; i < size - index; i++) {
                before = before.prev;
            }

            
            DNode<T> after = before.next;
            // System.out.println("newNode = " + newNode.element);
            // System.out.println("after = " + after.element);
            before.next = before.next.next;
            after.next.prev = before;
            after.next = null;
            after.prev = null;
            size--;
            return after.element;
        }
        
    } //end method

    T getElementAtIndex(int index){
    	if(index<0 || index>size ){
    		return null;
    	}
    	else if(index == 0){
    		return first.element;
    	}
    	else if (index == size - 1){
    		return last.element;
    	}
    	else if (index >= size){
    		return null;
    	}
    	else if (index < size / 2){
    		DNode<T> current = first;
            for (int i = 1; i < index; i++) {
                current = current.next;
            }
            return current.next.element;
    	}
    	else{
    		DNode<T> before = last;
        //get to the node at index-1

        for (int i = 0; i < size - index; i++) {
            before = before.prev;
        }
        return before.next.element;
        }
    }

    boolean isEmpty() {
        if (size == 0) {
            return true;
        } else {
            return false;
        }
    }

    int getSize() {
        return size;
    }

    void printVertical() {
        DNode<T> walker = first;
        for (int i = 0; i < size; i++) {
            System.out.println(walker.element);
            walker = walker.next;
        }
        System.out.println("-----");
    }

    void printHorizontal() {
        DNode<T> walker = first;
        for (int i = 0; i < size; i++) {
            System.out.print(walker.element);
            System.out.print(" ");
            walker = walker.next;
        }
        System.out.println("\n-----");
    }

    void printReverseHorizontal() {
        DNode<T> walker = last;
        // System.out.print(walker.element);
        while (walker.prev != null) {
            System.out.print(walker.element);
            System.out.print(" ");
            walker = walker.prev;

        }
        System.out.print(walker.element);
        System.out.println("\n-----");
    }

    // Practices
    // Practice 1
    int searchFromFirst(T element) {
        DNode<T> current = first;
        for (int i = 0; i < size; i++) {
            if (current.element == element) {
                return i;
            }
            current = current.next;
        }
        return -1;
    } 

    int searchFromLast(T element) {
        DNode<T> current = last;
        for (int i = size - 1; i >= 0; i--) {
            if (current.element == element) {
                return i;
            }
            current = current.prev;
        }
        return -1;
    }

   
    boolean contains(T element) {
        if (searchFromFirst(element) == -1) {
            return false;
        } else {
            return true;
        }
    }

     
    boolean searchAndDelete(T element) {
        int val = searchFromFirst(element);
        if (val == -1) {
            return false;
        } else {
            removeAtIndex(val);
            return true;
        }
    }

    boolean searchAndInsert(T element, T input) {
        int val = searchFromFirst(element);
        if (val == -1) {
            return false;
        } else {
            addAtIndex(val + 1, input);
            return true;
        }
    }
} //end class



