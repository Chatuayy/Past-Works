package chato;

import java.util.ArrayList;

public class Heap<T extends Comparable<T>> {

	ArrayList<T> heapArray = new ArrayList<T>();

	Heap() { }

    // Exercise  1  
	void reheapUp(int currentIndex) {
		int parentIndex =  (int) Math.floor((currentIndex-1)/2);
		if (currentIndex>0) {
			if(heapArray.get(currentIndex).compareTo(heapArray.get(parentIndex))>0) {
				swap(heapArray,currentIndex,parentIndex);
			}
			reheapUp(parentIndex);
		}
		
             //add your code here
 
	}
        
        // Exercise  2  
	void insert(T data) {
		if (heapArray.size()==0) {
			heapArray.add(0,data);
		}
		else {
			heapArray.add(heapArray.size(),data);
		}
		reheapUp(heapArray.size()-1);
		//add your code here
  
	}
        // Exercise  3  
	void reheapDown(int currentIndex) {
		int LChild = (currentIndex*2)+1;
		int RChild = (currentIndex*2)+2;
		if (LChild<heapArray.size()&&RChild<heapArray.size()) {
			if (heapArray.get(LChild).compareTo(heapArray.get(RChild))>0) {
				swap(heapArray,currentIndex,LChild);
				currentIndex=LChild;
			}
			else if(RChild>heapArray.size()-1){
				swap(heapArray,LChild,currentIndex);
				currentIndex=LChild;
			}
			else {
				swap(heapArray, currentIndex,RChild);
				currentIndex=RChild;
			}
			LChild = (currentIndex*2)+1;
			RChild = (currentIndex*2)+2;
			
			if (LChild<heapArray.size()&&RChild<heapArray.size()) {
				reheapDown(currentIndex);
			}
			
		}
		 //add your code here
	}
        // Exercise  4  
	T deleteRoot() {
		T temp = heapArray.get(0);
		swap(heapArray, 0,heapArray.size()-1);
		heapArray.remove(heapArray.size()-1);
		reheapDown(0);
		return temp;
		//add your code here	

    }
 

	void makeHeapSort() {
		while(!heapArray.isEmpty()) {
			System.out.print(deleteRoot()+" ");
		}
		//add your code here
	}

	int findLevel(int nodeindex) {
		int parent = (nodeindex - 1) / 2;
		int level = 0;

		if (parent > 0)
			level++;

		while (parent > 0) {
			parent = (parent - 1) / 2;
			level++;
		}

		return level;
	}

	void swap(java.util.ArrayList<T> heapArray, int i1, int i2) {
		T temp = heapArray.get(i1);
		heapArray.set(i1, heapArray.get(i2));
		heapArray.set(i2, temp);
	}

	void printHeapArray() {
		for (int i = 0; i < heapArray.size(); i++)
			System.out.print(heapArray.get(i) + " ");
		System.out.println();
	}

}

