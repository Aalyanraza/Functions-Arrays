#include <iostream>
using namespace std;
int main()
{
   int input, counting = 1;
   bool repeated = false, ascending = true;
   const int constantSize1 = 5, constantSize2 = 5, constantSize3 = 5, constantSize4 = 5, constantSize5 = 5;
   const int constantSizeFinal = constantSize1 + constantSize2 + constantSize3 + constantSize4 + constantSize5;
   
   int Array1[constantSize1], Array2[constantSize2], Array3[constantSize3], Array4[constantSize4], Array5[constantSize5], FinalArray[constantSizeFinal];
   
   cout << endl << "Enter inputs into 1st array (ascending order): ";
   
   while (ascending == true)
   {
      ascending = false;
      for (int j = 0; j < constantSize1; j++)
      {
         cin >> Array1[j];
      }
   
      for (int j = 0; j < constantSize1; j++)
      {
         if (Array1[j] > Array1[j+1])
         {
            cout << "Read input in correct format\n";
            
            ascending = true;
            
            break;
         } 
      }
   }
   
   ascending = true;
   
   cout << endl << "Enter inputs into 2nd array (ascending order): ";
   
   while (ascending == true)
   {
      ascending = false;
      for (int j = 0; j < constantSize2; j++)
      {
         cin >> Array2[j];
      }
      
      for (int j = 0; j < constantSize2; j++)
      {
         if (Array2[j] > Array2[j+1])
         {
            cout << "Read input in correct format\n";
            
            ascending = true;
            
            break;
         } 
      }
   }
      ascending = true;
   
   cout << endl << "Enter inputs into 3rd array (ascending order): ";
   
   while (ascending == true)
   {
      ascending = false;
      for (int j = 0; j < constantSize3; j++)
      {
         cin >> Array3[j];
      }
      
      for (int j = 0; j < constantSize3; j++)
      {
         if (Array3[j] > Array3[j+1])
         {
            cout << "Read input in correct format\n";
            
            ascending = true;
            
            break;
         } 
      }
   }
      ascending = true;
   
   cout << endl << "Enter inputs into 4th array (ascending order): ";
   
   while (ascending == true)
   {
      ascending = false;
      for (int j = 0; j < constantSize4; j++)
      {
         cin >> Array4[j];
      }
      
      for (int j = 0; j < constantSize4; j++)
      {
         if (Array4[j] > Array4[j+1])
         {
            cout << "Read input in correct format\n";
            
            ascending = true;
            
            break;
         } 
      }
   }
      ascending = true;
   
   cout << endl << "Enter inputs into 5th array (ascending order): ";
   
   while (ascending == true)
   {
      ascending = false;
      for (int j = 0; j < constantSize5; j++)
      {
         cin >> Array5[j];
      }
      
      for (int j = 0; j < constantSize5; j++)
      {
         if (Array5[j] > Array5[j+1])
         {
            cout << "Read input in correct format\n";
            
            ascending = true;
            
            break;
         } 
      }
   }
      ascending = true;
   
 
   //Merging Arrays
   
   int i = 1;
   FinalArray[0] = Array1[0];
   
   
   for (int j = 1; j < constantSize1; i++, j++)// (A)
   {
       repeated = false;
       
      for (int w = 0; w < i; w++)
      {
         if (Array1[i] == FinalArray[w])
         {
            repeated = true;
            
            break;
         }
      }   
         if ( repeated == true)
         { 
            i--;
         } else { FinalArray[i] = Array1[j]; counting++;}// (B)
   }
   
   for (int j = 1; j < constantSize2; i++, j++)// (A)
   {
       repeated = false;
       
      for (int w = 0; w < i; w++)
      {
         if (Array2[i] == FinalArray[w])
         {
            repeated = true;
            
            break;
         }
      }   
         if ( repeated == true)
         { 
            i--;
         } else { FinalArray[i] = Array2[j]; counting++;}// (B)
   }
   

   for (int j = 1; j < constantSize3; i++, j++)// (A)
   {
       repeated = false;
       
      for (int w = 0; w < i; w++)
      {
         if (Array3[i] == FinalArray[w])
         {
            repeated = true;
            
            break;
         }
      }   
         if ( repeated == true)
         { 
            i--;
         } else { FinalArray[i] = Array3[j]; counting++;}// (B)
   }

   for (int j = 1; j < constantSize4; i++, j++)// (A)
   {
       repeated = false;
       
      for (int w = 0; w < i; w++)
      {
         if (Array4[i] == FinalArray[w])
         {
            repeated = true;
            
            break;
         }
      }   
         if ( repeated == true)
         { 
            i--;
         } else { FinalArray[i] = Array4[j]; counting++;}// (B)
   }   
   
   for (int j = 1; j < constantSize5; i++, j++)//(A)
   {
       repeated = false;
       
      for (int w = 0; w < i; w++)
      {
         if (Array5[i] == FinalArray[w])
         {
            repeated = true;
            
            break;
         }
      }   
         if ( repeated == true)
         { 
            i--;
         } else { FinalArray[i] = Array5[j]; counting++;}// (B)
   }
   
   const int MergeSize = counting;//constant size of merged array
   int MergedArray[MergeSize];//declaring merged array
  
  
   for (int j = 0; j < MergeSize; j++)//elements in merged array
   {
      MergedArray[j] = FinalArray[j];
      cout << FinalArray[i] << " ";
   } cout << endl << endl;
   
   
   //Bubble Sort descending order
   
   int temp;
   
   for (int j = MergeSize; j > 0; j--)
   {  
      for (int i = MergeSize-1; i > 0; i--)
      {
         if (MergedArray[i-1] < MergedArray[i])
         {
            temp = MergedArray[i];
            MergedArray[i] = MergedArray[i-1];
            MergedArray[i-1] = temp;
         }
      }   
   } 
   
   
   for (int i = 0; i < counting; i++)//printing final array
   {
      cout << MergedArray[i] << " ";
   }
    cout << endl;
  
   
   return 0;  
}