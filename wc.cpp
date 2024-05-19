#include<stdio.h> 
int WordCount(char file[]){
    FILE *p=NULL;
    int count=0;
    p=fopen(file,"r");
    if(p==NULL){
        printf("寻找文件失败\n");
        return -1;
    }
    char mychar;
    mychar = fgetc(p);
    while(mychar!=-1){
        if(mychar>='a'&&mychar<='z'||mychar>='A'&&mychar<='Z'||mychar>='0'&&mychar<='9'){
            while(mychar>='a'&&mychar<='z'||mychar>='A'&&mychar<='Z'||mychar>='0'&&mychar<='9'){
                mychar=fgetc(p);
            }
            count++;
            mychar=fgetc(p);
        }
        mychar=fgetc(p);
    }
    delete p;
    return count;
}
int main(){
    char input[10],File[200];
    while(1){
        printf("请输入用户命令：wc.exe-");
        scanf("%s",&input);
        if(input[0]=='w'){
            printf("请输入文件名：");
            scanf("%s",&File); 
            int wordcount=0;
            wordcount=WordCount(File);
            printf("文件的词数为：%d\n",wordcount);
            continue;
        }
    }
    return 0;
}

