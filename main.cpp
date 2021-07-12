#include <iostream>
using namespace std;
 
int main ()
{
	
	   for( ; ; )
   {
   	
   	cout<<" \n\n\n    Hello!ServerAdmin"<<endl;
   	cout<<" 1.启动MCserver                    2.打死MCserver(应急用)"<<endl;
   	cout<<" 3.备份地图                        4.计划任务"<<endl;
   	cout<<" 5.ServerAdmin账号管理(开发中)     6.更新(并修复)mcsafe"<<endl;
	cout<<"请输入命令编号:";

   // 局部变量声明
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
      cout << "无效的选项" << endl;
   }
   
   } 
   
 
   return 0;
}