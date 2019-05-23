#include <iostream>
#include <string>
#include <cstring>
#include <conio.h>

using namespace std;

int main ()
{
	char *arr;
	string input;
	int size;
	
	cout << "input: ";
	char a;				
    for(;;)
	{
        a =getch();
        if(a=='\b'){	
        if(size!=0)
			{
            	cout << "\b \b";
            	--size;
            	input = input.substr(0, input.size()-1);
            }
        }
        else if((a>=97 && a<=122)||(a>=65 && a<=90)||(a>=48 && a<=57))
		{
            input+=a;
            ++size;
            cout << a;
        }
        else if(a=='\r')
		{
            break;
    	}
    }
	
	arr =new char[size+1];
	strcpy(arr, input.c_str());


	cout << endl << "sorted: ";
	for(int bbs1=0; bbs1<size; bbs1++)
	{
		for(int bbs2 =0; bbs2<size-bbs1; bbs2++)
		{
			if (arr[bbs2] > arr[bbs2+1])
			{
				char temp = arr[bbs2]; 
			    arr[bbs2] = arr[bbs2+1]; 
			    arr[bbs2+1] = temp;
			} 
		}
	}
	
	for(int i=0; i<=size; i++){
		cout <<*(arr+i);
	}
	
	
	cout << endl << "array size: " << size << endl;
	
	return 0;

}
