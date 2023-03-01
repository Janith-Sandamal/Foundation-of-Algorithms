public class Main {
    public static void main(String[] args) {


        class stack
        {
            private double []stkArray;
            private int maxSize;
            private int top;

            public stack(int S)
            {
                maxSize = S;
                stkArray = new double[maxSize];
                top = -1;
            }

            public void push(double j)
            {
                if(top == maxSize-1)
                    System.out.println("Stack is full");
                else
                    stkArray[++top]=j;
            }

            public double pop()
            {
                if (top == -1)
                {
                    System.out.println("Stack is Empty");
                    return -99;
                }
                else
                {
                    return stkArray[top--];
                }

            }

            public double peek()
            {
                if (top == -1)
                {
                    System.out.println("Stack is empty");
                    return -99;
                }
                else {
                    return stkArray[top];
                }
            }
        }
    }
}