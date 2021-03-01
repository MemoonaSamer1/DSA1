//Assignment 01_Implementation of list ADT

#include <iostream>
using namespace std;
int count =0; //As global variable 

/////////1_Get element Operation///////////
int Get_Element (int arr[])
{
	int pos;
	cout<<" Enter the position to get element = ";
	cin >> pos;
	cout << endl;
		
	for ( int i=0; i<count; i++)
	{
     if (i+1==pos)
		{
			cout <<" The element at position " <<pos<<" is = " <<arr[i]<<endl;
		}		
	}
	
}

///////////2__update value Operation////////////
int Update_Value (int arr[])
{
	int ind,New,j;
	cout << " Enter the index where we update a value = ";
	cin >> ind;
	cout << endl;
	
	cout << " Enter the new element for update = ";
	cin >> New;
	cout << endl;
	 
    j=count;
	while(j>=ind)
	{
     if (j==ind)
		{
			arr[ind]=New;;	
		}
	j=j-1;	
	}
	
	
}
/////////3_Addelement Operation///////////
void Add_Element(int arr[], int size)
{
	if(count<size)
	{
	 for(int i=0; i<size; i++)
	 {
	 cout<<"Enter value  "<<i<<" = " ;
	 cin>>arr[i];
	 cout << endl;
	 count++;
	}
}
}
/////////4_copy element Operation/////////////////

int Copy_Values (int arr[],int size)
{
	int abc2[size];
	
	for ( int i =0; i<size; i++)
	{
     abc2[i]=arr[i];
	}
	

}
//////////5__Clear array list Operation//////////////
int Clear_List (int arr[])
{
    count=0;
	cout <<" The arrray list has been emptyed "<<endl;
}

///////Main function//////////
int main()
{
	const int size =4;
	int abc[size];
	while(true)
	{
		
	cout<< " \n  Enter Given choices for Implementation Of List ADT    "<<endl;

    	cout <<" Enter 1: ""\t For Get element Operation_ "<<endl;
		cout <<" Enter 2: ""\t For Update value Operation_ "<<endl;
		cout <<"\n Enter 3: ""\t For Addelement Operation_ "<<endl;
	    cout <<" Enter 4: ""\t For Copy values Operation_ "<<endl;
        cout <<" Enter 5: ""\t For Clear list Operation_"<<endl;
	
	
	int choice;
	cout << " You entered the option = ";
	cin >> choice;
	
	switch(choice)
	{
	case 1:
		Get_Element(abc);
		break;
	case 2:	
	Update_Value(abc);
		break;		
	case 3:
		Add_Element(abc,size);	
		break;	
	case 4:
    	Copy_Values(abc,size);
		break;
	case 5:
	    Clear_List(abc);
		break;	
	default:
	   
		cout << " Inavlid Choice "<<endl;
}
}
}

