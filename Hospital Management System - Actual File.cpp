#include<iostream>
#include<fstream>
#include<cstdlib>
#include<conio.h>
#include<time.h>

using namespace std;
int main()
{
char fname[20];
time_t rawtime;
struct tm * timeinfo;

time ( &rawtime );
timeinfo = localtime ( &rawtime );

re:
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
cout<<"\t\t\t\t\t@@ _______________________________________________________________________________________ @@\n";
cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
cout<<"\t\t\t\t\t@@|                                  WELCOME TO                                           |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t\t\t@@|                           HOSPITAL MANAGEMENT SYSTEM                                  |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t\t\t@@|                  	   YOUR HEALTH IS OUR FIRST PRIORITY                              |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t\t\t@@|                                                -Brought To You by MR, AELIYA, RAFFAY  |@@\n";
cout<<"\t\t\t\t\t@@|_______________________________________________________________________________________|@@\n";
cout<<"\t\t\t\t\t@@                                                                                         @@\n";
cout<<"\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n\n\n\t\t\t\t\t";
system("pause");
system("cls");


int i;
int login();
login();

//giving option to the user for their choice
b:
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t  HOSPITAL MANAGEMENT SYSTEM \n\n";	
cout<<"\n\n\t\t\t\t\t\tPlease,  Choose from the following Options: \n\n";
cout<<"\t\t\t\t\t\t _________________________________________________________________ \n";
cout<<"\t\t\t\t\t\t|                                           	                  |\n";
cout<<"\t\t\t\t\t\t|                                                                 |\n";
cout<<"\t\t\t\t\t\t|             1  >> Add New Patient Record                        |\n";
cout<<"\t\t\t\t\t\t|                                                                 |\n";
cout<<"\t\t\t\t\t\t|             2  >> Add Diagnosis Information                     |\n";
cout<<"\t\t\t\t\t\t|                                                                 |\n";
cout<<"\t\t\t\t\t\t|             3  >> Full History of the Patient                   |\n";
cout<<"\t\t\t\t\t\t|                                                                 |\n";
cout<<"\t\t\t\t\t\t|             4  >> Information About the Hospital                |\n";
cout<<"\t\t\t\t\t\t|                                                                 |\n";
cout<<"\t\t\t\t\t\t|             5  >> Exit the Program                              |\n";
cout<<"\t\t\t\t\t\t|                                                                 |\n";
cout<<"\t\t\t\t\t\t|_________________________________________________________________|\n\n";

a:
  try{
cout<<"\t\t\t\t\t\tEnter your choice: ";cin>>i;
	            if (cin.fail()) {
                throw runtime_error("Invalid input! \n\t\t\t\t\t\tPlease enter an integer......\n");
            }
    
        } catch (const runtime_error &e) {
            cout << "\n\t\t\t\t\t\t"<<e.what() <<endl;
            cin.clear();  // Clear the error flag
            cin.ignore(); 
            goto a;
        }if(i>5||i<1){
				cout<<"\n\n\t\t\t\t\t\tInvalid Choice\n";cout<<"\t\t\t\t\t\tTry again...........\n\n";goto a;
			} //if inputed choice is other than given choice

system("cls");

//Adding the record of the new patient..................option 1
if(i==1)
{
  time_t rawtime;
  struct tm * timeinfo;

  time ( &rawtime );
  timeinfo = localtime ( &rawtime );
  cout<<"\n\n\t\t\t\t\t\t\t\t"<< asctime (timeinfo);
  
  ofstream pat_file;
  char fname[20];
  
  cout<<"\n\n\n\nEnter the patient's file name : ";
  cin.ignore();
  gets(fname);
  
  pat_file.open(fname);
  		if(!fname)
		{
		cout<<"\nError while opening the file\n";goto b;
		}
		else
		{
                        struct patient_info
                        {
                            char name[20];
                            char address[100];
                            char contact[10];
                            char age[5];
                            char sex[8];
                            char blood_gp[5];
                            char disease_past[50];
                            char id[15];
                        };

            patient_info ak;
cout << "\n********************************************************************\n";
pat_file << "\n********************************************************************\n\n";

// Taking input from the user
cout << "\nName : ";
gets(ak.name);
cout << "\nAddress : ";
gets(ak.address);
cout << "\nContact Number : ";
gets(ak.contact);
cout << "\nAge : ";
gets(ak.age);
cout << "\nSex : ";
gets(ak.sex);
cout << "\nBlood Group : ";
gets(ak.blood_gp);
cout << "\nAny Major disease suffered earlier : ";
gets(ak.disease_past);
cout << "\nPatient ID : ";
gets(ak.id);

// Writing to file
pat_file << "Name : " << ak.name << "\n";
pat_file << "Address : " << ak.address << "\n";
pat_file << "Contact Number : " << ak.contact << "\n";
pat_file << "Age : " << ak.age << "\n";
pat_file << "Sex : " << ak.sex << "\n";
pat_file << "Blood Group : " << ak.blood_gp << "\n";
pat_file << "Any Major disease suffered earlier : " << ak.disease_past << "\n";
pat_file << "Patient ID : " << ak.id << "\n";

cout << "\n********************************************************************\n";
pat_file << "\n********************************************************************\n\n";

cout << "\nInformation Saved Successfully\n";

            }
  system("pause");
  system("cls");
  goto b;

}

//Appending diagnosis information of patient datewise.................option 2
if(i==2)
{
    fstream pat_file;
    
    cout<<"\n\nEnter the patient's file name to be opened : ";
    cin.ignore();
    gets(fname);
    system("cls");
    
	pat_file.open(fname, ios::in);
		if(!pat_file)
		{
		cout<<"\nError while opening the file\n";goto b;
		}
		else
		{
		    cout<<"\n\n\n\n\t\t\t\t........................................ Information about "<<fname<<" ........................................\n\n\n\n";
		    string info;
		    
			while(pat_file.good())
			{
			getline(pat_file,info);
			cout<<info<<"\n";
			}
			cout<<"\n";
			pat_file.close();
			
			pat_file.open(fname, ios::out | ios::app);
            cout<<"\n";
			cout<<"Adding more information in patient's file................on : "<<asctime (timeinfo);pat_file<<"Description of "<<asctime (timeinfo)<<"\n";
                            struct app
                            {
                                char symptom[500];
                                char diagnosis[500];
                                char medicine[500];
                                char addmission[30];
                                char ward[15];
                            };
           	 					app add;
           	 					
		cout << "\nSymptoms : ";
		gets(add.symptom);
		cout << "\nDiagnosis : ";
		gets(add.diagnosis);
		cout << "\nMedicines : ";
		gets(add.medicine);
		cout << "\nAdmission Required? : ";
		gets(add.addmission);
		cout << "\nType of ward : ";
		gets(add.ward);
		
		// Writing to file
		pat_file << "Symptoms : " << add.symptom << "\n";
		pat_file << "Diagnosis : " << add.diagnosis << "\n";
		pat_file << "Medicines : " << add.medicine << "\n";
		pat_file << "Admission Required? : " << add.addmission << "\n";
		pat_file << "Type of ward : " << add.ward << "\n";
		pat_file << "\n*************************************************************************\n";
		
		cout << "\n\n" << add.ward << " ward is allotted Successfully\n";
			pat_file.close();
			cout<<"\n\n";
			system("pause");
            system("cls");
			goto b;
		}
}

//For displaying the full medical history of patient in that hospital............option 3
if(i==3)
{
    fstream pat_file;
    
    cout<<"\n\nEnter the patient's file name to be opened : ";
    cin.ignore();
    gets(fname);
    system("cls");
    
	pat_file.open(fname, ios::in);
		if(!pat_file)
		{
		cout<<"\nError while opening the file\n";goto b;
		}
		else
		{
		    cout<<"\n\n\n\n\t\t\t\t........................................ Full Medical History of "<<fname<<" ........................................\n\n\n\n";
		    string info;
		    
			while(pat_file.good())
			{
			getline(pat_file,info);
			cout<<info<<"\n";
			}
			cout<<"\n";
        }
        system("pause");
        system("cls");
        goto b;
}

//displaying the information about the hospital........option 4
if(i==4)
{
	ifstream file;
	
	file.open("hos.txt");
		if(!file)
		{
		cout<<"\nError while opening the file\n";goto b;
		}
		else
		{
		    cout<<"\n\n\n\n\n\n\n\t\t\t\t\t   ...........................Information about the Hospital.............................\n\n";
		    string line;
		    
			while(file.good())
			{
			getline(file,line);
			cout<<line<<"\n\t\t";
			}
			cout<<"\n\n\t\t";
			system("pause");
            system("cls");
			goto b;
		}
}

//Exiting Through the system with a Thank You note........................option 5
if(i==5)
{
system("cls");
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
cout<<"\t\t\t\t\t@@ _______________________________________________________________________________________ @@\n";
cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
cout<<"\t\t\t\t\t@@|                               THANK YOU FOR USING                                     |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t\t\t@@|                            HOSPITAL MANAGEMENT SYSTEM                                 |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t\t\t@@|                                                -Brought To You by MR, AELIYA, RAFFAY  |@@\n";
cout<<"\t\t\t\t\t@@|_______________________________________________________________________________________|@@\n";
cout<<"\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n\n\n\t\t\t\t\t";
}


cout<<"\n";

}

int login() {
   string pass = "";
   char ch;
   try {
      cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t  HOSPITAL MANAGEMENT SYSTEM \n\n";
      cout << "\t\t\t\t\t\t\t\t------------------------------";
      cout << "\n\t\t\t\t\t\t\t\t\t     LOGIN \n";  
      cout << "\t\t\t\t\t\t\t\t------------------------------\n\n";  
      cout << "\t\t\t\t\t\t\t\tEnter Password: ";

      ch = _getch();
      while (ch != 13) {  // character 13 is Enter
         if (!isprint(ch)) { // Ensure only printable characters are added
            throw runtime_error("Invalid character detected!");
         }
         pass.push_back(ch);
         cout << '*';
         ch = _getch();
      }

      if (pass == "pass") {
         cout << "\n\n\t\t\t\t\t\t\t\tAccess Granted! \n";
         system("PAUSE");
         system("CLS");
      } else {
         throw invalid_argument("Incorrect password.");
      }
   } catch (const invalid_argument& e) {
      cout << "\n\n\t\t\t\t\t\t\t\tAccess Aborted...\n\t\t\t\t\t\t\t\t" << e.what() << "\n\n";
      system("PAUSE");
      system("CLS");
      login(); // Retry login
   } catch (const runtime_error& e) {
      cout << "\n\n\t\t\t\t\t\t\t\tError: " << e.what() << "\n";
      system("PAUSE");
      system("CLS");
      login();// Return error code
   } 
   return 0; // Successful login
}

