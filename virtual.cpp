#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <string.h>
#include <ctime>

using namespace std;
void wishme()
{
    //current date and time based on computer time
    time_t now=time(0);//time_c is a function in ctimeto know time
    tm *time=localtime(&now);
    if(time-> tm_hour <12)
    {
        cout<<"good morning boss"<<endl;
        string phrase="good morning boss";
      string command="espeak \""+ phrase + "\"";
      const char *charCommand = command.c_str();
      system(charCommand);
    }
    else if(time-> tm_hour > 12 && time->tm_hour <= 15
    )
    {
        cout<<"good afternoon boss"<<endl;
         string phrase="good afternoon boss";
      string command="espeak \""+ phrase + "\"";
      const char *charCommand = command.c_str();
      system(charCommand);
    }
     else if(time-> tm_hour >=16 && time->tm_hour <=20)
    {
        cout<<"good evening"<<endl;
         string phrase="good evening boss";
      string command="espeak \""+ phrase + "\"";
      const char *charCommand = command.c_str();
      system(charCommand);
    }
    else {
        cout<<"good night boss"<<endl;
         string phrase="good night boss";
      string command="espeak \""+ phrase + "\"";
      const char *charCommand = command.c_str();
      system(charCommand);
    }
    
}
void datetime()
{
    time_t now=time(0);
    char *dt= ctime(&now);
    cout<<"the current date and time is"<<endl <<dt<<endl;
}
int main()
{
   system("cls");
   cout<<"\t\t\t--------------------------WELCOME-------------------<<"<<endl;
   cout<<"\t\t\t--------------------------i am virtual assistance-------------------<<"<<endl;
   cout<<"\t\t\t--------------------------my name is ronak-------------------<<"<<endl;
   char password[20];//to take password
   char ch[100];//take command from the user
   do{
      cout<<"|enter the password|"<<endl;
      //cin>>password ;
      string phrase="enter your password";
      string command="espeak \""+ phrase + "\"";
      const char *charCommand = command.c_str();
      system(charCommand);
      gets(password);
      STARTUPINFO startInfo={0};
      PROCESS_INFORMATION processInfo={0};
      if(strcmp(password, "ronak")==0)
      {
        cout<<"correct password"<< endl;
        string phrase="you entered a correct pasword";
      string command="espeak \""+ phrase + "\"";
      const char *charCommand = command.c_str();
      system(charCommand);
        wishme();
        cout<<"********************************************************************************************************"<<endl;
        do
        {
            cout<<"**************************************"<<endl;
             cout<<endl<<"how can i help you boss..."<<endl<<endl;
             string phrase="how can i help you boss..";
              string command="espeak \""+ phrase + "\"";
              const char *charCommand = command.c_str();
             system(charCommand);
             cout<<"your queary------>"<<endl;
             
             
             gets(ch);
             cout<<endl;
             cout<<"here is a result for queary---->"<<endl;
             if(strcmp(ch,"hi") == 0 || strcmp(ch,"hey")==0 ||strcmp(ch,"hello")==0)
             {
                cout<<"hello boss......."<<endl;
                string phrase="hello boss";
                 string command="espeak \""+ phrase + "\"";
                 const char *charCommand = command.c_str();
                  system(charCommand);
             }
              else if(strcmp(ch,"exit") ==0 || strcmp(ch,"stop")==0 ||strcmp(ch,"bye")==0)
             {
                cout<<"good bye sir, have a nice day"<<endl;
                 string phrase="good bye sir, have a nice day";
                 string command="espeak \""+ phrase + "\"";
                 const char *charCommand = command.c_str();
                  system(charCommand);
                exit(0);
             }
              else if(strcmp(ch,"who are you")==0 || strcmp(ch,"tell me about your self")==0 ||strcmp(ch,"about")==0)
             {
                cout<<"i am  your assistance  "<<endl;
                string phrase="i am  your assistence ,any help from me? ";
                 string command="espeak \""+ phrase + "\"";
                 const char *charCommand = command.c_str();
                  system(charCommand);
             }
             else  if (strcmp(ch,"how are you")==0 || strcmp(ch,"whatsapp")==0 ||strcmp(ch,"how is your day")==0)
             {
                cout<<"i am good sir tell me about you "<<endl;
                string phrase="i am good sir tell me how can i help you ";
                 string command="espeak \""+ phrase + "\"";
                 const char *charCommand = command.c_str();
                  system(charCommand);
                  gets(ch);
                 

             }
             else if(strcmp(ch,"time")==0 ||strcmp(ch,"date")==0)
             {
                datetime();
             }
             else if(strcmp(ch,"open google")==0 || (ch,"google")==0 ||(ch,"search engine")==0)
             {
                cout<<"opening google......"<<endl;
                string phrase="opening google";
                 string command="espeak \""+ phrase + "\"";
                 const char *charCommand = command.c_str();
                  system(charCommand);
                system("start https://www.google.com");
                
             }
             else if(strcmp(ch,"youtube")==0 )
             {
                cout<<"opening youtube......"<<endl;
                string phrase="opening youtube";
                 string command="espeak \""+ phrase + "\"";
                 const char *charCommand = command.c_str();
                  system(charCommand);
                system("start https://www.youtube.com");
             }
             else if(strcmp(ch,"bhargav profile")==0 )
             {
                cout<<"opening profile of bhargav barad......"<<endl;
                string phrase="opening profile of bhargav barad";
                 string command="espeak \""+ phrase + "\"";
                 const char *charCommand = command.c_str();
                  system(charCommand);
                system("start https://www.instagram.com/_bhargav_barad_/");
             }

             else{
               cout<<"sorry could not underdstand your question or queary please try again!!!!"<<endl;
                string phrase="sorry could not underdstand your question or queary please try again";
      string command="espeak \""+ phrase + "\"";
      const char *charCommand = command.c_str();
      system(charCommand);
             }


        }while(1);

      }
      else{
        cout<<"incorrect password"<<endl;
      }
   }while(1);

   return 0;
}
