package chato;

class StackApplications {
    static void binaryConversion(int x) {

        Stack < Integer > answer = new Stack < Integer > ();
        //Ex2: write your code here
        if (x == 0){
        	answer.push(x);
        }
        else{
        	while (x != 0){
        		int a = x%2;
        		x = x/2;
        		answer.push(a);
        
        	}	
        }
        answer.printVertical();
        	
    }

    static boolean isPalindrome(String word) { 
    	//Ex3 : write your code here
    	Stack<Character> S = new Stack<Character>();
    	Stack<Character> O = new Stack<Character>();
    	
    	for(int i = 0 ;i<word.length();i++){
    		S.push(word.charAt(i));
    		
    	}
    	O = S.reversedStack();
    	while (!S.isEmpty()){
    		if (S.pop() != O.pop()){
    			return false;
    		}
    	}
    	
    	
    	
        return true; //replace this line with your code
    }

    public static boolean isInteger(String s) {
        try {
            Integer.parseInt(s);
        } catch (NumberFormatException nfe) {
            return false;
        }
        return true; // replace this line with your code
    }

    public static int evalPostfix(String[] input) {
        Stack < Integer > S = new Stack < Integer > ();
        //Ex4 : write your code here
        for (int i =0;i<input.length;i++){
        	if(isInteger(input[i])){
        		S.push(Integer.parseInt(input[i]));
        	
        	}
        	else if (input[i] == "+"){
        		int x = S.pop();
        		int y = S.pop();
        		int z = x+y;
        		S.push(z);
        		
        	}
        	else if (input[i] == "-"){
        		int x = S.pop();
        		int y = S.pop();
        		int z = x-y;
        		S.push(z);
        	
        }
        	else if (input[i] == "*"){
        		int x = S.pop();
        		int y = S.pop();
        		int z = x*y;
        		S.push(z);
        	}
        	else if (input[i] == "/"){
        		int x = S.pop();
        		int y = S.pop();
        		int z = x/y;
        		S.push(z);
        		
        	}
        }
        return S.pop(); // replace this line with your code
    }

    static boolean checkMatch(String a, String b) {
        if ((a == "{" && b == "}") || (a == "}" && b == "{") ||
            (a == "[" && b == "]") || (a == "]" && b == "[") ||
            (a == "(" && b == ")") || (a == ")" && b == "("))
            return true;
        else
            return false;
    }

    static boolean isOpenParen(String a) {
        if (a == "{" || a == "[" || a == "(")
            return true;
        else
            return false;
    }

    static boolean isCloseParen(String a) {
        if (a == "}" || a == "]" || a == ")")
            return true;
        else
            return false;
    }

    static boolean ParenMatch(String[] Exp) {
        Stack < String > D = new Stack < String > ();
        //Ex5 : write your code here
        for (int i =0;i<Exp.length;i++){
        	if (isOpenParen(Exp[i])){
        		D.push(Exp[i]);
        	}
        	else if(isCloseParen(Exp[i])){
        		if(!checkMatch(Exp[i], D.pop())){
        			return false;
        			
        	}
        	}
        }
        
        return D.isEmpty();
    }
}