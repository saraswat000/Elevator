#include<bits/stdc++.h>
using namespace std;
int a[10]={0};
int b[10]={0};

void up(int floor){
    a[floor-1]++;
}
void down(int floor){
    b[floor-1]++;
}
int main(){
    int in_pos=0,i,j,k,a1=0,a2=0,fi_pos,p_in=0,c[8],leave=0,enter=0,b_min,c_min,a_min;
    for(i=0;i<8;i++)
   c[i]=11;
   up(1);
   up(3);
   up(5);
   down(7);down(2);
  //  while(1){
        for(i=0;i<10;i++){
            a1+=a[i];
            a2+=b[i];}
            if(a1>a2){
                cout<<"Lift go in upward direction"<<endl;
                for(i=in_pos;i<10;i++){
                    if(a[i]!=0||b[i]!=0){
                        for(j=0;j<a[i]+b[i];j++){
                            cout<<"Enter the Floor do u want to travel :";
                            cin>>c[p_in];
                            cout<<endl;
                            enter++;
                            p_in++;
                            a[i]=0;
                            b[i]=0;
                            fi_pos=i
                        }
                        
                	cout<<enter<<" people enter at "<<i<<" floor"<<endl; 
                	
                    	
                enter=0;	
                	
                }
                for(j=0;j<8;j++){
                        if(c[j]==i){
                        p_in--;
                        leave++;
                        c[j]=11;
                        }}
                if(leave>0){
                cout<<leave<<" people leave at "<<i<<" floor"<<endl;  
                fi_pos=i;}
                	
                    leave=0;
                    
                }
            }
            
                
            else
                cout<<"Lift go in downward direction";

            
        }
    

    
    
    
    
    




