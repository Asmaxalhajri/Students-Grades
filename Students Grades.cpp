#include<iostream>
#include<string>
using namespace std;
int main()
{
 int rowes=5 , coul=6;
    string student[rowes][coul]={ { " " , "CS211", "CS221","CS311", "MATH301", "CIS321"},
        {"Ahmed" ,"A+" ,"A+","-","A","-" }
        ,{"Khalid" , "A" , "B" , "A" , "F" , "B"},
        {"omer" ,"C","F", "D+" ,"C","-"},
        {"faisal" , "A" , "b+" ,"DN" , "F" , "-" }
    };
    
    for(int i=0 ; i<rowes ; i++ )
    {
        for(int j=0; j<coul ; j++)
        
        {
            cout<<" "<<student[i][j]<<" ";
        }
        cout<<"\n";
    }
	
	//qusetion-1 
	cout<<" enter student name to find What are the courses that a given student can take?"<<"\n";
	cout<<"be careful to write the name like  the names in above table"<<"\n";
	string name;
	cin>>name;
		cout<<name<<" "<<"can take the follwing cource "<<"\n";
	for(int i=1 ;i<rowes ; i++)
{
	if(name==student[i][0])
	{
	
		for(int j=1 ; j<coul ;j++)
		{
			if(student[i][j]=="-"||student[i][j]=="F"||student[i][j]=="DN")
			cout<<student[0][j]<<"  ";
	
		}
	
	}

}
cout<<endl;


//question 2 
int counter=0;
cout<<" enter student name to find How many credit hours a certain student has taken ?"<<"\n";
	cout<<"be careful to write the name like  the names in above table"<<"\n";
cin>> name;
for(int i=1 ;i<rowes ; i++)
{
	if(name==student[i][0])
	{
		for(int j=1 ; j<coul ;j++)
		{
			if(student[i][j]!="-")
			counter+=3;
		}
	}

}
cout<<name<<" "<<"has taken "<<counter<<"credit hours"<<"\n";

//question 3 
int counter1=0;
cout<<" enter student name to find How many credit hours a certain student has finished ?"<<"\n";
	cout<<"be careful to write the name like  the names in above table"<<"\n";
cin>> name;
for(int i=1 ;i<rowes ; i++)
{
	if(name==student[i][0])
	{
		for(int j=1 ; j<coul ;j++)
		{
			if(student[i][j]!="-" && student[i][j]!="F"  && student[i][j]!="DN")
			counter1+=3;
		}
	}

}
cout<<name<<" "<<"has finished "<<counter1<<"credit hours"<<"\n";


//question 4 
cout<<"What is the course that most students have got A in it?"<<"\n";
int max=0;
int mylist[]={};
for(int i=1 ;i<coul ; i++)
{
	int count=0;
		for(int j=1; j<rowes ;j++)
		{
			if(student[j][i]=="A" )
			count++;
			
		}
	
	max= count ;

mylist[i]=count;
}

int h;
int w=0;
for(int k=1; k<=5 ;k++)
{
		cout<<"index is " <<k <<" The element is "<<mylist[k]<<"\n";
	if(mylist[k]>w)
	{
	w=mylist[k];
	h=k;
	cout<<"Max is "<<w;
	cout<< " h is "<<h;
	cout<<endl;
	}
}

cout<<student[0][h]<<"\n";

//question 5
cout<<"What is the course the most students have passed?";
int maxpassed=0;
int mylist5[]={};
for(int i=1 ;i<coul ; i++)
{
	int count=0;
		for(int j=1; j<rowes ;j++)
		{
			if(student[j][i]!="F" && student[j][i]!="-" && student[j][i]!="DN" )
			count++;
			
		}
	
	maxpassed= count ;

mylist5[i]=count;
}

int x;
int l=0;
for(int k=1; k<=5 ;k++)
{
		cout<<"index is " <<k <<" The element is "<<mylist5[k]<<"\n";
	if(mylist5[k]>l)
	{
	l=mylist5[k];
	x=k;
	//cout<<"Max is "<<w;
	//cout<< " h is "<<h;
	//cout<<endl;
	}
}

cout<<student[0][x]<<"\n";

//question 6 
/*cout<<"Change the grade of the student  in Math 301 from F to B."<<"\n";
student[4][4]="B";
 for(int i=0 ; i<rowes ; i++ )
    {
        for(int j=0; j<coul ; j++)
        
        {
            cout<<" "<<student[i][j]<<" ";
        }
        cout<<"\n";
    }
*/	

//question 7 
cout<<"What is the course that most students have failed in?"<<"\n";
int maxfaild=0;
int mylist7[]={};
for(int i=1 ;i<coul ; i++)
{
	int count=0;
		for(int j=1; j<rowes ;j++)
		{
			if(student[j][i]=="F"  )
			count++;
			
		}
	
	maxfaild= count ;

mylist7[i]=count;
}

int F;
int N=0;
for(int k=1; k<=5 ;k++)
{
		cout<<"index is " <<k <<" The element is "<<mylist7[k]<<"\n";
	if(mylist7[k]>N)
	{
	N=mylist7[k];
	F=k;
	//cout<<"Max is "<<w;
	//cout<< " h is "<<h;
	//cout<<endl;
	}
	
}

cout<<student[0][F]<<"\n";


//question 8

cout<<"What is the course that most students didnt take yet?"<<"\n";
int maxtake=0;
int mylist8[]={};
for(int i=1 ;i<coul ; i++)
{
	int count=0;
		for(int j=1; j<rowes ;j++)
		{
			if(student[j][i]=="-"  )
			count++;
			
		}
	
	maxtake= count ;

mylist8[i]=count;
}

int T;
int Q=0;
for(int k=1; k<=5 ;k++)
{
		cout<<"index is " <<k <<" The element is "<<mylist7[k]<<"\n";
	if(mylist7[k]>Q)
	{
	Q=mylist7[k];
	T=k;
	//cout<<"Max is "<<w;
	//cout<< " h is "<<h;
	//cout<<endl;
	}
	
}

cout<<student[0][T]<<"\n";

}

		
		

