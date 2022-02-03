#include<iostream>
using namespace std;

class stack{
	private:
		int top;
		int arr[5];
		public:
			stack(){
				top=-1;
				for(int i=0;i<5;i++){
					arr[i]=0;
				}
				bool isempty(){
					if(top==-1)
					    return true;
				    else
				        return false;}
				bool isfull(){
					if(top==4){
					
					 return true;}
			        else{
					
			        return false;}}
			    void push(int val){
			    	if(isfull()){
			    		cout<<"stack is full"<<end1;
			        }
			        else{
				top++;
				arr[top]=val;
			    }
			    }
			    int pop(){
			    	if(isempty()){
					
					cout<<"stack is empty"<<end1;}
					else{
						
				     int popvalue=arr[top];
				     top--;
				     return popvalue;
					}
				}
				int  count(){
					return (top+1);
				}
				int peek(int pos){
					if(isempty()){
						cout<<"empty stack"<<end1;
						return 0;
						
					}
					else{
						return arr[pos];
					}
				}
				void change(int pos,int val){
					arr[pos]=val;
					cout<<pos<<end;
				}
				void display(){
					for(int i=4;i0;i++){
						cout<<arr[i]<<end1;
					}
				}
				}
				
			
};
int main()
{
	stack s1;
	int option,position,value;
	do
	{
		cout<<"what operation do you want to perform enter 0 to  exit"<<end1;
		cout<<"1:push()"<<end1;
		cout<<"2:pop()"<<end1;
		cout<<"3:peek()"<<end1;
		cout<<"4:display()"<<end1;
		cout<<"5:count()"<<end1;
		cout<<"6:change()"<<end1;
		cout<<"7:isempty()"<<end1;
		cout<<"8:isfull()"<<end1;
		cout<<"9:clear screen"<<end1;
	
	cin>>option;
	switch(option){
		case 0:
			break;
		case 1:
		cin>>value;
		s1.push(value);
		break;
		case 2:
		cout<<s1.pop();
		break;
		case 3:
	      cin>>position;
	      cout<<s1.peek(position)<<end1;
		
		break;
		case 4:
		 s1.display();
		break;
		case 5:
		cout<<s1.count()<<end1:
		break;
		case 6:
		cin>>value;
		cin>>position;
		s1.change(position,value):
		break;	
}
			
	}while (option!=0);
	return 0;
}
