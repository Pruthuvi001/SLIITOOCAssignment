#include<iostream>
using std::string;

//-----Implementing Classes-----

//class Course
class Course{
	private:
		string courseId;
		string courseName;
		string enrollKey;
		string courseType;
		string certificateNo;
		string certificateName;
		string certificateDate; 
		
	public:
		Course();
		Course(string id, string name, sring key, string type);
		void displayCourseDetails();
		void addNewCourses();
		void genarateCourseCertificate(string id, string name, string type, string c_no, string c_name, string c_date); 
		~Course();
};

//class schedule
class Schedule{
   private:
    	int scheduleNo;
      	string scheduleName;
      	string scheduleType;
      	int sessionId;
      	string sessionName;

    public:
    	Schedule();
    	Schedule(int s_no, string s_name, string s_type);
    	void displaySchedule();
    	void setSessionDetails(int s_id, string se_name);
    	void addSession();
    	~Schedule();
};

//class Resources;
class Resources{
    private:
       string resourceId;
       string resourceName;
       string resourceType;

    public:
    	Resources();
    	Resources(string r_id, string r_name, string r_type);
       	void addNewResource();
       	void displayResources();
       	~Resources();
};

//class Student;
class Student{
   private:
       	string studentId;
       	string studentName;
       	int studentNIC;
       	string studentDateOfBirth;
       	string moduleName;
       	string attendDate;
       	int studentQuestionNo;
       	
   public:
   		Student();
    	Student(string s_id, string s_name, int s_nic, string s_dob);
        void displayStudentDetails();
        void markStudentParticipation(string s_id, string s_name, int s_nic,string m_name, string a_date);
        void askQuestions(string s_id, string s_name, string stq_no);
        ~Student();
};

//class Technician;
class Technician{
    private:
    	string technicianId;
        string technicianName;
        int technicianContact;
        int notificatonNo;

    public:
    	Technician();
        Technician(string t_id, string t_name, int t_contact);
        void displayTechicianDetails();
        void addNewTechnician();
        void sendNotification(string t_id, string t_name,int n_no);
        void setNewFeature();
        ~Technician();
};

//class Instructor;
class Instructor{
    private:
        string instructorId;
        string intructorName;
        int instructorContactNo;
        
    public:
    	Instructor();
        Instructor(string i_id, string i_name, int i_contactno);
        void displayInstructorDetails();
        void getparticiipation();
        void addNewInstructors();
        void setInstructorActivities();
        ~Instructor();
};

//class Administrator;
class Administrator{
    private:
        string administratorId;
        string administratorName;
        int adminContact;
        int adminNIC;
        int answerNo;

    public:
    	Administrator();
        Administrator(string a_id,string a_name,int a_contact, int a_nic);
        void displayAdminDetails();
        void postAnswer(int as_no);
        ~Administrator();
};

//class Support;
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

//class Exam;
class Exam{
    private:
        string examId;
        string examName;
        string examType;
        char grade;
        string examDate;
     
    public:
    	Exam();
        Exam(string e_id, string e_name, string e_type, string e_date);
        void setExamGrade(string e_id,string e_name, char gr);
        void getExamParticipation();
        void displayExamDetails();
        void displayExamGrade();
        ~Exam();
};

//class User;
class User{
    protected:
    	string email;
        string password;

    public:
    	User();
    	User(string em, string pswd);
        void setEmail(string em);
        void setPassword(string pswd);
        string verifyLogin();
        ~User();
};

//class UserActivity;
class UserActivity{
    private: 
        string lastLogin;
        string timeLogged;
        string loginStatus;

    public:
    	UserActivity();
        string getLastLogin();
        string getTimeLogged();
        string getLoginStatus();
        ~UserActivity();
};

//class Register;
class Register{
    private:
        string registerEmail;
        string firstName;
        string lastName;
        string registerPassword;
        string registerDate;

    public:
    	Register();
        Register(string r_email, string f_name, string l_name,string r_pswd, string r_date);
        void login();
        ~Register();
};

//class Visitor;
class Visitor{
    private:
        string name;
    public:
    	Visitor();
        void signUp();
        void viewCourse();
        ~Visitor();
};