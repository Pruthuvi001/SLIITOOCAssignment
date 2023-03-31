#include<iostream>
using namespace std;

class support{
	private:
		int qustionNo;
		date questionDate;
		
	public:
		void storeQuestionDetails();
		string displayQuestions();
		void postQuestions();
		void replyToCustomers();
};