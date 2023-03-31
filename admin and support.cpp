/*Janaka Pruthuvi
IT21194276
Malabe
Administrator and Support Function Implementation*/
#include<iostream>
#include<cstring>
#include'admin and support.h'
using std::string;

//Administartor class Function Implementation
Administrator::Administrator(string a_id,string a_name,int a_contact, int a_nic){
	administratorId = a_id;
    administratorName = a_name;
    adminContact = a_contact;
    adminNIC = a_nic;
}
void Administrator::displayAdminDetails(){
	cout<<"Student ID: "<<administratorId<<endl;
	cout<<"Student Name: "<<administratorName<<endl;
	cout<<"Student NIC: "<<adminContact<<endl;
	cout<<"Student Date of Birth: "<<adminNIC<<endl;
}
void postAnswer(int as_no){
	answerNo = as_no;
}
Administrator::~Administrator(){}
//Implementing Support Functions
Support::Support(int q_no, string q_date){
	questionNo = q_no;
    questionDate = q_date;
}
void Support::displayQuestion(){
	cout<<"Question Number: "<<questionNo<<endl;
	cout<<"Question Date: "<<questionDate<<endl;
}
void Support::postQuestion(){}
void Support::replyToCustomers(){}
Support::~Support(){}
