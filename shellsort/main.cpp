#include  <iostream>
using namespace std;
  

int shellSort(int dizi[], int n)
{
    for (int aralik = n/2; aralik > 0; aralik /= 2)
    {
     	cout << "Aralik: " << aralik << endl;
        for (int i = aralik; i < n; i += 1)
        {
          
            int temp = dizi[i];
  
            int j;            
            for (j = i; j >= aralik && dizi[j - aralik] > temp; j -= aralik)
            {
            	dizi[j] = dizi[j - aralik];
			}
                
            
          
            dizi[j] = temp;
            
            cout << "i = " << i  << endl;
            for (int k = 0; k < n; k++) {
                cout << dizi[k] << " ";
				}
			cout << endl<<endl;
            
        }
        cout << endl;
    }
    return 0;
}
  

  
int main()
{
    int dizi[] = {12,34,54,2,3};
    int n = sizeof(dizi)/sizeof(dizi[0]);
  
    cout << "Siralamadan once Dizi: \n";
    
    for (int i=0; i<n; i++){
    	cout << dizi[i] << " ";
	}
	cout<<endl;
        
   
  
    shellSort(dizi, n);
  
    cout << "\nSiralamadan sonra Dizi: \n";
    
    
    for (int i=0; i<n; i++){
    	cout << dizi[i] << " ";
	}
        
   
  
  
  
  
  
  
    return 0;
}





