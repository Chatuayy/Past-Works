

/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

public class BT<T> {

    int size;
    BTNode<T> root = null;

    BT() {
        root = null;
        size = 0;
    }

    BT(T data) {
        this(new BTNode<T>(data));
    }

    BT(BTNode<T> root) {
                this.root = root;
		size = 1;
    }

    BT(BTNode<T> root, BT<T> Lsubtree, BT<T> Rsubtree) {
        this.root = root;
	root.left = Lsubtree.root;
	root.right = Rsubtree.root;
	size = Lsubtree.size + Rsubtree.size + 1;
    }

    int findHeight() {
        return findHeight(root);
    }

    int findHeight(BTNode<T> root) {
        // Exercise 1  ////////////////
    	// Replace the following statement with your code.
    	if(root==null){
    		return 0;
    	}
    	else{
    		if(findHeight(root.left)>findHeight(root.right)){
    			return 1+findHeight(root.left);
    		}
    		else{
    			
        		return 1+findHeight(root.right);
        		
    		}
    	}
        
    }

    boolean isLeaf(BTNode<T> root) {
        if (root != null && root.left == null && root.right == null) {
            return true;
        } else {
            return false;
        }
    }

    boolean isBalanced() {
        return isBalanced(root);
    }

    boolean isBalanced(BTNode<T> root) {
        if (root == null) {
            return true;
        }
        int LH = findHeight(root.left);
        int RH = findHeight(root.right);
        int B = Math.abs(LH - RH);
        if (B <= 1) {
            return (isBalanced(root.left)
                    && isBalanced(root.right));
        } else {
            return false;
        }
    }

    /* Inorder traversal from the root*/
    public void inorder() {
        inorder(root);
    }

    /* Inorder traversal from a subtree */
    protected void inorder(BTNode<T> root) {
       // Exercise 2 (a)  ////////////////
    	if(root !=null)
        {   if (isLeaf(root))
	        {
	         System.out.print(root.element + " "); 
	        }
            else{
	  inorder(root.left);	 
	  System.out.print(root.element + " ");
	  inorder(root.right);
            }
        }
    }

    /* Postorder traversal from the root */
    public void postorder() {
        postorder(root);
    }

    /* Postorder traversal from a subtree */
    protected void postorder(BTNode<T> root) {
       // Exercise 2 (b)  ////////////////
    	if(root !=null)
        {   if (isLeaf(root))
	        {
	         System.out.print(root.element + " "); 
	        }
            else{
	  
	  postorder(root.left);
	  postorder(root.right);
      System.out.print(root.element + " ");      
      }
        }
    }

    /* Preorder traversal from the root */
    public void preorder() {
        preorder(root);
    }

    /* Preorder traversal from a subtree */
    protected void preorder(BTNode<T> root) {
       if(root !=null)
            {   if (isLeaf(root))
		        {
		         System.out.print(root.element + " "); 
		        }
                else{
		  System.out.print(root.element + " ");
		  preorder(root.left);
		  preorder(root.right);
                }
            }
    }

    void PrintDFT() {
       // Exercise 3 ////////////////
    	BTNode<T> tmp;
    	Stack<BTNode<T>> s = new Stack<BTNode<T>>();
    	
    	
    	s.push(root);
    	while(!s.isEmpty()){
	    	tmp = s.pop();
	    	if(tmp.right!=null){
	    		s.push(tmp.right);
	    	}
	    	if(tmp.left!=null){
	    		s.push(tmp.left);
	    	}
	    	System.out.print(tmp.element);
    	}
    	
    	
    }

    void PrintBFT() {
       // Exercise 4 ////////////////
    	Queue<BTNode<T>> q = new Queue<BTNode<T>>();
    	BTNode<T> tmp;
    	q.enqueue(root);
    	while(!q.isEmpty()){
	    	tmp = q.dequeue();
	    	if(tmp.left!=null){
	    		q.enqueue(tmp.left);
	    	if(tmp.right!=null){
	    		q.enqueue(tmp.right);
	    	}
	    	
	    	}
	    	System.out.print(tmp.element);
    	}
    	
    }

//Exercise 5-----------------------------------------------------------
    static boolean hasHigherPriority(String sign1, String sign2 )
 { if(sign2.equals("("))
       return true;
   else  if (sign1.equals("*") && sign2.equals("+") )
           return true;
   else if (sign1.equals("*") && sign2.equals("-") )
           return true;
   else if (sign1.equals("/") && sign2.equals("+") )
           return true;
   else if (sign1.equals("/") && sign2.equals("-") )
           return true;
   else if (sign1.equals("%") && sign2.equals("+") )
           return true;
   else if (sign1.equals("%") && sign2.equals("-") )
           return true;
   else
       return false;

 }
 

    public static BT<String> makeExpressionTree(Queue<String> Q) {
        Stack<BT<String>> BTStack = new Stack<BT<String>>();
        Stack<BTNode<String>> parentNodeStack = new Stack<BTNode<String>>(); 
        String item;

        while (!Q.isEmpty()) {
            item = Q.dequeue();
            //Case 1: if item it is an open parenthesis
            if (item.equals("(")) {
                //add your code here
            	
            	parentNodeStack.push(new BTNode<String> ("("));

            } else //Case 2: if item is an operator
            if (item.equals("+") || item.equals("-") || item.equals("*") || item.equals("/") || item.equals("%")) {
                BTNode<String> temp = new BTNode<String>(item);

                if (parentNodeStack.isEmpty()) //stack is empty
                {   //add your code here
                	parentNodeStack.push(temp);

                    
                } else //stack is not empty
                { 
                    if (hasHigherPriority(item, parentNodeStack.peek().element)) //item has higher  priority than top
                    {  //add your code here
                    	parentNodeStack.push(temp);


                    } 
                    else {
                        do {
                            //add your code here
                        	BTNode<String> root = parentNodeStack.pop();
                        	BT<String> Rsubtree = BTStack.pop();
                        	BT<String> Lsubtree = BTStack.pop();
                        	BT<String> newBt = new BT<String>(root,Lsubtree,Rsubtree);
                        	BTStack.push(newBt);
                        	
                        } while (!parentNodeStack.isEmpty() && !hasHigherPriority(item, parentNodeStack.peek().element));
                        
                       //add your code here
                        parentNodeStack.push(temp);
                         
                    }

                }
            } else if (item.equals(")")) // Case3:  if item is a close parenthesis
            {
                while (parentNodeStack.peek().element.equals("(") == false) {
                    BTNode<String> root = parentNodeStack.pop();
                    BT<String> Rsubtree = BTStack.pop();
                    BT<String> Lsubtree = BTStack.pop();
                    //add your code here
                    BT<String> newBt = new BT<String>(root,Lsubtree,Rsubtree);
                	BTStack.push(newBt);
                    


                }
                parentNodeStack.pop();

            } else //Case 4: it is not an operator
            {   BT<String> newTree = new BT<String>(item); 
                //add your code here
            BTStack.push(newTree);


            }
        }

        while (!parentNodeStack.isEmpty()) {
            BTNode<String> root = parentNodeStack.pop();
            BT<String> Rsubtree = BTStack.pop();
            BT<String> Lsubtree = BTStack.pop();
            BT<String> newBT = new BT(root, Lsubtree, Rsubtree);
            
            //add your code here
            BTStack.push(newBT);


        }

        return BTStack.pop();
    }



    
}
