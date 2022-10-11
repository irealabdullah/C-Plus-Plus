// #include<iostream>
// using namespace std;
// class student 
// {
//     private:
//     int marks,Math_Marks,English_Marks,Urdu_Marks;
//     public:

//     student(int m,int e,int u)
//     {
//         Math_Marks=m;
//         English_Marks=e;
//         Urdu_Marks=u;
//     }

//     void totalmarks()
//     {
//         cout<<"Total Marks ="<<Math_Marks+English_Marks+Urdu_Marks;
//     }
//     int marks =Math_Marks+English_Marks+Urdu_Marks;

//     void showGrade()
//     {
//         if(marks>100&&marks<0)
//         {
//             cout<<"Invalid Marks";
//         }
//         else if(marks<=100 && marks>=90)
//         {
//             cout<<"A*";
//         }
//         else if(marks<90 && marks>=70)
//         {
//             cout<<"B";
//         }
//         else if(marks<70 && marks>60)
//         {
//             cout<<"C";
//         }
//         else if(marks<60 && marks>=50)
//         {
//             cout<<"D";
//         }
//         else
//         {
//             cout<<"Fail";
//         }
        
//     }
 
// };
 
// int main()
// {
//     int mathMarks,englishMarks,urduMarks;
//     cout<<" Enter Math Marks";
//     cin>>mathMarks;
//     cout<<" Enter Urdu Marks";
//     cin>>englishMarks;
//     cout<<" Enter English Marks";
//     cin>>urduMarks;

//     student s(mathMarks,englishMarks,urduMarks);

//     s.totalmarks();

 
// };


// #include <iostream>
// #include <string>
// using namespace std;

// class students
// {
// public:
//     string student_name;
//     float student_marks;
//     int student_rollno;
//     char student_grade;
//     string student_feedback;

//     void studentrollno()
//     {
//         cout << " Student Rollno : " << student_rollno << endl;
//     }
//     void studentname()
//     {
//         cout << " Student Name : " << student_name << endl;
//     }

//     void studentMarks()
//     {
//         cout << " Student Marks : " << student_marks << endl;
//     }

//     void studentgrade()
//     {
//         cout << " Student Grade : " << student_grade << endl;
//     }

//     void studentfeedback()
//     {
//         cout << " Student Feedback : " << student_feedback << endl;
//     }
// };

// int main()

// {
//     students s;

//     cout << " Enter student Roll NO: ";
//     cin >> s.student_rollno;

//     cout << " Enter student Name: ";
//     cin >> s.student_name;

//     cout << " Enter student Marks: ";
//     cin >> s.student_marks;

//     cout << " Enter student Grade: ";
//     cin >> s.student_grade;

//     cout << " Enter student Feedback: ";
//     getline(cin, s.student_feedback);

//     cout << endl;
//     cout << " Following detail of Students: ";
//     s.studentrollno();
//     s.studentname();
//     s.studentMarks();
//     s.studentgrade();
//     s.studentfeedback();
// }



#include <iostream>
#include <string>
using namespace std;

class students
{
private:
    string student_name,student_feedback;
    float student_marks;
    int student_rollno;
    char student_grade;  
public:
    void setRollNo(int r)
    {
        student_rollno=r;
    }
    void setStudentName(string n)
    {
        student_name = n;
    }
    void setStudentMarks(float m)
    {
        student_marks=m;
    }
    void setStudentGrade(char g)
    {   
        student_grade=g;
    }
    void setStudentFeedback(string f)
    {
        student_feedback=f;
    }


    void DisplayName()
    {
        cout<<"Student Name: "<<student_name<<endl;
    }

       void DisplayMarks()
    {
        cout<<"Student Marks: "<<student_marks<<endl;
    }

       void DisplayRollNo()
    {
        cout<<"Student RollNo: "<<student_rollno<<endl;
    }

       void DisplayFeedback()
    {
        cout<<"Student FeedBack: "<<student_feedback<<endl;
    }

      void DisplayGrade()
    {
        cout<<"Student Grade: "<<student_grade<<endl;
    }
};

int main()
{
    string SName,SFeedback;
    float SMarks;
    int SRollNo;
    char SGrade;

    students s;

    cout<<"Enter Student Name: ";
    getline(cin,SName);
    s.setStudentName(SName);

    cout<<"Enter RollNo: ";
    cin>>SRollNo;
    s.setRollNo(SRollNo);

    cout<<"Enter Marks: ";
    cin>>SMarks;
    s.setStudentMarks(SMarks);

    cout<<"Enter Grade: ";
    cin>>SGrade;
    s.setStudentGrade(SGrade);

    cout<<"Enter Feedback: ";
    getline(cin,SFeedback);
    s.setStudentFeedback(SFeedback);

    s.setRollNo(SRollNo);
    s.DisplayName();
    s.DisplayMarks();
    s.DisplayGrade();
    s.DisplayFeedback();
}