#include <iostream>

using namespace std;

class C_complex
{
  private:
    int real_no1;
    int imaginary_no1;
    int real_no2;
    int imaginary_no2;
    int real_part = 0;
    int imaginary_part = 0;
    int realpart_multiply = 0;
    int imgpart_multiply = 0;
   
   public:
    void get_input()
    {
      cout<<"enter real and imaginary part of complex number 1:"<<endl;
      cin>> real_no1;
      cin>> imaginary_no1;
     
      cout<<"enter real and imaginary part of complex number 2:"<<endl;
      cin>> real_no2;
      cin>> imaginary_no2;
       
    }
   
    void Addition()
    {
    
        cout<<"Addition of complex number 1 and complex number 2:"<<endl;
         real_part = real_no1+real_no2;
         imaginary_part = imaginary_no1+imaginary_no2;
       
    }
   
   
    void Multiplication()
    {
         realpart_multiply = (real_no1*real_no2)+(imaginary_no1*imaginary_no2);
         imgpart_multiply = (real_no1*imaginary_no2)+(real_no2*imaginary_no2);
        
    }
   
    void display()
    {
      if(real_part != 0 || imaginary_part !=0)
      {
         cout<<"Addition of complex number 1 and complex number 2:"<<endl;
         
         if(imaginary_part > 0)
         {
           cout<< real_part << "+" << "i" << imaginary_part << endl;

         }
        else if (imaginary_part < 0) 
        {
            cout<< real_part << "-" << "i" << -imaginary_part << endl;
        }

      }

        if (realpart_multiply != 0 || imgpart_multiply != 0) 
      {
        cout << "Result of multiplication: ";

        if (imgpart_multiply > 0)
         {
            cout << realpart_multiply <<  " + " << imgpart_multiply << "i\n";
        } 
        
        else if (imgpart_multiply < 0) 
        {
            cout << realpart_multiply <<  " + " << imgpart_multiply << "i\n";
        }

      }

       if (real_part == 0 && imaginary_part == 0)
      {
        cout << "the addition result is zero";
      }

      else if (realpart_multiply == 0 && imgpart_multiply == 0)
      {
        cout << "the multiplication result is zero";
      }

    }
};


int main()
{  
    int choice;
   C_complex obj_complex;
    cout<<"Hello World"<<endl;
   
    cout<<"1.enter the complex numbers:"<<endl;
    cout<<"2.Addition of two complex numbers:"<<endl;
    cout<<"3.multiplying the two compplex numbers"<<endl;
    cout<<"4.displaying the function:"<<endl;

    do
    {
     cout<<"Enter you choice:";
     cin>>choice;

     switch(choice)
     {
     case 1:
         obj_complex.get_input();
          break;
    
     case 2:
         obj_complex.Addition();
         break;

     case 3:
         obj_complex.Multiplication();
         break;

     case 4:
         obj_complex.display();
         break;

    default:
        cout<<"input correct choice";
        break;
     }
  
    }while(1);
    return 0;


}
    