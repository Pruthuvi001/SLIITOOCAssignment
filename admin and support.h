/*Janaka Pruthuvi
IT21194276
Malabe
Administrator and Support header file*/
#include<iostream>
#include<cstring>
using namespace std;

//Implementing Administrator Class
class Administrator{
    private:
        string administratorId;
        string administratorName;
        int adminContact;
        int adminNIC;
        int answerNo;
        Support *sup;
    public:
    	Administrator();
        Administrator(string a_id,string a_name,int a_contact, int a_nic);
        void displayAdminDetails();
        void postAnswer(int as_no);
        ~Administrator();
};
//Implementing Support Class
class Support{
    private:
        int questionNo;
        string questionDate;
        
    public:
    	Support();
        Support(int q_no, string q_date);
        void displayQuestion();
        void postQuestion();
        void replyToCustomers();
        ~Support();
};