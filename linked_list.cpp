#include<iostream>
#include<string>
#include<string.h>
#include<ctime>
#include<cmath>
#include<stdlib.h>//rand() srand()
#include<list>
#include<windows.h>
#include<vector>
#include <fstream>
#include<conio.h>//getch()
#include<ctype.h>
using namespace std;


class link_list{
    public:
    string data;
    public:
    link_list *next;
};


//��ӡ��Ȩ
void show_copyright();
//��ӡ��ǰʱ��

void show_time();
//��ʾ��ǰʱ��

void show_time();
//��ʾ���˵�

void show_demo();
//��ʾɾ�����Ķ����˵�

void show_delete_demo();
//��ʾ��������Ķ����˵�

void show_sort_demo();
//��ʾ������Ķ����˵�

void show_insert_demo();
//ѡ����ִ���ѡ��ʱ��ӡ��ʾ

void show_error();


//��ʼ����������һ���ڱ����
link_list* init_list ();

//�����½��Ŀռ�
link_list * new_node();

//���ӵ��������ǰ��
void add_front(link_list *head,link_list *p);

//����һ������������ݵ�(����)����
int create_list(link_list *head);

//��������Ƿ�Ϊ�գ���Ϊ�գ�����false
bool check_head (link_list *head);

//��ʾ20�����
void show_list(link_list *head);

//���㵱ǰ������
int count_list(link_list *head);


//������������������ݴ����ļ���
void write_data(link_list *head);

//������ʾ���������ļ���(ȫ��)����
void print_data();


//���һ�����������Ƿ�Ϸ�
bool check_illegal_data(string data);

//��ʾ�����������в��Ϸ��Ľ��
void show_illegal_list(link_list *head);


//ɾ������ĵ�һ�����
void delete_first(link_list *head);

//ɾ����������һ�����
void delete_end(link_list *head);

//ɾ�������ܹ��ɺϷ����ڵĽ��
void delete_illegal(link_list *head);


//����ǰ���ڲ����һ�����
void insert_first(link_list *head);

//����ǰ���ڲ������һ�����
void insert_end(link_list *head);

//����ǰ���ڲ�����֮ǰ
void insert_before(link_list *head);

//����ǰ���ڲ�����֮��
void insert_after(link_list *head);


//�ж��Ƿ������꣬Ϊ��ʾ���ڲ���׼��
bool is_runnian (int y);

//������1902.1��1�����ڲ�
int days_of_date(int year,int month,int day);

//��ʾ�������н������ڶ�Ӧ������
void show_days_list(link_list *head);


//�ж���������������
bool is_early(string str1,string str2);

//�����ã���������
void swap(string &str1,string &str2);

//�������ڴ�С��������
void sort_list_small(link_list *head);

//�������ڴӴ�С����
void sort_list_big(link_list *head);


//�ж��Ƿ�����
int isprime(int n);

//���һ����������Ƿ�������
bool check_isprime_data(string data);

//��ʾ������\"������\"���������Ľ��
void show_isprime_list(link_list *head);


//��ת����
void reserve_list(link_list *head);

//�ͷ�����
void delete_all_list(link_list *head);


//��ȡ��ǰʱ�䲢�ҷ���һ��string����
string get_time();

//��ȡʱ������ֵ
string new_data();

//��string�����л�ȡ
void get_str_by_numarr(string str,int &year,int &month,int &day);


//ϵͳ����   
void system_use();
//ȫ�ֱ���numΪ���ĸ���
int num=2022;
int main()
{
    link_list *head=NULL;
    int flag_0=1;//���ڽ���ѭ�����˳�ϵͳ

    while(flag_0)
    {
    show_demo();
//��ȡ�����������벢��û����ʾ����,����ת��д
    char choice;
    choice=getch();
    if(islower(choice))
    {
        choice=toupper(choice);
    }
    cout<<choice<<endl;

    switch(choice)
    {
        case 'C':
                head=init_list ();
                num =create_list (head);
                system_use();
                break;
        case 'O':
        // �շ���false
                if(!check_head(head))
                {
                    break;
                }
                else
                {
                show_list(head);
                system_use();
                break;
                }
        case 'S':  
                if(!check_head(head))
                {
                    break;
                }
                else
                {
                write_data(head);
                system_use();
                break;
                }
        case 'X':
                if(!check_head(head))
                {
                    break;
                }
                else
                {
                print_data();
                system_use();
                break;
                }
        case 'N':
                if(!check_head(head))
                {
                    break;
                }
                else
                {
                show_illegal_list(head);
                system_use();
                break;
                }
        case 'T':
                if(!check_head(head))
                {
                    break;
                }
                else
                {
                show_days_list(head);
                break;
                }
        case 'A':
                {   
                if(!check_head(head))
                {
                    break;
                }
                else
                {
                    int flag_3=1;
                    while(flag_3)
                    { 
                    show_sort_demo();
                    char choice2;
                    choice2=getch();
                        if(islower(choice2))
                        {
                        choice2=toupper(choice2);
                        }
                        cout<<choice2<<endl;
                        switch(choice2)
                        {
                            //�������С��������
                            case 'A':
                            sort_list_small(head);
                            break;
                            //������Ӵ�С����
                            case 'B':
                            sort_list_big(head);
                            break;
                            //������һ���˵�
                            case 'Q':
                            flag_3=0;
                            break;
                            default:
                            show_error();
                            break;
                        }
                    }
                break;
                }
                }
        case 'P':
                if(!check_head(head))
                {
                    break;
                }
                else
                {
                show_isprime_list(head);
                system_use();
                break;
                }
        case 'D':
                if(!check_head(head))
                {
                    break;
                }
                else
                {
                   {
                    int flag_2=1;
                    while(flag_2)
                    { 
                        show_delete_demo();
                        char choice2;
                        choice2=getch();
                            if(islower(choice2))
                            {
                            choice2=toupper(choice2);
                            }
                            cout<<choice2<<endl;
                            switch(choice2)
                            {
                                //ɾ����һ�����
                                case 'A':
                                delete_first(head);
                                break;
                                //ɾ�����һ�����
                                case 'B':
                                delete_end(head);
                                break;
                                //ɾ���������ڲ��Ϸ��Ľ��
                                case 'X':
                                delete_illegal(head);
                                break;
                                case 'M':
                                show_list(head);
                                break;
                                //������һ���˵�
                                case 'Q':
                                flag_2=0;
                                break;
                                //��ʾ�������
                                default:
                                show_error();
                                break;
                            }
                    }
                    }
                    break;
                }
        case 'I':
                if(!check_head(head))
                {
                    break;
                }
                else
                {
                {//�ڿ�����������
                int flag_1=1;
                while(flag_1)
                {
                    show_insert_demo();
                    char choice2;
                    choice2=getch();
                    if(islower(choice2))
                    {
                    choice2=toupper(choice2);
                    }
                    cout<<choice2<<endl;
                        switch(choice2){
                            //����ǰʱ����������ͷ��
                            case 'A':
                            insert_first(head);
                            break;
                            //����ǰʱ����������β��
                            case 'B':
                            insert_end(head);
                            break;
                            case 'X':
                            insert_before(head);
                            break;
                            case 'M':
                            insert_after(head);
                            break;
                            case 'Q':
                            flag_1=0;
                            break;
                            default:
                            show_error();
                            break;
                        }
                }
                break;
                }
                }
        case 'E':
                if(!check_head(head))
                {
                    break;
                }
                else
                {
                cout<<endl<<"��ǰ���н������"<<count_list(head)<<endl<<endl;
                system_use();
                break;
                }
        case 'F':
                if(!check_head(head))
                {
                    break;
                }
                else
                {
                reserve_list(head);
                system_use();
                break;
                }
        case 'G':
                if(!check_head(head))
                {
                    break;
                }
                else
                {
                delete_all_list(head);
                system_use();
                break;
                }
        case 'Q':
                flag_0=0;
                break;
        default: 
                show_error();
                break;
    }
    }
    return 0;
}


void show_copyright()
{
    cout<<"Copyright (c) 2023-2023 �ο���(222200231). All Rights Reserved.";
    show_time();
}



void show_time()
{
    string week[7] = { "������","����һ","���ڶ�","������","������","������","������" };
    SYSTEMTIME now2;
    GetLocalTime(&now2);
    time_t now = time(0); 
    tm * ltm = localtime(&now); 
    cout
    <<endl<<"        ��ǰ���ڡ�ʱ�� :"<<ltm->tm_year+1900<<"."<<1 + ltm->tm_mon<<"."<<ltm->tm_mday<<" "<<ltm->tm_hour<<":"<<ltm->tm_min<<":"<<ltm->tm_sec<<"("<<week[now2.wDayOfWeek]<<") "<<endl;
}



void show_demo()
{
show_copyright();
cout<<
"****************************************************************"<<endl<<
"*    C:����һ������������ݵ�(����)����                        *"<<endl<<"*    O:��ʾ����ǰ����������������                            *"<<endl<<
"*    S:������������������ݴ����ļ���                          *"<<endl<<"*    X:������ʾ���������ļ���(ȫ��)����                        *"<<endl<<
"*    N:��ʾ���ܹ��ɺϷ����ڵ�(����)���                        *"<<endl<<"*    D:ɾ������ĵ�һ�������һ�������ܹ��ɺϷ����ڵĽ��      *"<<endl<<
"*    E:���㵱ǰ���ĸ���                                      *"<<endl<<"*    I:������(����ͷ����β�����֮ǰ�����֮��)              *"<<endl<<
"*    T:��ʾ�������ڶ�Ӧ������(���롰1902��1��1�ա�������)    *"<<endl<<"*    A:�������ڴ�С��������                                  *"<<endl<<
"*    P:����������\"������\"���������Ľ��                        *"<<endl<<"*    F:(����)����ת                                          *"<<endl<<
"*    G:�ͷ�����                                                *"<<endl<<"*    Q:�˳�ϵͳ                                                *"<<endl<<
"****************************************************************"<<endl<<"��ѡ��(C,O,S,X,N,D,E,I,T,A,P,F,G,Q):";
}



void show_sort_demo()
{
cout<<
"******************************************************"<<endl<<
"*    A:�������ڴ�С��������                    "<<endl<<
"*    B:�������ڴӴ�С����                 "<<endl<<
"*    Q:������һ���˵�                       "<<endl<<
"******************************************************"<<endl<<
"��ѡ��(A,B,Q):";
}



void show_insert_demo()
{
    show_copyright();
cout<<
"******************************************************"<<endl<<
"*    A:����ǰ���ڲ����һ�����                   "<<endl<<
"*    B:����ǰ���ڲ������һ�����               "<<endl<<
"*    X:����ǰ���ڲ�����֮ǰ              "<<endl<<
"*    M:����ǰ���ڲ�����֮��              "<<endl<<
"*    Q:������һ���˵�                      "<<endl<<
"******************************************************"<<endl<<
"��ѡ��(A,B,X,M,Q):";
}



void show_delete_demo()
{
    show_copyright();
cout<<
"******************************************************"<<endl<<
"*    A:ɾ����һ�����                    "<<endl<<"*    B:ɾ�����һ�����                   "<<endl<<
"*    X:ɾ�����в��Ϸ�����             "<<endl<<"*    M:��ʾ����ǰ����������������             "<<endl<<
"*    Q:������һ���˵�                       "<<endl
<<"******************************************************"<<endl<<"��ѡ��(A,B,X,M,Q):";
}



void show_error()
{
    cout<<endl<<"��������ȷ��ѡ��"<<endl<<endl;
}



link_list * new_node()
{
    link_list *m;
    try
    {           
    m=new link_list;
    m->next=NULL;
    }         
    catch(const bad_alloc &e)
    {
        cout<<e.what()<<endl;
    }
    m->data=new_data();
    return m;
}


//���ӵ��������ǰ��,�ڱ����ĺ���
void add_front(link_list *head,link_list *p)
{
    p->next = head->next;
    head->next = p;
}


int create_list(link_list *head)
{
    //Ĭ�ϵĽ�����
    int num=2022;
    cout<<"������Ҫ�����Ľ��ĸ�����(����-1ΪĬ��ֵ)";
    cin>>num;
    if(num==-1)num=2022;
    srand((unsigned int)time(0));  
    for(int i=0;i<num;i++)
    {
        link_list *p;   
        p=new_node();     
        if(p==NULL)
        {
        cout<<"����ռ�ʧ�ܣ���"<<endl;
        break;
        }
        else
        {
             add_front(head,p);
        }
    }
    cout<<endl<<"��������ɹ�����������Ϊ:  "<<num<<"�������ڷ�ΧΪ1922<=��<=2025,1<=��<=12,1<=��<=31"<<endl<<endl;
    //���ؽ��ĸ���
    return num;
}


link_list* init_list ()
{
    link_list *p;
    try
    {            
    p=new link_list;
    p->next=NULL;
    } 
    catch(const bad_alloc &e)
    {
        cout<<e.what()<<endl;
    }
    return p;
}



void show_list(link_list *head)
{
    cout<<"��������Ҫ��ʾ�Ľ������(����0ΪĬ��ֵ��������):";
    int show_num=20;
    cin>>show_num;
    if(show_num==0)show_num=count_list(head);
    if(show_num>count_list(head))show_num=count_list(head);
    int cnt=0;
    for(link_list *p=head->next;cnt<show_num&&p!=NULL;p=p->next)
    {
    cout<<(p->data)<<'\t';
    cnt++;
    if (cnt%8==0)cout<<"\n";
    }
    cout<<endl<<"���������"<<num<<"   ��ǰ��ʾ�Ľ������"<<show_num<<endl;
}



bool check_illegal_data(string data)
{
    int year,month,day;
    get_str_by_numarr(data,year,month,day);
    bool ans=true;
	if   (month<1||month>12)   ans=false;
	else if (year<1||year>2300) ans=false;
	else if (month==1||month==3||month==5||month==7||month==8||month==10||month==12){
		if(day<1||day>31) ans=false; 
	}
	else if (month==4||month==6||month==9||month==11){
		if (day<1||day>30) ans=false;
	}
	else if (is_runnian(year)){
		if (month==2&&(day<1||day>29)) ans=false;
	}
	else if (month==2&&(day<1||day>28)) ans=false;
    return ans;
}



void show_illegal_list(link_list *head)
{
    int cnt=0;
    for(link_list*p=head->next;p!=NULL;p=p->next)
    {
        if(!check_illegal_data(p->data)){
            cnt++;
            cout<<p->data<<"\t";
        }
    }
    cout<<endl<<"��ǰ�����в��ܹ��ɺϷ����ڵĽ�㹲�У�"<<cnt<<"��"<<endl;
}



bool is_runnian (int y)
{
	bool ans=false;
	if(y%4==0&&y%100!=0) ans=true;
	else if(y%400==0)    ans=true;
	return ans;
}



void show_days_list(link_list *head)
{
    int show_num=20;
    int cnt=0;
    cout<<"������Ҫ��ʾ�Ľ��ĸ���:(����-1Ĭ��ֵ)";
    cin>>show_num;
    if(show_num==-1)show_num=20;
    if(show_num>count_list(head))show_num=count_list(head);
    for(link_list*p=head->next;p!=NULL&&cnt<show_num;p=p->next)
    {
        int year,month,day;
        get_str_by_numarr(p->data,year,month,day);

        cout<<days_of_date(year,month,day)-days_of_date(1902,1,1)<<'\t';
        cnt++;
    }
    cout<<endl<<"��ǰ��ʾ�Ľ����Ϊ"<<show_num<<"��"<<endl<<endl;
}


int days_of_date(int year,int month,int day)
{
	int daym[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int days=day;
	for(int y=1;y<year;y++)
		days+=365+is_runnian(y);
	for(int m=1;m<month;m++)
		if(m!=2){
			days+=daym[m-1];
		}else{
			days+=28+is_runnian(year);
		}
	return days;
}



void show_isprime_list(link_list *head)
{
    int cnt=0;
    for(link_list*p=head->next;p!=NULL;p=p->next)
    {
        if(check_isprime_data(p->data)){
            cnt++;
            cout<<p->data<<"\t";
    }
    }
    cout<<endl<<"��ǰ������\"������\"���������Ľ�㹲�У�"<<cnt<<"��"<<endl;
}



bool check_isprime_data(string data)
{
    int year,month,day;
    get_str_by_numarr(data,year,month,day);
    bool ans=true;
    if(!isprime(year)||!isprime(month)||!isprime(day))ans=false;
    return ans;
}



int isprime(int n)
{
	if(n==1)return 0;
	for(int i=2; i<=sqrt(n);i++)
	if(n%i==0) return 0;
	return 1;
}



void delete_first(link_list *head)
{
    link_list *first=head->next;
    link_list *p=first->next;
    first->next=NULL;
    head->next=p;
    delete first;
    num--;
    cout<<endl<<"ɾ�������һ�����ɹ�"<<endl<<endl;
}



void delete_end(link_list *head)
{
    link_list *before=head->next;
    link_list *p=before->next;
    while(p->next!=NULL){
        before=before->next;
        p=before->next;
    }
    before->next=NULL;
    delete p;   
    num--;
    cout<<endl<<"ɾ���������һ�����ɹ�"<<endl<<endl;
}



void delete_illegal(link_list *head)
{
    int cnt=0;
    link_list *m=head;
    for (link_list *cur=m->next;cur!=NULL;cur=m->next)
    {
        if (!check_illegal_data(cur->data)){
            cnt++;
            m->next=cur->next;
            delete cur;
        }
        m=m->next;
    }
    num-=cnt;
    cout<<endl<<"ɾ�������ܹ��ɺϷ����ڵĽ��ɹ�"<<endl<<endl;
}



void reserve_list(link_list *head)
{
    link_list *p=head->next;
    head->next=NULL;
    while (p!=NULL){
        link_list *cur=p;
        p=p->next;
        cur->next=head->next;
        head->next=cur;
    }
    cout<<"����ת�ɹ�����"<<endl<<endl;
}



void delete_all_list(link_list *head)
{
    link_list *p=head->next;
    for (link_list *cur=p;cur!=NULL;cur=p){
        p=p->next;
        delete cur;
    }
    cout<<endl<<"�ͷ�����ɹ�����"<<endl<<endl;
}



int count_list(link_list *head)
{
    int cnt=0;
    for (link_list*p=head->next;p!=NULL;p=p->next){
        cnt++;
    }
    return cnt;
}



string get_time()
{   
    int year,month,day;

    time_t now = time(0); 
    tm * ltm = localtime(&now); 

    year=ltm->tm_year+1900;

    month=1 + ltm->tm_mon;

    day=ltm->tm_mday;

    string y=to_string(year);
    string m,d;
    if (month/10==0)
    {
         m="0"+to_string(month);
    }
    else
    {
         m=to_string(month);
    }

    if(day/10==0)
    {
         d="0"+to_string(day);
    }
    else
    {
         d=to_string(day);
    }
    string ans=y+"-"+m+"-"+d;
    return ans;
}




void sort_list_small(link_list *head)
{
    cout<<endl<<"���������У����Ե�........"<<endl<<endl;
    for (link_list*p=head->next;p!=NULL;p=p->next)
    {  
        for (link_list *after=p;after!=NULL;after=after->next)
    {
    if (!is_early(p->data,after->data))
    swap(p->data,after->data);
    }
    }
    cout<<"�������ڴ�С��������ɹ�"<<endl<<endl;
}



void sort_list_big(link_list *head)
{
    cout<<endl<<"���������У����Ե�........"<<endl<<endl;
    for (link_list*p=head->next;p!=NULL;p=p->next)
    {  
        for (link_list *after=p;after!=NULL;after=after->next)
    {
    if (is_early(p->data,after->data))
    swap(p->data,after->data);
    }
    }
    cout<<"�������ڴӴ�С����ɹ�"<<endl<<endl;
}



bool is_early(string str1,string str2)
{
    bool ans=true;

    int year1,year2,month1,month2,day1,day2;

    get_str_by_numarr(str1,year1,month1,day1);

    get_str_by_numarr(str2,year2,month2,day2);

    if (year1<year2) 
    ans=true;

    else if (year1>year2)
    ans=false;

    else {
        if(month1<month2)
            ans=true;
        else if(month1>month2)
            ans=false;
        else{
            if (day1<day2)
                ans=true;
            else if (day1>day2)
                ans=false;
            else 
                ans=false;
        }
    }

    return ans;
}

//��������Ƿ�Ϊ�գ���Ϊ�գ�����false
bool check_head(link_list *head)
{
    bool ans=true;
    if(head==NULL)
    {
        cout<<endl<<"��ǰ����Ϊ�գ����ȴ�����������"<<endl<<endl;
        ans=false;
    }
    return ans;
}

void swap(string &str1,string &str2)
{
    string temp=str1;

    str1=str2;

    str2=temp;
}



void insert_first(link_list *head)
{

    string now_time=get_time();

    link_list *m=new link_list;

    m->next=NULL;

    m->data=now_time;

    m->next=head->next;

    head->next=m;

    num++;
    cout<<"����ǰ���ڲ����һ�����ɹ�����"<<endl<<endl;
}



void insert_end(link_list *head)
{

    string now_time=get_time();

    link_list *m=new link_list;

    m->data=now_time;

    m->next=NULL;

    link_list *p;

    for(p=head->next;p->next!=NULL;p=p->next){}


    p->next=m;
    num++;
    cout<<"����ǰ���ڲ������һ�����ɹ�����"<<endl<<endl;
}

void insert_before(link_list *head)
{
    string time;
    string now_time=get_time();
    //�����µĿռ�
    link_list *node=new_node();
    int flag=0;
    node->data=now_time;
    cout<<"������Ҫ�������ĸ����֮ǰ(����1904-02-01):";
    cin>>time;
    link_list *before=head;
    for(link_list *cur=before->next;cur!=NULL;before=before->next)
    {
        cur=before->next;
        //string����ֱ���ж��Ƿ����
        if(cur->data==time)
        {
            flag=1;
            node->next=cur;
            before->next=node;
            break;
        }
            
    }
    num++;
    if(flag)cout<<"����ý��֮��ɹ�!!"<<endl<<endl;
    else    cout<<"δ�ҵ��ý��"<<endl<<endl;
}



void insert_after(link_list *head){
    string time;
    string now_time=get_time();
    //�����µĿռ�
    link_list *node=new_node();
    node->data=now_time;
    int flag=0;
    cout<<"������Ҫ�������ĸ����֮��(����1904-02-01):";
    cin>>time;
    link_list *before=head->next;
    for(link_list *cur=before->next;cur!=NULL;before=before->next)
    {
        cur=before->next;
        //string����ֱ���ж��Ƿ����
        if(before->data==time)
        {
        flag=1;
        node->next=cur;
        before->next=node;
        break;
        }
    }
    num++;
    if(flag)cout<<"����ý��֮��ɹ�!!"<<endl<<endl;
    else    cout<<"δ�ҵ��ý��"<<endl<<endl;

}




void system_use()
{
                system("pause");
                system("cls");
}



void write_data(link_list *head)
{
    string folder="./data.txt";
    cout<<"�������ļ���·��(������ĸOĬ��Ϊ./data.txt):";
    cin>>folder;
    if(folder=="O")folder="./data.txt";
    FILE *fp=fopen(folder.c_str(),"w");
    for(link_list*p=head->next;p!=NULL;p=p->next)
    {
    fprintf(fp,"%s\t",p->data.c_str());
    }
    fclose(fp);
    cout<<endl<<"������������������ݴ����ļ��гɹ�"<<endl<<endl;
}



void print_data()
{
    string folder="./data.txt";
    cout<<"�������ļ���·��(Ĭ��Ϊ./data.txt):";
    cin>>folder;
    FILE *fp=fopen(folder.c_str(),"r");
    int cnt=0;
    int page=1,line=1;
    while (!feof(fp)){   
    if (cnt==0){
        cout<<"��ǰҳ��Ϊ��"<<page<<endl;
        cout<<" 1:";
    }
    char temp[12];
    fscanf(fp,"%s",temp);
    cout<<temp<<"    ";
    cnt++;
    if (cnt%10==0){
        cout<<"\n"; 
        line++;
        if(line<10)
        {cout<<" "<<line<<":";}
        else if(cnt%200!=0)
        {cout<<line<<":";}
    }
    if (cnt%200==0){
        if (cnt!=0){
        page++;
        system("pause");   
        }
        cout<<"��ǰҳ��Ϊ��"<<page<<endl;
        cout<<line<<":";
    }
    }
    fclose(fp);
}



string new_data()
{
    int year=rand()% 104+1922;               
    int month=rand()% 12+1;
    int day=rand()%  31 +1;
    string y=to_string(year);
    string m,d;
    if (month/10==0){
         m="0"+to_string(month);
         }
    else  {
         m=to_string(month);
    }
    if (day/10==0){
         d="0"+to_string(day);
    }
    else{
         d=to_string(day);
    }
    string ans=y+"-"+m+"-"+d;
    return ans;
}




void get_str_by_numarr(string str,int &year,int &month,int &day)
{
char numarr[]={'0','1','2','3','4','5','6','7','8','9',};
list<int> numlist;
int start_index=0;
while (start_index!=-1){
    vector<char> temp;
    start_index=-1;
    for (size_t i=0;i<str.length();i++){
        for(size_t j=0;j<10;j++){
            if(str[i]==numarr[j]){
                    start_index=i;
                    break;
            }
        }
        if (start_index!=-1){
            temp.push_back(str[start_index]);
            int temp_index=0;
            char tempchar=str[start_index+(temp_index+=1)];
            while ((int)(tempchar-48)>=0&&(int)(tempchar-48)<=9){
                temp.push_back(tempchar);
                tempchar=str[start_index+(temp_index+=1)];
            }
            str.erase(start_index,temp_index);
            break;
        }
    }
        if (!temp.empty()){
            numlist.push_back(stoi(string(temp.begin(),temp.end())));
        }
}
    list<int>::iterator it=numlist.begin();year=*it;it++;month=*it;it++;day=*it;
}