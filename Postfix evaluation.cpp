/*PostFix*/
#include<iostream>
#include<string>
#include<string.h>
using namespace std;
int s[50];
int tos, maxSize;
void initStack(int size) {
	maxSize = size;
	tos = -1;
}
void push(char e) {
	tos++;
	s[tos] = e;
}
bool isFull() {
	if (tos == maxSize - 1)
		return true;
	else
		return false;
}
char pop() {
	char temp = s[tos];
	tos--;
	return temp;
}
bool isEmpty() {
	if (tos == -1)
		return true;
	else
		return false;
}
int atTop() {
	return s[tos];
}
void printStack() {

	for (int i = tos; i > -1; i--) {
		cout << " " << s[i];
	}

}
int prec(char ch) {
	if (ch == '+' || ch == '-')
		return (1);
	if (ch == '*' || ch == '/' || ch == '%')
		return(2);
	else
		return(0);
}
int main()
{
	char postfix[50];
	int i, len;
	cout << "Enter infix";
	cin >> postfix;
	for (len = 0; postfix[len] != '\0'; len++);

	initStack(len);
	cout << "Size of Stack "<<len << endl;


	for (i = 0; i < len ; i++)
	{
		static int j = 0;
		if(isdigit(postfix[i]))
			push(postfix[i]);
		else {

			char rhs = pop();
			char lhs = pop();
			/*int rhs = pop() - 48;
			int lhs = pop() - 48;*/

			if (j++ < 1) {
				rhs = rhs - 48;
				lhs = lhs - 48;

			}

			switch (postfix[i]) {
			case '+':

				push(rhs + lhs);
				cout << endl;
				break;
			case '-':
				push(lhs - rhs);
				cout << endl;
				break;
			case '*':
				push(lhs * rhs);
				cout << endl;
				break;
			case '/':
				push(lhs / rhs);
				cout << endl;
				break;
			}
		}
	}



	int some = pop();

	cout << some << endl;


}
