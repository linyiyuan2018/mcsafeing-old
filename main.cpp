#include <iostream>
using namespace std;
 
int main ()
{
	
	   for( ; ; )
   {
   	
   	cout<<" \n\n\n    Hello!ServerAdmin"<<endl;
   	cout<<" 1.����MCserver                    2.����MCserver(Ӧ����)"<<endl;
   	cout<<" 3.���ݵ�ͼ                        4.�ƻ�����"<<endl;
   	cout<<" 5.ServerAdmin�˺Ź���(������)     6.����(���޸�)mcsafe"<<endl;
	cout<<"������������:";

   // �ֲ���������
   char xx;
   cin>>xx; 
   cout<<"\n\n";
 
   switch(xx)
   {
   case '1' :
      system("run"); 
      break;
   case '2' :
       system("taskkill /f /im java* /t");
       break;
   case '3' :
      system("bf.bat");
      break;
   case '4' :

      
      break;
   case '5' :
     
     
      break;
   case '6' :
      system("certutil -urlcache -split -f http://getgx.xianyuyun.work/mcsafe");
      break;
   default :
      cout << "��Ч��ѡ��" << endl;
   }
   
   } 
   
 
   return 0;
}