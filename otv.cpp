#include "std_lib_facilities.h"

int main(){

	string your_name;
	cout << "Enter your name" << endl;
	cin >> your_name;		
		
	string first_name;
	string friend_name; // Barát nevének eltárolásához létrehozok egy változót.
	
	cout << "Please enter the name of the person you want to write to: "; //Megkérem a felhasználót írja be egy barátja nevét akinek írni szeretne
	
	cin >> friend_name;
	
	cout << "Please Enter another name of your friend:" << endl;  //Barát nevek bekérése
	cin >> first_name;
	
	
	
	
	
	char friend_sex=' ';  //nem eltárolásához változót hozok létre
	
	cout << "Please write an m if your friend male and write f if your friend is female " << endl;
	cin >> friend_sex;   //megkérem a felhasználót adja meg barátja nemét
	
	int age=0;
	cout << "Please enter your friend age." << endl;
	cin >> age;   //meg kérem a felhasználót adja meg életkorát
	
	
	cout << "Dear " << friend_name << endl;
	
	cout << "How are you? I hope you are okay." << endl;
	
	cout << "I hope you can come over soon and we can meet again." << endl;  //elindul a levél
	
	
	if(friend_sex=='m'){
	cout << "If you see " << first_name << " please ask him to call me" << endl;
	}else if(friend_sex=='f'){
	cout << "If you see " << first_name << " please ask her to call me" << endl;  // kezelem a megszólítást annak függvényében hogy férfi vagy nő a barát
	}
	
	
	
	
	
	if(age <=0 || age >=110){
		simple_error("Are you kidding!?");
	}
	cout << "I hear you just had a birthday and you are " << age << " years old." << endl;   //kezelem az üzenet további részét annak fügvényében hogy mennyi idős a barát
	if(age < 12){
		cout << "Next year you will be "<< age+1 << endl;
	}else if(age == 17){
		cout << "Next year you will be able to vote."<< endl;
	}else if(age == 70){
		cout << "I hope you are enjoying retirement."<< endl;
	}
	
	
	
	cout << endl << endl << " Yours sincerely, " << your_name << endl;  // elköszönés dupla kihagyott sor után
	
	
	
	
	return 0;
}

