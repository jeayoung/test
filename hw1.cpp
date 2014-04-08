#include <iostream>
#include <cstdlib>
#include <fstream>

using namespace std;
void sum(ifstream& in, ofstream& out, int& num);

void sum(ifstream& in, ofstream& out, int& num){
	num+=1;
	out<<num<<endl;//주석달기
}
void main(){//오호 hw1인가!
	int num;
	ifstream in;
	in.open("input.txt");
	
	ofstream out("input.txt",ios::app);
	out<<endl;

	for(int i=0; i<100; i++){
	while(in.eof()){
		in>>num;
	}
	sum(in,out,num);
	}
	out.close();

}