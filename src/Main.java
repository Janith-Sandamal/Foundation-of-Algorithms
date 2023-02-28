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
        }
    }
}