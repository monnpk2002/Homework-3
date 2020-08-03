#include <iostream>
#include <string>
#include <math.h>
using namespace std;
int main()
{
	int first , second , third , mid_term , final ;
	cout << "==========QUIZZES==========" << endl;
	cout << "Enter first quizz  (10) :";
	cin  >> first ;
	cout << "Enter second quizz  (10) :";
	cin  >> second ;
	cout << "Enter third quizz  (10) :";
	cin  >> third ;
	cout << "================MID_TERM=================" <<endl;
	cout << "Enter mid_term  (40) :";
	cin  >> mid_term ;
	cout << "================FINAL=================" <<endl;
	cout << "Enter final  (50) :" ;
	cin  >> final ;
	float QuizzTotal , sum , Total ;
	sum = first + second + third ;
	QuizzTotal = sum / 3;
	cout << "Quizz Total :" << QuizzTotal << endl ;
	cout << "Mid term :" << mid_term << endl ;
	cout << "Final :" << final << endl ;
	Total = QuizzTotal + mid_term + final ;
	cout << " Total :" << Total << endl ;
	cout << " Our score is " << ((Total) >=50 ? "PASS": "FAIL") << endl ;
    
	system("pause");
	return (0);	
}
