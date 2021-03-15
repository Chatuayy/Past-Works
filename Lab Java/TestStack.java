package chato;

class TestStack {

    public static void main(String[] args) {

        //============================ Ex.1(a) ============================
        //Uncomment this part of code to test your result in Ex.1(a)

        System.out.println("***Testing Push for Ex1a***");
        Stack < Integer > S = new Stack < Integer > ();
        S.push(2);
        S.push(5);
        S.push(7);
        S.push(1);
        System.out.println("Your result is : ");
        S.printVertical();
        System.out.println("The result should be : ");
        System.out.println("1");
        System.out.println("7");
        System.out.println("5");
        System.out.println("2");

        //============================ Ex.1(b) ============================
        //continue from the previous exercise
        //uncomment the lines below

        System.out.println("\n***Testing Pop for Ex1b***");
        S.pop();
        S.pop();
        System.out.println("Your result is : ");
        S.printVertical();
        System.out.println("The result should be : ");
        System.out.println("5");
        System.out.println("2");

        //============================ Ex.1(c) ============================
        //continue from the previous exercise
        //uncomment the lines below

        System.out.println("\n***Testing Peek for Ex1c***");
        System.out.println("Your result is : ");
        System.out.println(S.peek());
        System.out.println("The result should be : ");
        System.out.println("5");

        System.out.println("----------------Ex1 (d): Inverse Stack------------");
        Stack < Integer > S2 = new Stack < Integer > ();
        for (int i = 9; i > 5; i--)
            S2.push(i);
        System.out.println("Original Stack ");
        S2.printVertical();
        System.out.println("After Reverse ");
        Stack < Integer > rvS2 = S2.reversedStack();
        System.out.println("Your result is : ");
        rvS2.printVertical();
        System.out.println("The result should be : ");
        System.out.println("9");
        System.out.println("8");
        System.out.println("7");
        System.out.println("6");

        //============================ Ex.2 ============================

        System.out.println("----------------Ex2: Binary Conversion------------");
        //You may comment previous testing of Ex1

        System.out.println("Finding the binary value of 19 ");
        System.out.println("Your result is : ");
        StackApplications.binaryConversion(19);
        System.out.println("The correct answer should be :");
        System.out.println("1");
        System.out.println("0");
        System.out.println("0");
        System.out.println("1");
        System.out.println("1");

        System.out.println("Finding the binary value of 0");
        System.out.print("Your result is : ");
        StackApplications.binaryConversion(0);
        System.out.print("The result should be : ");
        System.out.println("0");
        System.out.println();
        System.out.println("Finding the binary value of 1");
        System.out.print("Your result is : ");
        StackApplications.binaryConversion(1);
        System.out.print("The result should be : ");
        System.out.println("1");
        System.out.println();


        //============================ Ex.3 ============================

        System.out.println("----------------Ex3 : isPalindrome------------");
        String word1 = "gatemannametag";
        String word2 = "";
        String word3 = "12340321";
        System.out.println("Your result is : ");

        System.out.print(word1 + "   is ");
        if (!StackApplications.isPalindrome(word1))
            System.out.print(" not ");
        System.out.println("a palindrome.");
        System.out.println("The result should be : gatemannametag is a palindrome.\n");

        System.out.println("Your result is : ");
        System.out.print(word2 + "is ");
        if (!StackApplications.isPalindrome(word2))
            System.out.print(" not ");
        System.out.println("a palindrome.");
        System.out.println("The result should be :   is a palindrome.\n");

        System.out.println("Your result is : ");
        System.out.print(word3 + " is ");
        if (!StackApplications.isPalindrome(word3))
            System.out.print(" not ");
        System.out.println("a palindrome.");
        System.out.println("The result should be : 12340321 is not a palindrome.\n");


        //============================ Ex.4 ============================

        System.out.println("----------------Ex4: PostfixEvaluation ------------");
        String[] postfix1 = {
            "2",
            "4",
            "6",
            "+",
            "*"
        };
        String[] postfix2 = {
            "2"
        };
        int answer = StackApplications.evalPostfix(postfix1);

        System.out.println("Your answer for postfix1 : " + answer);
        System.out.println("The result should be : 20\n");
        int answer1 = StackApplications.evalPostfix(postfix2);
        System.out.println("Your answer for postfix2 : " + answer1);
        System.out.println("The result should be : 2");


        //============================ Ex.5 ============================

        System.out.println("----------------Ex5: ParenMatch ------------");
        String[] exp1 = {
            ")",
            "1",
            "+",
            "2",
            "(",
            "3",
            "+",
            "2",
            ")",
            "[",
            "7",
            "/",
            "2",
            "]"
        };
        System.out.print("Exp1= ");
        for (int i = 0; i < exp1.length; i++)
            System.out.print(exp1[i]);
        System.out.println();
        if (StackApplications.ParenMatch(exp1) == true)
            System.out.println("Your Result: All grouping symbols match in exp1");
        else
            System.out.println("Your Result: Grouping symbols do not match in exp1");
        System.out.println("The result should be : Grouping symbols do not match in exp1");
        System.out.println();

        String[] exp2 = {
            "(",
            "1",
            "+",
            "2",
            "{",
            "(",
            "5",
            "/",
            "3",
            ")",
            "}"
        };
        System.out.print("Exp2= ");
        for (int i = 0; i < exp2.length; i++)
            System.out.print(exp2[i]);
        System.out.println();
        if (StackApplications.ParenMatch(exp2) == true)
            System.out.println("Your Result: All grouping symbols match in exp2");
        else
            System.out.println("Your Result: Grouping symbols do not match in exp2");
        System.out.println("The result should be : Grouping symbols do not match in exp2");
        System.out.println();

        String[] exp3 = {
            "(",
            "1",
            "+",
            "2",
            "{",
            ")",
            "5",
            "/",
            "3",
            "}"
        };
        System.out.print("Exp3= ");
        for (int i = 0; i < exp3.length; i++)
            System.out.print(exp3[i]);
        System.out.println();
        if (StackApplications.ParenMatch(exp3) == true)
            System.out.println("Your Result: All grouping symbols match in exp3");
        else
            System.out.println("Your Result: Grouping symbols do not match in exp3");
        System.out.println("The result should be : Grouping symbols do not match in exp3");
        System.out.println();

        String[] exp4 = {
            "{",
            "(",
            "1",
            "/",
            "2",
            ")",
            "-",
            "5",
            "+",
            "3",
            "}"
        };
        System.out.print("Exp4= ");
        for (int i = 0; i < exp4.length; i++)
            System.out.print(exp4[i]);
        System.out.println();
        if (StackApplications.ParenMatch(exp4) == true)
            System.out.println("Your Result: All grouping symbols match in exp4");
        else
            System.out.println("Your Result: Grouping symbols do not match in exp4");
        System.out.println("The result should be : All grouping symbols match in exp4");

    }

}