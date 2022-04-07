#include<stdio.h>
#include<unistd.h>
#include<string.h>
int main() { 
  FILE *fp=NULL; 
  FILE *fh=NULL; 
  char buff[128]={0}; 
  memset(buff,0,sizeof(buff)); 
  fp=popen("ls -l","r");//將命令ls-l 同過管道讀到
  fp fh=fopen("shell.c","w+");// 創建一個可寫的文件 
  fread(buff,1,127,fp);//將fp的數據流讀到buff中
  fwrite(buff,1,127,fh);//將buff的數據寫入fh指向的文件中
  pclose(fp);
  fclose(fh);
  return 0;
}

