
/* Result Sets Interface */
#ifndef SQL_CRSR
#  define SQL_CRSR
  struct sql_cursor
  {
    unsigned int curocn;
    void *ptr1;
    void *ptr2;
    unsigned int magic;
  };
  typedef struct sql_cursor sql_cursor;
  typedef struct sql_cursor SQL_CURSOR;
#endif /* SQL_CRSR */

/* Thread Safety */
typedef void * sql_context;
typedef void * SQL_CONTEXT;

/* Object support */
struct sqltvn
{
  unsigned char *tvnvsn; 
  unsigned short tvnvsnl; 
  unsigned char *tvnnm;
  unsigned short tvnnml; 
  unsigned char *tvnsnm;
  unsigned short tvnsnml;
};
typedef struct sqltvn sqltvn;

struct sqladts
{
  unsigned int adtvsn; 
  unsigned short adtmode; 
  unsigned short adtnum;  
  sqltvn adttvn[1];       
};
typedef struct sqladts sqladts;

static struct sqladts sqladt = {
  1,1,0,
};

/* Binding to PL/SQL Records */
struct sqltdss
{
  unsigned int tdsvsn; 
  unsigned short tdsnum; 
  unsigned char *tdsval[1]; 
};
typedef struct sqltdss sqltdss;
static struct sqltdss sqltds =
{
  1,
  0,
};

/* File name & Package Name */
struct sqlcxp
{
  unsigned short fillen;
           char  filnam[12];
};
static const struct sqlcxp sqlfpn =
{
    11,
    "emp_main.pc"
};


static unsigned int sqlctx = 151931;


static struct sqlexd {
   unsigned int   sqlvsn;
   unsigned int   arrsiz;
   unsigned int   iters;
   unsigned int   offset;
   unsigned short selerr;
   unsigned short sqlety;
   unsigned int   occurs;
      const short *cud;
   unsigned char  *sqlest;
      const char  *stmt;
   sqladts *sqladtp;
   sqltdss *sqltdsp;
            void  **sqphsv;
   unsigned int   *sqphsl;
            int   *sqphss;
            void  **sqpind;
            int   *sqpins;
   unsigned int   *sqparm;
   unsigned int   **sqparc;
   unsigned short  *sqpadto;
   unsigned short  *sqptdso;
   unsigned int   sqlcmax;
   unsigned int   sqlcmin;
   unsigned int   sqlcincr;
   unsigned int   sqlctimeout;
   unsigned int   sqlcnowait;
              int   sqfoff;
   unsigned int   sqcmod;
   unsigned int   sqfmod;
   unsigned int   sqlpfmem;
            void  *sqhstv[8];
   unsigned int   sqhstl[8];
            int   sqhsts[8];
            void  *sqindv[8];
            int   sqinds[8];
   unsigned int   sqharm[8];
   unsigned int   *sqharc[8];
   unsigned short  sqadto[8];
   unsigned short  sqtdso[8];
} sqlstm = {13,8};

/* SQLLIB Prototypes */
extern void sqlcxt (void **, unsigned int *,
                    struct sqlexd *, const struct sqlcxp *);
extern void sqlcx2t(void **, unsigned int *,
                    struct sqlexd *, const struct sqlcxp *);
extern void sqlbuft(void **, char *);
extern void sqlgs2t(void **, char *);
extern void sqlorat(void **, unsigned int *, void *);

/* Forms Interface */
static const int IAPSUCC = 0;
static const int IAPFAIL = 1403;
static const int IAPFTL  = 535;
extern void sqliem(unsigned char *, signed int *);

typedef struct { unsigned short len; unsigned char arr[1]; } VARCHAR;
typedef struct { unsigned short len; unsigned char arr[1]; } varchar;

/* cud (compilation unit data) array */
static const short sqlcud0[] =
{13,4130,1,0,0,
5,0,0,1,0,0,17,137,0,0,1,1,0,1,0,1,97,0,0,
24,0,0,1,0,0,45,143,0,0,0,0,0,1,0,
39,0,0,1,0,0,13,150,0,0,7,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,
0,0,2,9,0,0,
82,0,0,1,0,0,15,194,0,0,0,0,0,1,0,
97,0,0,2,0,0,29,196,0,0,0,0,0,1,0,
112,0,0,1,0,0,17,235,0,0,1,1,0,1,0,1,97,0,0,
131,0,0,1,0,0,45,241,0,0,0,0,0,1,0,
146,0,0,1,0,0,13,249,0,0,8,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,
0,0,2,9,0,0,2,9,0,0,
193,0,0,1,0,0,15,298,0,0,0,0,0,1,0,
208,0,0,3,0,0,29,300,0,0,0,0,0,1,0,
223,0,0,1,0,0,17,322,0,0,1,1,0,1,0,1,97,0,0,
242,0,0,1,0,0,45,326,0,0,0,0,0,1,0,
257,0,0,1,0,0,13,335,0,0,4,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,
288,0,0,1,0,0,15,375,0,0,0,0,0,1,0,
303,0,0,4,0,0,24,444,0,0,1,1,0,1,0,1,97,0,0,
322,0,0,5,0,0,29,445,0,0,0,0,0,1,0,
337,0,0,1,0,0,17,511,0,0,1,1,0,1,0,1,97,0,0,
356,0,0,1,0,0,45,515,0,0,0,0,0,1,0,
371,0,0,1,0,0,13,525,0,0,2,0,0,1,0,2,3,0,0,2,9,0,0,
394,0,0,1,0,0,15,542,0,0,0,0,0,1,0,
409,0,0,1,0,0,17,566,0,0,1,1,0,1,0,1,97,0,0,
428,0,0,1,0,0,45,572,0,0,0,0,0,1,0,
443,0,0,1,0,0,13,579,0,0,4,0,0,1,0,2,9,0,0,2,9,0,0,2,3,0,0,2,3,0,0,
474,0,0,1,0,0,15,623,0,0,0,0,0,1,0,
489,0,0,6,0,0,29,625,0,0,0,0,0,1,0,
504,0,0,7,0,0,24,717,0,0,1,1,0,1,0,1,97,0,0,
523,0,0,8,0,0,29,718,0,0,0,0,0,1,0,
538,0,0,9,0,0,24,813,0,0,1,1,0,1,0,1,97,0,0,
557,0,0,10,0,0,29,816,0,0,0,0,0,1,0,
572,0,0,11,0,0,24,868,0,0,1,1,0,1,0,1,97,0,0,
591,0,0,12,0,0,29,871,0,0,0,0,0,1,0,
606,0,0,1,0,0,17,902,0,0,1,1,0,1,0,1,97,0,0,
625,0,0,1,0,0,45,908,0,0,0,0,0,1,0,
640,0,0,1,0,0,13,913,0,0,3,0,0,1,0,2,9,0,0,2,3,0,0,2,3,0,0,
667,0,0,1,0,0,15,924,0,0,0,0,0,1,0,
};


// 마지막고침 : 2020.11.17
// win32 Visual C 2010 이상컴파일시 추가
// 프로그램 가장 첫 줄에 추가할 것
#define _CRT_SECURE_NO_WARNINGS
//-----------------------------------------

#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <conio.h>
#include "header.h"

/* for oracle */
#include <sqlda.h>
#include <sqlca.h>
#include <sqlcpr.h>

void empMain();
void search_Use_All();
void seach_Buy_All();
void pc_start_now();
void gogak_list();
void UOrD();
void gogakD();
int check_gogak();
void food_list();
int search_food();
void updateFood();
void do_updateFood(int uPrice, int uPamount);
void input_food();
int choose_ufood();
void delete_food(char foodname[50]);

// win32 Visual C 2010 이상컴파일시 추가
#define getch() _getch()
//-----------------------------------------

//#ifdef WIN32
#include < windows.h >

#define getch() _getch()
char proNAME[50];
int proPRICE;
int proAMOUNT;

int fail;
  /* EXEC SQL WHENEVER SQLERROR DO fail = sql_error("\7ORACLE ERROR:\n"); */ 


/*---------------  관리자 메뉴 시작 함수 --------------------*/
void empMain(){
	char emp_select[10];
	
	while(1){
		clrscr();
		print_screen("empMain.txt");
		gotoxy(32,17);
		gets_s(emp_select, sizeof emp_select);
		if( strcmp(emp_select,"1") == 0){
			char food_select[10];
			while(1){
				gotoxy(27, 18);
				printf("1. 등록 2. 상품보기 >> ");
				gets_s(food_select, sizeof food_select);
				if(food_select[0]=='\0'){
					break;
				}else{
					if(strcmp(food_select,"1")==0){
						input_food();
					}else if(strcmp(food_select,"2")==0){
						food_list();
					}else{
						gotoxy(27, 19);
						printf("잘 못 입력하였습니다.");
						getch();
						gotoxy(27, 19);
						printf("                      ");
					}
				}
				
			}
		}else if (strcmp(emp_select,"2") == 0){
			gogak_list();
		}else if (strcmp(emp_select,"3") == 0){
			pc_start_now();
		}else if (strcmp(emp_select,"4") == 0){
			search_Use_All();
		}else if (strcmp(emp_select,"5") == 0){
			seach_Buy_All();
		}else if(strcmp(emp_select,"exit") == 0){
			start();
		}else{
			gotoxy(25,18); // 잘 못 입력 되었다는 것을 알리기
			printf("잘못된 입력입니다. 다시 입력해주세요");
			getch();
		}
		
	}

}

/*---------------   사용 이력 전체 조회 함수 --------------------*/
void search_Use_All(){
	clrscr();
	print_screen("pcUsingAll.txt");
	int x,y,count=0, page=1;
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

   		/* varchar hnum[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } hnum;

		/* varchar gid[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } gid;

		/* varchar gname[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } gname;

  		/* varchar seat[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } seat;

		/* varchar day[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } day;

		/* varchar stime[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } stime;

		/* varchar etime[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } etime;
	

  		char dynstmt[1000];
	/* EXEC SQL END DECLARE SECTION; */ 

	
	//EXEC SQL WHENEVER SQLERROR DO sql_error("\7ORACLE ERROR:\n");
	
	char searchID[20];
	gotoxy(17,8);
	gets_s(searchID, sizeof searchID);
	if(searchID[0] == '\0' ) {
    		   strcpy(searchID, "%%");
	   }else{
		char a[10] = "%";
		strcat(searchID,a);
		strcat(a,searchID);
		strcpy(searchID, a);

	}
	
	/* 실행시킬 SQL 문장*/
   	sprintf(dynstmt,"select to_char(hnum), g.gid, g.gname, to_char(seat), to_char(stime, 'YYYY-MM-DD'), to_char(stime, 'HH24:MI') , nvl2(etime, to_char(stime, 'HH24:MI'),to_char('사용 중')) from use_history h join gogak g on h.gid = g.gid where g.gid like '%s' order by hnum desc", searchID); 

	/* EXEC SQL PREPARE S FROM :dynstmt ; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 13;
 sqlstm.arrsiz = 1;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )5;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)dynstmt;
 sqlstm.sqhstl[0] = (unsigned int  )1000;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqphsv = sqlstm.sqhstv;
 sqlstm.sqphsl = sqlstm.sqhstl;
 sqlstm.sqphss = sqlstm.sqhsts;
 sqlstm.sqpind = sqlstm.sqindv;
 sqlstm.sqpins = sqlstm.sqinds;
 sqlstm.sqparm = sqlstm.sqharm;
 sqlstm.sqparc = sqlstm.sqharc;
 sqlstm.sqpadto = sqlstm.sqadto;
 sqlstm.sqptdso = sqlstm.sqtdso;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
 if (sqlca.sqlcode < 0) (fail=sql_error("\7ORACLE ERROR:\n"));
}



	/* cursor 선언 */
	/* EXEC SQL DECLARE b_cursor CURSOR FOR S ; */ 
 
	
	/* cursor open */
	/* EXEC SQL OPEN b_cursor ; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 13;
 sqlstm.arrsiz = 1;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )24;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.sqlpfmem = (unsigned int  )0;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqcmod = (unsigned int )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
 if (sqlca.sqlcode < 0) (fail=sql_error("\7ORACLE ERROR:\n"));
}

 

	/* EXEC SQL WHENEVER NOT FOUND DO break; */ 

	char c;
	x = 7;
  	y = 13 ;
  	for (;;){
		/* EXEC SQL FETCH b_cursor INTO :hnum,:gid, :gname, :seat, :day, :stime, :etime; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 13;
  sqlstm.arrsiz = 7;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )39;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.sqlpfmem = (unsigned int  )0;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)4352;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqfoff = (           int )0;
  sqlstm.sqfmod = (unsigned int )2;
  sqlstm.sqhstv[0] = (         void  *)&hnum;
  sqlstm.sqhstl[0] = (unsigned int  )102;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&gid;
  sqlstm.sqhstl[1] = (unsigned int  )102;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)&gname;
  sqlstm.sqhstl[2] = (unsigned int  )102;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)0;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)&seat;
  sqlstm.sqhstl[3] = (unsigned int  )102;
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         void  *)0;
  sqlstm.sqinds[3] = (         int  )0;
  sqlstm.sqharm[3] = (unsigned int  )0;
  sqlstm.sqadto[3] = (unsigned short )0;
  sqlstm.sqtdso[3] = (unsigned short )0;
  sqlstm.sqhstv[4] = (         void  *)&day;
  sqlstm.sqhstl[4] = (unsigned int  )102;
  sqlstm.sqhsts[4] = (         int  )0;
  sqlstm.sqindv[4] = (         void  *)0;
  sqlstm.sqinds[4] = (         int  )0;
  sqlstm.sqharm[4] = (unsigned int  )0;
  sqlstm.sqadto[4] = (unsigned short )0;
  sqlstm.sqtdso[4] = (unsigned short )0;
  sqlstm.sqhstv[5] = (         void  *)&stime;
  sqlstm.sqhstl[5] = (unsigned int  )102;
  sqlstm.sqhsts[5] = (         int  )0;
  sqlstm.sqindv[5] = (         void  *)0;
  sqlstm.sqinds[5] = (         int  )0;
  sqlstm.sqharm[5] = (unsigned int  )0;
  sqlstm.sqadto[5] = (unsigned short )0;
  sqlstm.sqtdso[5] = (unsigned short )0;
  sqlstm.sqhstv[6] = (         void  *)&etime;
  sqlstm.sqhstl[6] = (unsigned int  )102;
  sqlstm.sqhsts[6] = (         int  )0;
  sqlstm.sqindv[6] = (         void  *)0;
  sqlstm.sqinds[6] = (         int  )0;
  sqlstm.sqharm[6] = (unsigned int  )0;
  sqlstm.sqadto[6] = (unsigned short )0;
  sqlstm.sqtdso[6] = (unsigned short )0;
  sqlstm.sqphsv = sqlstm.sqhstv;
  sqlstm.sqphsl = sqlstm.sqhstl;
  sqlstm.sqphss = sqlstm.sqhsts;
  sqlstm.sqpind = sqlstm.sqindv;
  sqlstm.sqpins = sqlstm.sqinds;
  sqlstm.sqparm = sqlstm.sqharm;
  sqlstm.sqparc = sqlstm.sqharc;
  sqlstm.sqpadto = sqlstm.sqadto;
  sqlstm.sqptdso = sqlstm.sqtdso;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
  if (sqlca.sqlcode == 1403) break;
  if (sqlca.sqlcode < 0) (fail=sql_error("\7ORACLE ERROR:\n"));
}


		
		hnum.arr[hnum.len] = '\0' ;
		gid.arr[gid.len] = '\0' ;
		gname.arr[gname.len] = '\0';
		seat.arr[seat.len] = '\0';
		day.arr[day.len] = '\0' ;
		stime.arr[stime.len] = '\0';
		etime.arr[etime.len] = '\0' ;

		gotoxy(x,y);
		printf("%-3s %-10s%-5s   %3s   %-11s    %-8s   %-10s", hnum.arr, gid.arr, gname.arr, seat.arr,day.arr,stime.arr,etime.arr);

		y++;
		count++;
		gotoxy(40,19);
		printf("%-2d",page);
		if( count == 5){
			page++;
			count = 0;
   			 while (1) {
        				if (_kbhit()) {             
           					 c = _getch();        
          					  if (c == -32) {       
              					c = _getch();   
						  if(c==77){
							break;
	 					   }
					}
				}
			}
			gotoxy(8,13); //이전 화면 부분 클리어	
	            	  	for(int i= 0; i < 5; i++){
				printf("                                                                                                                 \n");
			}
			y = 13 ;
		}

   	 }
	gotoxy(71,18);
	printf("(END)");
	getch();

    	/* Close the cursor. */
   	/* EXEC SQL CLOSE b_cursor; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 7;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )82;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) (fail=sql_error("\7ORACLE ERROR:\n"));
}



   	/* EXEC SQL COMMIT ; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 7;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )97;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) (fail=sql_error("\7ORACLE ERROR:\n"));
}


}
/*---------------   구매 이력 전체 조회 함수 --------------------*/
void seach_Buy_All(){
clrscr();
	print_screen("buyAll.txt");
	
	int x,y,count=0, page=1;
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

   		/* varchar snum[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } snum;

		/* varchar gid[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } gid;

		/* varchar gname[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } gname;

		/* varchar pname[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } pname;

		/* varchar date[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } date;

		/* varchar samount[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } samount;

		/* varchar pprice[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } pprice;

		/* varchar total[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } total;
	

  		char dynstmt[1000];
	/* EXEC SQL END DECLARE SECTION; */ 

	
	//EXEC SQL WHENEVER SQLERROR DO sql_error("\7ORACLE ERROR:\n");
	
	char searchID[20];
	gotoxy(13,7);
	gets_s(searchID, sizeof searchID);
	if(searchID[0] == '\0' ) {
    		   strcpy(searchID, "%%");
	   }else{
		char a[10] = "%";
		strcat(searchID,a);
		strcat(a,searchID);
		strcpy(searchID, a);

	}

	/* 실행시킬 SQL 문장*/
   	sprintf(dynstmt,"select to_char(s.snum),g.gid,g.gname, to_char(p.pname), to_char(s.sales_date, 'YY-MM-DD HH24:MI'), to_char(s.samount),to_char(p.pprice) ,to_char(s.samount*p.pprice) from gogak g join sales s  on g.gid = s.gid join product p on s.pnum = p.pnum where g.gid like '%s' order by s.snum desc", searchID); 

	/* EXEC SQL PREPARE S FROM :dynstmt ; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 13;
 sqlstm.arrsiz = 7;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )112;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)dynstmt;
 sqlstm.sqhstl[0] = (unsigned int  )1000;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqphsv = sqlstm.sqhstv;
 sqlstm.sqphsl = sqlstm.sqhstl;
 sqlstm.sqphss = sqlstm.sqhsts;
 sqlstm.sqpind = sqlstm.sqindv;
 sqlstm.sqpins = sqlstm.sqinds;
 sqlstm.sqparm = sqlstm.sqharm;
 sqlstm.sqparc = sqlstm.sqharc;
 sqlstm.sqpadto = sqlstm.sqadto;
 sqlstm.sqptdso = sqlstm.sqtdso;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
 if (sqlca.sqlcode < 0) (fail=sql_error("\7ORACLE ERROR:\n"));
}



	/* cursor 선언 */
	/* EXEC SQL DECLARE a_cursor CURSOR FOR S ; */ 
 
	
	/* cursor open */
	/* EXEC SQL OPEN a_cursor ; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 13;
 sqlstm.arrsiz = 7;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )131;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.sqlpfmem = (unsigned int  )0;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqcmod = (unsigned int )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
 if (sqlca.sqlcode < 0) (fail=sql_error("\7ORACLE ERROR:\n"));
}

 

	/* EXEC SQL WHENEVER NOT FOUND DO break; */ 


	x = 4;
  	y = 11 ;
  	for (;;){
		
		/* EXEC SQL FETCH a_cursor INTO :snum,:gid,:gname, :pname, :date, :samount, :pprice, :total; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 13;
  sqlstm.arrsiz = 8;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )146;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.sqlpfmem = (unsigned int  )0;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)4352;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqfoff = (           int )0;
  sqlstm.sqfmod = (unsigned int )2;
  sqlstm.sqhstv[0] = (         void  *)&snum;
  sqlstm.sqhstl[0] = (unsigned int  )102;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&gid;
  sqlstm.sqhstl[1] = (unsigned int  )102;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)&gname;
  sqlstm.sqhstl[2] = (unsigned int  )102;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)0;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)&pname;
  sqlstm.sqhstl[3] = (unsigned int  )102;
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         void  *)0;
  sqlstm.sqinds[3] = (         int  )0;
  sqlstm.sqharm[3] = (unsigned int  )0;
  sqlstm.sqadto[3] = (unsigned short )0;
  sqlstm.sqtdso[3] = (unsigned short )0;
  sqlstm.sqhstv[4] = (         void  *)&date;
  sqlstm.sqhstl[4] = (unsigned int  )102;
  sqlstm.sqhsts[4] = (         int  )0;
  sqlstm.sqindv[4] = (         void  *)0;
  sqlstm.sqinds[4] = (         int  )0;
  sqlstm.sqharm[4] = (unsigned int  )0;
  sqlstm.sqadto[4] = (unsigned short )0;
  sqlstm.sqtdso[4] = (unsigned short )0;
  sqlstm.sqhstv[5] = (         void  *)&samount;
  sqlstm.sqhstl[5] = (unsigned int  )102;
  sqlstm.sqhsts[5] = (         int  )0;
  sqlstm.sqindv[5] = (         void  *)0;
  sqlstm.sqinds[5] = (         int  )0;
  sqlstm.sqharm[5] = (unsigned int  )0;
  sqlstm.sqadto[5] = (unsigned short )0;
  sqlstm.sqtdso[5] = (unsigned short )0;
  sqlstm.sqhstv[6] = (         void  *)&pprice;
  sqlstm.sqhstl[6] = (unsigned int  )102;
  sqlstm.sqhsts[6] = (         int  )0;
  sqlstm.sqindv[6] = (         void  *)0;
  sqlstm.sqinds[6] = (         int  )0;
  sqlstm.sqharm[6] = (unsigned int  )0;
  sqlstm.sqadto[6] = (unsigned short )0;
  sqlstm.sqtdso[6] = (unsigned short )0;
  sqlstm.sqhstv[7] = (         void  *)&total;
  sqlstm.sqhstl[7] = (unsigned int  )102;
  sqlstm.sqhsts[7] = (         int  )0;
  sqlstm.sqindv[7] = (         void  *)0;
  sqlstm.sqinds[7] = (         int  )0;
  sqlstm.sqharm[7] = (unsigned int  )0;
  sqlstm.sqadto[7] = (unsigned short )0;
  sqlstm.sqtdso[7] = (unsigned short )0;
  sqlstm.sqphsv = sqlstm.sqhstv;
  sqlstm.sqphsl = sqlstm.sqhstl;
  sqlstm.sqphss = sqlstm.sqhsts;
  sqlstm.sqpind = sqlstm.sqindv;
  sqlstm.sqpins = sqlstm.sqinds;
  sqlstm.sqparm = sqlstm.sqharm;
  sqlstm.sqparc = sqlstm.sqharc;
  sqlstm.sqpadto = sqlstm.sqadto;
  sqlstm.sqptdso = sqlstm.sqtdso;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
  if (sqlca.sqlcode == 1403) break;
  if (sqlca.sqlcode < 0) (fail=sql_error("\7ORACLE ERROR:\n"));
}


		
		snum.arr[snum.len] = '\0' ;
		gid.arr[gid.len] = '\0' ;
		gname.arr[gname.len] = '\0' ;
		pname.arr[pname.len] = '\0' ;
		date.arr[date.len] = '\0';
		samount.arr[samount.len] = '\0' ;
		pprice.arr[pprice.len] = '\0' ;
		total.arr[total.len] = '\0' ;
		

		gotoxy(x,y);
		printf("%-3s  %-10s%-5s  %14s %14s %3s %7s%10s", snum.arr,gid.arr,gname.arr,date.arr,  pname.arr,samount.arr, pprice.arr, total.arr);

		y++;
		count++;
		gotoxy(40,17);
		printf("%-2d",page);
		if( count == 5){
			page++;
			count = 0;
			char c;
			while (1) {
        				if (_kbhit()) {             
           					 c = _getch();        
          					  if (c == -32) {       
              						  c = _getch();   
						  if(c==77){
							break;
	 					   }
					}else if(c==13){
						empMain();
					}
				}
			}
			gotoxy(8,11); //이전 화면 부분 클리어	
	            	  	for(int i= 0; i < 5; i++){
				printf("                                                                                             \n");
			}
			y = 11 ;
		}

   	 }
	gotoxy(73,18);
    	printf("(END)");
	getch();

    	/* Close the cursor. */
   	/* EXEC SQL CLOSE a_cursor; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 8;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )193;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) (fail=sql_error("\7ORACLE ERROR:\n"));
}



   	/* EXEC SQL COMMIT ; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 8;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )208;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) (fail=sql_error("\7ORACLE ERROR:\n"));
}


}
/*---------------   회원 전체 조회 함수 --------------------*/
void gogak_list(){
clrscr();
	print_screen("gogak_list.txt");
		
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

   		/* varchar v_id[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } v_id;

		/* varchar v_pw[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } v_pw;

   		 /* varchar  v_name[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } v_name;

		/* varchar v_phone[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } v_phone;

	
    		char dynstmt[1000];
	/* EXEC SQL END DECLARE SECTION; */ 

    
	
    
   // EXEC SQL WHENEVER SQLERROR DO sql_error("\7ORACLE ERROR:\n");
   
    sprintf(dynstmt,"select * from gogak") ;
		int page=1, count=0;
   		 /* EXEC SQL PREPARE S FROM :dynstmt ; */ 

{
      struct sqlexd sqlstm;
      sqlstm.sqlvsn = 13;
      sqlstm.arrsiz = 8;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.stmt = "";
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )223;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)4352;
      sqlstm.occurs = (unsigned int  )0;
      sqlstm.sqhstv[0] = (         void  *)dynstmt;
      sqlstm.sqhstl[0] = (unsigned int  )1000;
      sqlstm.sqhsts[0] = (         int  )0;
      sqlstm.sqindv[0] = (         void  *)0;
      sqlstm.sqinds[0] = (         int  )0;
      sqlstm.sqharm[0] = (unsigned int  )0;
      sqlstm.sqadto[0] = (unsigned short )0;
      sqlstm.sqtdso[0] = (unsigned short )0;
      sqlstm.sqphsv = sqlstm.sqhstv;
      sqlstm.sqphsl = sqlstm.sqhstl;
      sqlstm.sqphss = sqlstm.sqhsts;
      sqlstm.sqpind = sqlstm.sqindv;
      sqlstm.sqpins = sqlstm.sqinds;
      sqlstm.sqparm = sqlstm.sqharm;
      sqlstm.sqparc = sqlstm.sqharc;
      sqlstm.sqpadto = sqlstm.sqadto;
      sqlstm.sqptdso = sqlstm.sqtdso;
      sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
      if (sqlca.sqlcode < 0) (fail=sql_error("\7ORACLE ERROR:\n"));
}



  		  /* EXEC SQL DECLARE q_cursor CURSOR FOR S ; */ 
 

  		  /* EXEC SQL OPEN q_cursor ; */ 

{
      struct sqlexd sqlstm;
      sqlstm.sqlvsn = 13;
      sqlstm.arrsiz = 8;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.stmt = "";
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )242;
      sqlstm.selerr = (unsigned short)1;
      sqlstm.sqlpfmem = (unsigned int  )0;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)4352;
      sqlstm.occurs = (unsigned int  )0;
      sqlstm.sqcmod = (unsigned int )0;
      sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
      if (sqlca.sqlcode < 0) (fail=sql_error("\7ORACLE ERROR:\n"));
}

 

  
  		  /* EXEC SQL WHENEVER NOT FOUND do break; */ 

			int x = 14;
			int y = 10;
	
    for(;;)
    {
        /* EXEC SQL FETCH q_cursor INTO :v_id, :v_name, :v_pw, :v_phone; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 8;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )257;
        sqlstm.selerr = (unsigned short)1;
        sqlstm.sqlpfmem = (unsigned int  )0;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqfoff = (           int )0;
        sqlstm.sqfmod = (unsigned int )2;
        sqlstm.sqhstv[0] = (         void  *)&v_id;
        sqlstm.sqhstl[0] = (unsigned int  )22;
        sqlstm.sqhsts[0] = (         int  )0;
        sqlstm.sqindv[0] = (         void  *)0;
        sqlstm.sqinds[0] = (         int  )0;
        sqlstm.sqharm[0] = (unsigned int  )0;
        sqlstm.sqadto[0] = (unsigned short )0;
        sqlstm.sqtdso[0] = (unsigned short )0;
        sqlstm.sqhstv[1] = (         void  *)&v_name;
        sqlstm.sqhstl[1] = (unsigned int  )22;
        sqlstm.sqhsts[1] = (         int  )0;
        sqlstm.sqindv[1] = (         void  *)0;
        sqlstm.sqinds[1] = (         int  )0;
        sqlstm.sqharm[1] = (unsigned int  )0;
        sqlstm.sqadto[1] = (unsigned short )0;
        sqlstm.sqtdso[1] = (unsigned short )0;
        sqlstm.sqhstv[2] = (         void  *)&v_pw;
        sqlstm.sqhstl[2] = (unsigned int  )22;
        sqlstm.sqhsts[2] = (         int  )0;
        sqlstm.sqindv[2] = (         void  *)0;
        sqlstm.sqinds[2] = (         int  )0;
        sqlstm.sqharm[2] = (unsigned int  )0;
        sqlstm.sqadto[2] = (unsigned short )0;
        sqlstm.sqtdso[2] = (unsigned short )0;
        sqlstm.sqhstv[3] = (         void  *)&v_phone;
        sqlstm.sqhstl[3] = (unsigned int  )22;
        sqlstm.sqhsts[3] = (         int  )0;
        sqlstm.sqindv[3] = (         void  *)0;
        sqlstm.sqinds[3] = (         int  )0;
        sqlstm.sqharm[3] = (unsigned int  )0;
        sqlstm.sqadto[3] = (unsigned short )0;
        sqlstm.sqtdso[3] = (unsigned short )0;
        sqlstm.sqphsv = sqlstm.sqhstv;
        sqlstm.sqphsl = sqlstm.sqhstl;
        sqlstm.sqphss = sqlstm.sqhsts;
        sqlstm.sqpind = sqlstm.sqindv;
        sqlstm.sqpins = sqlstm.sqinds;
        sqlstm.sqparm = sqlstm.sqharm;
        sqlstm.sqparc = sqlstm.sqharc;
        sqlstm.sqpadto = sqlstm.sqadto;
        sqlstm.sqptdso = sqlstm.sqtdso;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
        if (sqlca.sqlcode == 1403) break;
        if (sqlca.sqlcode < 0) (fail=sql_error("\7ORACLE ERROR:\n"));
}


		
		v_id.arr[v_id.len] = '\0' ;
		v_name.arr[v_name.len] = '\0' ;
		v_pw.arr[v_pw.len] = '\0' ;
		v_phone.arr[v_phone.len] = '\0' ;

		gotoxy(x,y);
		printf("%10s %10s%14s %13s", v_id.arr, v_pw.arr, v_name.arr, v_phone.arr);

		y++;
		count++;
		gotoxy(39,16);
		printf("%-2d",page);
		gotoxy(71,22);
		if( count == 5){
			page++;
			count = 0;
			char c;
			while (1) {
        				if (_kbhit()) {             
           					 c = _getch();        
          					  if (c == -32) {       
              						  c = _getch();   
						  if(c==77){
							break;
	 					   }
					}else if(c==13){
						UOrD();
						empMain();
					}
				}
			}
			gotoxy(8,11); //이전 화면 부분 클리어	
	            	  	for(int i= 0; i < 5; i++){
				printf("                                                                                             \n");
			}
			y = 11 ;
		}
    	}	
	/* EXEC SQL CLOSE q_cursor; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 13;
 sqlstm.arrsiz = 8;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )288;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
 if (sqlca.sqlcode < 0) (fail=sql_error("\7ORACLE ERROR:\n"));
}

 
	
	gotoxy(66,17);
    	printf("(END)");
	gotoxy(62,22);
	printf("                            ");
	gotoxy(62,22);
	printf("나가기");
	UOrD();
    
}
/*---------------   사용자 변경 또는 삭제 조회 함수 --------------------*/
void UOrD(){
	char change_n[10];
	while(1){
		gotoxy(32,18);
		printf("1. 수정 2. 삭제 >> ");
		gets_s(change_n, sizeof change_n);
		if(change_n[0] == '\0' ) {
    			break;
		}else if(strcmp(change_n,"1")==0){
			int check = check_gogak();
			if(check==1){
				gogakUpdate();
				break;
			}
		}else if(strcmp(change_n,"2")==0){
			int check = check_gogak();
			if(check==1){
				gogakD();
				break;
			}
		}else{
			gotoxy(32,19);
			printf("잘 못 입력 했습니다.");
			getch();
			gotoxy(32,19);
			printf("                             ");
			gotoxy(51,18);
			printf("                           ");
		}
	}	
}
/*---------------   회원 삭제 함수 --------------------*/
void gogakD(){

/* EXEC SQL BEGIN DECLARE SECTION; */ 


	   char dynstmt[1000];

	/* EXEC SQL END DECLARE SECTION; */ 

	
	
	char  flag[10];

   	//EXEC SQL WHENEVER SQLERROR DO sql_error("\7ORACLE ERROR:\n");
	
	while(1){
		gotoxy(21,20);
		printf("정말 회원을 탈퇴시키겠습니까?? (y/n) >> ");   
		gets_s(flag, sizeof flag);
   		if( strcmp(flag,"y") == 0|| strcmp(flag,"Y") == 0 ){
       			sprintf(dynstmt,"delete from gogak where gid = '%s' ", gogakID);
			if(gogakUSING==1){
				gotoxy(32,21);
				printf("현재 사용 중 입니다.!");
				getch();
				break;	
			}else{
				/* EXEC SQL EXECUTE IMMEDIATE :dynstmt ; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 8;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )303;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)dynstmt;
    sqlstm.sqhstl[0] = (unsigned int  )1000;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         void  *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqphss = sqlstm.sqhsts;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqpins = sqlstm.sqinds;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlstm.sqpadto = sqlstm.sqadto;
    sqlstm.sqptdso = sqlstm.sqtdso;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode == 1403) break;
    if (sqlca.sqlcode < 0) (fail=sql_error("\7ORACLE ERROR:\n"));
}


		       		/* EXEC SQL COMMIT WORK ; */ 

{
           struct sqlexd sqlstm;
           sqlstm.sqlvsn = 13;
           sqlstm.arrsiz = 8;
           sqlstm.sqladtp = &sqladt;
           sqlstm.sqltdsp = &sqltds;
           sqlstm.iters = (unsigned int  )1;
           sqlstm.offset = (unsigned int  )322;
           sqlstm.cud = sqlcud0;
           sqlstm.sqlest = (unsigned char  *)&sqlca;
           sqlstm.sqlety = (unsigned short)4352;
           sqlstm.occurs = (unsigned int  )0;
           sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
           if (sqlca.sqlcode < 0) (fail=sql_error("\7ORACLE ERROR:\n"));
}

 
				gotoxy(31,21);
				printf("탈퇴를 완료했습니다..\n");
				getch();
				break;
			}
		   }
   		else {
			gotoxy(31,21);
      		 	printf("탈퇴를 취소했습니다.");
			getch();
   		}
		gotoxy(20,19);
   		printf("                                                                        \n");   
		printf("                                                                        \n");   
		printf("                                                                        \n");   
		break;
	}
}
/*---------------   사용자가 있는지 조회 함수 --------------------*/
int check_gogak(){
	gotoxy(28,19);
	printf("회원 ID를 작성해 주세요 >> ");
	while(1){
		gotoxy(54,19);
		char select_id[20];
		gets_s(select_id, sizeof select_id);
		int id_check = Select_tuple(select_id);
		if(select_id[0] == '\0'){
			break;	
			gotoxy(28,19);
			printf("                                                    ");
		}
		if(id_check == 0){
			gotoxy(28,20);
			printf("존재하지 않는 아이디 입니다.");
			getch();
			gotoxy(28,20);
			printf("                                                  ");
			gotoxy(54,19);
			printf("                                                  ");
		}else{
			return 1;
		}
	}
	return 0;
}

/*---------------   현재 사용 현황 조회 함수 --------------------*/
void pc_start_now(){
	clrscr();
	print_screen("useState.txt");
		
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

   		 int  v_seat;
   		 /* varchar  v_name[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } v_name;

	
    		char dynstmt[1000];
	/* EXEC SQL END DECLARE SECTION; */ 

    
	
    
   // EXEC SQL WHENEVER SQLERROR DO sql_error("\7ORACLE ERROR:\n");
   
    sprintf(dynstmt,"select u.seat, g.gname from use_history u join gogak g on u.gid = g.gid where etime is Null") ;
	
    /* EXEC SQL PREPARE S FROM :dynstmt ; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 8;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )337;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)dynstmt;
    sqlstm.sqhstl[0] = (unsigned int  )1000;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         void  *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqphss = sqlstm.sqhsts;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqpins = sqlstm.sqinds;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlstm.sqpadto = sqlstm.sqadto;
    sqlstm.sqptdso = sqlstm.sqtdso;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) (fail=sql_error("\7ORACLE ERROR:\n"));
}



    /* EXEC SQL DECLARE w_cursor CURSOR FOR S ; */ 
 

    /* EXEC SQL OPEN w_cursor ; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 8;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )356;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.sqlpfmem = (unsigned int  )0;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqcmod = (unsigned int )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) (fail=sql_error("\7ORACLE ERROR:\n"));
}

 

  
    /* EXEC SQL WHENEVER NOT FOUND do break; */ 

	char arr[SEAT];
	for(int i=0; i<SEAT;i++){
		arr[i]='y';
	}
    for(;;)
    {
        /* EXEC SQL FETCH w_cursor INTO :v_seat, :v_name; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 8;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )371;
        sqlstm.selerr = (unsigned short)1;
        sqlstm.sqlpfmem = (unsigned int  )0;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqfoff = (           int )0;
        sqlstm.sqfmod = (unsigned int )2;
        sqlstm.sqhstv[0] = (         void  *)&v_seat;
        sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
        sqlstm.sqhsts[0] = (         int  )0;
        sqlstm.sqindv[0] = (         void  *)0;
        sqlstm.sqinds[0] = (         int  )0;
        sqlstm.sqharm[0] = (unsigned int  )0;
        sqlstm.sqadto[0] = (unsigned short )0;
        sqlstm.sqtdso[0] = (unsigned short )0;
        sqlstm.sqhstv[1] = (         void  *)&v_name;
        sqlstm.sqhstl[1] = (unsigned int  )22;
        sqlstm.sqhsts[1] = (         int  )0;
        sqlstm.sqindv[1] = (         void  *)0;
        sqlstm.sqinds[1] = (         int  )0;
        sqlstm.sqharm[1] = (unsigned int  )0;
        sqlstm.sqadto[1] = (unsigned short )0;
        sqlstm.sqtdso[1] = (unsigned short )0;
        sqlstm.sqphsv = sqlstm.sqhstv;
        sqlstm.sqphsl = sqlstm.sqhstl;
        sqlstm.sqphss = sqlstm.sqhsts;
        sqlstm.sqpind = sqlstm.sqindv;
        sqlstm.sqpins = sqlstm.sqinds;
        sqlstm.sqparm = sqlstm.sqharm;
        sqlstm.sqparc = sqlstm.sqharc;
        sqlstm.sqpadto = sqlstm.sqadto;
        sqlstm.sqptdso = sqlstm.sqtdso;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
        if (sqlca.sqlcode == 1403) break;
        if (sqlca.sqlcode < 0) (fail=sql_error("\7ORACLE ERROR:\n"));
}


	int x=0, y=0;
	
	v_name.arr[v_name.len] = '\0';
	if( v_seat > 5 ){
		y = 15;
		x = ((v_seat-5)*5) + ((v_seat-6)*11);
	}else{
		y =10;
		x = (v_seat*5) + ((v_seat-1)*11);
	}
	
	arr[v_seat-1] = 'n';
	gotoxy(x,y);
	printf("%s",v_name.arr);
    }	
	getch();
    /* EXEC SQL CLOSE w_cursor; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 8;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )394;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) (fail=sql_error("\7ORACLE ERROR:\n"));
}

 
}

/*---------------   음식 관리 함수 --------------------*/
void food_list(){
	clrscr();
	print_screen("food_list.txt");
	
	int x,y,count=0, page=1;
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

   		
		/* varchar pnum[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } pnum;

		/* varchar pname[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } pname;

		int pamount;
		int pprice;

  		char dynstmt[1000];
	/* EXEC SQL END DECLARE SECTION; */ 

	
	//EXEC SQL WHENEVER SQLERROR DO sql_error("\7ORACLE ERROR:\n");

	/* 실행시킬 SQL 문장*/
   	sprintf(dynstmt,"select * from product order by pnum asc"); 

	/* EXEC SQL PREPARE S FROM :dynstmt ; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 13;
 sqlstm.arrsiz = 8;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )409;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)dynstmt;
 sqlstm.sqhstl[0] = (unsigned int  )1000;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqphsv = sqlstm.sqhstv;
 sqlstm.sqphsl = sqlstm.sqhstl;
 sqlstm.sqphss = sqlstm.sqhsts;
 sqlstm.sqpind = sqlstm.sqindv;
 sqlstm.sqpins = sqlstm.sqinds;
 sqlstm.sqparm = sqlstm.sqharm;
 sqlstm.sqparc = sqlstm.sqharc;
 sqlstm.sqpadto = sqlstm.sqadto;
 sqlstm.sqptdso = sqlstm.sqtdso;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
 if (sqlca.sqlcode < 0) (fail=sql_error("\7ORACLE ERROR:\n"));
}



	/* cursor 선언 */
	/* EXEC SQL DECLARE z_cursor CURSOR FOR S ; */ 
 
	
	/* cursor open */
	/* EXEC SQL OPEN z_cursor ; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 13;
 sqlstm.arrsiz = 8;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )428;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.sqlpfmem = (unsigned int  )0;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqcmod = (unsigned int )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
 if (sqlca.sqlcode < 0) (fail=sql_error("\7ORACLE ERROR:\n"));
}

 

	/* EXEC SQL WHENEVER NOT FOUND DO break; */ 


	x = 18;
  	y = 10;
  	for (;;){
		/* EXEC SQL FETCH z_cursor INTO :pnum, :pname, :pamount, :pprice; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 13;
  sqlstm.arrsiz = 8;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )443;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.sqlpfmem = (unsigned int  )0;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)4352;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqfoff = (           int )0;
  sqlstm.sqfmod = (unsigned int )2;
  sqlstm.sqhstv[0] = (         void  *)&pnum;
  sqlstm.sqhstl[0] = (unsigned int  )102;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&pname;
  sqlstm.sqhstl[1] = (unsigned int  )102;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)&pamount;
  sqlstm.sqhstl[2] = (unsigned int  )sizeof(int);
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)0;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)&pprice;
  sqlstm.sqhstl[3] = (unsigned int  )sizeof(int);
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         void  *)0;
  sqlstm.sqinds[3] = (         int  )0;
  sqlstm.sqharm[3] = (unsigned int  )0;
  sqlstm.sqadto[3] = (unsigned short )0;
  sqlstm.sqtdso[3] = (unsigned short )0;
  sqlstm.sqphsv = sqlstm.sqhstv;
  sqlstm.sqphsl = sqlstm.sqhstl;
  sqlstm.sqphss = sqlstm.sqhsts;
  sqlstm.sqpind = sqlstm.sqindv;
  sqlstm.sqpins = sqlstm.sqinds;
  sqlstm.sqparm = sqlstm.sqharm;
  sqlstm.sqparc = sqlstm.sqharc;
  sqlstm.sqpadto = sqlstm.sqadto;
  sqlstm.sqptdso = sqlstm.sqtdso;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
  if (sqlca.sqlcode == 1403) break;
  if (sqlca.sqlcode < 0) (fail=sql_error("\7ORACLE ERROR:\n"));
}


		
		pnum.arr[pnum.len] = '\0' ;
		pname.arr[pname.len] = '\0' ;
	

		gotoxy(x,y);
		printf("%s   %15s            %-7d    %-3d", pnum.arr, pname.arr ,pprice,pamount);
		gotoxy(41,15);
		printf("%-2d",page);
		if( count == 5){
			page++;
			count = 0;
   			int a = choose_ufood();
			if(a==0){
				return;
			}
			gotoxy(18,11); //이전 화면 부분 클리어	
			for(int i= 0; i < 5; i++){
				printf("                                                                                             \n");
			}
			y = 10 ;
			
		}	
		y++;
		count++;
		
		if( count == 5){
			count = 0;
			getch();
			gotoxy(8,11); //이전 화면 부분 클리어	
	            	  	for(int i= 0; i < 5; i++){
				printf("                                                                                             \n");
			}
			y = 10 ;
		}

   	 }
	choose_ufood();
	gotoxy(27,17);
	printf("Enter key를 누르면 종료합니다.");
	getE();

    	/* Close the cursor. */
   	/* EXEC SQL CLOSE z_cursor; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 8;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )474;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) (fail=sql_error("\7ORACLE ERROR:\n"));
}



   	/* EXEC SQL COMMIT ; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 8;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )489;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) (fail=sql_error("\7ORACLE ERROR:\n"));
}


}
/*---------------   음식 선택 함수 --------------------*/
int choose_ufood(){
	char c;
	while (1) {
		if (_kbhit()) {             
			c = _getch();        
			if (c == -32) {       
				c = _getch();   
				if(c==77){
					break;
				}else if(c==80){
					while(1){
						char a[5];
						while(1){
							gotoxy(26,18);
							printf("1. 변경 2. 삭제 >> ");
							gets_s(a, sizeof a);
							char b[20];
							if(a[0]=='2'){
								gotoxy(21,19);
								printf("삭제할 상품 명을 입력해주세요 >> ");
								gets_s(b, sizeof(b));
								delete_food(b);
								empMain();
							}else if(a[0]=='1'){
								gotoxy(21,19);
								printf("변경할 상품 명을 입력해주세요 >> ");
								gets_s(b, sizeof b);
								if(b[0] !='\0'){
									int c = search_food(b);
									if(c == 0){
										gotoxy(32,21);
										printf("잘못된 상품명입니다.");
										getch();	
										gotoxy(32,21);
										printf("                            ");
									}else if(c==1){
										updateFood(b);
										return 1;
									}
								}else{
									gotoxy(30,22);
									printf("변경를 취소했습니다.");
									getch();
									return 0;
								}
							}else{
								gotoxy(30,19);
								printf("다시 입력해 주세요..");
								getch();
								gotoxy(30,19);
								printf("                         ");
								gotoxy(26,18);
								printf("                                                              ");
							}
						}
						
						
					}
				}
	
			}else if (c==13){
					gotoxy(32,21);
					printf("변경를 종료합니다.");
					getch();
					return 0;
			}
		}
	}
}
/*---------------   음식 삭제 함수 --------------------*/
void delete_food(char foodname[50]){
/* EXEC SQL BEGIN DECLARE SECTION; */ 


	   char dynstmt[1000];

	/* EXEC SQL END DECLARE SECTION; */ 

	
	
	char  flag[10];

   	//EXEC SQL WHENEVER SQLERROR DO sql_error("\7ORACLE ERROR:\n");
	
	while(1){
		gotoxy(29,20);
		printf("정말 삭제 시키겠습니까?? (y/n) >> ");   
		gets_s(flag, sizeof flag);
   		if( strcmp(flag,"y") == 0|| strcmp(flag,"Y") == 0 ){
       			sprintf(dynstmt,"delete from product where pname ='%s'", foodname);
			
				/* EXEC SQL EXECUTE IMMEDIATE :dynstmt ; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 8;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )504;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)dynstmt;
    sqlstm.sqhstl[0] = (unsigned int  )1000;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         void  *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqphss = sqlstm.sqhsts;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqpins = sqlstm.sqinds;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlstm.sqpadto = sqlstm.sqadto;
    sqlstm.sqptdso = sqlstm.sqtdso;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode == 1403) break;
    if (sqlca.sqlcode < 0) (fail=sql_error("\7ORACLE ERROR:\n"));
}


		       	/* EXEC SQL COMMIT WORK ; */ 

{
          struct sqlexd sqlstm;
          sqlstm.sqlvsn = 13;
          sqlstm.arrsiz = 8;
          sqlstm.sqladtp = &sqladt;
          sqlstm.sqltdsp = &sqltds;
          sqlstm.iters = (unsigned int  )1;
          sqlstm.offset = (unsigned int  )523;
          sqlstm.cud = sqlcud0;
          sqlstm.sqlest = (unsigned char  *)&sqlca;
          sqlstm.sqlety = (unsigned short)4352;
          sqlstm.occurs = (unsigned int  )0;
          sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
          if (sqlca.sqlcode < 0) (fail=sql_error("\7ORACLE ERROR:\n"));
}

 
				gotoxy(31,21);
				printf("삭제를 완료했습니다..\n");
				getch();
				break;
			
		   }
   		else {
			gotoxy(31,21);
      		 	printf("삭제를 취소했습니다.");
			getch();
			break;
   		}
		
	}

}

/*---------------   음식 등록 함수 --------------------*/
void input_food(){
	clrscr();
	print_screen("foodinfo.txt");
	/* EXEC SQL BEGIN DECLARE SECTION; */ 


	   char dynstmt[1000];

  	/* EXEC SQL END DECLARE SECTION; */ 


	char food_name[50];
	char food_price[50];
	char food_amount[50];

	while(1){
		gotoxy(37, 10);
		gets_s(food_name, sizeof food_name);

		gotoxy(37, 12);
		gets_s(food_price, sizeof food_price);

		gotoxy(37, 14);
		gets_s(food_amount, sizeof food_amount);
		if(food_name[0] =='\0' ||food_price[0]=='\0'||food_amount[0]=='\0' ){
				gotoxy(24,17);
				printf("작성하지 않은 항목이 존재합니다.");
				getch();
				gotoxy(24,17);
				printf("                                ");
		}else{
			break;
		}
		gotoxy(37,10);
		for(int i=0; i<4; i++){
			printf("                   \n\n");
		}
	}

	
	while(1){
			gotoxy(28,17);
			printf("확정하시겠습니까?(y/n)>>");
		
			char a[10]; // 확정할껀지 받는 변수
			gets_s(a,sizeof a);
			if(strcmp(a,"y")==0 || strcmp(a,"Y")==0){
				int exist = search_food(food_name);
				if(exist == 1){
					sprintf(dynstmt,"update product set pprice=%s, pamount=%s where pname = '%s'", food_price,food_amount, food_name);
					gotoxy(30,18);
					printf("추가가 완료되었습니다.");
					getch();
					empMain();
				}else if(exist==0) {
					sprintf(dynstmt,"insert into product values ((nvl2((select max(pnum) from product),(select max(pnum)+1 from product),1)), '%s', %s, %s)" , food_name , food_amount,food_price);

					/* 실행시킬 SQL 문장*/

					gotoxy(30,18);
					printf("등록이 완료되었습니다.");
					getch();
					break;
					
				}
			}else if(strcmp(a,"n")==0 || strcmp(a,"N")==0){
				gotoxy(30,18);
				printf("등록이 취소되었습니다.");
				break;
			}else{		
				gotoxy(23,17); // 잘 못 입력 되었다는 것을 알리기
				printf("잘 못된 입력입니다. 다시 입력해주세요");
				getch();
				gotoxy(23,17);
				printf("                                         ");
			}
		}
		while(1){
			/* EXEC SQL EXECUTE IMMEDIATE :dynstmt ; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 8;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )538;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)dynstmt;
   sqlstm.sqhstl[0] = (unsigned int  )1000;
   sqlstm.sqhsts[0] = (         int  )0;
   sqlstm.sqindv[0] = (         void  *)0;
   sqlstm.sqinds[0] = (         int  )0;
   sqlstm.sqharm[0] = (unsigned int  )0;
   sqlstm.sqadto[0] = (unsigned short )0;
   sqlstm.sqtdso[0] = (unsigned short )0;
   sqlstm.sqphsv = sqlstm.sqhstv;
   sqlstm.sqphsl = sqlstm.sqhstl;
   sqlstm.sqphss = sqlstm.sqhsts;
   sqlstm.sqpind = sqlstm.sqindv;
   sqlstm.sqpins = sqlstm.sqinds;
   sqlstm.sqparm = sqlstm.sqharm;
   sqlstm.sqparc = sqlstm.sqharc;
   sqlstm.sqpadto = sqlstm.sqadto;
   sqlstm.sqptdso = sqlstm.sqtdso;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
   if (sqlca.sqlcode == 1403) break;
   if (sqlca.sqlcode < 0) (fail=sql_error("\7ORACLE ERROR:\n"));
}


			break;
		}
		/* EXEC SQL COMMIT WORK ; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 13;
  sqlstm.arrsiz = 8;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )557;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)4352;
  sqlstm.occurs = (unsigned int  )0;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
  if (sqlca.sqlcode < 0) (fail=sql_error("\7ORACLE ERROR:\n"));
}


		empMain();
}
/*---------------   음식 업데이트 함수 --------------------*/
void updateFood(char ufood_name[50]){
	/* EXEC SQL BEGIN DECLARE SECTION; */ 


	   char dynstmt[1000];

  	/* EXEC SQL END DECLARE SECTION; */ 

   char pPrice[10];
   char pAmount[10];
  
   //EXEC SQL WHENEVER SQLERROR DO sql_error("\7ORACLE ERROR:\n");
	search_food(ufood_name);
	clrscr();
	print_screen("foodinfo.txt");
	gotoxy(39,8);
	printf("수정");
	while(1){
		
		gotoxy(37,10);
		printf("%s", proNAME);
		
		
		gotoxy(37,12);
		gets_s(pPrice, sizeof pPrice);
		if(pPrice[0] == '\0' ) {
			gotoxy(35,12);
			sprintf(pPrice,"%d",proPRICE);
			printf("%d", proPRICE );
		}

		gotoxy(37,14);
		gets_s(pAmount, sizeof pAmount);
		if(pAmount[0] == '\0' ) {
			gotoxy(35,14);
			sprintf(pAmount,"%d",proAMOUNT);
			printf("%d",  proAMOUNT);
			
		}
		
		gotoxy(23,17);
		printf("정말로 변경하시겠습니까? (y/n) >> ");
		char flag[10];
		gets_s(flag, sizeof flag);
		if( strcmp(flag,"y")==0 || strcmp(flag,"Y")==0 ){
					sprintf(dynstmt,"update product set pprice=%s, pamount=%s where pname = '%s'",pPrice, pAmount, proNAME);
					gotoxy(30,18);
						printf("변경이 완료되습니다! ");
					getch();
					while(1){
						/* EXEC SQL EXECUTE IMMEDIATE :dynstmt ; */ 

{
      struct sqlexd sqlstm;
      sqlstm.sqlvsn = 13;
      sqlstm.arrsiz = 8;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.stmt = "";
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )572;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)4352;
      sqlstm.occurs = (unsigned int  )0;
      sqlstm.sqhstv[0] = (         void  *)dynstmt;
      sqlstm.sqhstl[0] = (unsigned int  )1000;
      sqlstm.sqhsts[0] = (         int  )0;
      sqlstm.sqindv[0] = (         void  *)0;
      sqlstm.sqinds[0] = (         int  )0;
      sqlstm.sqharm[0] = (unsigned int  )0;
      sqlstm.sqadto[0] = (unsigned short )0;
      sqlstm.sqtdso[0] = (unsigned short )0;
      sqlstm.sqphsv = sqlstm.sqhstv;
      sqlstm.sqphsl = sqlstm.sqhstl;
      sqlstm.sqphss = sqlstm.sqhsts;
      sqlstm.sqpind = sqlstm.sqindv;
      sqlstm.sqpins = sqlstm.sqinds;
      sqlstm.sqparm = sqlstm.sqharm;
      sqlstm.sqparc = sqlstm.sqharc;
      sqlstm.sqpadto = sqlstm.sqadto;
      sqlstm.sqptdso = sqlstm.sqtdso;
      sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
      if (sqlca.sqlcode == 1403) break;
      if (sqlca.sqlcode < 0) (fail=sql_error("\7ORACLE ERROR:\n"));
}


						break;
					}
					/* EXEC SQL COMMIT WORK ; */ 

{
     struct sqlexd sqlstm;
     sqlstm.sqlvsn = 13;
     sqlstm.arrsiz = 8;
     sqlstm.sqladtp = &sqladt;
     sqlstm.sqltdsp = &sqltds;
     sqlstm.iters = (unsigned int  )1;
     sqlstm.offset = (unsigned int  )591;
     sqlstm.cud = sqlcud0;
     sqlstm.sqlest = (unsigned char  *)&sqlca;
     sqlstm.sqlety = (unsigned short)4352;
     sqlstm.occurs = (unsigned int  )0;
     sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
     if (sqlca.sqlcode < 0) (fail=sql_error("\7ORACLE ERROR:\n"));
}


					empMain();
		}
		else {
			gotoxy(30,18);
				printf("변경을 취소했습니다.");
			getch();
			break;
		}
		gotoxy(37,12);
		printf("                                                          ");   
		gotoxy(37,14);
		printf("                                                           ");
	}

}


/*---------------   음식 검색함수 --------------------*/
int search_food(char food_name[20]){
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

   		/* varchar sPname[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } sPname;

		int sPamount;
		int sPprice;
		
  		char dynstmt[1000];
	/* EXEC SQL END DECLARE SECTION; */ 


	/* 실행시킬 SQL 문장*/
   	sprintf(dynstmt,"select pname, pamount, pprice from product where pname= '%s'", food_name); 
	
	/* EXEC SQL PREPARE S FROM :dynstmt ; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 13;
 sqlstm.arrsiz = 8;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )606;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)dynstmt;
 sqlstm.sqhstl[0] = (unsigned int  )1000;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqphsv = sqlstm.sqhstv;
 sqlstm.sqphsl = sqlstm.sqhstl;
 sqlstm.sqphss = sqlstm.sqhsts;
 sqlstm.sqpind = sqlstm.sqindv;
 sqlstm.sqpins = sqlstm.sqinds;
 sqlstm.sqparm = sqlstm.sqharm;
 sqlstm.sqparc = sqlstm.sqharc;
 sqlstm.sqpadto = sqlstm.sqadto;
 sqlstm.sqptdso = sqlstm.sqtdso;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
 if (sqlca.sqlcode < 0) (fail=sql_error("\7ORACLE ERROR:\n"));
}



	/* cursor 선언 */
	/* EXEC SQL DECLARE x_cursor CURSOR FOR S ; */ 
 
	
	/* cursor open */
	/* EXEC SQL OPEN x_cursor ; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 13;
 sqlstm.arrsiz = 8;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )625;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.sqlpfmem = (unsigned int  )0;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqcmod = (unsigned int )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
 if (sqlca.sqlcode < 0) (fail=sql_error("\7ORACLE ERROR:\n"));
}

 

	/* EXEC SQL WHENEVER NOT FOUND DO break; */ 


  	for (;;){
		/* EXEC SQL FETCH x_cursor INTO :sPname, :sPamount, :sPprice; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 13;
  sqlstm.arrsiz = 8;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )640;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.sqlpfmem = (unsigned int  )0;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)4352;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqfoff = (           int )0;
  sqlstm.sqfmod = (unsigned int )2;
  sqlstm.sqhstv[0] = (         void  *)&sPname;
  sqlstm.sqhstl[0] = (unsigned int  )22;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&sPamount;
  sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)&sPprice;
  sqlstm.sqhstl[2] = (unsigned int  )sizeof(int);
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)0;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqphsv = sqlstm.sqhstv;
  sqlstm.sqphsl = sqlstm.sqhstl;
  sqlstm.sqphss = sqlstm.sqhsts;
  sqlstm.sqpind = sqlstm.sqindv;
  sqlstm.sqpins = sqlstm.sqinds;
  sqlstm.sqparm = sqlstm.sqharm;
  sqlstm.sqparc = sqlstm.sqharc;
  sqlstm.sqpadto = sqlstm.sqadto;
  sqlstm.sqptdso = sqlstm.sqtdso;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
  if (sqlca.sqlcode == 1403) break;
  if (sqlca.sqlcode < 0) (fail=sql_error("\7ORACLE ERROR:\n"));
}


		
		sPname.arr[sPname.len] = '\0' ;
		strcpy(proNAME, sPname.arr);
		proPRICE = sPprice;
		proAMOUNT = sPamount;

		return 1;
   	 }
	
    	/* Close the cursor. */
   	/* EXEC SQL CLOSE x_cursor; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 8;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )667;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) (fail=sql_error("\7ORACLE ERROR:\n"));
}


	return 0;	
}
