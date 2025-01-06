#include <iostream>
#include <vector>
#include <windows.h>
#include <conio.h>
#include <thread>
#include <string>


using namespace std;


struct Usercred {
    vector<string>username{};
    vector<string>password{};
    string enteredUsername, enteredPassword;
    string usernameInput {};
    string passwordInput {};

};

struct setgoal{

        string description;
        int Targetgoal,currentprogress,Progress;


    };


struct Habits{

        string description;
        int frequency,targetfrequency,progress;


    };



struct nyu{

        string username,index;
        string name, sex, age, bdate;
        char chs;


        vector<setgoal> vgoal;
        vector<Habits> vhabits;
        vector<string>vach;


    };

    //Function prototype
    void addGoals(nyu& user);
    void addhabit(nyu& user);
    void createUser(nyu& user, Usercred& cred);
    void RORL(nyu& user,Usercred& cred);
    void login(nyu& user,Usercred& cred);
    void home(nyu& user);
    void view(nyu& user);
    void EditGoals(nyu& user);
    void EditHabit(nyu& user);
    void PersonalInformation(nyu& user);
    void achievements(nyu& user);
    void loadingAnimation();
    void Logout(nyu& user);


//main function
    int main(){
    Usercred cred;
    nyu user;
    RORL(user,cred);
    PersonalInformation(user);
    home(user);
    }




//loading  function
void TextColor(int color){
    SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),color);

    }


//Loading animation function

void loadingAnimation() {

    cout<<"\n\n\t\t\t\t\t\t\t\t\t    Please wait!\n";
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

        TextColor(3);
        cout<<"\n\n\n";
        cout<<"\t\t\t\t\t\t:::::::::  :::::::::: :::::::::               :::::::::  :::::::::: :::     ::: \n";
        cout<<"\t\t\t\t\t\t:+:    :+: :+:        :+:    :+:              :+:    :+: :+:        :+:     :+: \n";
        cout<<"\t\t\t\t\t\t+:+    +:+ +:+        +:+    +:+              +:+    +:+ +:+        +:+     +:+ \n";
        cout<<"\t\t\t\t\t\t+#++:++#+  +#++:++#   +#++:++#: +#++:++#++:++ +#+    +:+ +#++:++#   +#+     +:+ \n";
        cout<<"\t\t\t\t\t\t+#+        +#+        +#+    +#+              +#+    +#+ +#+         +#+   +#+  \n";
        cout<<"\t\t\t\t\t\t#+#        #+#        #+#    #+#              #+#    #+# #+#          #+#+#+#   \n";
        cout<<"\t\t\t\t\t\t###        ########## ###    ###              #########  ##########     ###     \n";
        TextColor(6);
        cout<<"\t\t\t\t\t\t::::::::::: :::::::::      :::      ::::::::  :::    ::: :::::::::: :::::::::   \n";
        cout<<"\t\t\t\t\t\t    :+:     :+:    :+:   :+: :+:   :+:    :+: :+:   :+:  :+:        :+:    :+:  \n";
        cout<<"\t\t\t\t\t\t    +:+     +:+    +:+  +:+   +:+  +:+        +:+  +:+   +:+        +:+    +:+   \n";
        cout<<"\t\t\t\t\t\t    +#+     +#++:++#:  +#++:++#++: +#+        +#++:++    +#++:++#   +#++:++#:   \n";
        cout<<"\t\t\t\t\t\t    +#+     +#+    +#+ +#+     +#+ +#+        +#+  +#+   +#+        +#+    +#+  \n";
        cout<<"\t\t\t\t\t\t    #+#     #+#    #+# #+#     #+# #+#    #+# #+#   #+#  #+#        #+#    #+#  \n";
        cout<<"\t\t\t\t\t\t    ###     ###    ### ###     ###  ########  ###    ### ########## ###    ###  \n";
        TextColor(4);
        cout<<"\t\t\t\t\t\t               BY: J O H N  F R A N K L I N  B U G A U I S A N                  \n";
        TextColor(7);

    }





    void RORL(nyu& user, Usercred& cred){

        DisplayHeader();

        cout<<"\n\n\t\t\t\t\t\t\t\t\t[1]Register"<<endl;
        cout<<"\t\t\t\t\t\t\t\t\t[2]Log in";
        user.chs= _getch();

        if(user.chs=='1'){
            system("cls");
            createUser(user, cred);}
        else if(user.chs=='2'){
            system("cls");
            login(user, cred);
        }
        else{system("cls");
            RORL(user, cred);}


    }


    void createUser(nyu& user, Usercred& cred) {

        DisplayHeader();
        cout << "\n\t\t\t\t\t\t\t\t\tEnter a new username: ";
        cin>>cred.usernameInput;
        cred.username.push_back(cred.usernameInput);
        cout << "\n\t\t\t\t\t\t\t\t\tEnter a new password: ";
        cin>>cred.passwordInput;
        cred.password.push_back(cred.passwordInput);
        cout<<"\n\n\n";
        loadingAnimation();
        cout << "\n\n\n\n\n\t\t\t\t\t\t\t\t\tUser created successfully!\n\n\n";
        system("pause");
        system("cls");
        login(user, cred);

    }


    void login(nyu& user, Usercred& cred) {

        DisplayHeader();
        cout << "\t\t\t\t\t\t\t\t\tEnter your username: ";
        cin >>cred.enteredUsername;
        cout << "\t\t\t\t\t\t\t\t\tEnter your password: ";
        cin >>cred.enteredPassword;



    bool loginSuccess = false;

    for (size_t i = 0; i < cred.username.size(); ++i) {
        if (cred.username[i] == cred.enteredUsername && cred.password[i] == cred.enteredPassword) {
            loginSuccess = true;
            break;
        }
    }


            if(loginSuccess){
                system("cls");
                cin.ignore();

            }

            else{


        cout << "Login failed. Invalid username or password.\n";
        system("pause");
        system("cls");
        login(user, cred);}


    }



    //Home

    void home( nyu& user){

        DisplayHeader();

        TextColor(13);
        cout<<"\n\n\t HOLLAAA!\n\n\n";
        TextColor(7);

        cout<<"\t\t\t\t\t\t\t\t\t[1] SET GOALS\n";
        cout<<"\t\t\t\t\t\t\t\t\t[2] SET HABITS\n";
        cout<<"\t\t\t\t\t\t\t\t\t[3] VIEW GOALS, HABITS, ACHIEVEMENTS.\n";
        cout<<"\t\t\t\t\t\t\t\t\t[4] EDIT GOALS\n";
        cout<<"\t\t\t\t\t\t\t\t\t[5] EDIT HABITS\n";
        cout<<"\t\t\t\t\t\t\t\t\t[6] LOG AN ACHIEVEMENTS \n";
        cout<<"\t\t\t\t\t\t\t\t\t[7] LOGOUT\n";

        user.chs=_getch();



        switch(user.chs){

            case '1':
                loadingAnimation();
                system("cls");
                addGoals(user);
                break;

            case '2':
                loadingAnimation();
                system("cls");
                addhabit(user);
                break;

            case '3':
                loadingAnimation();
                system("cls");
                view(user);
                break;

            case '4':
                loadingAnimation;
                system("cls");
                EditGoals(user);
                break;
            case '5':
                loadingAnimation();
                system("cls");
                EditHabit(user);
                break;
            case '6':
                loadingAnimation();
                system("cls");
                achievements(user);
                break;
            case '7':
                loadingAnimation();
                system("cls");
                Logout(user);
                break;
            default:
                system("cls");
                home(user);




        }

    }


    void addGoals(nyu& user) {

        setgoal goal;
        int Count = 0;


         DisplayHeader();

         TextColor(4);
         cout<<"\n\n\n\n\t\t\t\t\t\t\t\t\tEx: Read 100 books";
         cout<<"\n\t\t\t\t\t\t\t\t\tTarget goal: 100";
         TextColor(7);

        while (Count < 100) {
            cout << "\n\n\n\t\t\t\t\t\t\t\t\tGoal " << Count + 1 << " description: ";
            getline(cin, goal.description);

            cout<<"\t\t\t\t\t\t\t\t\tTarget goal: ";
            cin>>goal.Targetgoal;
            cin.ignore();

            cout<<"\n\t\t\t\t\t\t\t\t\tGoal added!\n";

            goal.currentprogress=0;
            goal.Progress=0;

            user.vgoal.push_back(goal);
            Count++;

            if (Count < 100) {
                cout<<"\n\t\t\t\t\t\t\t\t\t[1]Add more\n";
                cout<<"\t\t\t\t\t\t\t\t\t[2]Home\n";
                user.chs= _getch();
                if (user.chs != '1') {
                    loadingAnimation();
                    system("cls");
                    home(user);
                    break;
                }
            }

        }
    }




    void addhabit(nyu& user){

        Habits habit;
        int Count=0;
        DisplayHeader();

         TextColor(4);
         cout<<"\n\n\n\n\t\t\t\t\t\t\t\t\tEx: Play basketball";
         cout<<"\n\t\t\t\t\t\t\t\t\tTarget frequency: 7 (7x a week) ";
         TextColor(7);

        while(Count<100){
            cout << "\n\n\n\t\t\t\t\t\t\t\t\tHabit " << Count + 1 << " description: ";
            getline(cin, habit.description);

            cout<<"\t\t\t\t\t\t\t\t\tTarget frequency (per week): ";
            cin>>habit.targetfrequency;
            cin.ignore();

            cout<<"\n\t\t\t\t\t\t\t\t\tHabit added!\n";

            habit.frequency=0;
            habit.progress=0;


            habit.progress = (habit.frequency * 100) / habit.targetfrequency;

            user.vhabits.push_back(habit);
            Count++;




        if(Count<100){

            cout<<"\n\t\t\t\t\t\t\t\t\t[1] add more\n";
            cout<<"\t\t\t\t\t\t\t\t\t[2] Home\n\n";
            user.chs= _getch();

            if (user.chs!='1'){
                loadingAnimation();
                system("cls");
                home(user);
                break;
            }
        }

    }



    }



    void achievements(nyu& user){

        int Count=0;
        string description;
        DisplayHeader();

         TextColor(4);
         cout<<"\n\n\n\n\t\t\t\t\t\t\t\t\tEx: Gain 20lbs";
         TextColor(7);

        while(Count<100){

            cout << "\n\n\n\t\t\t\t\t\t\t\t\t Achivement " << Count + 1 << " description: ";
            getline(cin, description);

            user.vach.push_back(description);
            Count++;



        if(Count<100){

            cout<<"\n\t\t\t\t\t\t\t\t\t[1] add more\n";
            cout<<"\t\t\t\t\t\t\t\t\t[2] Home\n\n";
            user.chs= _getch();

            if (user.chs!='1'){
                loadingAnimation();
                system("cls");
                home(user);
                break;
            }
        }

    }



    }

    void view (nyu& user){

        int count=1;
        DisplayHeader();

            TextColor(10);
            cout<<"\n\n\n\t\t\t\t\t\t\t                   G O A L S                \n";
            TextColor(7);
            cout<<"\t\t\t\t\t\t\t__________________________________________________\n";

            for(const auto& goal: user.vgoal ){

            cout<<"\n\t\t\t\t\t\t\t";
            cout<<count<<"."<<goal.description<<endl;
            cout<<"\t\t\t\t\t\t\t Target goal: "<<goal.Targetgoal<<endl;
            cout<<"\t\t\t\t\t\t\t Current Progress: "<<goal.currentprogress<<endl;
            cout<<"\t\t\t\t\t\t\t Progression: "<<goal.Progress<<"%"<<endl;

            string rating;
                  if(goal.Progress==100){
                    rating= "Goal achieved!";
                } else if (goal.Progress >= 75) {
                    rating = "Excellent, Youre nice!";
                } else if (goal.Progress >= 50) {
                    rating = "Good, Keep it up!";
                } else if (goal.Progress >= 25) {
                    rating = "Fair, Just keep going!";
                } else {
                    rating = "Poor";
                }

            cout<<"\t\t\t\t\t\t\t Rating: "<<rating<<endl;

            count++;}



                count=1;

            TextColor(10);
            cout<<"\n\n\n\t\t\t\t\t\t\t                   H A B I T S              \n";
            TextColor(7);
            cout<<"\t\t\t\t\t\t\t__________________________________________________\n";

            for(const auto& habit: user.vhabits){

                cout<<"\n\t\t\t\t\t\t\t";
                cout<<count<<". "<<habit.description<<endl;
                cout<<"\t\t\t\t\t\t\t Target frequency (Per week): "<<habit.targetfrequency<<endl;
                cout<<"\t\t\t\t\t\t\t Actual frequency (Per week): "<<habit.frequency<<endl;
                cout<<"\t\t\t\t\t\t\t Progression: "<<habit.progress<<"%"<<endl;


            string rating;
            if (habit.progress >= 75) {
                rating = "Excellent";
            }else if (habit.progress >= 50) {
                rating = "Good";
            }else if (habit.progress >= 25) {
                rating = "Fair";
            }
             else {
                rating = "Poor";
            }
                cout << "\t\t\t\t\t\t\t Rating: " << rating << endl;


                count++;


                }


            count=1;
            TextColor(10);
            cout<<"\n\n\n\t\t\t\t\t\t\t              A C H I E V E M E N T S       \n";
            TextColor(7);
            cout<<"\t\t\t\t\t\t\t__________________________________________________\n";


            for(const auto& description: user.vach)
            {

                cout<<"\t\t\t\t\t\t\t"<<count<<". "<<description<<endl;



            }


                cout<<"\n\n\n\t\t\t\t\t\t\t\t\t [0] BACK HOME";
                user.chs=_getch();

                if(user.chs=='0'){
                    loadingAnimation();
                    system("cls");
                    home(user);
                }



    }


    void EditGoals(nyu& user) {
    DisplayHeader();

    if (user.vgoal.empty()) {
        cout << "\n\n\t\t\t\t\t\t\t\t\tNo goals added yet.\n";
        cout << "\n\n\t\t\t\t\t\t\t\t\t[1] Add a Goal\n";
        cout << "\t\t\t\t\t\t\t\t\t[2] Home\n";
        user.chs = _getch();

        if (user.chs == '1') {
            system("cls");
            addGoals(user);
        } else {
            loadingAnimation();
            system("cls");
            home(user);
        }
    } else {
        int index;
        cout << "\n\n\t\t\t\t\t\t\t\t\tGoals List:\n";
        for (int i = 0; i < user.vgoal.size(); i++) {
            cout << "\t\t\t\t\t\t\t\t\t" << i + 1 << ". " << user.vgoal[i].description << " (Current Progress: " << user.vgoal[i].currentprogress << "/" << user.vgoal[i].Targetgoal << ")\n";
        }

        cout << "\n\n\t\t\t\t\t\t\t\t\tEnter the goal number to edit: ";
        cin >> index;
        cin.ignore();

        if (index > 0 && index <= user.vgoal.size()) {
            cout << "\n\n\t\t\t\t\t\t\t\t\tEnter new current progress for goal '" << user.vgoal[index - 1].description << "': ";
            cin >> user.vgoal[index - 1].currentprogress;
            cin.ignore();

            user.vgoal[index - 1].Progress = (user.vgoal[index - 1].currentprogress * 100) / user.vgoal[index - 1].Targetgoal;
            cout << "\n\n\t\t\t\t\t\t\t\t\tCurrent progress updated successfully!\n";

            if (user.vgoal[index - 1].Progress == 100) {
                user.vach.push_back("Goal: " + user.vgoal[index - 1].description +", Target: "+std::to_string (user.vgoal[index - 1].Targetgoal));
                cout << "\n\n\t\t\t\t\t\t\t\t\tGoal achieved and added to achievements!\n";
            }
        } else {
            cout << "\n\n\t\t\t\t\t\t\t\t\tInvalid goal number!\n";
        }

        cout << "\n\n\t\t\t\t\t\t\t\t\t[1] Edit Another Goal\n";
        cout << "\t\t\t\t\t\t\t\t\t[2] Home\n";
        user.chs = _getch();

        system("cls");

        if (user.chs == '1') {
            EditGoals(user);
        } else {
            loadingAnimation();
            system("cls");
            home(user);
        }
    }
}


    void EditHabit(nyu& user) {

        DisplayHeader();
        int index;


        if(user.vhabits.empty())
        {


        cout << "\n\n\t\t\t\t\t\t\t\t\tNo habits added yet.\n";
        cout << "\n\n\t\t\t\t\t\t\t\t\t[1] Add a Goal\n";
        cout << "\t\t\t\t\t\t\t\t\t[2] Home\n";
        user.chs = _getch();


        if (user.chs == '1') {
            system("cls");
            addhabit(user);
        } else {
            loadingAnimation();
            system("cls");
            home(user);
        }}


        else{

        cout << "\n\n\t\t\t\t\t\t\t\t\tHabits List:\n";
        for (int i = 0; i < user.vhabits.size(); i++) {
            cout << "\t\t\t\t\t\t\t\t\t" << i + 1 << ". " << user.vhabits[i].description << " (Current Progress: " << user.vhabits[i].frequency << "/" << user.vhabits[i].targetfrequency << ")\n";
        }

        cout << "\n\n\t\t\t\t\t\t\t\t\tEnter the habit number to edit: ";
        cin >> index;
        cin.ignore();
        if (index > 0 && index <= user.vhabits.size()) {
            cout << "\n\n\t\t\t\t\t\t\t\t\tEnter new current progress for habit '" << user.vhabits[index - 1].description << "': ";
            cin >> user.vhabits[index - 1].frequency;
            cin.ignore();

            user.vhabits[index - 1].progress = (user.vhabits[index - 1].frequency * 100) / user.vhabits[index - 1].targetfrequency;
            cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t\tCurrent progress updated successfully!\n";
            } else {
            cout << "\n\n\t\t\t\t\t\t\t\t\tInvalid habit number!\n";
            }

            cout << "\n\n\t\t\t\t\t\t\t\t\t[1] Edit Another Habit\n";
            cout << "\t\t\t\t\t\t\t\t\t[2] Home\n";
            user.chs = _getch();

            system("cls");

            if (user.chs == '1') {
                EditHabit(user);
            } else {
                loadingAnimation();
                system("cls");
                home(user);
            }}}


    void PersonalInformation(nyu& user){


            DisplayHeader();


            cout << "\n\n\n\t\t\t\t\t\t\t\t\tNAME: ";
            getline(cin, user.name);
            cout << "\t\t\t\t\t\t\t\t\tSEX: ";
            getline(cin, user.sex);
            cout << "\t\t\t\t\t\t\t\t\tAGE: ";
            getline(cin, user.age);
            cout << "\t\t\t\t\t\t\t\t\tBIRTHDATE: ";
            getline(cin, user.bdate);

            system("cls");




        }



void Logout(nyu& user){


    TextColor(3);


    cout << "\n\n\n";
    cout << "\t\t\t\t\t\t\t  _______ _                 _     __     __          \n";
    cout << "\t\t\t\t\t\t\t |__   __| |               | |    \\ \\   / /          \n";
    cout << "\t\t\t\t\t\t\t    | |  | |__   __ _ _ __ | | __  \\ \\_/ /__  _   _  \n";
    cout << "\t\t\t\t\t\t\t    | |  | '_ \\ / _` | '_ \\| |/ /   \\   / _ \\| | | | \n";
    cout << "\t\t\t\t\t\t\t    | |  | | | | (_| | | | |   <     | | (_) | |_| | \n";
    cout << "\t\t\t\t\t\t\t    |_|  |_| |_|\\__,_|_| |_|_|\\_\\    |_|\\___/ \\__,_| \n";

    TextColor(7);
    cout << "\t\t\t\t\t\t________________________________________________________________________________\n";
    TextColor(6);
    cout << "\t\t\t\t\t\t\tThank you for using the Personal Development Tracker!\n";
    cout << "\t\t\t\t\t\t\tWe hope you will achieve your goals and develope positive habits.\n";
    cout << "\t\t\t\t\t\t\tKeep pushing forward and striving for your best!\n";
    TextColor(3);
    cout << "\t\t\t\t\t\t________________________________________________________________________________\n";
    cout << "\n\n\n";
    TextColor(7);


}





