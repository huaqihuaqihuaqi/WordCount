#include<stdio.h> 
int WordCount(char file[]){
    FILE *p=NULL;
    int count=0;
    p=fopen(file,"r");
    if(p==NULL){
        printf("Ѱ���ļ�ʧ��\n");
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
    fclose(p);
    return count;
}
int main(){
    char input[2],File[100];
    while(1){
        printf("�������û����wc.exe-");
        scanf("%s",&input);
        if(input[0]=='w'){
            printf("�������ļ�����");
            scanf("%s",&File); 
            int count = 0; 
            count=WordCount(File);
            printf("�ļ��Ĵ���Ϊ��%d\n",count);
            return 0;
        }
    }
}

