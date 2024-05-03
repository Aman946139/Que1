// #include<iostream>
// using namespace std;
// int main(){

//    int size ;
// cout<<"this is the size: ";
// cin>>size;

// int arr [size];
// for(int i =0; i<size; i++){
//     cin>>arr[i];
  
// }

// int arr[6]={1,2,3,4,5};

// for(int j=0; j<6; j++){
//     cout>>arr[j];
// }

// }


// #include<iostream>
// using namespace std;
// int main(){

//    int size;
//    cout<<"enter your size ";
//    cin>>size;
//    int arr[size];
//    for(int i=0; i<size; i++){
//     cin>>arr[i]; 
    
//    }
//    for( int i=0; i<<size; i++){
//     cout<<arr[i];
//    }



//    int value;
//    cout<<"enter your size ";
//    cin>>value;
//    int arr[value];
//    for(int j=0; j<value; j++){
//     cin>>arr[j];
    
//    }
//    for( int j=0; j<<value; j++){
//     cout<<arr[j];
//     int arr[value];
//    for(int j=0; j<value; j++){
//     cin>>arr[j];
//    }


   


// }
// }









#include<iostream>
#include<vector>
using namespace std;

int findUniqueElement(vector<int> value){
   int uniqueaValue = 0;
   for(int i=0;i<value.size();i++){
      uniqueaValue=uniqueaValue ^ value[i];

   }
   return uniqueaValue;
}
int main(){
   vector<int>value={1,1,5,4,4};
   int uniqueaValue=findUniqueElement(value);
   cout<<"Unique Value :"<<uniqueaValue<<endl;



}



















// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
    
   //  int vector1,vector2;
   //  cout<<"enter the length of vector1 : ";
   //  cin>>vector1;
   //  cout<<"enter the length of vector2 : ";
   //  cin>>vector2;
    
   //  vector<int>value1(vector1);
   //  vector<int>value2(vector2);
   //  vector<int>mergedVector;
    
   //  cout<<endl<<"***** enter the values of first vector *******"<<endl;
    
   //  for(int i=0;i<value1.size();i++){
   //      cin>>value1[i];
   //      mergedVector.push_back(value1[i]);
   //  }
    
   //  cout<<endl<<"***** enter the values of second vector *******"<<endl;
    
   //  for(int i=0;i<value2.size();i++){
   //      cin>>value2[i];
   //      mergedVector.push_back(value2[i]);
   //  }
    
   //  cout<<endl<<"***** merged values *******"<<endl;
    
   //  for(int i=0;i<mergedVector.size();i++){
   //    cout<<mergedVector[i]<<" ";
   //  }
    
    














// }