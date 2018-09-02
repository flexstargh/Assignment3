#include <iostream>

using namespace std;

int main()
{
    double TotalScore = 0;
    cout << "What was your total score" << endl;
    cin>>TotalScore;

    if(TotalScore>100){
        cout<<"Please enter a valid number"<<endl;
    }

    if(TotalScore>=80 && 100>TotalScore){
        cout<< "You had an A" << endl;
    }

   else if(75<=TotalScore && 80>TotalScore){
        cout<<"You had a B+." <<endl;
    }

   else if(70<=TotalScore && 75>TotalScore){
    cout<<"You had a B." <<endl;
   }



    if(TotalScore>=65 && 70>TotalScore){
        cout<< "You had an C+" << endl;
    }

   else if(60<=TotalScore && 65>TotalScore){
        cout<<"You had a C." <<endl;
    }

   else if(55<=TotalScore && 60>TotalScore){
    cout<<"You had a D+." <<endl;
   }

       if(TotalScore>=50 && 55>TotalScore){
        cout<< "You had a D" << endl;
    }

   else if(45<=TotalScore && 50>TotalScore){
        cout<<"You had an E." <<endl;
    }


    else if(TotalScore<45 && TotalScore>0){
        cout<<"You had an F." <<endl;
    }

    else{
       cout<< "Value Is Invalid" ;

    }

    return 0;
}
