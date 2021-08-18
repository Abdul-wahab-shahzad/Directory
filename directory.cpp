# include<fstream>
# include<iostream>
# include<cstring>
using namespace std;
int  make2d(char array2D[], char data[],int row,int start){
	for(int i=0;i< strlen(data);i++){
		array2D[start] = data[i];
		start++;
	}
	
	return start;
	
}
void reading(char firstname[],char lastname[],char address[],char landnum[], char mobilenum[]){
	int count;
	count=1;
ifstream fin;
ofstream fout;
fin.open("king.txt");
fout.open("output.txt");
char fileData[6][110];
int start=0,row=0;
while(!fin.eof()){
	start = 0;
	fin.getline(firstname,15,',');
	start = make2d(fileData[row],firstname,row,start);
	fin.getline(lastname,15,',');
	start = make2d(fileData[row],lastname,row,start);
	fin.getline(address,50,',');
		start = make2d(fileData[row],address,row,start);
	fin.getline(landnum,15,',');
start = make2d(fileData[row],landnum,row,start);
	fin.getline(mobilenum,15,',');
start = make2d(fileData[row],mobilenum,row,start);
	fout<<firstname<<" ";
	fout<<lastname<<" ";
	fout<<address<<" ";
	fout<<landnum<<" ";
	fout<<mobilenum<<endl;
	cout<<count<<firstname<<" ";
	cout<<lastname<<" ";
	cout<<address<<" ";
	cout<<landnum<<" ";
	cout<<mobilenum<<endl;
//strlen(fileData[i]
count++;
	}
	
	cout << row << endl;
}
void reading2(char firstname[],char lastname[],char address[],char landnum[], char mobilenum[]){
	int count;
	count=1;
ifstream fin;
ofstream fout;
fin.open("output.txt");
fout.open("king.txt");
char fileData[6][110];
int start=0,row=0;
while(!fin.eof()){
	start = 0;
	fin.getline(firstname,15,',');
	start = make2d(fileData[row],firstname,row,start);
	fin.getline(lastname,15,',');
	start = make2d(fileData[row],lastname,row,start);
	fin.getline(address,50,',');
		start = make2d(fileData[row],address,row,start);
	fin.getline(landnum,15,',');
start = make2d(fileData[row],landnum,row,start);
	fin.getline(mobilenum,15,',');
start = make2d(fileData[row],mobilenum,row,start);
	fout<<firstname<<" ";
	fout<<lastname<<" ";
	fout<<address<<" ";
	fout<<landnum<<" ";
	fout<<mobilenum<<endl;
	cout<<count<<firstname<<" ";
	cout<<lastname<<" ";
	cout<<address<<" ";
	cout<<landnum<<" ";
	cout<<mobilenum<<endl;
//strlen(fileData[i]
count++;
	}
	
	cout << row << endl;
}




void newfirstname(char firstname[]){
ofstream fout;
char fileData[5][15];
int start=0;
int row =0;
fout.open("king.txt",ios::app|ios::binary);
cout<<"enter first name"<<endl;
cin>>firstname;
	start = make2d(fileData[row],firstname,row,start);
fout<<firstname<<" ,";
cout<<firstname<<endl;
	fout.close();
}
void newlastname(char lastname[]){
	char fileData[5][15];
int start=0;
int row =0;
	ofstream fout;
	fout.open("king.txt",ios::app);
	cout<<"enter last name"<<endl;
	cin>>lastname;
		start = make2d(fileData[row],lastname,row,start);
	cout<<lastname<<endl;
	fout<<lastname<<" ,";
	fout.close();
}
void newaddress(char address[]){
	char fileData[5][50];
int start=0;
int row =0;
	ofstream fout;
	fout.open("king.txt",ios::app);
	cout<<"enter address"<<endl;
	cin>>address;
		start = make2d(fileData[row],address,row,start);
	fout<<address<<" ,";
	cout<<address<<endl;
	fout.close();
}
void newlandnum(char landnum[]){
	char fileData[5][15];
int start=0;
int row =0;
	ofstream fout;
	bool f=false;
	fout.open("king.txt",ios::app);
		while(f!=true){
	cout<<"enter landline number"<<endl;
	cin>>landnum;
    landnum[0];
	landnum[1];
	landnum[2];
	if(	landnum[0]== '0'&& landnum[1]=='4' && landnum[2]=='2') {
			start = make2d(fileData[row],landnum,row,start);
	fout<<landnum<<',';
	cout<<landnum<<",";
	f=true;

}
else{
	cout<<"try again"<<endl;
}
}	
}
void newmobilenum(char mobilenum[]){
	ofstream fout;
	char fileData[5][15];
int start=0;
int row =0;
	bool f= false;
	fout.open("king.txt",ios::app);
	while(f!=true){
	cout<<"enter mobile number"<<endl;
	cin>>mobilenum;
    mobilenum[0];
	mobilenum[1];
	mobilenum[2];
	if(	mobilenum[0]== '+'&& mobilenum[1]=='9' && mobilenum[2]=='2') {
			start = make2d(fileData[row],mobilenum,row,start);
	fout<<mobilenum<<','<<endl;
	cout<<mobilenum<<",";
	f=true;

}
}	
}

void search(){
	int y=0;
	int index;
	char find[10];
	char landnum[15];
	char firstname[15];
	char lastname[15];
	char address[15];
	char mobilenum[15];
ifstream fin;
ofstream fout;
fin.open("king.txt");
fout.open("output.txt");
cout<<"enter number to find"<<endl;
cin>>find;
int condition=0;
index=0;
while(!fin.eof()){
fin.getline(firstname,15,',');
//cout<<firstname;
fin.getline(lastname,15,',');
fin.getline(address,15,',');
fin.getline(landnum,15,',');
fin.getline(mobilenum,15,',');


while(index!=strlen(find)){
	if(landnum[index]==find[index]){
		condition++;
	}
	index++;
	if (condition==strlen(find)){
		cout<<firstname<<" "<<lastname<<" "<< address<<" "<<mobilenum<<" "<< landnum<<endl;;
	}
	
}
condition=0;
index=0;




	}

}
void searchlast(){
	int y=0;
	int index;
	char find[10];
	char landnum[15];
	char firstname[15];
	char lastname[15];
	char address[15];
	char mobilenum[15];
ifstream fin;
ofstream fout;
fin.open("king.txt");
fout.open("output.txt");
cout<<"enter name to find"<<endl;
cin>>find;
int condition=0;
index=0;
while(!fin.eof()){
fin.getline(firstname,15,',');
fin.getline(lastname,15,',');
fin.getline(address,15,',');
fin.getline(mobilenum,15,',');
fin.getline(landnum,15,',');

while(index!=strlen(find)){
	if(lastname[index]==find[index]){
		condition++;
		
	}
	index++;
	if (condition==strlen(find)){
		cout<<firstname<<" "<<lastname<<" "<< address<<" "<<mobilenum<<" "<< landnum<<endl;;
	}
	
}
condition=0;
index=0;




	}

}
void searchfirst(){
	int y=0;
	int index;
	char find[10];
	char landnum[15];
	char firstname[15];
	char lastname[15];
	char address[15];
	char mobilenum[15];
ifstream fin;
ofstream fout;
fin.open("king.txt");
fout.open("output.txt");
cout<<"enter name to find"<<endl;
cin>>find;
int condition=0;
index=0;
while(!fin.eof()){
fin.getline(firstname,15,',');
fin.getline(lastname,15,',');
fin.getline(address,15,',');
fin.getline(mobilenum,15,',');
fin.getline(landnum,15,',');

while(index!=strlen(find)){
	if(firstname[index]==find[index]){
		condition++;
		
	}
	index++;
	if (condition==strlen(find)){
		cout<<firstname<<" "<<lastname<<" "<< address<<" "<<mobilenum<<" "<< landnum<<endl;;
	}
	
}
condition=0;
index=0;




	}

}
void searchmobile(){
	int y=0;
	int index;
	char find[10];
	char landnum[15];
	char firstname[15];
	char lastname[15];
	char address[15];
	char mobilenum[15];
ifstream fin;
ofstream fout;
fin.open("king.txt");
fout.open("output.txt");
cout<<"enter name to find"<<endl;
cin>>find;
int condition=0;
index=0;
while(!fin.eof()){
fin.getline(firstname,15,',');
fin.getline(lastname,15,',');
fin.getline(address,15,',');
fin.getline(mobilenum,15,',');
fin.getline(landnum,15,',');

while(index!=strlen(find)){
	if(mobilenum[index]==find[index]){
		condition++;
		
	}
	index++;
	if (condition==strlen(find)){
		cout<<firstname<<" "<<lastname<<" "<< address<<" "<<mobilenum<<" "<< landnum<<endl;;
	}
	
}
condition=0;
index=0;




	}
}
void de(char firstname[],char lastname[],char address[],char landnum[], char mobilenum[]){
	int num,count;
	char fileData[6][110];
int start=0,row=0;
	cout<<"the number u want to delete"<<endl;
	cin>>num;
	ifstream fin;
	ofstream fout;
	fin.open("king.txt");
	fout.open("output.txt");
	while(!fin.eof()){
		fin.getline(firstname,15,',');
			start = make2d(fileData[row],firstname,row,start);
		fin.getline(lastname,15,',');
			start = make2d(fileData[row],lastname,row,start);
		fin.getline(address,50,',');
			start = make2d(fileData[row],address,row,start);
		fin.getline(landnum,15,',');
			start = make2d(fileData[row],landnum,row,start);
		fin.getline(mobilenum,15,',');
			start = make2d(fileData[row],mobilenum,row,start);
		if(count!=num-1){
		
		fout<<firstname;
		fout<<lastname;
			fout<<address;
			fout<<landnum;
		fout<<mobilenum;
	}
	count++;
	}
	fin.close();
	fout.close();
	reading2( firstname,lastname,address, landnum,mobilenum);
	
	
}
void modify(){
	char fileData[6][110];
int start=0,row=0;
	int num;
	int count,limit;
	ifstream fin;
	ofstream fout;
	fin.open("king.txt");
	fout.open("output.txt");
	char firstname[15];
	char lastname[15];
	char address[50];
	char landnum[15];
	char mobilenum[15];
	cout<<"enter directory to  modify"<<endl;
	cin>>num;
	cout<<"enter 1,2,3,4,5 to change first name last name address,land number mobile number"<<endl;
			cin>>limit;
	
	count =0;
	while(!fin.eof()){
			if(count!=num-1){
				fin.getline(firstname,15,',');
				start = make2d(fileData[row],firstname,row,start);
			fout<<firstname<<',';
				fin.getline(lastname,15,',');
				start = make2d(fileData[row],lastname,row,start);
				fout<<lastname<<',';
				fin.getline(address,15,',');
				start = make2d(fileData[row],address,row,start);
				fout<<address<<',';
				fin.getline(landnum,15,',');
				start = make2d(fileData[row],landnum,row,start);
				fout<<landnum<<',';
				fin.getline(mobilenum,15,',');
				start = make2d(fileData[row],mobilenum,row,start);
				fout<<mobilenum<<','<<endl;
			}
		if(count==num-1){
		
			if(limit==1){
					fin.getline(firstname,15,',');
				cin>>firstname;
				start = make2d(fileData[row],firstname,row,start);
				fout<<firstname<<',';
			}
			else{
				fin.getline(firstname,15,',');
				start = make2d(fileData[row],firstname,row,start);
				fout<<firstname<<',';
			}
			if(limit==2){
				fin.getline(lastname,15,',');
				cin>>lastname;
				start = make2d(fileData[row],lastname,row,start);
				fout<<lastname<<',';
			}
			else{
				fin.getline(lastname,15,',');
				start = make2d(fileData[row],lastname,row,start);
				fout<<lastname<<',';
			}
			if(limit==3){
				fin.getline(address,50,',');
				cin>>address;
				start = make2d(fileData[row],address,row,start);
				fout<<address<<',';
			}
			else{
				fin.getline(address,50,',');
				start = make2d(fileData[row],address,row,start);
				fout<<address<<',';
			}
			if(limit==4){
				fin.getline(landnum,15,',');
				cin>>landnum;
				start = make2d(fileData[row],landnum,row,start);
				fout<<landnum<<',';
			}
			else{
				fin.getline(landnum,15,',');
				start = make2d(fileData[row],landnum,row,start);
				fout<<landnum<<',';
			}
			if(limit==5){
				fin.getline(mobilenum,15,',');
				cin>>mobilenum;
				start = make2d(fileData[row],mobilenum,row,start);
				fout<<mobilenum<<',';
			}
			else{
				fin.getline(mobilenum,15,',');
				start = make2d(fileData[row],mobilenum,row,start);
				fout<<mobilenum<<',';
			}
		
			
		}
		count++;
	}
	fin.close();
	fout.close();
	
	reading2( firstname,lastname,address, landnum,mobilenum);
}
# include<iostream> 
# include<fstream>
# include<cstring>
using namespace std;
void sort (){
	char firstname[15];
	char lastname[15];
	char address[50];
	char landnum[15];
	char mobilenum[15];
	ifstream fin;
	ofstream fout;
	fin.open("king.txt");
	fout.open("output.txt");
	
	
	for(char firstchar='a';firstchar<='z';firstchar++){
	
		for(char secondchar='a';secondchar<='z';secondchar++){
	while(!fin.eof()){
	
				fin.getline(firstname,15,',');
				fin.getline(lastname,15,',');
				fin.getline(address,50,',');
				fin.getline(landnum,15,',');
				fin.getline(mobilenum,15,',');
			
			if(firstname[0]==firstchar ){
				
				cout<<firstname[0];
			}	
		
			
			
		}
	}
}

}


int main(){
	int sentinel =1;
	char fname[15];
	char lname[15];
	char ad[50];
	char lnum[15];
	char mnum[15];	
	reading(fname,lname,ad,lnum,mnum);
	cout<<"if you want to enter a new contact press 1 ,2 for search,3 for delete,4,modify,5 for sort"<<endl;
	cin>>sentinel;
	if(sentinel==1){
	newfirstname(fname);
	newlastname(lname);
	newaddress(ad);
	newlandnum(lnum);
	newmobilenum(mnum);
	
	}
	else if(sentinel==2){
	cout<<"enter 1 for search by land number 2 for lastname 3 for firstname 4 for mobilenumbet "<<endl;
	cin>>sentinel;
	
}
else if(sentinel==3){
	de( fname, lname, ad,lnum,  mnum);
}
else if(sentinel==4){
	modify();
}
else if (sentinel==5){
	sort();
}
return 0;
}
	
