#include <iostream>
 
int ma ()
{

   	
   	cout<<" \n\n\n    �ƻ�����"<<endl;
   	cout<<" 1.2.3.4��5.6.7.8.9.0   "<<endl;
	cout<<"����������Ҫ�༭�ļƻ�������:";

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
