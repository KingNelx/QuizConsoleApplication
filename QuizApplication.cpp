#include <iostream>
#include <stdlib.h>
using namespace std;

class Questions
{

public:
	int score = 0;

	void message(){
		cout <<" ========== Welcome to Quiz Console Application ========== " << endl;
		cout <<" For those who will take the exam, please be reminded that Passing Score is 6 " << endl;
	}

	void Question1()
	{
		string answer;

		cout << " 1. The moon called Titan orbits which planet? " << endl;
		cout << " Mercury " << endl;
		cout << " Pluto " << endl;
		cout << " Saturn " << endl;
		cout << " Your Answer pls: ";
		cin >> answer;

		if (answer == "Saturn" || answer == "saturn")
		{
			score++;
			cout << " Answer is Correct " << endl;
			cout << " Current Score is " << score << endl;
		}
		else
		{
			cout << " Answer is Wrong " << endl;
		}
	}

	void Question2()
	{
		int answer;

		cout << " 2. How many colors are in the rainbows? " << endl;
		cout << " 9 " << endl;
		cout << " 8 " << endl;
		cout << " 7 " << endl;
		cout << " Your Answer pls: ";
		cin >> answer;

		if (answer == 7)
		{
			score++;
			cout << " Answer is Correct " << endl;
			cout << " Current Score is " << score << endl;
		}
		else
		{
			cout << " Answer is Wrong " << endl;
		}
	}

	void Question3()
	{
		string answer;

		cout << " 3.Which planet has the most moons? " << endl;
		cout << "  Earth " << endl;
		cout << " Mercury " << endl;
		cout << " Saturn " << endl;
		cout << " Your Answer pls: ";
		cin >> answer;

		if (answer == "Saturn" || answer == "saturn")
		{
			score++;
			cout << " Answer is Correct " << endl;
			cout << " Current Score is " << score << endl;
		}
		else
		{
			cout << " Answer is Wrong " << endl;
		}
	}

	void Question4()
	{
		string answer;

		cout << " 4.Which is the second smallest planet within our solar system? " << endl;
		cout << " Jupiter " << endl;
		cout << " Saturn " << endl;
		cout << " Mars " << endl;
		cout << " Your Answer pls: ";
		cin >> answer;

		if (answer == "Mars" || answer == "mars")
		{
			score++;
			cout << " Answer is Correct " << endl;
			cout << " Current Score is " << score << endl;
		}
		else
		{
			cout << " Answer is Wrong " << endl;
		}
	}

	void Question5()
	{
		string answer;

		cout << " 5.Which is the hottest planet? " << endl;
		cout << " Mars " << endl;
		cout << " Pluto " << endl;
		cout << " Venus " << endl;
		cout << " Your Answer pls: ";
		cin >> answer;

		if (answer == "Venus" || answer == "venus")
		{
			score++;
			cout << " Answer is Correct " << endl;
			cout << " Current Score is " << score << endl;
		}
		else
		{
			cout << " Answer is Wrong " << endl;
		}
	}

		void Question6()
	{
		string answer;

		cout << " 6. Jamaica is closest to which state in the U.S? " << endl;
		cout << " Florida " << endl;
		cout << " California " << endl;
		cout << " New York " << endl;
		cout << " Your Answer pls: ";
		cin >> answer;

		if (answer == "Florida" || answer == "florida")
		{
			score++;
			cout << " Answer is Correct " << endl;
			cout << " Current Score is " << score << endl;
		}
		else
		{
			cout << " Answer is Wrong " << endl;
		}
	}

		void Question7()
	{
		string answer;

		cout << " 7. Over 99% of the people in Afghanistan belong to what religion? " << endl;
		cout << " Hinduism " << endl;
		cout << " Muslim " << endl;
		cout << " Buddhism " << endl;
		cout << " Your Answer pls: ";
		cin >> answer;

		if (answer == "Muslim" || answer == "muslim")
		{
			score++;
			cout << " Answer is Correct " << endl;
			cout << " Current Score is " << score << endl;
		}
		else
		{
			cout << " Answer is Wrong " << endl;
		}
	}

	void Question8()
	{
		string answer;

		cout << " 8. Shiraz is a variety of which fruit? " << endl;
		cout << " Mango " << endl;
		cout << " Grape " << endl;
		cout << " Apple " << endl;
		cout << " Your Answer pls: ";
		cin >> answer;

		if (answer == "Grape" || answer == "grape")
		{
			score++;
			cout << " Answer is Correct " << endl;
			cout << " Current Score is " << score << endl;
		}
		else
		{
			cout << " Answer is Wrong " << endl;
		}
	}


	void Question9()
	{
		string answer;

		cout << " 9.Which animal is known as  the SHIP OF DESSERT ?" << endl;
		cout << " Sheep " << endl;
		cout << " Camel " << endl;
		cout << " Horse " << endl;
		cout << " Your Answer pls: ";
		cin >> answer;

		if (answer == "Camel" || answer == "camel")
		{
			score++;
			cout << " Answer is Correct " << endl;
			cout << " Current Score is " << score << endl;
		}
		else
		{
			cout << " Answer is Wrong " << endl;
		}
	}


	void Question10()
	{
		string answer;

		cout << " 10.A  POD' is a group of which mammals ?" << endl;
		cout << " Whales " << endl;
		cout << " Sharks " << endl;
		cout << " Dolphins " << endl;
		cout << " Your Answer pls: ";
		cin >> answer;

		if (answer == "Whales" || answer == "whales")
		{
			score++;
			cout << " Answer is Correct " << endl;
			cout << " Current Score is " << score << endl;
		}
		else
		{
			cout << " Answer is Wrong " << endl;
		}
	}
	
};
int main()
{

	int score = 0;
	string goExam;
	string fullName;
	Questions s1;
	s1.message();
	cout <<" \n";

	cout <<" Hello There Whats your Name: ? ";
	getline(cin, fullName);
	
	
	do
	{
	cout <<" Type [Yes] to Exam, Type [No] to Exit " << endl;
	cin >> goExam;
	if(goExam == "Yes" || goExam == "yes"){
		goto here;
	}else{
		goto exit;
	}

	here: 
	s1.Question1();
	cout << "\n";
	s1.Question2();
	cout << "\n";
	s1.Question3();
	cout << "\n";
	s1.Question4();
	cout << "\n";
	s1.Question5();
	cout << "\n";
	s1.Question6();
	cout << "\n";
	s1.Question7();
	cout << "\n";
	s1.Question8();
	cout << "\n";
	s1.Question9();
	cout << "\n";
	s1.Question10();
	cout << "\n";
	cout << "\n";
	if(s1.score >= 6){
		cout <<" You Passsed the Quiz .. " << endl;
	}else{
		cout <<" You Fail the Quiz .. " << endl;
	}
	} while (goExam != "No" || goExam != "no");
	
	exit:
	cout << " Total Score is: " << s1.score << endl;

	return 0;
}
