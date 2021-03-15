package chato;


public class BST<T extends Comparable<T>> extends BT<T> {
  /** Create an empty binary tree */
 public BST( ) {

 }
 /** Create a binary tree from an object */
 public BST(T object)
 {   root.element=object;
 }
 /** Create a binary tree from an array of objects */
 public BST(T[] objects) {
   for (int i = 0; i < objects.length; i++)
     insert(objects[i]);
 }


 /**Exercise 1: Insert newdata into the binary tree */
 public void insert(T newdata) {
	 BTNode<T> data =new BTNode<T>(newdata);
 
   if (root == null)
       //add your code here
	   root=data;
   else {
     /** Locate the parent node */
     BTNode<T> parent = null;
     BTNode<T> current = root;
     //add your code here
     while(current!=null){
    	 
    	 if(newdata.compareTo(current.element)<=0){
    		 parent = current;
    		 current = current.left;
    	 }
    	 else{
    		 parent = current;
    		 current = current.right;
    	 }
     }
     if(newdata.compareTo(parent.element)<=0){
    	 parent.left = data;
     }
     else{
    	 parent.right = data;
     }

      size++;
      System.out.println("Add " + newdata);
 }
 }

 /** Get the number of nodes in the tree */
 public int getSize() {
   return size;
 }

 /** Returns the root of the tree */
 public BTNode getRoot() {
   return root;
 }

/**Exercise 2: delete the input data from the binary tree */
 public T delete(T data) {
       BTNode<T> temp;         

 //Case 0: if the node to be deleted is root 
       if(root.element==data)
       {    temp=root;
  
       //case 0.1: current has no children
            if(isLeaf(root))
            {   //add your code here
            	root = null;
            }
            
            else if(root.left==null) //if root has only one right child
            {  //add your code here
            	root = root.right;
            }
            else if(root.right==null) //if root has only one left child
            {   //add your code here
            	root = root.left;
            }
            else 
            {  BTNode<T> maxleft = root.left;
               BTNode<T> maxleftParent = root;

               while(maxleft.right!=null){
              		maxleftParent = maxleft;
              		maxleft = maxleft.right;
               }
               
               root.element = maxleft.element;
               if(root == maxleftParent){
            	   root.left = maxleft.left;
               }
               else{
            	   maxleftParent.right = maxleft.left;
               }
            }
        }
        else /**if data is not at root, then locate it, its parent */
        { 
           BTNode<T> parent = null;
           BTNode<T> current = root;
           boolean currentIsLeftChild = true;

           while (current != null) {
               if (data.compareTo(current.element) < 0) {
                   currentIsLeftChild = true;
                    //add your code here
                   parent = current;
                   current = current.left;

               } else if (data.compareTo(current.element) > 0) {
                   currentIsLeftChild = false;
                   //add your code here
                   parent = current;
                   current = current.right;
               } 
               else 
               {
               break;  
               }
           }
           temp = current;

           if (temp==null)
           {   System.out.println(data + " cannot be found");
               return null;
           }
           else if(isLeaf(current))
           {   //add your code here
        	   if (currentIsLeftChild){ 
        		   parent.left = null;
               }
               else{  
            	   parent.right = null;
               }
           }
          //case 2: If the node to be deleted has one child
           else if ((current.left == null))//case2.1: it has one right child
           {  if (currentIsLeftChild) 
              {  
        	   parent.left = current.right;
              }
              else  
              {  
            	  parent.right = current.right;
              }
             current.right=null;  
           }
           else if ((current.right == null)) ///case 2.2:it has one left child                
          {  if (currentIsLeftChild)  
              {   //add your code here
        	  	parent.left = current.left;
              }
             else 
              {   //add your code here  
            	 parent.right = current.left;
              }
              current.left=null;  
           } 
          else // current has both children
           {
               BTNode<T> maxleft = current.left;
               BTNode<T> maxleftParent = current;
               //add your code here 
               
               while(maxleft.right!=null){
             		maxleftParent = maxleft;
             		maxleft = maxleft.right;
              }
              
              current.element = maxleft.element;
              if(current == maxleftParent){
            	  current.left = maxleft.left;
              }
              else{
           	   	maxleftParent.right = maxleft.left;
              }
              maxleft.left = null;
           }
        }
       size--;
       return temp.element;  
}

/** Exercise 3: Search the data in the tree*/
  public BTNode<T> search(T data) {
   BTNode<T> current = root; // Start from the root

   while (current != null) {
     if (data.compareTo(current.element) < 0) {
        //add your code here 
    	 current = current.left;
     }
     else if (data.compareTo(current.element) > 0) {
       //add your code here 
    	 current = current.right;
     }
     else // element matches current.element
      //add your code here 
    	 return current;
   }

   return null;
 }


/** Exercise 4.1: find the datum that is the smallest in this bst*/
 T findSmallest(BTNode<T> start)
{
   //add your code here 
	 BTNode<T> current = start;
	 while(current.left!=null){
		 current = current.left;
	 }
	 
	 return current.element;
}

/** Exercise 4.2: find the datum that is the largest in this bst */

 T findLargest(BTNode<T> start)
{
   //add your code here   
	 BTNode<T> current = start;
	 while(current.right!=null){
		 current = current.right;
	 }
	 
	 return current.element;
}


/** Exercise 5: Sort data in the BST by repeatedly removing the smallest  */

 void makeBSTSort()
 {   //add your code here
while(root!=null){
	T S = findSmallest(root);
	System.out.print(S+" ");
	delete(S);
}
 
 }
}






