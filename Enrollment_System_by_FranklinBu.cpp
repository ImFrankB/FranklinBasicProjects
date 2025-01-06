#include <iostream>
#include <windows.h>
#include <string>
#include <thread>
#include <vector>

using namespace std;


void TextColor();
void loadinganimation();
void DisplayHeader();
void studentinfo();
void proceed();
void course();
void classyear();
void semester();
void proceed2();
void payment();
void Main();
void createUser();
void login();


int main(){
createUser();
login();

return 0;}



void TextColor(int color){
SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),color);

}

void loadingAnimation() {

         cout<<"\t\t\t\t\t\t\t\t\t    Please wait!\n";
    for (int i = 1; i <=30; i++) {
        string loadingBar(i,'*'); // Create a string with 'i' asterisks
        TextColor(10);
        cout << "\t\t\t\t\t\t\t\t[" << loadingBar << "]"; // Display the loading bar
        TextColor(7);
        cout << "\r"; // Move the cursor to the beginning of the line
        this_thread::sleep_for(chrono::milliseconds(50)); // Sleep for a specified time
    }
}

void DisplayHeader(){
TextColor(4);
    cout<<"\n\n\n";
    cout<<"\t\t\t\t\t\b\t  I S A B E L A  S T A T E  U N I V E R S I T Y  E C H A G U E  C A M P U S \n\n" ;
TextColor(3);
    cout<<"\t\t\t\t\t  ********                           **  **                                **  \n";
    cout<<"\t\t\t\t\t /**/////                           /** /**                               /**  \n";
    cout<<"\t\t\t\t\t /**       *******  ******  ******  /** /** **********   *****  *******  ******\n";
    cout<<"\t\t\t\t\t /******* //**///**//**//* **////** /** /**//**//**//** **///**//**///**///**/ \n";
    cout<<"\t\t\t\t\t /**////   /**  /** /** / /**   /** /** /** /** /** /**/******* /**  /**  /**  \n";
    cout<<"\t\t\t\t\t /**       /**  /** /**   /**   /** /** /** /** /** /**/**////  /**  /**  /**  \n";
    cout<<"\t\t\t\t\t /******** ***  /**/***   //******  *** *** *** /** /**//****** ***  /**  //** \n";
    cout<<"\t\t\t\t\t //////// ///   // ///     //////  /// /// ///  //  //  ////// ///   //    //\n";

TextColor(6);
    cout<<"\t\t\t\t\t                                         **                      \n";
    cout<<"\t\t\t\t\t                       **   **          /**                      \n";
    cout<<"\t\t\t\t\t               ****** //** **   ****** ******  *****  ********** \n";
    cout<<"\t\t\t\t\t              **////   //***   **//// ///**/  **///**//**//**//**\n";
    cout<<"\t\t\t\t\t             //*****    /**   //*****   /**  /******* /** /** /**\n";
    cout<<"\t\t\t\t\t              /////**   **     /////**  /**  /**////  /** /** /**\n";
    cout<<"\t\t\t\t\t              ******   **      ******   //** //****** *** /** /**\n";
    cout<<"\t\t\t\t\t             //////   //      //////     //   ////// ///  //  // \n";
TextColor(4);
    cout<<"\n\t\t\t\t\t\t\tJ O H N  F R A N K L I N   B U G A U I S A N\n\n";
TextColor(7);

}

struct{
    vector<string>username{};
    vector<string>password{};
}Users;



void createUser() {
    string usernameInput {};
    string passwordInput {};
    DisplayHeader();
    cout << "\n\t\t\t\t\t\t\t\t\tEnter a new username: ";
    getline(cin, usernameInput);
    Users.username.push_back(usernameInput);
    cout << "\n\t\t\t\t\t\t\t\t\tEnter a new password: ";
    getline(cin, passwordInput);
    Users.password.push_back(passwordInput);
    cout<<"\n\n\n";
    loadingAnimation();
    cout << "\n\n\n\n\n\t\t\t\t\t\t\t\t\tUser created successfully!\n\n\n";
    system("pause");
    system("cls");

}

void login() {
    string enteredUsername, enteredPassword;
    DisplayHeader();
    cout << "\t\t\t\t\t\t\t\t\tEnter your username: ";
    cin >> enteredUsername;
    cout << "\t\t\t\t\t\t\t\t\tEnter your password: ";
    cin >> enteredPassword;

    for (string i : Users.username) {
        if(i == enteredUsername){
            for(string j : Users.password){
                j == enteredPassword;
            }
            system("cls");
            Main();
        }
    }

    cout << "Login failed. Invalid username or password.\n";
    system("pause");
    system("cls");
    login();
}

void classyear() {
    cout << endl;
    cout << endl;
    cout << "\t\t\t\t\t\t\t\t   [1] FIRST YEAR    \n\n";
    cout << "\t\t\t\t\t\t\t\t   [2] SECOND YEAR     \n\n";
    cout << "\t\t\t\t\t\t\t\t   [3] THIRD YEAR     \n\n";
    cout << "\t\t\t\t\t\t\t\t   [4] FOURTH YEAR     \n\n\n";
}

void semester() {
    DisplayHeader();
    cout << endl;
    cout << endl;
    cout << "\t\t\t\t\t\t\t\t\t[1] FIRST SEMESTER  \n\n";
    cout << "\t\t\t\t\t\t\t\t\t[2] SECOND SEMESTER \n\n";
    cout << "\t\t\t\t\t\t\t\t\t[3] MIDYEAR         \n\n";
}

//______________________________________________________________________________
void payment()
{
	int mode;
	double Overall=4500;
	DisplayHeader();
	cout<<"\n\n\t\t\t\t\t\t\t\t ______________________  \n";
	cout<<"\t\t\t\t\t\t\t\t|    Mode of Payment   | \n";
	cout<<"\t\t\t\t\t\t\t\t|______________________| \n";
	cout<<"\t\t\t\t\t\t\t\t|[1] CASH              | \n";
	cout<<"\t\t\t\t\t\t\t\t|[2] INSTALLMENT       | \n";
	cout<<"\t\t\t\t\t\t\t\t|______________________| \n\n";
	cout<<"\t\t\t\t\t\t\t\tChoose mode of payments : ";
	cin>>mode;
	system("cls");
	DisplayHeader();
	cout<<"\t\t\t\t\t\t\t\t.....AMOUNT TO BE PAY: 4500......\n\n";

while(true){
	if(mode==1)
    {
        double cashamount;
        cout<<"\t\t\t\t\t\t\t\t    Enter cash amount: ";
        cin>>cashamount;

        if(cashamount<Overall){
            cout<<"\t\tInsufficient amount, payment cancelled. Try again!\n";
            continue;
        }

        else if(cashamount>Overall)
        {
            cout<<"\t\t\t\t\t\t\t\t    Change: "<<cashamount-Overall;
            break;
        }
    }

    else if(mode==2)
    {
        char chs;
	cout<<"\n\n\t\t\t\t\t\t\t\t ______________________  \n";
	cout<<"\t\t\t\t\t\t\t\t|  Installment year/s  | \n";
	cout<<"\t\t\t\t\t\t\t\t|______________________| \n";
	cout<<"\t\t\t\t\t\t\t\t|[A] 1 YEAR            | \n";
	cout<<"\t\t\t\t\t\t\t\t|______________________| \n";
    cout<<"\n\n\t\t\t\t\t\t\t\tChoose Years: ";
        cin>>chs;

    if(chs=='A'||chs=='a'){
        double balance,Dpayment,totalPayment,Mpayment;

        cout<<"\t\t\t\t\t\t\t\tEnter downpayment amount: ";
        cin>>Dpayment;

        balance=Overall-Dpayment;
        Mpayment=balance/11;

        cout << "\t\t\t\t\t\t\t\tAmount Payed: " << Dpayment << endl;
        cout << "\t\t\t\t\t\t\t\tBalance: " << balance << endl;
        cout << "\t\t\t\t\t\t\t\tMonthly Payment: " << Mpayment << endl;
        break;

    }
    }
}
        }

//______________________________________________________________________________
void BSIS()
{
	int yr,sem;
    TextColor(10);
    system("cls");
    DisplayHeader();
    cout<<"\n\t\t\t\t\t\t\tBACHELOR OF SCIENCE IN INFORMATION SYSTEM!";
    TextColor(7);
    classyear();

	cout<<"\t\tChoose year level:";
	cin>>yr;
	system("cls");


	if(yr==1){
        semester();
        cout<<"\t\tChoose semester : ";
        cin>>sem;
        system("cls");

        if(sem==1){
            cout<<"\n\n\n\n\n";
            cout<<"\t\t\t\t__________________________________________________________________________________________________\n";
            cout<<"\t\t\t\t|                                          FIRST YEAR(1ST YEAR)                                   |\n";
            cout<<"\t\t\t\t|_________________________________________________________________________________________________|\n";
            cout<<"\t\t\t\t| FIRST SEMESTER                                                                                  |\n";
            cout<<"\t\t\t\t|COURSE NO   | COURSE TITLE                  | UNIT |     NO. OF UNITS     |     PRE REQUISITE    |\n";
            cout<<"\t\t\t\t|____________|_______________________________|______| LECTURE | LABORATORY |______________________|\n";
            cout<<"\t\t\t\t|    GEC 4   |PURPOSIVE COMMUNICATION        |  3   |    3    |            |      NONE            |\n";
            cout<<"\t\t\t\t|    GEC 5   |ART APPRECIATION               |  3   |    3    |            |      NONE            |\n";
            cout<<"\t\t\t\t|   IS 111   |INTRODUCTION TO COMPUTING      |  3   |    2    |     1      |      NONE            |\n";
            cout<<"\t\t\t\t|   IS 112   |COMPUTER PROGRAMMING 1         |  3   |    2    |     1      |      NONE            |\n";
            cout<<"\t\t\t\t|IS GEc ELEc1|HEALTH & WELLNESS SCIENCE      |  3   |    3    |            |      NONE            |\n";
            cout<<"\t\t\t\t|IS GE ELEC2 |MULTICULTURAL EDUCATION        |  3   |    3    |            |      NONE            |\n";
            cout<<"\t\t\t\t|   P.E 1    |P.A.T.H.F 1                    |  2   |    2    |            |      NONE            |\n";
            cout<<"\t\t\t\t|   NSTP 1   |CWTS/LTS/MS 1                  |  3   |    3    |            |      NONE            |\n";
            cout<<"\t\t\t\t|_________________________________________________________________________________________________|\n";
            cout<<"\t\t\t\t|               TOTAL UNITS:                 |  20  |    18   |    2       |                      |\n";
            cout<<"\t\t\t\t|____________________________________________|______|_________|____________|______________________|\n";

    }
        else if(sem==2){
            cout<<"\n\n\n\n\n";
            cout<<"\t\t\t\t_________________________________________________________________________________________________\n";
            cout<<"\t\t\t\t|SECOND SEMESTER                                                                                  |\n";
            cout<<"\t\t\t\t|COURSE NO.  | COURSE TITLE                  | UNIT |     NO. OF UNITS     |     PRE REQUISITE    |\n";
            cout<<"\t\t\t\t_____________|_______________________________|______| LECTURE | LABORATORY |______________________|\n";
            cout<<"\t\t\t\t|    GEC 1   |UNDERSTANDIG SELF              |  3   |    3    |            |      NONE            |\n";
            cout<<"\t\t\t\t|    GEC 2   |READING IN PHI. HISTORY        |  3   |    3    |            |      NONE            |\n";
            cout<<"\t\t\t\t|    GEC 3   |M.M.W                          |  3   |    3    |            |      NONE            |\n";
            cout<<"\t\t\t\t|IS GEC ELEC2|GENDER & SOCIETY               |  3   |    2    |            |      NONE            |\n";
            cout<<"\t\t\t\t|IS INS 1    |C.C.D.R.M                      |  2   |    2    |            |      NONE            |\n";
            cout<<"\t\t\t\t|IS 121      |FUNDAMENTALS OF INFORMATION SY.|  3   |    3    |            |      IS 111          |\n";
            cout<<"\t\t\t\t| IS 122     |COMPUTER PROGRAMMING 2         |  3   |    2    |     1      |      IS 112          |\n";
            cout<<"\t\t\t\t|  P.E 2     |P.A.T.H.F 2                    |  2   |    2    |            |      P.E 1           |\n";
            cout<<"\t\t\t\t| NSTP 2     | CWTS/LTS/MS 2                 |  3   |    3    |            |      NSTP 1          |\n";
            cout<<"\t\t\t\t|_________________________________________________________________________________________________|\n";
            cout<<"\t\t\t\t|               TOTAL UNITS:                 |  22  |    21   |    1       |                      |\n";
            cout<<"\t\t\t\t|____________________________________________|______|_________|____________|______________________|\n";

    }

	}

    if (yr==2){
            semester();
            cout<<"\t\tChoose semester : ";
            cin>>sem;
            system("cls");

        if(sem==1){
            cout<<"\n\n\n\n\n";
            cout<<"\t\t\t\t_________________________________________________________________________________________________ \n";
            cout<<"\t\t\t\t|                                       SECOND YEAR(2ND YEAR)                                    |\n";
            cout<<"\t\t\t\t|________________________________________________________________________________________________|\n";
            cout<<"\t\t\t\t| FIRST SEMESTER                                                                                 |\n";
            cout<<"\t\t\t\t|COURSE NO   | COURSE TITLE                 | UNIT |     NO. OF UNITS     |     PRE REQUISITE    |\n";
            cout<<"\t\t\t\t|____________|______________________________|______| LECTURE | LABORATORY |______________________|\n";
            cout<<"\t\t\t\t|    GEC 6   |SCIENCE, TECHNOLOGY,& SOCIETY |  3   |    3    |            |      NONE            |\n";
            cout<<"\t\t\t\t|    GEC 8   |CONTEMPORARY WORLD            |  3   |    3    |            |      NONE            |\n";
            cout<<"\t\t\t\t|  IS INST 2 |CREATIVE&CRITICAL THINKING    |  2   |    1    |     1      |      NONE            |\n";
            cout<<"\t\t\t\t|   IS 211   |DATA STRUCTURES & ALGORITHM   |  3   |    2    |     1      |      IS 122          |\n";
            cout<<"\t\t\t\t|IS 212      |PROFESSIONAL ISSUES IN I.S    |  3   |    3    |            |      IS 111, IS 121  |\n";
            cout<<"\t\t\t\t|IS 213      |IT INFRASTRUCTURES & NETWRORK |  3   |    2    |     1      |      IS 111, IS 121  |\n";
            cout<<"\t\t\t\t|IS 214      |ORG AND MANAGEMENT CONCEPTS   |  3   |    3    |            |      IS 111          |\n";
            cout<<"\t\t\t\t|PE 3        |P.A.T.H.F 3                   |  2   |    2    |            |      PE1, PE2        |\n";
            cout<<"\t\t\t\t|IS BPO 211  |BUSINESS COMMUNICATION FOR BPO|  3   |    3    |            |      GEC 4           |\n";
            cout<<"\t\t\t\t|________________________________________________________________________________________________|\n";
            cout<<"\t\t\t\t|               TOTAL UNITS:                |  25  |    22   |    3       |                      |\n";
            cout<<"\t\t\t\t|___________________________________________|______|_________|____________|______________________|\n";

    }
        else if(sem==2){
            cout<<"\n\n\n\n\n";
            cout<<"\t\t\t\t ________________________________________________________________________________________________\n";
            cout<<"\t\t\t\t|SECOND SEMESTER                                                                                 |\n";
            cout<<"\t\t\t\t|COURSE NO.  | COURSE TITLE                 | UNIT |     NO. OF UNITS     |     PRE REQUISITE    |\n";
            cout<<"\t\t\t\t|____________|______________________________|______| LECTURE | LABORATORY |______________________|\n";
            cout<<"\t\t\t\t|GEC 7       |ETHICS                        |  3   |    3    |            |      NONE            |\n";
            cout<<"\t\t\t\t|GEC 9       |LIFE NAD WORKS OF RIZAL       |  3   |    3    |            |      NONE            |\n";
            cout<<"\t\t\t\t|IS GE ELEC 1|ENTREPRENEURIAL MIND          |  3   |    3    |            |      NONE            |\n";
            cout<<"\t\t\t\t|IS 221      |SYSTEM ANALYSIS AND DESIGN    |  3   |    2    |     1      |   2ND YEAR STANDING  |\n";
            cout<<"\t\t\t\t|IS 222      |FINANCIAL MANAGEMENT          |  3   |    3    |            |      IS 214          |\n";
            cout<<"\t\t\t\t|IS ELEC 1   |IT AUDIT AND CONTROLS         |  3   |    2    |     1      |   2ND YEAR STANDING  |\n";
            cout<<"\t\t\t\t|PE 4        |P.A.T.H.F 4                   |  2   |    2    |            |   PE1,PE2,PE3        |\n";
            cout<<"\t\t\t\t|IS BPO 221  |SERVICE CULTURE               |  3   |    2    |     1      |      IS BPO 211      |\n";
            cout<<"\t\t\t\t|________________________________________________________________________________________________|\n";
            cout<<"\t\t\t\t|               TOTAL UNITS:                |  23  |    20   |     3      |                      |\n";
            cout<<"\t\t\t\t|___________________________________________|______|_________|____________|______________________|\n";
        }
		}

	if(yr==3){
            semester();
            cout<<"\t\tChoose semeter : ";
            cin>>sem;
            system("cls");

        if(sem==1){
            cout<<"\n\n\n\n\n";
            cout<<"\t\t\t\t_________________________________________________________________________________________________ \n";
            cout<<"\t\t\t\t|                                       THIRD YEAR(3RD YEAR)                                     |\n";
            cout<<"\t\t\t\t|________________________________________________________________________________________________|\n";
            cout<<"\t\t\t\t| FIRST SEMESTER                                                                                 |\n";
            cout<<"\t\t\t\t|COURSE NO   | COURSE TITLE                 | UNIT |     NO. OF UNITS     |     PRE REQUISITE    |\n";
            cout<<"\t\t\t\t|____________|______________________________|______| LECTURE | LABORATORY |______________________|\n";
            cout<<"\t\t\t\t|    IS 311  |INNFORMATION MANAGEMENT       |  3   |    2    |     1      |      IS 211          |\n";
            cout<<"\t\t\t\t|    IS 312  |ENTERPRISE ARCHITECTURE       |  3   |    2    |     1      |      IS 213          |\n";
            cout<<"\t\t\t\t|    IS 313  |BUSINESS PROCESSES MANAGEMENT |  3   |    3    |            |      IS 222          |\n";
            cout<<"\t\t\t\t|    IS 314  |QUANTITTIVE RESEARCH          |  3   |    3    |            |   3RD YEAR STANDING  |\n";
            cout<<"\t\t\t\t|   IS ELEC 2|DATA MINING                   |  3   |    2    |     1      |   3RD YEAR STANDING  |\n";
            cout<<"\t\t\t\t|  IS BPO 311|F.B.P.O 101                   |  3   |    2    |     1      | IS BPO 211,IS BPO 221|\n";
            cout<<"\t\t\t\t|  IS BPO 312|PRINCIPLES OF SYSTEMS THINK.  |  3   |    3    |            | IS BPO 211,IS BPO 221|\n";
            cout<<"\t\t\t\t|________________________________________________________________________________________________|\n";
            cout<<"\t\t\t\t|               TOTAL UNITS:                |  21  |    17   |    4       |                      |\n";
            cout<<"\t\t\t\t|___________________________________________|______|_________|____________|______________________|\n";
    }

        else if(sem==2){
            cout<<"\n\n\n\n\n";
            cout<<"\t\t\t\t ________________________________________________________________________________________________\n";
            cout<<"\t\t\t\t|SECOND SEMESTER                                                                                 |\n";
            cout<<"\t\t\t\t|COURSE NO.  | COURSE TITLE                 | UNIT |     NO. OF UNITS     |     PRE REQUISITE    |\n";
            cout<<"\t\t\t\t_____________|______________________________|______| LECTURE | LABORATORY |______________________|\n";
            cout<<"\t\t\t\t|IS GEC ELEC3| ETHICS                       |  3   |    3    |            |      NONE            |\n";
            cout<<"\t\t\t\t|IS 321      |LIFE NAD WORKS OF RIZAL       |  3   |    3    |            |      NONE            |\n";
            cout<<"\t\t\t\t|IS 322      |ENTREPRENEURIAL MIND          |  3   |    3    |            |      NONE            |\n";
            cout<<"\t\t\t\t|IS 323      |SYSTEM ANALYSIS AND DESIGN    |  3   |    2    |     1      |   2ND YEAR STANDING  |\n";
            cout<<"\t\t\t\t|IS ELEC 3   |FINANCIAL MANAGEMENT          |  3   |    2    |            |      IS 214          |\n";
            cout<<"\t\t\t\t|IS GEC ELEC3|IT AUDIT AND CONTROLS         |  3   |    3    |     1      |   2ND YEAR STANDING  |\n";
            cout<<"\t\t\t\t|IS BPO 321  |SERVICE CULTURE               |  3   |    2    |     1      |      IS BPO 211      |\n";
            cout<<"\t\t\t\t|________________________________________________________________________________________________|\n";
            cout<<"\t\t\t\t|               TOTAL UNITS:                |  21  |    18   |     3      |                      |\n";
            cout<<"\t\t\t\t|___________________________________________|______|_________|____________|______________________|\n";
}



    }

	if (yr==4){
            semester();
            cout<<"\t\tChoose semeter : ";
            cin>>sem;

        if(sem==1){
            cout<<"\n\n\n\n\n";
            cout<<"\t\t\t\t_________________________________________________________________________________________________ \n";
            cout<<"\t\t\t\t|                                       FOURTH YEAR(4TH YEAR)                                     |\n";
            cout<<"\t\t\t\t|________________________________________________________________________________________________|\n";
            cout<<"\t\t\t\t| FIRST SEMESTER                                                                                 |\n";
            cout<<"\t\t\t\t|COURSE NO   | COURSE TITLE                 | UNIT |     NO. OF UNITS     |     PRE REQUISITE    |\n";
            cout<<"\t\t\t\t_____________|______________________________|______| LECTURE | LABORATORY |______________________|\n";
            cout<<"\t\t\t\t|    IS 411  |IS STRATEGY,MANAGEMENT&ACQUISI|  3   |    3    |            |   4TH YEAR STANDING  |\n";
            cout<<"\t\t\t\t|    IS 412  |APPLICATIONS DEV&EMERGIMG TECH|  3   |    2    |     1      |   4TH YEAR STANDING  |\n";
            cout<<"\t\t\t\t|    IS 413  |CAPSTONE PROJECT 2            |  3   |    2    |     1      |      IS 323          |\n";
            cout<<"\t\t\t\t| IS ELEC 4  |IS INNOVATION&NEW TECHNOLOGIES|  3   |    2    |     1      |   4TH YEAR STANDING  |\n";
            cout<<"\t\t\t\t|  IS FOR 411|FOREIGN LANGUAGE              |  3   |    3    |            |      NONE            |\n";
            cout<<"\t\t\t\t|________________________________________________________________________________________________|\n";
            cout<<"\t\t\t\t|               TOTAL UNITS:                |  15  |    12   |    3       |                      |\n";
            cout<<"\t\t\t\t|___________________________________________|______|_________|____________|______________________|\n";

    }
        else if(sem==2){
            cout<<"\n\n\n\n\n";
            cout<<"\t\t\t\t ________________________________________________________________________________________________\n";
            cout<<"\t\t\t\t|SECOND SEMESTER                                                                                 |\n";
            cout<<"\t\t\t\t|COURSE NO.  | COURSE TITLE                 | UNIT |     NO. OF UNITS     |     PRE REQUISITE    |\n";
            cout<<"\t\t\t\t_____________|______________________________|______| LECTURE | LABORATORY |______________________|\n";
            cout<<"\t\t\t\t|IS 421      | PRCTICUM FOR I.S/INTERSHIP   |  9   |    9    |            |  4TH YEAR STANDING   |\n";
            cout<<"\t\t\t\t|________________________________________________________________________________________________|\n";
            cout<<"\t\t\t\t|               TOTAL UNITS:                |  9   |    9    |     3      |                      |\n";
            cout<<"\t\t\t\t|___________________________________________|______|_________|____________|______________________|\n";
            cout<<"\t\t\t\t|      TOTAL NUMBER OF UNITS                |   156|                                             |\n";
            cout<<"\t\t\t\t|___________________________________________|______|_____________________________________________|\n";
	    }

}


            }

void BSCS()
{
	int yr,sem;
        TextColor(10);
        system("cls");
        DisplayHeader();
        cout<<"\n\t\t\t\t\t\t\tBACHELOR OF SCIENCE IN COMPUTER SCIENCE!";
        TextColor(7);
        classyear();

        cout<<"\t\tChoose year level:";
        cin>>yr;
        system("cls");

	if (yr==1){
            semester();
            cout<<"\t\tChoose semester : ";
            cin>>sem;
            system("cls");

        if (sem==1){
            cout<<"\n\n\n\n\n";
            cout<<"\t\t\t\t__________________________________________________________________________________________________\n";
            cout<<"\t\t\t\t|                                          FIRST YEAR(1ST YEAR)                                   |\n";
            cout<<"\t\t\t\t|_________________________________________________________________________________________________|\n";
            cout<<"\t\t\t\t| FIRST SEMESTER                                                                                  |\n";
            cout<<"\t\t\t\t|COURSE NO   | COURSE TITLE                  | UNIT |     NO. OF UNITS     |     PRE REQUISITE    |\n";
            cout<<"\t\t\t\t_____________|_______________________________|______| LECTURE | LABORATORY |______________________|\n";
            cout<<"\t\t\t\t|GE ELEC CS 2|GENDER ANG SOCIETY             |  3   |    3    |            |      NONE            |\n";
            cout<<"\t\t\t\t|    GEC 4   |PURPOSIVE COMMUNICATION        |  3   |    3    |            |      NONE            |\n";
            cout<<"\t\t\t\t|   GEC 3    |M.M.W                          |  3   |    3    |     1      |      NONE            |\n";
            cout<<"\t\t\t\t|   CS 111   |INTRODUCTION TO COMPUTING      |  3   |    2    |     1      |      NONE            |\n";
            cout<<"\t\t\t\t|   CS 112   |FUNDAMENTALS OF PROGRAMMING    |  3   |    2    |            |      NONE            |\n";
            cout<<"\t\t\t\t|GE ELEC CS 1|HEALTH AND WELLNESS            |  3   |    3    |            |      NONE            |\n";
            cout<<"\t\t\t\t|   PE 1     |P.A.T.H.F                      |  2   |    2    |            |      NONE            |\n";
            cout<<"\t\t\t\t|   NSTP 1   |NATIONAL SERVICE TRAINING PROG.|  3   |    3    |            |      NONE            |\n";
            cout<<"\t\t\t\t|_________________________________________________________________________________________________|\n";
            cout<<"\t\t\t\t|               TOTAL UNITS:                 |  23  |         |            |                      |\n";
            cout<<"\t\t\t\t|____________________________________________|______|_________|____________|______________________|\n";
    }
        else if(sem==2){
            cout<<"\n\n\n\n\n";
            cout<<"\t\t\t\t__________________________________________________________________________________________________\n";
            cout<<"\t\t\t\t|SECOND SEMESTER                                                                                  |\n";
            cout<<"\t\t\t\t|COURSE NO.  | COURSE TITLE                  | UNIT |     NO. OF UNITS     |     PRE REQUISITE    |\n";
            cout<<"\t\t\t\t_____________|_______________________________|______| LECTURE | LABORATORY |______________________|\n";
            cout<<"\t\t\t\t|    GEC 1   |UNDERSTANDIG SELF              |  3   |    3    |            |      NONE            |\n";
            cout<<"\t\t\t\t|    GEC 2   |READING IN PHI. HISTORY        |  3   |    3    |            |      NONE            |\n";
            cout<<"\t\t\t\t|    GEC 8   |THE CONTEMPORARY WORLD         |  3   |    3    |            |      NONE            |\n";
            cout<<"\t\t\t\t|GE ELEC CS 3|FOREIGN LANGUAGE 1             |  3   |    2    |            |      NONE            |\n";
            cout<<"\t\t\t\t|CS 121      |DISCRETE STRUCTURE 1           |  3   |    3    |            |      NONE            |\n";
            cout<<"\t\t\t\t|CS INST 1   |C.C.D.R.M                      |  2   |    2    |            |      NONE            |\n";
            cout<<"\t\t\t\t| CS 122     |INTERMEDIATE PROGRAMMING       |  3   |    2    |     1      |      CS 112          |\n";
            cout<<"\t\t\t\t|  P.E 2     |P.A.T.H.F 2                    |  2   |    2    |            |      P.E 1           |\n";
            cout<<"\t\t\t\t| NSTP 2     | NATIONAL SERVICE TRAINING PROG|  3   |    3    |            |      NSTP 1          |\n";
            cout<<"\t\t\t\t|_________________________________________________________________________________________________|\n";
            cout<<"\t\t\t\t|               TOTAL UNITS:                 |  25  |         |    1       |                      |\n";
            cout<<"\t\t\t\t|____________________________________________|______|_________|____________|______________________|\n";
    }

	}



	if (yr==2){
            semester();
            cout<<"\t\tChoose semester : ";
            cin>>sem;
            system("cls");

        if (sem==1){
            cout<<"\n\n\n\n\n";
            cout<<"\t\t\t\t__________________________________________________________________________________________________\n";
            cout<<"\t\t\t\t|                                          SECOND YEAR(2ND YEAR)                                   |\n";
            cout<<"\t\t\t\t|_________________________________________________________________________________________________|\n";
            cout<<"\t\t\t\t| FIRST SEMESTER                                                                                  |\n";
            cout<<"\t\t\t\t|COURSE NO   | COURSE TITLE                  | UNIT |     NO. OF UNITS     |     PRE REQUISITE    |\n";
            cout<<"\t\t\t\t|____________|_______________________________|______| LECTURE | LABORATORY |______________________|\n";
            cout<<"\t\t\t\t|    GEC 6   |SCIENCE TECHNOLOGY AND SOCIETY |  3   |    3    |            |      NONE            |\n";
            cout<<"\t\t\t\t|    GEC 7   |ETHICS                         |  3   |    3    |            |      NONE            |\n";
            cout<<"\t\t\t\t|    GEC 5   |ART APPRECIATION               |  3   |    3    |            |      NONE            |\n";
            cout<<"\t\t\t\t|   CS 211   |DISCRETE STRUCTURE 2           |  3   |    3    |            |      CS 121          |\n";
            cout<<"\t\t\t\t|   CS 212   |OBJECT ORIENTED PROGRAMMING    |  3   |    2    |     1      |      CS 122          |\n";
            cout<<"\t\t\t\t|   CS 213   |DATA STRUCTURES AND ALGORITHM  |  3   |    2    |     1      |      CS 122          |\n";
            cout<<"\t\t\t\t|   CS 214   |CALCULUS W/ANAYTICAL GEOMETRY  |  3   |    3    |            | 2ND YEAR STANDING    |\n";
            cout<<"\t\t\t\t|   P.E 3    |P.A.T.H.F                      |  2   |    2    |            |      P.E 2           |\n";
            cout<<"\t\t\t\t|_________________________________________________________________________________________________|\n";
            cout<<"\t\t\t\t|               TOTAL UNITS:                 |  23  |         |            |                      |\n";
            cout<<"\t\t\t\t|____________________________________________|______|_________|____________|______________________|\n";
    }
        else if(sem==2){
            cout<<"\n\n\n\n\n";
            cout<<"\t\t\t\t__________________________________________________________________________________________________\n";
            cout<<"\t\t\t\t|SECOND SEMESTER                                                                                  |\n";
            cout<<"\t\t\t\t|COURSE NO.  | COURSE TITLE                  | UNIT |     NO. OF UNITS     |     PRE REQUISITE    |\n";
            cout<<"\t\t\t\t_____________|_______________________________|______| LECTURE | LABORATORY |______________________|\n";
            cout<<"\t\t\t\t|CS GE ELEC1 |ENTREPRENURIAL MIND            |  3   |    3    |            |      NONE            |\n";
            cout<<"\t\t\t\t|CS GE ELEC4 |TECHNICAL WRITING              |  3   |    3    |            |      NONE            |\n";
            cout<<"\t\t\t\t|    CS 221  |ALGORTIHM AND COMPLEXITY       |  3   |    3    |            |      NONE            |\n";
            cout<<"\t\t\t\t|CS 222      |INFORMATION MANAGEMENT         |  3   |    2    |     1      |      NONE            |\n";
            cout<<"\t\t\t\t|CS 121      |CS ELECTIVE 1                  |  3   |    2    |     1      |      NONE            |\n";
            cout<<"\t\t\t\t|P.E 4       |P.A.T.H.F 4                    |  2   |    2    |            |      NONE            |\n";
            cout<<"\t\t\t\t|CS DM 1     |S.M.D.A.I                      |  3   |    2    |     1      |      CS 112          |\n";
            cout<<"\t\t\t\t|CS DM2      |DATA PREPARATION AND ANALYSIS  |  3   |    2    |     1      |      P.E 1           |\n";
            cout<<"\t\t\t\t|_________________________________________________________________________________________________|\n";
            cout<<"\t\t\t\t|               TOTAL UNITS:                 |  23  |         |            |                      |\n";
            cout<<"\t\t\t\t|____________________________________________|______|_________|____________|______________________|\n";
   }
	}
    if (yr==3){
            semester();
            cout<<"\t\tChoose semester : ";
            cin>>sem;
            system("cls");

        if(sem==1){
            cout<<"\n\n\n\n\n";
            cout<<"\t\t\t\t__________________________________________________________________________________________________\n";
            cout<<"\t\t\t\t|                                          THIRD YEAR(3RD YEAR)                                   |\n";
            cout<<"\t\t\t\t|_________________________________________________________________________________________________|\n";
            cout<<"\t\t\t\t| FIRST SEMESTER                                                                                  |\n";
            cout<<"\t\t\t\t|COURSE NO   | COURSE TITLE                  | UNIT |     NO. OF UNITS     |     PRE REQUISITE    |\n";
            cout<<"\t\t\t\t_____________|_______________________________|______| LECTURE | LABORATORY |______________________|\n";
            cout<<"\t\t\t\t|CS 311      |AUTOMATA THEORY&FORMAL LANGUAGE|  3   |    3    |            |      CS 221          |\n";
            cout<<"\t\t\t\t|CS 312      |ARCHITECTURL AND ORGANIZATION  |  3   |    3    |            |     CS 213, CS  121  |\n";
            cout<<"\t\t\t\t|CS 313      |INFORMATION ASURANCE AND SECU. |  3   |    2    |            |     CS 222           |\n";
            cout<<"\t\t\t\t|CS 314      |SOFTWARE ENGINEERING 1         |  3   |    2    |     1      |     CS 222,CS 212    |\n";
            cout<<"\t\t\t\t|CS 315      |SOCIAL AND PROFESSIONAL ISSUES |  3   |    3    |            | CO REQUISITE W CS 314|\n";
            cout<<"\t\t\t\t|CS DM 3     |DATA MINING TECHNIQUES & TOOLS |  3   |    2    |     1      |    3RD YEAR STANDING |\n";
            cout<<"\t\t\t\t|CS DM 4    1|DATA MINING APPLICATIONS       |  3   |    2    |     1      |    3RD YEAR STANDING |\n";
            cout<<"\t\t\t\t|_________________________________________________________________________________________________|\n";
            cout<<"\t\t\t\t|               TOTAL UNITS:                 |  23  |         |            |                      |\n";
            cout<<"\t\t\t\t|____________________________________________|______|_________|____________|______________________|\n";
    }
        else if(sem==2){
            cout<<"\n\n\n\n\n";
            cout<<"\t\t\t\t _________________________________________________________________________________________________\n";
            cout<<"\t\t\t\t|SECOND SEMESTER                                                                                  |\n";
            cout<<"\t\t\t\t|COURSE NO.  | COURSE TITLE                  | UNIT |     NO. OF UNITS     |     PRE REQUISITE    |\n";
            cout<<"\t\t\t\t_____________|_______________________________|______| LECTURE | LABORATORY |______________________|\n";
            cout<<"\t\t\t\t|CS 321      |CS THESIS WRITING 1            |  3   |    2    |     1      |CS 313, CS GE ELEC 4  |\n";
            cout<<"\t\t\t\t|CS 324      |PROGRAMMING LANGUAGE S         |  3   |    2    |     1      |      CS 213          |\n";
            cout<<"\t\t\t\t|CS 322      |SOFTWARE ENGINEERING 2         |  3   |    2    |     1      |      CS 314          |\n";
            cout<<"\t\t\t\t|CS 323      |APP. DEVELOPMENT&EMERGING TECH.|  3   |    2    |     1      |      CS 222          |\n";
            cout<<"\t\t\t\t|CS ELEC 2   |CS ELECTIVE 2                  |  3   |    2    |     1      |    3RD YEAR STANDING |\n";
            cout<<"\t\t\t\t|CSDM 5      |ALGORITHMS  FOR DATA MINING    |  3   |    2    |     1      |      CSDM 3&4        |\n";
            cout<<"\t\t\t\t|CSDM 6      |DATA MINING METHODOLOGY        |  3   |    2    |     1      |      CS OM 3&4       |\n";
            cout<<"\t\t\t\t|_________________________________________________________________________________________________|\n";
            cout<<"\t\t\t\t|               TOTAL UNITS:                 |  21  |         |            |                      |\n";
            cout<<"\t\t\t\t|____________________________________________|______|_________|____________|______________________|\n";
        }
        else if(sem==3){
            cout<<"\n\n\n\n\n";
            cout<<"\t\t\t\t _________________________________________________________________________________________________\n";
            cout<<"\t\t\t\t|MID YEAR                                                                                         |\n";
            cout<<"\t\t\t\t|COURSE NO.  | COURSE TITLE                  | UNIT |     NO. OF UNITS     |     PRE REQUISITE    |\n";
            cout<<"\t\t\t\t_____________|_______________________________|______| LECTURE | LABORATORY |______________________|\n";
            cout<<"\t\t\t\t|CS GE ELEC 2|MULTICULTURAL EDUCATION        |  3   |    3    |            |       NONE           |\n";
            cout<<"\t\t\t\t|GEC 9       |THE LIFE & WORKS OF RIZAL      |  3   |    3    |            |       NONE           |\n";
            cout<<"\t\t\t\t|CS GE ELEC3 |SOFTWARE ENGINEERING 2         |  3   |    3    |            |       NONE           |\n";
            cout<<"\t\t\t\t|_________________________________________________________________________________________________|\n";
            cout<<"\t\t\t\t|               TOTAL UNITS:                 |  9   |         |            |                      |\n";
            cout<<"\t\t\t\t|____________________________________________|______|_________|____________|______________________|\n";

    }


    }


    if (yr==4){
            semester();
            cout<<"\t\tChoose semester : ";
            cin>>sem;
            system("cls");

        if(sem==1){
            cout<<"\n\n\n\n\n";
            cout<<"\t\t\t\t__________________________________________________________________________________________________\n";
            cout<<"\t\t\t\t|                                          FOURTH YEAR(4TH YEAR)                                  |\n";
            cout<<"\t\t\t\t|_________________________________________________________________________________________________|\n";
            cout<<"\t\t\t\t| FIRST SEMESTER                                                                                  |\n";
            cout<<"\t\t\t\t|COURSE NO   | COURSE TITLE                  | UNIT |     NO. OF UNITS     |     PRE REQUISITE    |\n";
            cout<<"\t\t\t\t_____________|_______________________________|______| LECTURE | LABORATORY |______________________|\n";
            cout<<"\t\t\t\t|CS 412      |HUMAN COMPUTER INTERACTION     |  3   |    2    |     1      |      CS 122          |\n";
            cout<<"\t\t\t\t|CS 413      |NETWORKS & COMMUNICATION       |  3   |    2    |     1      |     CS 213           |\n";
            cout<<"\t\t\t\t|CS 414      |OPERATING SYSTEM               |  3   |    2    |     1      |     CS 213           |\n";
            cout<<"\t\t\t\t|CS 411      |CS THESIS WRITING 2            |  3   |    2    |     1      |     CS321            |\n";
            cout<<"\t\t\t\t|CS ELEC 3   |CS ELECTIVE 3                  |  3   |    2    |     1      | 4TH YEAR STANDING    |\n";
            cout<<"\t\t\t\t|_________________________________________________________________________________________________|\n";
            cout<<"\t\t\t\t|               TOTAL UNITS:                 |  15  |         |            |                      |\n";
            cout<<"\t\t\t\t|____________________________________________|______|_________|____________|______________________|\n";
    }
        else if(sem==2){
            cout<<"\n\n\n\n\n";
            cout<<"\t\t\t\t__________________________________________________________________________________________________\n";
            cout<<"\t\t\t\t|SECOND SEMESTER                                                                                  |\n";
            cout<<"\t\t\t\t|COURSE NO.  | COURSE TITLE                  | UNIT |     NO. OF UNITS     |     PRE REQUISITE    |\n";
            cout<<"\t\t\t\t_____________|_______________________________|______| LECTURE | LABORATORY |______________________|\n";
            cout<<"\t\t\t\t|CS 421      |PRACTICUM(486 HOURS)           |  9   |         |             |CS 313, CS GE ELEC 4 |\n";
            cout<<"\t\t\t\t|_________________________________________________________________________________________________|\n";
            cout<<"\t\t\t\t|               TOTAL UNITS:                 |  169 |         |            |                      |\n";
            cout<<"\t\t\t\t|____________________________________________|______|_________|____________|______________________|\n";
       }
}}


void BSIT1()
{
	int yr,sem;
        TextColor(10);
        system("cls");
        DisplayHeader();
        cout<<"\n\t\t\t\t\t\t\tBACHELOR OF SCIENCE IN INFORMATION TECHNOLOGY!";
        cout<<"\n\t\t\t\t\t\t\tspeacialization trck in web and mobile application dev.\n";
        TextColor(7);
        classyear();

        cout<<"\t\tChoose year level:";
        cin>>yr;
        system("cls");

	if(yr==1){
            semester();
            cout<<"\t\tChoose semester : ";
            cin>>sem;
            system("cls");

        if (sem==1){
            cout<<"\n\n\n\n\n";
            cout<<"\t\t\t\t__________________________________________________________________________________________________\n";
            cout<<"\t\t\t\t|                                         FIRST YEAR(1ST YEAR)                                   |\n";
            cout<<"\t\t\t\t|_________________________________________________________________________________________________|\n";
            cout<<"\t\t\t\t| FIRST SEMESTER                                                                                  |\n";
            cout<<"\t\t\t\t|COURSE NO   | COURSE TITLE                  | UNIT |     NO. OF UNITS     |     PRE REQUISITE    |\n";
            cout<<"\t\t\t\t_____________|_______________________________|______| LECTURE | LABORATORY |______________________|\n";
            cout<<"\t\t\t\t|GEC 1       |UNDERSTANDING THE SELF         |  3   |    3    |            |     NONE             |\n";
            cout<<"\t\t\t\t|GEC 4       |PURPOSIVE COMMUNICATION        |  3   |    3    |            |     NONE             |\n";
            cout<<"\t\t\t\t|GEC 3       |M.M.W                          |  3   |    3    |            |     NONE             |\n";
            cout<<"\t\t\t\t|GE ELEC IT 1|HEALTH AND WELLNNESS           |  3   |    3    |            |     NONE             |\n";
            cout<<"\t\t\t\t|IT 111      |INTRODUCTION TO COMPUTING      |  3   |    2    |     1      |     NONE             |\n";
            cout<<"\t\t\t\t|IT 112      |COMPUTER PROGRAMMING 1         |  3   |    2    |     1      |     NONE             |\n";
            cout<<"\t\t\t\t|P.E 1       |P.A.T.H.F                      |  2   |    2    |            |     NONE             |\n";
            cout<<"\t\t\t\t|NSTP 1      |C.W.T.S 1                      |  3   |         |            |     NONE             |\n";
            cout<<"\t\t\t\t|_________________________________________________________________________________________________|\n";
            cout<<"\t\t\t\t|               TOTAL UNITS:                 |  23  |         |            |                      |\n";
            cout<<"\t\t\t\t|____________________________________________|______|_________|____________|______________________|\n";
    }
        else if(sem==2){
            cout<<"\n\n\n\n\n";
            cout<<"\t\t\t\t__________________________________________________________________________________________________\n";
            cout<<"\t\t\t\t|SECOND SEMESTER                                                                                  |\n";
            cout<<"\t\t\t\t|COURSE NO.  | COURSE TITLE                  | UNIT |     NO. OF UNITS     |     PRE REQUISITE    |\n";
            cout<<"\t\t\t\t_____________|_______________________________|______| LECTURE | LABORATORY |______________________|\n";
            cout<<"\t\t\t\t|    GEC 2   |READING IN PHI. HISTORY        |  3   |    3    |            |      NONE            |\n";
            cout<<"\t\t\t\t|    GEC 8   |THE CONTEMPORARY WORLD         |  3   |    3    |            |      NONE            |\n";
            cout<<"\t\t\t\t|GE ELEC IT 2|FOREIGN LANGUAGE 1             |  3   |    3    |            |      NONE            |\n";
            cout<<"\t\t\t\t|IT 121      |COMPUTER PROGRAMMING 2         |  3   |    2    |     1      |      IT 112          |\n";
            cout<<"\t\t\t\t|IT 122      |HUMAN-COMPUETR INTERACTION     |  3   |    2    |     1      |      IT 112          |\n";
            cout<<"\t\t\t\t|IT 123      |DISCRETE MATHEMATICS           |  3   |    3    |            |      GEC 3           |\n";
            cout<<"\t\t\t\t|  P.E 2     |P.A.T.H.F 2                    |  2   |    2    |            |      P.E 1           |\n";
            cout<<"\t\t\t\t| NSTP 2     | C.W.T.S                       |  3   |         |            |      NSTP 1          |\n";
            cout<<"\t\t\t\t|_________________________________________________________________________________________________|\n";
            cout<<"\t\t\t\t|               TOTAL UNITS:                 |  23  |         |    1       |                      |\n";
            cout<<"\t\t\t\t|____________________________________________|______|_________|____________|______________________|\n";
            }
	}

    if (yr==2){
            semester();
            cout<<"\t\tChoose semester : ";
            cin>>sem;
            system("cls");

        if (sem==1){
            cout<<"\n\n\n\n\n";
            cout<<"\t\t\t\t__________________________________________________________________________________________________\n";
            cout<<"\t\t\t\t|                                          SECOND YEAR(2ND YEAR)                                  |\n";
            cout<<"\t\t\t\t|_________________________________________________________________________________________________|\n";
            cout<<"\t\t\t\t| FIRST SEMESTER                                                                                  |\n";
            cout<<"\t\t\t\t|COURSE NO   | COURSE TITLE                  | UNIT |     NO. OF UNITS     |     PRE REQUISITE    |\n";
            cout<<"\t\t\t\t_____________|_______________________________|______| LECTURE | LABORATORY |______________________|\n";
            cout<<"\t\t\t\t|    GEC 6   |SCIENCE TECHNOLOGY AND SOCIETY |  3   |    3    |            |      NONE            |\n";
            cout<<"\t\t\t\t|    GEC 7   |ETHICS                         |  3   |    3    |            |      NONE            |\n";
            cout<<"\t\t\t\t|    GEC 5   |ART APPRECIATION               |  3   |    3    |            |      NONE            |\n";
            cout<<"\t\t\t\t|    IT 211  |DATA STRUCTURRES AND ALGO      |  3   |    2    |     1      |      IT 121          |\n";
            cout<<"\t\t\t\t|   IT ELEC 1|PLATFORM TTECHNOLOGIES         |  3   |    2    |     1      |      IT 121          |\n";
            cout<<"\t\t\t\t|   IT ELEC 2|OBJECT ORIENTED PROGRAMMING    |  3   |    2    |     1      |      IT 121          |\n";
            cout<<"\t\t\t\t|   IT BPO 1 |BUSINESS COMMUNICATION         |  3   |    3    |            |      NONE            |\n";
            cout<<"\t\t\t\t|   P.E 3    |P.A.T.H.F                      |  2   |    2    |            |      P.E 2           |\n";
            cout<<"\t\t\t\t|_________________________________________________________________________________________________|\n";
            cout<<"\t\t\t\t|               TOTAL UNITS:                 |  23  |         |            |                      |\n";
            cout<<"\t\t\t\t|____________________________________________|______|_________|____________|______________________|\n";}

        else if(sem==2){
            cout<<"\n\n\n\n\n";
            cout<<"\t\t\t\t__________________________________________________________________________________________________\n";
            cout<<"\t\t\t\t|SECOND SEMESTER                                                                                  |\n";
            cout<<"\t\t\t\t|COURSE NO.  | COURSE TITLE                  | UNIT |     NO. OF UNITS     |     PRE REQUISITE    |\n";
            cout<<"\t\t\t\t_____________|_______________________________|______| LECTURE | LABORATORY |______________________|\n";
            cout<<"\t\t\t\t|IT INST 1   |C.C.D.R.M                      |  3   |    3    |            |      NONE            |\n";
            cout<<"\t\t\t\t|GE ELEC IT 3|FOREIGN LANGUAGE 2             |  3   |    3    |            |      NONE            |\n";
            cout<<"\t\t\t\t|IT 221      |INFORMATION MANAGMENT          |  3   |    3    |            |      NONE            |\n";
            cout<<"\t\t\t\t|IT 222      |NETWORKING 1                   |  3   |    2    |     1      |      NONE            |\n";
            cout<<"\t\t\t\t|IT 223      |QUANTITATIVE METHODS           |  3   |    2    |     1      |      NONE            |\n";
            cout<<"\t\t\t\t|IT 224      |INTEG. PROGAMMING & TECCHNOLOGY|  2   |    2    |            |      NONE            |\n";
            cout<<"\t\t\t\t|IT 225      |ACCOUNTING FOR INFORMATION TECH|  3   |    2    |     1      |      CS 112          |\n";
            cout<<"\t\t\t\t|IT NS 1     |FUNDMENTALS OF MOBILE TECH.    |  3   |    2    |     1      |      P.E 1           |\n";
            cout<<"\t\t\t\t|IT PE4      |P.A.T.H.F 4                    |  2   |    2    |            |      P.E 2           |\n";
            cout<<"\t\t\t\t|_________________________________________________________________________________________________|\n";
            cout<<"\t\t\t\t|               TOTAL UNITS:                 |  23  |         |            |                      |\n";
            cout<<"\t\t\t\t|____________________________________________|______|_________|____________|______________________|\n";
		}
        else if(sem==3){
            cout<<"\n\n\n\n\n";
            cout<<"\t\t\t\t _________________________________________________________________________________________________\n";
            cout<<"\t\t\t\t|MID YEAR                                                                                         |\n";
            cout<<"\t\t\t\t|COURSE NO.  | COURSE TITLE                  | UNIT |     NO. OF UNITS     |     PRE REQUISITE    |\n";
            cout<<"\t\t\t\t_____________|_______________________________|______| LECTURE | LABORATORY |______________________|\n";
            cout<<"\t\t\t\t| it 226     | APP DEV AND EMERGING TECH     |  3   |    2    |            |       NONE           |\n";
            cout<<"\t\t\t\t| IT ELEC  3 | WEB SYSTEMS AND TECHNOLOGIES  |  3   |    2    |            |       NONE           |\n";
            cout<<"\t\t\t\t|_________________________________________________________________________________________________|\n";
            cout<<"\t\t\t\t|               TOTAL UNITS:                 |  9   |         |            |                      |\n";
            cout<<"\t\t\t\t|____________________________________________|______|_________|____________|______________________|\n";
 }


		}


    if (yr==3){
            semester();
        cout<<"\t\tChoose semester : ";
        cin>>sem;
        system("cls");

        if(sem==1){
            cout<<"\n\n\n\n\n";
            cout<<"\t\t\t\t__________________________________________________________________________________________________\n";
            cout<<"\t\t\t\t|                                          THIRD YEAR(3RD YEAR)                                   |\n";
            cout<<"\t\t\t\t|_________________________________________________________________________________________________|\n";
            cout<<"\t\t\t\t| FIRST SEMESTER                                                                                  |\n";
            cout<<"\t\t\t\t|COURSE NO   | COURSE TITLE                  | UNIT |     NO. OF UNITS     |     PRE REQUISITE    |\n";
            cout<<"\t\t\t\t_____________|_______________________________|______| LECTURE | LABORATORY |______________________|\n";
            cout<<"\t\t\t\t|IT GE ELEC 1|THE ENTREPREEURIAL MIND        |  3   |    3    |     0      |      NONE            |\n";
            cout<<"\t\t\t\t|IT 311      |ADVANCE DATA BASE SYSTEMS      |  3   |    2    |     1      |      IT 221          |\n";
            cout<<"\t\t\t\t|IT 312      |NETWORKING 2                   |  3   |    2    |     1      |      IT 222          |\n";
            cout<<"\t\t\t\t|IT 313      |SYSTEM INTEGRATION AND ARCHI   |  3   |    2    |     1      |      IT 224          |\n";
            cout<<"\t\t\t\t|IT 314      |INFORMATION ASSURANCE&SECURITY1|  3   |    2    |     1      |      IT 224          |\n";
            cout<<"\t\t\t\t|IT APPDEV 2 |WEB APPLICATIONS               |  3   |    2    |     1      |      IT ELEC 3       |\n";
            cout<<"\t\t\t\t|IT APPDEV 3 |MOBILE APPLICATIONS            |  3   |    2    |     1      |      IT APPDEV 1     |\n";
            cout<<"\t\t\t\t|___________________________________________________________________ _____________________________|\n";
            cout<<"\t\t\t\t|               TOTAL UNITS:                 |  21  |         |            |                      |\n";
            cout<<"\t\t\t\t|____________________________________________|______|_________|____________|______________________|\n";
    }

        else if(sem==2){
            cout<<"\n\n\n\n\n";
            cout<<"\t\t\t\t__________________________________________________________________________________________________\n";
            cout<<"\t\t\t\t|SECOND SEMESTER                                                                                  |\n";
            cout<<"\t\t\t\t|COURSE NO.  | COURSE TITLE                  | UNIT |     NO. OF UNITS     |     PRE REQUISITE    |\n";
            cout<<"\t\t\t\t_____________|_______________________________|______| LECTURE | LABORATORY |______________________|\n";
            cout<<"\t\t\t\t|GEC 9       |THE LIFE AND WORK OF RIZAL     |  3   |    3    |            |      NONE            |\n";
            cout<<"\t\t\t\t|IT GE ELEC 2|MULTICULTURAL EDUCATION        |  3   |    3    |     1      |      NONE            |\n";
            cout<<"\t\t\t\t|IT 321      |INFORMATION ASSURANCE&SECURITY2|  3   |    3    |            |      NONE            |\n";
            cout<<"\t\t\t\t|IT 322      |SOCIAL&PROFESSIONAL ISSUES     |  3   |    2    |     1      |      IT 314          |\n";
            cout<<"\t\t\t\t|IT 323      |CAPSTONE PROJECT&RESEARCH 1    |  3   |    2    |     1      |      GEC 5           |\n";
            cout<<"\t\t\t\t|IT APPDEV 4 |GAME DEVELOPMENT               |  2   |    2    |            |   IT APPDEV 2&3      |\n";
            cout<<"\t\t\t\t|IT APPDEV 5 |CLOUD COMPUTING                |  3   |    2    |     1      |   IT APPDEV 2&3      |\n";
            cout<<"\t\t\t\t|_________________________________________________________________________________________________|\n";
            cout<<"\t\t\t\t|               TOTAL UNITS:                 |  21  |         |            |                      |\n";
            cout<<"\t\t\t\t|____________________________________________|______|_________|____________|______________________|\n";
            }
    }


if (yr==4){
        semester();
        cout<<"\t\tChoose semester : ";
        cin>>sem;
        system("cls");

        if(sem==1){
            cout<<"\n\n\n\n\n";
            cout<<"\t\t\t\t__________________________________________________________________________________________________\n";
            cout<<"\t\t\t\t|                                          FOURTH YEAR(4T YEAR)                                   |\n";
            cout<<"\t\t\t\t|_________________________________________________________________________________________________|\n";
            cout<<"\t\t\t\t| FIRST SEMESTER                                                                                  |\n";
            cout<<"\t\t\t\t|COURSE NO   | COURSE TITLE                  | UNIT |     NO. OF UNITS     |     PRE REQUISITE    |\n";
            cout<<"\t\t\t\t_____________|_______________________________|______| LECTURE | LABORATORY |______________________|\n";
            cout<<"\t\t\t\t|IT GE ELEC 3|LEADERSHIP&MANAGEMENT IN THE PR|  3   |    3    |     0      |      NONE            |\n";
            cout<<"\t\t\t\t|IT 411      |SYSTTEM ADM. AND MAINTENANCE   |  3   |    2    |     1      |      IT 221          |\n";
            cout<<"\t\t\t\t|IT ELEC  4  |HUMAN-COMPUTER INTERACTION 2   |  3   |    2    |     1      |      IT 222          |\n";
            cout<<"\t\t\t\t|IT 412      |CAPSTONE PROJECT&RESEARCH  2   |  3   |    2    |     1      |      IT 224          |\n";
            cout<<"\t\t\t\t|___________________________________________________________________ _____________________________|\n";
            cout<<"\t\t\t\t|               TOTAL UNITS:                 |  12  |         |            |                      |\n";
            cout<<"\t\t\t\t|____________________________________________|______|_________|____________|______________________|\n";
            }

        else if(sem==2){
            cout<<"\n\n\n\n\n";
            cout<<"\t\t\t\t__________________________________________________________________________________________________\n";
            cout<<"\t\t\t\t|SECOND SEMESTER                                                                                  |\n";
            cout<<"\t\t\t\t|COURSE NO.  | COURSE TITLE                  | UNIT |     NO. OF UNITS     |     PRE REQUISITE    |\n";
            cout<<"\t\t\t\t_____________|_______________________________|______| LECTURE | LABORATORY |______________________|\n";
            cout<<"\t\t\t\t|IT  421     |INTERSHIP/OJT/PRACTICUM(486H)  |  9   |         |            |4TH YEAR STANDING     |\n";
            cout<<"\t\t\t\t|_________________________________________________________________________________________________|\n";
            cout<<"\t\t\t\t|               TOTAL UNITS:                 |  21  |         |            |                      |\n";
            cout<<"\t\t\t\t|____________________________________________|______|_________|____________|______________________|\n";
}
}}

//______________________________________________________________________________
void BSDSA()
{
    int yr,sem;
		TextColor(10);
		system("cls");
		DisplayHeader();
        cout<<"\n\t\t\t\t\t\t\tBACHELOR OF SCIENCE IN DATA SCIENCE ANALYTICS!\n";
        TextColor(7);
        classyear();

        cout<<"\t\tChoose year level : ";
        cin>>yr;
        system("cls");

	if(yr==1){
            semester();
            cout<<"\t\tChoose semester : ";
            cin>>sem;
            system("cls");

        if (sem==1){
            cout<<"\n\n\n\n\n";
            cout<<"\t\t\t\t__________________________________________________________________________________________________\n";
            cout<<"\t\t\t\t|                                         FIRST YEAR(1ST YEAR)                                    |\n";
            cout<<"\t\t\t\t|_________________________________________________________________________________________________|\n";
            cout<<"\t\t\t\t| FIRST SEMESTER                                                                                  |\n";
            cout<<"\t\t\t\t|COURSE NO   | COURSE TITLE                  | UNIT |     NO. OF UNITS     |     PRE REQUISITE    |\n";
            cout<<"\t\t\t\t_____________|_______________________________|______| LECTURE | LABORATORY |______________________|\n";
            cout<<"\t\t\t\t|GEC 1       |UNDERSTANDING THE SELF         |  3   |    3    |            |     NONE             |\n";
            cout<<"\t\t\t\t|GEC 3       |M.M.W                          |  3   |    3    |            |     NONE             |\n";
            cout<<"\t\t\t\t|GEC 4       |PURPOSIVE COMMUNICATION        |  3   |    3    |            |     NONE             |\n";
            cout<<"\t\t\t\t|GE ELECDSA 1|HEALTH AND  WELLNESS SCIENCE   |  3   |    3    |            |     NONE             |\n";
            cout<<"\t\t\t\t|DSA INST 1  |C.C.D.R.M                      |  3   |    2    |            |     NONE             |\n";
            cout<<"\t\t\t\t|DSA 111     |FUNFAMENTALS OF PROGRAMMING    |  3   |    2    |     1      |     NONE             |\n";
            cout<<"\t\t\t\t|DSA 112     |DISCRETE STRUCTURES            |  3   |    3    |            |     NONE             |\n";
            cout<<"\t\t\t\t|P.E 1       |P.A.T.H.F                      |  2   |    2    |            |     NONE             |\n";
            cout<<"\t\t\t\t|NSTP 1      |C.W.T.S 1                      |  3   |    3    |            |     NONE             |\n";
            cout<<"\t\t\t\t|_________________________________________________________________________________________________|\n";
            cout<<"\t\t\t\t|               TOTAL UNITS:                 |  25  |         |            |                      |\n";
            cout<<"\t\t\t\t|____________________________________________|______|_________|____________|______________________|\n";
    }
        else if(sem==2){
            cout<<"\n\n\n\n\n";
            cout<<"\t\t\t\t__________________________________________________________________________________________________\n";
            cout<<"\t\t\t\t|SECOND SEMESTER                                                                                  |\n";
            cout<<"\t\t\t\t|COURSE NO.  | COURSE TITLE                  | UNIT |     NO. OF UNITS     |     PRE REQUISITE    |\n";
            cout<<"\t\t\t\t_____________|_______________________________|______| LECTURE | LABORATORY |______________________|\n";
            cout<<"\t\t\t\t|    GEC 2   |READING IN PHI. HISTORY        |  3   |    3    |            |      NONE            |\n";
            cout<<"\t\t\t\t|    GEC 8   |THE CONTEMPORARY WORLD         |  3   |    3    |            |      NONE            |\n";
            cout<<"\t\t\t\t|GE ELECDSA 2|FOREIGN LANGUAGE 1             |  3   |    3    |            |      NONE            |\n";
            cout<<"\t\t\t\t|DSA 121     |CALCULUS  1                    |  3   |    2    |     1      |      GEC 3           |\n";
            cout<<"\t\t\t\t|DSA 122     |INRODUCTION TO DATA SCIENCE    |  3   |    2    |     1      |      GEC 3           |\n";
            cout<<"\t\t\t\t|DSA 123     |INTERMEDIATE PROGRAMMING       |  3   |    3    |            |      DSA 111         |\n";
            cout<<"\t\t\t\t|  P.E 2     |P.A.T.H.F 2                    |  3   |    2    |            |      P.E 1           |\n";
            cout<<"\t\t\t\t| NSTP 2     | C.W.T.S 2                     |  3   |    3    |            |      NSTP 1          |\n";
            cout<<"\t\t\t\t|_________________________________________________________________________________________________|\n";
            cout<<"\t\t\t\t|               TOTAL UNITS:                 |  26  |         |    1       |                      |\n";
            cout<<"\t\t\t\t|____________________________________________|______|_________|____________|______________________|\n";
 }

	}

    if (yr==2){
        semester();
        cout<<"\t\tChoose semester : ";
        cin>>sem;
        system("cls");

        if (sem==1){
            cout<<"\n\n\n\n\n";
            cout<<"\t\t\t\t__________________________________________________________________________________________________\n";
            cout<<"\t\t\t\t|                                          SECOND YEAR(2ND YEAR)                                  |\n";
            cout<<"\t\t\t\t|_________________________________________________________________________________________________|\n";
            cout<<"\t\t\t\t| FIRST SEMESTER                                                                                  |\n";
            cout<<"\t\t\t\t|COURSE NO   | COURSE TITLE                  | UNIT |     NO. OF UNITS     |     PRE REQUISITE    |\n";
            cout<<"\t\t\t\t_____________|_______________________________|______| LECTURE | LABORATORY |______________________|\n";
            cout<<"\t\t\t\t|    GEC 6   |SCIENCE TECHNOLOGY AND SOCIETY |  3   |    3    |            |      NONE            |\n";
            cout<<"\t\t\t\t|    GEC 7   |ETHICS                         |  3   |    3    |            |      NONE            |\n";
            cout<<"\t\t\t\t|    GEC 5   |ART APPRECIATION               |  3   |    3    |            |      NONE            |\n";
            cout<<"\t\t\t\t|  DSA 212   |DATA STRUCTURRES AND ALGO      |  3   |    2    |     1      |      DSA 112,124     |\n";
            cout<<"\t\t\t\t|  DSA 214   |PPROGRAMMING FOR DATA SCIENCE  |  3   |    2    |     1      |      DSA 123,124     |\n";
            cout<<"\t\t\t\t|   DSA INST2|CREATIVE  CRITICAL THINHKING   |  2   |    1    |     1      |      DSA 122         |\n";
            cout<<"\t\t\t\t|  DSA 211   |CALCULUS 2                     |  3   |    3    |            |      DSA 121         |\n";
            cout<<"\t\t\t\t|  DSA 213   |COMPUTER AIDED STATISTICAL INT.|  3   |    3    |            |      NONE            |\n";
            cout<<"\t\t\t\t|   P.E 3    |P.A.T.H.F                      |  2   |    2    |            |      P.E 2           |\n";
            cout<<"\t\t\t\t|_________________________________________________________________________________________________|\n";
            cout<<"\t\t\t\t|               TOTAL UNITS:                 |  25  |         |            |                      |\n";
            cout<<"\t\t\t\t|____________________________________________|______|_________|____________|______________________|\n";}

        else if(sem==2){
            cout<<"\n\n\n\n\n";
            cout<<"\t\t\t\t__________________________________________________________________________________________________\n";
            cout<<"\t\t\t\t|SECOND SEMESTER                                                                                  |\n";
            cout<<"\t\t\t\t|COURSE NO.  | COURSE TITLE                  | UNIT |     NO. OF UNITS     |     PRE REQUISITE    |\n";
            cout<<"\t\t\t\t_____________|_______________________________|______| LECTURE | LABORATORY |______________________|\n";
            cout<<"\t\t\t\t|DSA INST 3  |ENTREPRENEURIAL MANAGEMENT     |  3   |    3    |            |      DSA INST 2      |\n";
            cout<<"\t\t\t\t|DSA 221     |LNEAR ALGEBRA FOR DATA SCIENCE |  3   |    3    |            |      DSA 211         |\n";
            cout<<"\t\t\t\t|IT 221      |INFORMARMATION MANAGEMENT      |  3   |    3    |            |      DSA 212         |\n";
            cout<<"\t\t\t\t|IT 222      |ALGORITM AND COMPLEXITY        |  3   |    2    |     1      |      DSA 212         |\n";
            cout<<"\t\t\t\t|IT 223      |ARTIFICIAL INTELLIGENCE        |  3   |    2    |     1      |      DSA 212         |\n";
            cout<<"\t\t\t\t|IT 224      |DATA VISUALIZATION AND PRESENT.|  3   |    2    |            |      DSA 212         |\n";
            cout<<"\t\t\t\t|IT PE4      |P.A.T.H.F 4                    |  2   |    2    |            |      P.E 3           |\n";
            cout<<"\t\t\t\t|_________________________________________________________________________________________________|\n";
            cout<<"\t\t\t\t|               TOTAL UNITS:                 |  19  |         |            |                      |\n";
            cout<<"\t\t\t\t|____________________________________________|______|_________|____________|______________________|\n";
}

		}


    if (yr==3){
        semester();
        cout<<"\t\tChoose semester : ";
        cin>>sem;
        system("cls");

        if(sem==1){
            cout<<"\n\n\n\n\n";
            cout<<"\t\t\t\t__________________________________________________________________________________________________\n";
            cout<<"\t\t\t\t|                                          THIRD YEAR(3RD YEAR)                                   |\n";
            cout<<"\t\t\t\t|_________________________________________________________________________________________________|\n";
            cout<<"\t\t\t\t| FIRST SEMESTER                                                                                  |\n";
            cout<<"\t\t\t\t|COURSE NO   | COURSE TITLE                  | UNIT |     NO. OF UNITS     |     PRE REQUISITE    |\n";
            cout<<"\t\t\t\t_____________|_______________________________|______| LECTURE | LABORATORY |______________________|\n";
            cout<<"\t\t\t\t|GE ELEC DSA3|FOREIGN LANGUAGE 2             |  3   |    3    |     0      |      NONE            |\n";
            cout<<"\t\t\t\t|DSA 311     |COMPUTATIONAL SAATISTIC        |  3   |    2    |     1      |      DSA 213         |\n";
            cout<<"\t\t\t\t|DSA 312     |EXPLARATORY DATA ANALYSIS      |  3   |    2    |     1      |      DSA 213         |\n";
            cout<<"\t\t\t\t|DSA 313     |BUSINESS INTELLIGENCE          |  3   |    2    |     1      |      DSA 225         |\n";
            cout<<"\t\t\t\t|DSA 314     |M.L & DATA MINING              |  3   |    2    |     1      |      DSA  213,224    |\n";
            cout<<"\t\t\t\t|DSA 315     |DATA MANAGEENT AND WAREHOUSING |  3   |    2    |     1      |      DSA 222         |\n";
            cout<<"\t\t\t\t|DSA 316     |ELECTIVE 1                     |  3   |    2    |     1      |                      |\n";
            cout<<"\t\t\t\t|___________________________________________________________________ _____________________________|\n";
            cout<<"\t\t\t\t|               TOTAL UNITS:                 |  21  |         |            |                      |\n";
            cout<<"\t\t\t\t|____________________________________________|______|_________|____________|______________________|\n";
}

        else if(sem==2){
            cout<<"\n\n\n\n\n";
            cout<<"\t\t\t\t__________________________________________________________________________________________________\n";
            cout<<"\t\t\t\t|SECOND SEMESTER                                                                                  |\n";
            cout<<"\t\t\t\t|COURSE NO.  | COURSE TITLE                  | UNIT |     NO. OF UNITS     |     PRE REQUISITE    |\n";
            cout<<"\t\t\t\t_____________|_______________________________|______| LECTURE | LABORATORY |______________________|\n";
            cout<<"\t\t\t\t|GEC 9       |THE LIFE AND WORK OF RIZAL     |  3   |    3    |            |      NONE            |\n";
            cout<<"\t\t\t\t|GE ELEC DSA4|MULTICULTURAL EDUCATION        |  3   |    3    |            |      NONE            |\n";
            cout<<"\t\t\t\t|DSA 321     |PRINCIPLES OF BIG DATA         |  3   |    2    |            |      DSA 315         |\n";
            cout<<"\t\t\t\t|DSA 322     |INFORMATIONN SECURITY&DATA PRI.|  3   |    2    |     1      |  3RD YEAR STANDING   |\n";
            cout<<"\t\t\t\t|DSA 323     |SPECIAL TOPICS IN DATA SCIENCE |  3   |    2    |     1      |  3RD YEAR STANDNG    |\n";
            cout<<"\t\t\t\t|DSA 324     |RESEARCH METHODSVV             |  2   |    2    |            |  3RD YEAR STANDING   |\n";
            cout<<"\t\t\t\t|DSA 325     |ELECTIVE 2                     |  3   |    2    |     1      |   IT APPDEV 2&3      |\n";
            cout<<"\t\t\t\t|_________________________________________________________________________________________________|\n";
            cout<<"\t\t\t\t|               TOTAL UNITS:                 |  21  |         |            |                      |\n";
            cout<<"\t\t\t\t|____________________________________________|______|_________|____________|______________________|\n";
		}

    }


if (yr==4){
    semester();
    cout<<"\t\tChoose semester : ";
    cin>>sem;
    system("cls");

    if(sem==1){
        cout<<"\n\n\n\n\n";
        cout<<"\t\t\t\t__________________________________________________________________________________________________\n";
        cout<<"\t\t\t\t|                                          FOURTH YEAR(4TH YEAR)                                  |\n";
        cout<<"\t\t\t\t|_________________________________________________________________________________________________|\n";
        cout<<"\t\t\t\t| FIRST SEMESTER                                                                                  |\n";
        cout<<"\t\t\t\t|COURSE NO   | COURSE TITLE                  | UNIT |     NO. OF UNITS     |     PRE REQUISITE    |\n";
        cout<<"\t\t\t\t_____________|_______________________________|______| LECTURE | LABORATORY |______________________|\n";
        cout<<"\t\t\t\t|GE ELEC DSA5|LEADERSHIP&MANAGEMENT IN THE PR|  3   |    3    |     0      |      NONE            |\n";
        cout<<"\t\t\t\t|DSA 411     |SOCIAL ISSUES&PROFESSION PRAC. |  3   |    2    |     1      | 4TH YEAR STANDING    |\n";
        cout<<"\t\t\t\t|DSA412      |CAPSTONE  PROJECT              |  6   |    2    |     1      |      DSA 324         |\n";
        cout<<"\t\t\t\t|DSA 413     |ELECTVE 3                      |  3   |    2    |     1      |      IT 224          |\n";
        cout<<"\t\t\t\t|DSA 415     |ELECTIVE 4                     |  3   |    2    |     1      |                      |\n";
        cout<<"\t\t\t\t|___________________________________________________________________ _____________________________|\n";
        cout<<"\t\t\t\t|               TOTAL UNITS:                 |  18  |         |            |                      |\n";
        cout<<"\t\t\t\t|____________________________________________|______|_________|____________|______________________|\n";
        }

    else if(sem==2){
        cout<<"\n\n\n\n\n";
        cout<<"\t\t\t\t__________________________________________________________________________________________________\n";
        cout<<"\t\t\t\t|SECOND SEMESTER                                                                                  |\n";
        cout<<"\t\t\t\t|COURSE NO.  | COURSE TITLE                  | UNIT |     NO. OF UNITS     |     PRE REQUISITE    |\n";
        cout<<"\t\t\t\t_____________|_______________________________|______| LECTURE | LABORATORY |______________________|\n";
        cout<<"\t\t\t\t|IT  421     |INTERSHIP/OJT/PRACTICUM(320H)  |  6   |         |            |4TH YEAR STANDING     |\n";
        cout<<"\t\t\t\t|_________________________________________________________________________________________________|\n";
        cout<<"\t\t\t\t|               TOTAL UNITS:                 |  6   |         |            |                      |\n";
        cout<<"\t\t\t\t|____________________________________________|______|_________|____________|______________________|\n";
}

    }
}


void BSIT2()
{
int yr, sem;

TextColor(10);
system("cls");
DisplayHeader();
cout << "\n\t\t\t\t\t\t\tBACHELOR OF SCIENCE IN INFORMATION TECHNOLOGY!\n";
cout << "\t\t\t\t\t\t\tw/ specialization track in network and security \n";
TextColor(7);
classyear();

cout << "\t\tChoose year level:";
cin >> yr;
system("cls");

if (yr == 1) {
    semester();
    cout << "\t\tChoose semester : ";
    cin >> sem;
    system("cls");
}


        if (sem==1){
            cout<<"\n\n\n\n\n";
            cout<<"\t\t\t\t__________________________________________________________________________________________________\n";
            cout<<"\t\t\t\t|                                         FIRST YEAR(1ST YEAR)                                   |\n";
            cout<<"\t\t\t\t|_________________________________________________________________________________________________|\n";
            cout<<"\t\t\t\t| FIRST SEMESTER                                                                                  |\n";
            cout<<"\t\t\t\t|COURSE NO   | COURSE TITLE                  | UNIT |     NO. OF UNITS     |     PRE REQUISITE    |\n";
            cout<<"\t\t\t\t_____________|_______________________________|______| LECTURE | LABORATORY |______________________|\n";
            cout<<"\t\t\t\t|GEC 1       |UNDERSTANDING THE SELF         |  3   |    3    |            |     NONE             |\n";
            cout<<"\t\t\t\t|GEC 4       |PURPOSIVE COMMUNICATION        |  3   |    3    |            |     NONE             |\n";
            cout<<"\t\t\t\t|GEC 3       |M.M.W                          |  3   |    3    |            |     NONE             |\n";
            cout<<"\t\t\t\t|GE ELEC IT 1|HEALTH AND WELLNNESS           |  3   |    3    |            |     NONE             |\n";
            cout<<"\t\t\t\t|IT 111      |INTRODUCTION TO COMPUTING      |  3   |    2    |     1      |     NONE             |\n";
            cout<<"\t\t\t\t|IT 112      |COMPUTER PROGRAMMING 1         |  3   |    2    |     1      |     NONE             |\n";
            cout<<"\t\t\t\t|P.E 1       |P.A.T.H.F                      |  2   |    2    |            |     NONE             |\n";
            cout<<"\t\t\t\t|NSTP 1      |C.W.T.S 1                      |  3   |         |            |     NONE             |\n";
            cout<<"\t\t\t\t|_________________________________________________________________________________________________|\n";
            cout<<"\t\t\t\t|               TOTAL UNITS:                 |  23  |         |            |                      |\n";
            cout<<"\t\t\t\t|____________________________________________|______|_________|____________|______________________|\n";
    }
        else if(sem==2){
            cout<<"\n\n\n\n\n";
            cout<<"\t\t\t\t__________________________________________________________________________________________________\n";
            cout<<"\t\t\t\t|SECOND SEMESTER                                                                                  |\n";
            cout<<"\t\t\t\t|COURSE NO.  | COURSE TITLE                  | UNIT |     NO. OF UNITS     |     PRE REQUISITE    |\n";
            cout<<"\t\t\t\t_____________|_______________________________|______| LECTURE | LABORATORY |______________________|\n";
            cout<<"\t\t\t\t|    GEC 2   |READING IN PHI. HISTORY        |  3   |    3    |            |      NONE            |\n";
            cout<<"\t\t\t\t|    GEC 8   |THE CONTEMPORARY WORLD         |  3   |    3    |            |      NONE            |\n";
            cout<<"\t\t\t\t|GE ELEC IT 2|FOREIGN LANGUAGE 1             |  3   |    3    |            |      NONE            |\n";
            cout<<"\t\t\t\t|IT 121      |COMPUTER PROGRAMMING 2         |  3   |    2    |     1      |      IT 112          |\n";
            cout<<"\t\t\t\t|IT 122      |HUMAN-COMPUETR INTERACTION     |  3   |    2    |     1      |      IT 112          |\n";
            cout<<"\t\t\t\t|IT 123      |DISCRETE MATHEMATICS           |  3   |    3    |            |      GEC 3           |\n";
            cout<<"\t\t\t\t|  P.E 2     |P.A.T.H.F 2                    |  2   |    2    |            |      P.E 1           |\n";
            cout<<"\t\t\t\t| NSTP 2     | C.W.T.S                       |  3   |         |            |      NSTP 1          |\n";
            cout<<"\t\t\t\t|_________________________________________________________________________________________________|\n";
            cout<<"\t\t\t\t|               TOTAL UNITS:                 |  23  |         |    1       |                      |\n";
            cout<<"\t\t\t\t|____________________________________________|______|_________|____________|______________________|\n";
    }



    if (yr==2){
        semester();
        cout<<"\t\tChoose semester : ";
        cin>>sem;
        system("cls");

        if (sem==1){
            cout<<"\n\n\n\n\n";
            cout<<"\t\t\t\t__________________________________________________________________________________________________\n";
            cout<<"\t\t\t\t|                                          SECOND YEAR(2ND YEAR)                                  |\n";
            cout<<"\t\t\t\t|_________________________________________________________________________________________________|\n";
            cout<<"\t\t\t\t| FIRST SEMESTER                                                                                  |\n";
            cout<<"\t\t\t\t|COURSE NO   | COURSE TITLE                  | UNIT |     NO. OF UNITS     |     PRE REQUISITE    |\n";
            cout<<"\t\t\t\t_____________|_______________________________|______| LECTURE | LABORATORY |______________________|\n";
            cout<<"\t\t\t\t|    GEC 6   |SCIENCE TECHNOLOGY AND SOCIETY |  3   |    3    |            |      NONE            |\n";
            cout<<"\t\t\t\t|    GEC 7   |ETHICS                         |  3   |    3    |            |      NONE            |\n";
            cout<<"\t\t\t\t|    GEC 5   |ART APPRECIATION               |  3   |    3    |            |      NONE            |\n";
            cout<<"\t\t\t\t|    IT 211  |DATA STRUCTURRES AND ALGO      |  3   |    2    |     1      |      IT 121          |\n";
            cout<<"\t\t\t\t|   IT ELEC 1|PLATFORM TTECHNOLOGIES         |  3   |    2    |     1      |      IT 121          |\n";
            cout<<"\t\t\t\t|   IT ELEC 2|OBJECT ORIENTED PROGRAMMING    |  3   |    2    |     1      |      IT 121          |\n";
            cout<<"\t\t\t\t|   IT BPO 1 |BUSINESS COMMUNICATION         |  3   |    3    |            |      NONE            |\n";
            cout<<"\t\t\t\t|   P.E 3    |P.A.T.H.F                      |  2   |    2    |            |      P.E 2           |\n";
            cout<<"\t\t\t\t|_________________________________________________________________________________________________|\n";
            cout<<"\t\t\t\t|               TOTAL UNITS:                 |  23  |         |            |                      |\n";
            cout<<"\t\t\t\t|____________________________________________|______|_________|____________|______________________|\n";}

        else if(sem==2){
            cout<<"\n\n\n\n\n";
            cout<<"\t\t\t\t__________________________________________________________________________________________________\n";
            cout<<"\t\t\t\t|SECOND SEMESTER                                                                                  |\n";
            cout<<"\t\t\t\t|COURSE NO.  | COURSE TITLE                  | UNIT |     NO. OF UNITS     |     PRE REQUISITE    |\n";
            cout<<"\t\t\t\t_____________|_______________________________|______| LECTURE | LABORATORY |______________________|\n";
            cout<<"\t\t\t\t|IT INST 1   |C.C.D.R.M                      |  3   |    3    |            |      NONE            |\n";
            cout<<"\t\t\t\t|GE ELEC IT 3|FOREIGN LANGUAGE 2             |  3   |    3    |            |      NONE            |\n";
            cout<<"\t\t\t\t|IT 221      |INFORMATION MANAGMENT          |  3   |    3    |            |      NONE            |\n";
            cout<<"\t\t\t\t|IT 222      |NETWORKING 1                   |  3   |    2    |     1      |      NONE            |\n";
            cout<<"\t\t\t\t|IT 223      |QUANTITATIVE METHODS           |  3   |    2    |     1      |      NONE            |\n";
            cout<<"\t\t\t\t|IT 224      |INTEG. PROGAMMING & TECCHNOLOGY|  2   |    2    |            |      NONE            |\n";
            cout<<"\t\t\t\t|IT 225      |ACCOUNTING FOR INFORMATION TECH|  3   |    2    |     1      |      CS 112          |\n";
            cout<<"\t\t\t\t|IT NS 1     |C.P.E.C                        |  3   |    2    |     1      |      CO REQ.IT222    |\n";
            cout<<"\t\t\t\t|IT PE4      |P.A.T.H.F 4                    |  2   |    2    |            |      P.E 2           |\n";
            cout<<"\t\t\t\t|_________________________________________________________________________________________________|\n";
            cout<<"\t\t\t\t|               TOTAL UNITS:                 |  23  |         |            |                      |\n";
            cout<<"\t\t\t\t|____________________________________________|______|_________|____________|______________________|\n";
		}

        else if(sem==3){
            cout<<"\n\n\n\n\n";
            cout<<"\t\t\t\t _________________________________________________________________________________________________\n";
            cout<<"\t\t\t\t|MID YEAR                                                                                         |\n";
            cout<<"\t\t\t\t|COURSE NO.  | COURSE TITLE                  | UNIT |     NO. OF UNITS     |     PRE REQUISITE    |\n";
            cout<<"\t\t\t\t_____________|_______________________________|______| LECTURE | LABORATORY |______________________|\n";
            cout<<"\t\t\t\t| it 226     | APP DEV AND EMERGING TECH     |  3   |    2    |            |       NONE           |\n";
            cout<<"\t\t\t\t| IT ELEC  3 | WEB SYSTEMS AND TECHNOLOGIES  |  3   |    2    |            |       NONE           |\n";
            cout<<"\t\t\t\t|_________________________________________________________________________________________________|\n";
            cout<<"\t\t\t\t|               TOTAL UNITS:                 |  9   |         |            |                      |\n";
            cout<<"\t\t\t\t|____________________________________________|______|_________|____________|______________________|\n";

    }
    }


    if (yr==3){
        semester();
        cout<<"\t\tChoose semester : ";
        cin>>sem;
        system("cls");

        if(sem==1){
            cout<<"\n\n\n\n\n";
            cout<<"\t\t\t\t__________________________________________________________________________________________________\n";
            cout<<"\t\t\t\t|                                          THIRD YEAR(3RD YEAR)                                   |\n";
            cout<<"\t\t\t\t|_________________________________________________________________________________________________|\n";
            cout<<"\t\t\t\t| FIRST SEMESTER                                                                                  |\n";
            cout<<"\t\t\t\t|COURSE NO   | COURSE TITLE                  | UNIT |     NO. OF UNITS     |     PRE REQUISITE    |\n";
            cout<<"\t\t\t\t_____________|_______________________________|______| LECTURE | LABORATORY |______________________|\n";
            cout<<"\t\t\t\t|IT GE ELEC 1|THE ENTREPREEURIAL MIND        |  3   |    3    |     0      |      NONE            |\n";
            cout<<"\t\t\t\t|IT 311      |ADVANCE DATA BASE SYSTEMS      |  3   |    2    |     1      |      IT 221          |\n";
            cout<<"\t\t\t\t|IT 312      |NETWORKING 2                   |  3   |    2    |     1      |      IT 222          |\n";
            cout<<"\t\t\t\t|IT 313      |SYSTEM INTEGRATION AND ARCHI   |  3   |    2    |     1      |      IT 224          |\n";
            cout<<"\t\t\t\t|IT 314      |INFORMATION ASSURANCE&SECURITY1|  3   |    2    |     1      |      IT 224          |\n";
            cout<<"\t\t\t\t|IT NS 2     |VIRTUAL&SERVICES               |  3   |    2    |     1      |      IT 222          |\n";
            cout<<"\t\t\t\t|___________________________________________________________________ _____________________________|\n";
            cout<<"\t\t\t\t|               TOTAL UNITS:                 |  18  |         |            |                      |\n";
            cout<<"\t\t\t\t|____________________________________________|______|_________|____________|______________________|\n";
            }

        else if(sem==2){
            cout<<"\n\n\n\n\n";
            cout<<"\t\t\t\t__________________________________________________________________________________________________\n";
            cout<<"\t\t\t\t|SECOND SEMESTER                                                                                  |\n";
            cout<<"\t\t\t\t|COURSE NO.  | COURSE TITLE                  | UNIT |     NO. OF UNITS     |     PRE REQUISITE    |\n";
            cout<<"\t\t\t\t_____________|_______________________________|______| LECTURE | LABORATORY |______________________|\n";
            cout<<"\t\t\t\t|GEC 9       |THE LIFE AND WORK OF RIZAL     |  3   |    3    |            |      NONE            |\n";
            cout<<"\t\t\t\t|IT GE ELEC 2|MULTICULTURAL EDUCATION        |  3   |    3    |     1      |      NONE            |\n";
            cout<<"\t\t\t\t|IT 321      |INFORMATION ASSURANCE&SECURITY2|  3   |    3    |            |      NONE            |\n";
            cout<<"\t\t\t\t|IT 322      |SOCIAL&PROFESSIONAL ISSUES     |  3   |    2    |     1      |      IT 314          |\n";
            cout<<"\t\t\t\t|IT 323      |CAPSTONE PROJECT&RESEARCH 1    |  3   |    2    |     1      |      GEC 5           |\n";
            cout<<"\t\t\t\t|IT NS  3    |APPLIED NETWORKS               |  2   |    2    |            |   IT APPDEV 2&3      |\n";
            cout<<"\t\t\t\t|IT NS 4     |INTERNET OF THINGS             |  3   |    2    |     1      |   IT APPDEV 2&3      |\n";
            cout<<"\t\t\t\t|_________________________________________________________________________________________________|\n";
            cout<<"\t\t\t\t|               TOTAL UNITS:                 |  21  |         |            |                      |\n";
            cout<<"\t\t\t\t|____________________________________________|______|_________|____________|______________________|\n";
                }

            }


if (yr==4){
    semester();
    cout<<"\t\tChoose semester : ";
    cin>>sem;
    system("cls");

    if(sem==1){
            cout<<"\n\n\n\n\n";
            cout<<"\t\t\t\t__________________________________________________________________________________________________\n";
            cout<<"\t\t\t\t|                                          FOURTH YEAR(4TH YEAR)                                  |\n";
            cout<<"\t\t\t\t|_________________________________________________________________________________________________|\n";
            cout<<"\t\t\t\t| FIRST SEMESTER                                                                                  |\n";
            cout<<"\t\t\t\t|COURSE NO   | COURSE TITLE                  | UNIT |     NO. OF UNITS     |     PRE REQUISITE    |\n";
            cout<<"\t\t\t\t_____________|_______________________________|______| LECTURE | LABORATORY |______________________|\n";
            cout<<"\t\t\t\t|IT GE ELEC 3|LEADERSHIP&MANAGEMENT IN THE PR|  3   |    3    |     0      |      NONE            |\n";
            cout<<"\t\t\t\t|IT 411      |SYSTTEM ADM. AND MAINTENANCE   |  3   |    2    |     1      |      IT 221          |\n";
            cout<<"\t\t\t\t|IT ELEC  4  |HUMAN-COMPUTER INTERACTION 2   |  3   |    2    |     1      |      IT 222          |\n";
            cout<<"\t\t\t\t|IT 412      |CAPSTONE PROJECT&RESEARCH  2   |  3   |    2    |     1      |      IT 224          |\n";
            cout<<"\t\t\t\t| IT NS 5    |I.N.C.C                        |  3   |    3    |     0      |   4TH YEAR STANDING  |\n";
            cout<<"\t\t\t\t|___________________________________________________________________ _____________________________|\n";
            cout<<"\t\t\t\t|               TOTAL UNITS:                 |  12  |         |            |                      |\n";
            cout<<"\t\t\t\t|____________________________________________|______|_________|____________|______________________|\n";
            }

    else if(sem==2){
            cout<<"\n\n\n\n\n";
            cout<<"\t\t\t\t__________________________________________________________________________________________________\n";
            cout<<"\t\t\t\t|SECOND SEMESTER                                                                                  |\n";
            cout<<"\t\t\t\t|COURSE NO.  | COURSE TITLE                  | UNIT |     NO. OF UNITS     |     PRE REQUISITE    |\n";
            cout<<"\t\t\t\t_____________|_______________________________|______| LECTURE | LABORATORY |______________________|\n";
            cout<<"\t\t\t\t|IT  421     |INTERSHIP/OJT/PRACTICUM(486H)  |  9   |         |            |4TH YEAR STANDING     |\n";
            cout<<"\t\t\t\t|_________________________________________________________________________________________________|\n";
            cout<<"\t\t\t\t|               TOTAL UNITS:                 |  21  |         |            |                      |\n";
            cout<<"\t\t\t\t|____________________________________________|______|_________|____________|______________________|\n";
                }
    }
}

void BLIS()
{
int yr, sem;

TextColor(10);
system("cls");
DisplayHeader();
cout << "\n\t\t\t\t\t\t\tBACHELOR OF LIBRARY AND INFORMATION SCIENCE\n";
TextColor(7);
classyear();

cout << "\t\tChoose year level:";
cin >> yr;
system("cls");

if (yr == 1) {
    semester();
    cout << "\t\tChoose semester : ";
    cin >> sem;
    system("cls");



        if(sem==1){
            cout<<"\n\n\n\n\n";
            cout<<"\t\t\t\t__________________________________________________________________________________________________\n";
            cout<<"\t\t\t\t|                                          FIRST YEAR(1ST YEAR)                                   |\n";
            cout<<"\t\t\t\t|_________________________________________________________________________________________________|\n";
            cout<<"\t\t\t\t| FIRST SEMESTER                                                                                  |\n";
            cout<<"\t\t\t\t|COURSE NO   | COURSE TITLE                  | UNIT |     NO. OF UNITS     |     PRE REQUISITE    |\n";
            cout<<"\t\t\t\t_____________|_______________________________|______| LECTURE | LABORATORY |______________________|\n";
            cout<<"\t\t\t\t|    GEC 1   |UNDERSTANDINNG THE SELF        |  3   |    3    |            |      NONE            |\n";
            cout<<"\t\t\t\t|    GEC 4   |PURPOSIVE COMM.                |  3   |    3    |            |      NONE            |\n";
            cout<<"\t\t\t\t|   GEC 7    |ETHICS                         |  3   |    2    |            |      NONE            |\n";
            cout<<"\t\t\t\t|   GEC 10   |KKF                            |  3   |    2    |            |      NONE            |\n";
            cout<<"\t\t\t\t|LIS 111     |INTRO TO BLIS                  |  3   |    3    |            |      NONE            |\n";
            cout<<"\t\t\t\t|IS GE ELEC2 |SCHOOL ACADEMIC LIBRARIANSHIP  |  3   |    3    |            |      NONE            |\n";
            cout<<"\t\t\t\t| LIS ICT 111|I.P.H.L.I.C                    |  3   |    3    |     3      |      NONE            |\n";
            cout<<"\t\t\t\t|   P.E 1    |PHYSICAL EDUCATION 1           |  3   |    2    |            |      NONE            |\n";
            cout<<"\t\t\t\t|   NSTP 1   |CWTS/LTS/MS 1                  |  3   |    3    |            |      NONE            |\n";
            cout<<"\t\t\t\t|_________________________________________________________________________________________________|\n";
            cout<<"\t\t\t\t|               TOTAL UNITS:                 |  26  |         |            |                      |\n";
            cout<<"\t\t\t\t|____________________________________________|______|_________|____________|______________________|\n";

            }
        else if(sem==2){
            cout<<"\n\n\n\n\n";
            cout<<"\t\t\t\t _________________________________________________________________________________________________\n";
            cout<<"\t\t\t\t|SECOND SEMESTER                                                                                  |\n";
            cout<<"\t\t\t\t|COURSE NO.  | COURSE TITLE                  | UNIT |     NO. OF UNITS     |     PRE REQUISITE    |\n";
            cout<<"\t\t\t\t_____________|_______________________________|______| LECTURE | LABORATORY |______________________|\n";
            cout<<"\t\t\t\t|    GEC 2   |READING IN PH. HISTORY         |  3   |    3    |            |      NONE            |\n";
            cout<<"\t\t\t\t|    GEC 3   |MMW                            |  3   |    3    |            |      NONE            |\n";
            cout<<"\t\t\t\t|    GEC 11  |FILIPINO SA IBAT IBANG DISIPLIN|  3   |    3    |            |      GEC 10          |\n";
            cout<<"\t\t\t\t|   INST1    |CCDRM                          |  3   |    2    |            |      NONE            |\n";
            cout<<"\t\t\t\t|   LIS 121  |CMIR                           |  3   |    2    |            |      LIS 111         |\n";
            cout<<"\t\t\t\t|   LIS ELEC2|SPECIAL/PUBLIC LIBRARIANSHIP   |  3   |    3    |            |      NONE            |\n";
            cout<<"\t\t\t\t| LIS ICT    |WEB TECH IN LIBRARIES&IS       |  3   |    2    |     3      |      LIS ICT 111     |\n";
            cout<<"\t\t\t\t|  P.E 2     |P.E 2                          |  2   |    2    |            |      P.E 1           |\n";
            cout<<"\t\t\t\t| NSTP 2     | CWTS/LTS/MS 2                 |  3   |    3    |            |      NSTP 1          |\n";
            cout<<"\t\t\t\t|_________________________________________________________________________________________________|\n";
            cout<<"\t\t\t\t|               TOTAL UNITS:                 |  26  |         |    1       |                      |\n";
            cout<<"\t\t\t\t|____________________________________________|______|_________|____________|______________________|\n";

            }}


    if (yr==2){
        semester();
        cout<<"\t\tChoose semester : ";
        cin>>sem;
        system("cls");

        if(sem==1){
            cout<<"\n\n\n\n\n";
            cout<<"\t\t\t\t_________________________________________________________________________________________________ \n";
            cout<<"\t\t\t\t|                                       SECOND YEAR(2ND YEAR)                                    |\n";
            cout<<"\t\t\t\t|________________________________________________________________________________________________|\n";
            cout<<"\t\t\t\t| FIRST SEMESTER                                                                                 |\n";
            cout<<"\t\t\t\t|COURSE NO   | COURSE TITLE                 | UNIT |     NO. OF UNITS     |     PRE REQUISITE    |\n";
            cout<<"\t\t\t\t_____________|______________________________|______| LECTURE | LABORATORY |______________________|\n";
            cout<<"\t\t\t\t|    GEC 6   |SCIENCE, TECHNOLOGY,& SOCIETY |  3   |    3    |            |      NONE            |\n";
            cout<<"\t\t\t\t|    GEC 7   |CONTEMPORARY WORLD            |  3   |    3    |            |      NONE            |\n";
            cout<<"\t\t\t\t|  IS INST 2 |ENTREPRENEURIAL MIND          |  3   |    3    |            |      NONE            |\n";
            cout<<"\t\t\t\t|   IS 211   |IRS 1                         |  3   |    2    |            |      LIS 111,121     |\n";
            cout<<"\t\t\t\t|LIS GE ELEC1|ORG INFORMATION  RESOURCES1   |  3   |    3    |            |      LIS 111,121     |\n";
            cout<<"\t\t\t\t|LIS 211     |PRESERVATION OF INFO RESOURCES|  3   |    3    |            |   2ND YEAR STANDING  |\n";
            cout<<"\t\t\t\t|LIS ICT 211 |DIGITAL LIBRARIES&RESOURCES   |  3   |    2    |     3      |      LIS ICT 121     |\n";
            cout<<"\t\t\t\t|PE 3        |PHYSICAL EDUC 3               |  2   |    2    |            |      PE2             |\n";
            cout<<"\t\t\t\t|________________________________________________________________________________________________|\n";
            cout<<"\t\t\t\t|               TOTAL UNITS:                |  25  |    22   |    3       |                      |\n";
            cout<<"\t\t\t\t|___________________________________________|______|_________|____________|______________________|\n";

            }
        else if(sem==2){
            cout<<"\n\n\n\n\n";
            cout<<"\t\t\t\t ________________________________________________________________________________________________\n";
            cout<<"\t\t\t\t|SECOND SEMESTER                                                                                 |\n";
            cout<<"\t\t\t\t|COURSE NO.  | COURSE TITLE                 | UNIT |     NO. OF UNITS     |     PRE REQUISITE    |\n";
            cout<<"\t\t\t\t_____________|______________________________|______| LECTURE | LABORATORY |______________________|\n";
            cout<<"\t\t\t\t|GEC 5       |ART APPRECIATION              |  3   |    3    |            |      NONE            |\n";
            cout<<"\t\t\t\t|LIS GE ELEC2|LMP                           |  3   |    3    |            |      NONE            |\n";
            cout<<"\t\t\t\t|LIS 221     |IRS 2                         |  3   |    3    |            |      LIS 211         |\n";
            cout<<"\t\t\t\t|IS 222      |ORG OF INFO RESOURCES         |  3   |    2    |            |   LIS 212            |\n";
            cout<<"\t\t\t\t|IS 223      |LMCYA                         |  3   |    3    |            |   LIS 121            |\n";
            cout<<"\t\t\t\t|LIS ICT 221 |PROGRAMMING FUNDAMENTALS      |  3   |    2    |            |   LIS ICT 211        |\n";
            cout<<"\t\t\t\t|LIS ELEC 4  |PPT                           |  3   |    2    |    3       |   2ND YEAR STANDING  |\n";
            cout<<"\t\t\t\t|PE  4       |PE4                           |  2   |    2    |            |      PE3             |\n";
            cout<<"\t\t\t\t|________________________________________________________________________________________________|\n";
            cout<<"\t\t\t\t|               TOTAL UNITS:                |  23  |         |     3      |                      |\n";
            cout<<"\t\t\t\t|___________________________________________|______|_________|____________|______________________|\n";
            }
        else{
            cout<<"\t\t\t\t..........NOT AVAILABLE...........\n\n";
            BLIS();
            }
                }

	if(yr==3){
	    semester();
        cout<<"\t\tChoose semeter : ";
        cin>>sem;
        system("cls");

        if(sem==1){
            cout<<"\n\n\n\n\n";
            cout<<"\t\t\t\t_________________________________________________________________________________________________ \n";
            cout<<"\t\t\t\t|                                       THIRD YEAR(3RD YEAR)                                    |\n";
            cout<<"\t\t\t\t|________________________________________________________________________________________________|\n";
            cout<<"\t\t\t\t| FIRST SEMESTER                                                                                 |\n";
            cout<<"\t\t\t\t|COURSE NO   | COURSE TITLE                 | UNIT |     NO. OF UNITS     |     PRE REQUISITE    |\n";
            cout<<"\t\t\t\t_____________|______________________________|______| LECTURE | LABORATORY |______________________|\n";
            cout<<"\t\t\t\t|    GEC 9   |LIFE & WORK OF RIZAL          |  3   |    3    |            |      NONE            |\n";
            cout<<"\t\t\t\t|   ELEC 3   |ENVIRONMENTAL SCIENCE         |  3   |    3    |            |      NONE            |\n";
            cout<<"\t\t\t\t| LIS 311    |INDEXING AND ABSTRACTING      |  3   |    3    |            |    LIS 211,221       |\n";
            cout<<"\t\t\t\t|LIS312      |ITRO TO RECORDS MNAGEMENT&ABS |  3   |    2    |            |       NONE           |\n";
            cout<<"\t\t\t\t|LIS 313     |LIMAL                         |  3   |    3    |            |      LIS 211,221     |\n";
            cout<<"\t\t\t\t|LIS ICT 311 |SADLIC                        |  3   |    3    |      3     |   3RD YEAR STANDING  |\n";
            cout<<"\t\t\t\t|ELEC 5      |EDUCATIONAL TECHNOLOGY        |  3   |    2    |            |   3RD YEAR STANDING  |\n";
            cout<<"\t\t\t\t|LIS ELEC 6  |IKMC                          |  3   |    2    |            |   3RD YEAR STANDING   |\n";
            cout<<"\t\t\t\t|________________________________________________________________________________________________|\n";
            cout<<"\t\t\t\t|               TOTAL UNITS:                |  24  |         |    3       |                      |\n";
            cout<<"\t\t\t\t|___________________________________________|______|_________|____________|______________________|\n";
            }
        else if(sem==2){
            cout<<"\n\n\n\n\n";
            cout<<"\t\t\t\t ________________________________________________________________________________________________\n";
            cout<<"\t\t\t\t|SECOND SEMESTER                                                                                 |\n";
            cout<<"\t\t\t\t|COURSE NO.  | COURSE TITLE                 | UNIT |     NO. OF UNITS     |     PRE REQUISITE    |\n";
            cout<<"\t\t\t\t_____________|______________________________|______| LECTURE | LABORATORY |______________________|\n";
            cout<<"\t\t\t\t|LIS 321     |MLIC                          |  3   |    3    |            |   LIS 111-311        |\n";
            cout<<"\t\t\t\t|LIS 322     |INFORMATION LITERACY          |  3   |    3    |            |   LIS 111,212,311    |\n";
            cout<<"\t\t\t\t|LIS 323     |ISSL                          |  3   |    3    |            |   LIS 313            |\n";
            cout<<"\t\t\t\t|LIS ICT 321 |DATABASE DESIGN FOR LIBRARIES |  3   |    2    |     3      |   LIS 311            |\n";
            cout<<"\t\t\t\t|LIS ICT 322 |INTRODUCTION TO DATA SCIENCE  |  3   |    2    |     3      |   LIS ICT 311        |\n";
            cout<<"\t\t\t\t|LIS ELEC7   |SLIS                          |  3   |    3    |            |   3RD YEAR STANDING  |\n";
            cout<<"\t\t\t\t|LIS ELEC8   |FOREIGN LNGUAGE               |  3   |    3    |            |   3RD YEAR STANDING  |\n";
            cout<<"\t\t\t\t|________________________________________________________________________________________________|\n";
            cout<<"\t\t\t\t|               TOTAL UNITS:                |  21  |         |            |                      |\n";
            cout<<"\t\t\t\t|___________________________________________|______|_________|____________|______________________|\n";
            }

    }

	if (yr==4){
	    semester();
        cout<<"\t\tChoose semeter : ";
        cin>>sem;
        system("cls");

        if(sem==1){
            cout<<"\n\n\n\n\n";
            cout<<"\t\t\t\t_________________________________________________________________________________________________ \n";
            cout<<"\t\t\t\t|                                       FOURTH YEAR(4TH YEAR)                                     |\n";
            cout<<"\t\t\t\t|________________________________________________________________________________________________|\n";
            cout<<"\t\t\t\t| FIRST SEMESTER                                                                                 |\n";
            cout<<"\t\t\t\t|COURSE NO   | COURSE TITLE                 | UNIT |     NO. OF UNITS     |     PRE REQUISITE    |\n";
            cout<<"\t\t\t\t_____________|______________________________|______| LECTURE | LABORATORY |______________________|\n";
            cout<<"\t\t\t\t|   LIS 411  |RESEARCH METHODS AND I.S      |  3   |    2    |     3      | LIS 111,312,ICT111   |\n";
            cout<<"\t\t\t\t|   LIS 412  |LIBRARY PRACTICE 1(200HOURS)  |  3   |         |     9      | LIS 111-LIS 323      |\n";
            cout<<"\t\t\t\t| ICT LIS 411|INTERNET TECH & INFO SERVICES |  3   |    2    |     3      |   4TH YEAR SRTANDING |\n";
            cout<<"\t\t\t\t| INST 2     |COURSE AUDIT 1                |  6   |    6    |            |   4TH YEAR STANDING  |\n";
            cout<<"\t\t\t\t|________________________________________________________________________________________________|\n";
            cout<<"\t\t\t\t|               TOTAL UNITS:                |  15  |         |    3       |                      |\n";
            cout<<"\t\t\t\t|___________________________________________|______|_________|____________|______________________|\n";

            }
         else if(sem==2){
            cout<<"\n\n\n\n\n";
            cout<<"\t\t\t\t ________________________________________________________________________________________________\n";
            cout<<"\t\t\t\t|SECOND SEMESTER                                                                                 |\n";
            cout<<"\t\t\t\t|COURSE NO.  | COURSE TITLE                 | UNIT |     NO. OF UNITS     |     PRE REQUISITE    |\n";
            cout<<"\t\t\t\t_____________|______________________________|______| LECTURE | LABORATORY |______________________|\n";
            cout<<"\t\t\t\t| LIS 421    | THESIS/RESERCH WRITING       |  3   |    2    |     3      |  LIS 411             |\n";
            cout<<"\t\t\t\t| LIS 422    | LIBRARY PRACTICE 2(200HOURS) |  3   |         |     9      |  LIS 412             |\n";
            cout<<"\t\t\t\t| INST 2     | COURSE AUDIT 2               |  6   |    6    |            |  INST 2              |\n";
            cout<<"\t\t\t\t|________________________________________________________________________________________________|\n";
            cout<<"\t\t\t\t|               TOTAL UNITS:                |  12  |         |            |                      |\n";
            cout<<"\t\t\t\t|___________________________________________|______|_________|____________|______________________|\n"; }
        }
}
//______________________________________________________________________________
void course()
{
char c;

    do {
        DisplayHeader();

        cout << "\n\n\n\t\t\t\t\t\t\t\t\tENROLLEE'S COURSE\n\n";
        cout << "\t\t\t\t\t\t\t[A] BACHELOR OF SCIENCE IN INFORMATION SYSTEM(BSIS)\n\n";
        cout << "\t\t\t\t\t\t\t[B] BACHELOR OF SCIENCE IN COMPUTER SCIENCE(BSCS)\n\n";
        cout << "\t\t\t\t\t\t\t[C] BACHELOR OF SCIENCE IN INFORMATION TECHNOLOGY 1(BSITwebdev)\n\n";
        cout << "\t\t\t\t\t\t\t[D] BACHELOR OF SCIENCE IN DATA SCIENCE ANALYTICS(BSDSA)\n\n";
        cout << "\t\t\t\t\t\t\t[E] BACHELOR OF SCIENCE IN INFORMATION TECHNOLOGY 2(BSITnetsec)\n\n";
        cout << "\t\t\t\t\t\t\t[F] BACHELOR OF LIBRARY IN INFORMATION SCIENCE(BLIS)\n\n\n";
        cout << "\t\tEnter Course : ";

        cin >> c;

        loadingAnimation();

        if (c == 'A' || c == 'a') {
            BSIS();
        } else if (c == 'B' || c == 'b') {
            BSCS();
        } else if (c == 'C' || c == 'c') {
            BSIT1();
        } else if (c == 'D' || c == 'd') {
            BSDSA();
        } else if (c == 'E' || c == 'e') {
            BSIT2();
        } else if (c == 'F' || c == 'f') {
            BLIS();
        } else {
            cout << "Invalid input. Please try again.\n";
            system("cls");
        }
    } while (!(c == 'A' || c == 'a' || c == 'B' || c == 'b' || c == 'C' || c == 'c' ||
               c == 'D' || c == 'd' || c == 'E' || c == 'e' || c == 'F' || c == 'f'));

}


//______________________________________________________________________________

void proceed() {
    char cont;

    do {
        cout << endl;
        cout << endl;
        cout << "\t\t[A]NEXT\n";
        cout << "\t\t[B]PREVIOUS\n\n";
        cout << "\t\tENTER: ";
        cin >> cont;
        cout << endl;
        cout << endl;
        cout << endl;

        if (cont == 'A' || cont == 'a') {
            loadingAnimation();
            system("cls");
            break;
        } else if (cont == 'B' || cont == 'b') {
            system("cls");
            studentinfo();
        } else {
            cout << "\t\tInvalid input. Try again.\n";
        }
    } while (true);
}

void proceed2() {
    char x;

    do {
        cout << "\n\n\n\n\n";
        cout << "\t\t\t\t\t\t\t\t\t[A]NEXT\n\t\t\t\t\t\t\t\t\t[B]PREVIOUS\n\n";
        cout << "\t\t\t\t\t\t\t\t\tENTER: ";
        cin >> x;
        cout << "\n\n\n\n";

        if (x == 'A' || x == 'a') {
            loadingAnimation();
            system("cls");
            break;
        } else if (x == 'B' || x == 'b') {
            loadingAnimation();
            system("cls");
            course();
        } else {
            cout << "\t\t\t\t\t\t\t\t\tInvalid input. Try again.\n";
        }
    } while (true);
}



void studentinfo() {
    DisplayHeader();
    string finame, lname, midname, gender, adrs, fname, focc, mname, mocc, cont, age, cntct;

    cout << "\n\n\t\t\t\t\t\t\t\t\tFIRST NAME : ";
    cin >> finame;
    cout << "\t\t\t\t\t\t\t\t\tLAST NAME : ";
    cin >> lname;
    cout << "\t\t\t\t\t\t\t\t\tMIDDLE NAME : ";
    cin >> midname;
    cout << "\t\t\t\t\t\t\t\t\tSEX(M/F): ";
    cin >> gender;
    cout << "\t\t\t\t\t\t\t\t\tAGE : ";
    cin >> age;
    cout << "\t\t\t\t\t\t\t\t\tADDRESS : ";
    cin >> adrs;
    cout << "\t\t\t\t\t\t\t\t\tCONTACT# : ";
    cin >> cntct;
    cout << "\t\t\t\t\t\t\t\t\tFATHERS NAME : ";
    cin >> fname;
    cout << "\t\t\t\t\t\t\t\t\tOCCUPATION : ";
    cin >> focc;
    cout << "\t\t\t\t\t\t\t\t\tMOTHERS NAME : ";
    cin >> mname;
    cout << "\t\t\t\t\t\t\t\t\tOCCUPATION : ";
    cin >> mocc;
}

void Ending() {
    char x;
    cout << "\n\n\n\n\n";
    cout << "\t\t\t\t\t\t\t\t\tENROLL NOW?\n\n";
    cout << "\t\t\t\t\t\t\t\t\t[A]CONFIRM\n";
    cout << "\t\t\t\t\t\t\t\t\tENTER: ";
    cin >> x;
    cout << "\n\n\n\n";

    if (x == 'A' || x == 'a') {
        cout << "\t\t\t\t\t\t\t\t\t   PROCESSING!\n";
        for (int i = 1; i <= 30; i++) {
            string loadingBar(i, '='); // Create a string with 'i' asterisks
            TextColor(10);
            cout << "\t\t\t\t\t\t\t\t[" << loadingBar << "]"; // Display the loading bar
            cout << "\r"; // Move the cursor to the beginning of the line
            this_thread::sleep_for(chrono::milliseconds(700)); // Sleep for a specified time
        }
        system("cls");
        TextColor(7);

    cout<<"\n\n\n\t\t\t\t\t============================================================================================\n\n";

    TextColor(10);

    cout<<"\t\t\t\t\t\tI S A B E L A   S T A T E   U N I V E R S I T Y   E C H A G U E  C A M P U S\n\n";

    TextColor(4);

    cout<<"\t\t\t\t\t\t                         C O L L E G E  O F\n";
    cout<<"\t\t\t\t\t\t                         C O M P U T I N G \n";
    cout<<"\t\t\t\t\t\t                         S T U D I E S,\n";
    cout<<"\t\t\t\t\t\t                         C O M M U N I C A T I O N\n";
    cout<<"\t\t\t\t\t\t                         I N F O R M A T I O N\n";
    cout<<"\t\t\t\t\t\t                         T E C H N O L O G Y\n\n";

    TextColor(7);

    cout<<"\t\t\t\t\t============================================================================================\n\n";

    TextColor(3);

    cout<<"\n\n\n";
    cout<<"\t\t\t\t\t\t\t\t****************************************\n";
    cout<<"\t\t\t\t\t\t\t\t*                                      *\n";
    cout<<"\t\t\t\t\t\t\t\t*  Enrollment Process Complete         *\n";
    cout<<"\t\t\t\t\t\t\t\t*                                      *\n";
    cout<<"\t\t\t\t\t\t\t\t*  Congratulations! You are now        *\n";
    cout<<"\t\t\t\t\t\t\t\t*  officially enrolled at              *\n";
    cout<<"\t\t\t\t\t\t\t\t*  ISABELA STATE UNIVERSITY and ready  *\n";
    cout<<"\t\t\t\t\t\t\t\t*  to embark on a journey of knowledge *\n";
    cout<<"\t\t\t\t\t\t\t\t*  and growth. Your success begins     *\n";
    cout<<"\t\t\t\t\t\t\t\t*  with this first step.               *\n";
    cout<<"\t\t\t\t\t\t\t\t*                                      *\n";
    cout<<"\t\t\t\t\t\t\t\t*  Explore, learn, and enjoy the       *\n";
    cout<<"\t\t\t\t\t\t\t\t*  educational journey!                *\n";
    cout<<"\t\t\t\t\t\t\t\t*                                      *\n";
    cout<<"\t\t\t\t\t\t\t\t*           Happy Learning!            *\n";
    cout<<"\t\t\t\t\t\t\t\t*                                      *\n";
    cout<<"\t\t\t\t\t\t\t\t*          Start Exploring             *\n";
    cout<<"\t\t\t\t\t\t\t\t*          Welcome aboard!             *\n";
    cout<<"\t\t\t\t\t\t\t\t*                                      *\n";
    cout<<"\t\t\t\t\t\t\t\t****************************************\n";

    TextColor(7);
    }
}

void Main(){
studentinfo();
proceed();
course();
proceed2();
payment();
Ending();
}
