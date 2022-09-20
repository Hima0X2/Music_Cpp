#include<iostream>
#include<windows.h>    //used for PlaySound function
#include<fstream>    //used for file handling
using namespace std;
int main()
{
  char audiofile_char[50];
  string audiofile_str;
  fstream fp;
  while(1){
  //Enter name of a 'wav' audio file with .wav extension and make sure it is present in the folder where your program is saved.
  cout<<"Enter the name of an audio file with .wav extension: ";
  cin>>audiofile_char;
  fp.open(audiofile_char, ios::in);
    if (fp != NULL)
    {
      string audiofile_str =audiofile_char;  
  PlaySound(audiofile_str.c_str(), NULL, SND_SYNC);
  }
  else
  {
    cout<<"\nAudio file couldn't run..!!";
    cout<<"\nCheck the following things: \n 1. Your file is an original .wav audio file. \n 2. You have mentioned '.wav' extension in the name of file. \n 3. It is present in the folder where your program is saved.\n";
  }  
   fp.close();
}
  return 0;
}
