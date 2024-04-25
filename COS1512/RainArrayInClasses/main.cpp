#include <iostream>

using namespace std;
class RainData{
public:
    RainData() ;// constructor
    RainData(string m); //overloaded constructor
    string getMonth(); //accessor
    int getRainfall(int i) ;//accessor for rainfall on specifc day of month
    void setMonth(string m); //mutator for month
    void setRainfall(int day,int rainfall) ;//mutator to set rainfall for specifc day of the month

private:
    int rainMonth[5]; //rainfall for one month
    string month;// the month for which the data is kept

};

//class implementation
RainData::RainData(){
    for(int i = 0;i < 5;i++)
        rainMonth[i]=0;
        month="";

}
RainData::RainData(string m){
    for(int i = 0; i<5;i++)
        rainMonth[i]=0;
        month = m;

}

string RainData::getMonth(){
    return month;
}
int RainData::getRainfall(int i){
    return rainMonth[i];
}
void RainData::setMonth(string m){
    month = m;
}
void RainData::setRainfall(int day,int rainfall){
    rainMonth[day] = rainfall;
}


int main()
{
    RainData oneMonth;
    string month;
    int rf;
    cout << "Enter month: "<<endl;
    cin >> month;
    oneMonth.setMonth(month);

    for(int i = 0;i < 5;i++){
        cout << "Enter Rainfall for day " <<i+1 << ": "<< endl;
        cin >> rf;
        oneMonth.setRainfall(i,rf);
    }


    for(int i = 0; i < 5;i++){
    cout << "Rainfall for day "<< i+1 <<": "<< oneMonth.getRainfall(i) <<endl;
    }
    return 0;
}
