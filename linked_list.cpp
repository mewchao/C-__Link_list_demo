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


//打印版权
void show_copyright();
//打印当前时间

void show_time();
//显示当前时间

void show_time();
//显示主菜单

void show_demo();
//显示删除结点的二级菜单

void show_delete_demo();
//显示排序链表的二级菜单

void show_sort_demo();
//显示插入结点的二级菜单

void show_insert_demo();
//选择出现错误选项时打印提示

void show_error();


//初始化链表，创建一个哨兵结点
link_list* init_list ();

//申请新结点的空间
link_list * new_node();

//结点加到链表的最前面
void add_front(link_list *head,link_list *p);

//创建一个存放日期数据的(无序)链表
int create_list(link_list *head);

//检查链表是否为空，若为空，返回false
bool check_head (link_list *head);

//显示20个结点
void show_list(link_list *head);

//计算当前结点个数
int count_list(link_list *head);


//将整个链表的所有数据存入文件中
void write_data(link_list *head);

//分屏显示日期数据文件的(全部)内容
void print_data();


//检查一个结点的日期是否合法
bool check_illegal_data(string data);

//显示出链表中所有不合法的结点
void show_illegal_list(link_list *head);


//删除链表的第一个结点
void delete_first(link_list *head);

//删除链表的最后一个结点
void delete_end(link_list *head);

//删除链表不能构成合法日期的结点
void delete_illegal(link_list *head);


//将当前日期插入第一个结点
void insert_first(link_list *head);

//将当前日期插入最后一个结点
void insert_end(link_list *head);

//将当前日期插入结点之前
void insert_before(link_list *head);

//将当前日期插入结点之后
void insert_after(link_list *head);


//判断是否是闰年，为显示日期差做准备
bool is_runnian (int y);

//返回与1902.1，1的日期差
int days_of_date(int year,int month,int day);

//显示链表所有结点的日期对应的天数
void show_days_list(link_list *head);


//判断两个的日期早晚
bool is_early(string str1,string str2);

//传引用，交换函数
void swap(string &str1,string &str2);

//链表按日期从小到大排序
void sort_list_small(link_list *head);

//链表按日期从大到小排序
void sort_list_big(link_list *head);


//判断是否素数
int isprime(int n);

//检查一个结点日期是否都是素数
bool check_isprime_data(string data);

//显示链表中\"年月日\"都是素数的结点
void show_isprime_list(link_list *head);


//翻转链表
void reserve_list(link_list *head);

//释放链表
void delete_all_list(link_list *head);


//获取当前时间并且返回一个string对象
string get_time();

//获取时间的随机值
string new_data();

//从string对象中获取
void get_str_by_numarr(string str,int &year,int &month,int &day);


//系统操作   
void system_use();
//全局变量num为结点的个数
int num=2022;
int main()
{
    link_list *head=NULL;
    int flag_0=1;//用于结束循环，退出系统

    while(flag_0)
    {
    show_demo();
//获取缓冲区的输入并且没有显示出来,并且转大写
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
        // 空返回false
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
                            //将链表从小到大排序
                            case 'A':
                            sort_list_small(head);
                            break;
                            //将链表从大到小排序
                            case 'B':
                            sort_list_big(head);
                            break;
                            //返回上一级菜单
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
                                //删除第一个结点
                                case 'A':
                                delete_first(head);
                                break;
                                //删除最后一个结点
                                case 'B':
                                delete_end(head);
                                break;
                                //删除所有日期不合法的结点
                                case 'X':
                                delete_illegal(head);
                                break;
                                case 'M':
                                show_list(head);
                                break;
                                //返回上一级菜单
                                case 'Q':
                                flag_2=0;
                                break;
                                //提示输入错误
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
                {//在块内声明变量
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
                            //将当前时间插入链表的头部
                            case 'A':
                            insert_first(head);
                            break;
                            //将当前时间插入链表的尾部
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
                cout<<endl<<"当前共有结点数："<<count_list(head)<<endl<<endl;
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
    cout<<"Copyright (c) 2023-2023 游竣超(222200231). All Rights Reserved.";
    show_time();
}



void show_time()
{
    string week[7] = { "星期日","星期一","星期二","星期三","星期四","星期五","星期六" };
    SYSTEMTIME now2;
    GetLocalTime(&now2);
    time_t now = time(0); 
    tm * ltm = localtime(&now); 
    cout
    <<endl<<"        当前日期、时间 :"<<ltm->tm_year+1900<<"."<<1 + ltm->tm_mon<<"."<<ltm->tm_mday<<" "<<ltm->tm_hour<<":"<<ltm->tm_min<<":"<<ltm->tm_sec<<"("<<week[now2.wDayOfWeek]<<") "<<endl;
}



void show_demo()
{
show_copyright();
cout<<
"****************************************************************"<<endl<<
"*    C:创建一个存放日期数据的(无序)链表                        *"<<endl<<"*    O:显示链表前几个结点的日期数据                            *"<<endl<<
"*    S:将整个链表的所有数据存入文件中                          *"<<endl<<"*    X:分屏显示日期数据文件的(全部)内容                        *"<<endl<<
"*    N:显示不能构成合法日期的(所有)结点                        *"<<endl<<"*    D:删除链表的第一个、最后一个、不能构成合法日期的结点      *"<<endl<<
"*    E:计算当前结点的个数                                      *"<<endl<<"*    I:插入结点(至链头、链尾、结点之前、结点之后)              *"<<endl<<
"*    T:显示结点的日期对应的天数(距离“1902年1月1日”的天数)    *"<<endl<<"*    A:链表按日期从小到大排序                                  *"<<endl<<
"*    P:查找链表中\"年月日\"都是素数的结点                        *"<<endl<<"*    F:(单向)链表翻转                                          *"<<endl<<
"*    G:释放链表                                                *"<<endl<<"*    Q:退出系统                                                *"<<endl<<
"****************************************************************"<<endl<<"请选择(C,O,S,X,N,D,E,I,T,A,P,F,G,Q):";
}



void show_sort_demo()
{
cout<<
"******************************************************"<<endl<<
"*    A:链表按日期从小到大排序                    "<<endl<<
"*    B:链表按日期从大到小排序                 "<<endl<<
"*    Q:返回上一级菜单                       "<<endl<<
"******************************************************"<<endl<<
"请选择(A,B,Q):";
}



void show_insert_demo()
{
    show_copyright();
cout<<
"******************************************************"<<endl<<
"*    A:将当前日期插入第一个结点                   "<<endl<<
"*    B:将当前日期插入最后一个结点               "<<endl<<
"*    X:将当前日期插入结点之前              "<<endl<<
"*    M:将当前日期插入结点之后              "<<endl<<
"*    Q:返回上一级菜单                      "<<endl<<
"******************************************************"<<endl<<
"请选择(A,B,X,M,Q):";
}



void show_delete_demo()
{
    show_copyright();
cout<<
"******************************************************"<<endl<<
"*    A:删除第一个结点                    "<<endl<<"*    B:删除最后一个结点                   "<<endl<<
"*    X:删除所有不合法数据             "<<endl<<"*    M:显示链表前几个结点的日期数据             "<<endl<<
"*    Q:返回上一级菜单                       "<<endl
<<"******************************************************"<<endl<<"请选择(A,B,X,M,Q):";
}



void show_error()
{
    cout<<endl<<"请输入正确的选项"<<endl<<endl;
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


//结点加到链表的最前面,哨兵结点的后面
void add_front(link_list *head,link_list *p)
{
    p->next = head->next;
    head->next = p;
}


int create_list(link_list *head)
{
    //默认的结点个数
    int num=2022;
    cout<<"请输入要创建的结点的个数：(输入-1为默认值)";
    cin>>num;
    if(num==-1)num=2022;
    srand((unsigned int)time(0));  
    for(int i=0;i<num;i++)
    {
        link_list *p;   
        p=new_node();     
        if(p==NULL)
        {
        cout<<"申请空间失败！！"<<endl;
        break;
        }
        else
        {
             add_front(head,p);
        }
    }
    cout<<endl<<"创建链表成功！！结点个数为:  "<<num<<"个。日期范围为1922<=年<=2025,1<=月<=12,1<=日<=31"<<endl<<endl;
    //返回结点的个数
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
    cout<<"请输入想要显示的结点条数(输入0为默认值整个链表):";
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
    cout<<endl<<"结点总数："<<num<<"   当前显示的结点数："<<show_num<<endl;
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
    cout<<endl<<"当前链表中不能构成合法日期的结点共有："<<cnt<<"条"<<endl;
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
    cout<<"请输入要显示的结点的个数:(输入-1默认值)";
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
    cout<<endl<<"当前显示的结点数为"<<show_num<<"条"<<endl<<endl;
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
    cout<<endl<<"当前链表中\"年月日\"都是素数的结点共有："<<cnt<<"条"<<endl;
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
    cout<<endl<<"删除链表第一个结点成功"<<endl<<endl;
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
    cout<<endl<<"删除链表最后一个结点成功"<<endl<<endl;
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
    cout<<endl<<"删除链表不能构成合法日期的结点成功"<<endl<<endl;
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
    cout<<"链表反转成功！！"<<endl<<endl;
}



void delete_all_list(link_list *head)
{
    link_list *p=head->next;
    for (link_list *cur=p;cur!=NULL;cur=p){
        p=p->next;
        delete cur;
    }
    cout<<endl<<"释放链表成功！！"<<endl<<endl;
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
    cout<<endl<<"正在排序中，请稍等........"<<endl<<endl;
    for (link_list*p=head->next;p!=NULL;p=p->next)
    {  
        for (link_list *after=p;after!=NULL;after=after->next)
    {
    if (!is_early(p->data,after->data))
    swap(p->data,after->data);
    }
    }
    cout<<"链表按日期从小到大排序成功"<<endl<<endl;
}



void sort_list_big(link_list *head)
{
    cout<<endl<<"正在排序中，请稍等........"<<endl<<endl;
    for (link_list*p=head->next;p!=NULL;p=p->next)
    {  
        for (link_list *after=p;after!=NULL;after=after->next)
    {
    if (is_early(p->data,after->data))
    swap(p->data,after->data);
    }
    }
    cout<<"链表按日期从大到小排序成功"<<endl<<endl;
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

//检查链表是否为空，若为空，返回false
bool check_head(link_list *head)
{
    bool ans=true;
    if(head==NULL)
    {
        cout<<endl<<"当前链表为空，请先创建链表！！！"<<endl<<endl;
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
    cout<<"将当前日期插入第一个结点成功！！"<<endl<<endl;
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
    cout<<"将当前日期插入最后一个结点成功！！"<<endl<<endl;
}

void insert_before(link_list *head)
{
    string time;
    string now_time=get_time();
    //申请新的空间
    link_list *node=new_node();
    int flag=0;
    node->data=now_time;
    cout<<"请输入要插入在哪个结点之前(例如1904-02-01):";
    cin>>time;
    link_list *before=head;
    for(link_list *cur=before->next;cur!=NULL;before=before->next)
    {
        cur=before->next;
        //string可以直接判断是否相等
        if(cur->data==time)
        {
            flag=1;
            node->next=cur;
            before->next=node;
            break;
        }
            
    }
    num++;
    if(flag)cout<<"插入该结点之后成功!!"<<endl<<endl;
    else    cout<<"未找到该结点"<<endl<<endl;
}



void insert_after(link_list *head){
    string time;
    string now_time=get_time();
    //申请新的空间
    link_list *node=new_node();
    node->data=now_time;
    int flag=0;
    cout<<"请输入要插入在哪个结点之后(例如1904-02-01):";
    cin>>time;
    link_list *before=head->next;
    for(link_list *cur=before->next;cur!=NULL;before=before->next)
    {
        cur=before->next;
        //string可以直接判断是否相等
        if(before->data==time)
        {
        flag=1;
        node->next=cur;
        before->next=node;
        break;
        }
    }
    num++;
    if(flag)cout<<"插入该结点之后成功!!"<<endl<<endl;
    else    cout<<"未找到该结点"<<endl<<endl;

}




void system_use()
{
                system("pause");
                system("cls");
}



void write_data(link_list *head)
{
    string folder="./data.txt";
    cout<<"请输入文件夹路径(输入字母O默认为./data.txt):";
    cin>>folder;
    if(folder=="O")folder="./data.txt";
    FILE *fp=fopen(folder.c_str(),"w");
    for(link_list*p=head->next;p!=NULL;p=p->next)
    {
    fprintf(fp,"%s\t",p->data.c_str());
    }
    fclose(fp);
    cout<<endl<<"将整个链表的所有数据存入文件中成功"<<endl<<endl;
}



void print_data()
{
    string folder="./data.txt";
    cout<<"请输入文件夹路径(默认为./data.txt):";
    cin>>folder;
    FILE *fp=fopen(folder.c_str(),"r");
    int cnt=0;
    int page=1,line=1;
    while (!feof(fp)){   
    if (cnt==0){
        cout<<"当前页数为："<<page<<endl;
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
        cout<<"当前页数为："<<page<<endl;
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