//
// Created by Janith Sandamal on 3/13/2023.
//

/*Question 4
i) A stack class has already been implemented with push() , pop() and peek() methods. It is
used to store characters. Write a code segment to insert following characters to a ’myStack’
object created from the stack class.
‘g’ , ‘t’, ‘o’, ‘p’

ii) Write code segment to display all the values in a stack by removing them.
iii) What is the result of section ii) above

 */

//(i)
Stack myStack;

myStack.push('g');
myStack.push('t');
myStack.push('o');
myStack.push('p');
//Assuming the Stack class has already been implemented with push(),
// pop(), and peek() methods,
// the code above creates a myStack object and pushes the characters 'g', 't', 'o', 'p' onto the stack.

//(ii)
while (!myStack.isEmpty()) {
char ch = myStack.pop();
std::cout << ch << std::endl;
}
//This code segment uses a loop to remove all the elements from the stack one by one using the pop() method, and then prints them to the console using std::cout.

/*iii) The result of the code segment in ii) above is that all the values in the stack are displayed in reverse order,
i.e., 'p', 'o', 't', 'g'.
 This is because the pop() method removes the last element added to the stack first,
 so the elements are displayed in reverse order of insertion.*/