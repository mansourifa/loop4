#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double x,n,x0,sum=1.000,k=1,x1; //x1=قدرمطلقx //x0=صورت کسر //k=کسر //z=فاکتوریل مخرج
    int z=1,i;
    cin>>x>>n;
    x0=x;
    if(x>=0){
	    if(x>=n){
	        sum+=x;
	        for(i=2;k>=n;i++){
	            x0*=x;
	            z*=i;
	            k=x0/z;
	        if(k<n)
	            break;
	        sum+=k;
	        }
		}
	}	
	else{
	    x1=-x;
	    if(x1>=n){
	    	sum+=x;
		    for(i=2;x1>n;i++){ 
		        x0*=x; 
		        z*=i;
		        k=x0/z; 
		    	if(k<0)
		            x1=-k;
		    	else
		            x1=k;
		        if(x1<n)
		            break;
		        sum+=k;
		    }
		}
	}
	
	cout<<fixed<<setprecision(3)<<sum<<endl;
    return 0;
}
