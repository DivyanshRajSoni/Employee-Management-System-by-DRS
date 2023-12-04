//EMPLOYEE MANAGEMENT SYSTEM---(>OOPS PROJECT)...BY DIVYANSH RAJ SONI..
#include <iostream>
#include<windows.h>
#include<conio.h>
using namespace std;
class emp : public Idsalary
{
    public:
string name;
string id;
string address;
int contact,salary;
friend class Idsalary;
};
class Idsalary {
 public :
void empdata();
void show();
void search();
void update();
void del();
};
class usernm {
    protected :
    string username ;
    public :
 void set_data1(string,string);
};
void usernm :: set_data1(string a,string b){
    username =a;
}
class passw : public usernm {
    protected :
    string password;
    passw(string);
};
passw :: passw(string b){
    password =b;
}
emp e[100];// this array is globally declared.
int total =0;
void Idsalary :: empdata(){
int choice;
cout<<"How many Employees Data do you want to enter?? : ";
cin>>choice;
for(int i=total;i<total+choice;i++){
    cout<<"Enter data of employee "<<i+1<<endl;
    cout<<"Employee Name : ";
cin>>e[i].name;
cout<<"ID : ";
cin>>e[i].id;
cout<<"Address : ";
cin>>e[i].address;
cout<<"Contact : ";
cin>>e[i].contact;
cout<<"Salary : ";
cin>>e[i].salary;
}
total =total+choice;
}
void Idsalary :: show(){
if(total !=0){
    for(int i=0;i<total;i++){
        cout<<"THE SHOWED DATA IS HERE :~"<<endl;
        cout<<"Data of employee "<<i+1<<endl;
        cout<<"Employee Name : "<<e[i].name<<endl;
        cout<<"ID : "<<e[i].id<<endl;
        cout<<"Address : "<<e[i].address<<endl;
        cout<<"Salary : "<<e[i].salary<<endl;
        cout<<"Contact : "<<e[i].contact<<endl;
    }
}
else {
    cout<<"Your Record is Empty"<<endl;
}
}
void Idsalary :: search(){
    if(total !=0){
        string id;
        cout<<"Enter id of data which you want to search : "<<endl;
        cin>>id;
        for(int i =0;i<total;i++){
if(id==e[i].id){
 cout<<"Data of employee "<<i+1<<endl;
        cout<<"Employee Name : "<<e[i].name<<endl;
        cout<<"ID : "<<e[i].id<<endl;
        cout<<"Address : "<<e[i].address<<endl;
        cout<<"Salary : "<<e[i].salary<<endl;
        cout<<"Contact : "<<e[i].contact<<endl;
    break;
    }
    if(i==total-1){
        cout<<"No such record found"<<endl;
    }
        }
    }
    else{
        cout<<"Your Record is Empty"<<endl;
    }

}
void Idsalary :: update(){
if(total!=0){
 string id;
        cout<<"Enter id of data which you want to Update : "<<endl;
        cin>>id;
         for(int i =0;i<total;i++){
if(id==e[i].id){
    cout<<"\t\tPREVIOUS DATA\n\n"<<endl;
 cout<<"Data of employee "<<i+1<<endl;
        cout<<"Employee Name : "<<e[i].name<<endl;
        cout<<"ID : "<<e[i].id<<endl;
        cout<<"Address : "<<e[i].address<<endl;
        cout<<"Salary : "<<e[i].salary<<endl;
        cout<<"Contact : "<<e[i].contact<<endl;
        cout<<"\n\t\tENTER NEW DATA\n\n"<<endl;
        cout<<"Data of employee "<<i+1<<endl;
        cout<<"Employee Name : "<<e[i].name<<endl;
        cin>>e[i].name;
        cout<<"ID : "<<e[i].id<<endl;
        cin>>e[i].id;
        cout<<"Address : "<<e[i].address<<endl;
        cin>>e[i].address;
        cout<<"Salary : "<<e[i].salary<<endl;
        cin>>e[i].salary;
        cout<<"Contact : "<<e[i].contact<<endl;
        cin>>e[i].contact;
    break;
    }
    if(i==total-1){
        cout<<"No such record found"<<endl;
    }
        }
}
else{
    cout<<"Your Record is Empty"<<endl;
}
}
void Idsalary :: del(){
if(total!=0){
    char user;
cout<<"Press 1 to delete full Record"<<endl;
cout<<"Press 2 to delete Specific record"<<endl;
cin>>user;
if(user =='1'){
    total=0;
    cout<<"All Record is Deleted...!!!"<<endl;
}
else if(user=='2'){
    string id;
    cout<<"Enter ID of data which you want to Delete."<<endl;
cin>>id;
for(int i=0;i<total;i++){
    if(id==e[i].id){
        for(int j=i;j<total;j++){
        e[j].name=e[j+1].name;
        e[j].id=e[j+1].id;
        e[j].address=e[j+1].address;
        e[j].contact=e[j+1].contact;
        e[j].salary=e[j+1].salary;
        total--;
        cout<<"Your Required Record is Deleted."<<endl;
        }
   break;
    }
     if(i==total-1){
            cout<<"No such Record Found"<<endl;
        }
}
}
}
else{
    cout<<"Your Record is Empty"<<endl;
}
}
void logout (){
}
 void exit (){
}
int main(){
    cout<<"\n\n\tEMPLOYEE MANAGEMENT SYSTEM"<<endl;
    cout<<"\n\n\t\tSign Up"<<endl;
    string username;
       string password;
     usernm user;
     cout<<"\n\n\tEnter Username : ";
     user.set_data1(username,password);
     cin>>username;
    cout<<"\n\tEnter Password : ";
    cin>>password;
cout<<"\n\n\tYour Id is Creating Please Wait";
for(int i=1;i<=4;i++){
cout<<".";
Sleep(1000);
}
cout<<"\n\t\tYour Id Created Successfully"<<endl;
system("CLS");
start:
system("CLS");
cout<<"\n\n\t\tEMPLOYEE MANAGEMENT SYSTEM"<<endl;
cout<<"\n\n\tLogin"<<endl;
string username1,password1;
cout<<"\n\nUsername : ";
cin>>username1;
cout<<"Password : ";
cin>>password1;
 if(username1==username&&password1==password){
system("CLS");
char user;
while(1){
    exit :
    cout<<"\nPress 1 to enter data"<<endl;
    cout<<"Press 2 to show data"<<endl;
    cout<<"Press 3 to search data"<<endl;
    cout<<"Press 4 to update data"<<endl;
    cout<<"Press 5 to delete data"<<endl;
    cout<<"Press 6 to logout"<<endl;
    cout<<"Press 7 to exit"<<endl;
    user =getch();
    system("CLS");

    switch(user){// it is used to handle multiple condition.
        case '1' :
        Idsalary sal;
      sal.empdata();
        break;
        case '2':
        Idsalary sho;
        sho.show();
        break;
        case '3':
        Idsalary sear;
        sear.search();
        break;
        case '4':
        Idsalary upd;
        upd.update();
        break;
        case '5':
        Idsalary delet;
       delet.del();
        break;
        case '6':
        logout();
         goto start; 
        break;
        case '7':
        cout<<"Exit is Here :~ ~"<<endl; 
        exit();
        goto exit;
       
        break;
        default :
        cout<<"\aInvalid Input"<<endl;
    break;
    }
}
}
else if(username1!=username&&password1!=password){
    cout<<"Your username and password, both are incorrect."<<endl;
    Sleep(2000);
    goto start;
}
else if(username1!=username){
    cout<<"Your username is incorrect"<<endl;
    Sleep(2000);
 goto start;
}
else if(password1!=password){
    cout<<"Your password is incorrect"<<endl;
    Sleep(2000);
 goto start;
}
return 0;
} 