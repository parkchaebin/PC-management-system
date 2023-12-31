
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
           char  filnam[14];
};
static const struct sqlcxp sqlfpn =
{
    13,
    "gogak_main.pc"
};


static unsigned int sqlctx = 599163;


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
            void  *sqhstv[6];
   unsigned int   sqhstl[6];
            int   sqhsts[6];
            void  *sqindv[6];
            int   sqinds[6];
   unsigned int   sqharm[6];
   unsigned int   *sqharc[6];
   unsigned short  sqadto[6];
   unsigned short  sqtdso[6];
} sqlstm = {13,6};

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
5,0,0,1,0,0,17,106,0,0,1,1,0,1,0,1,97,0,0,
24,0,0,1,0,0,45,112,0,0,0,0,0,1,0,
39,0,0,1,0,0,13,120,0,0,5,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,
74,0,0,1,0,0,15,165,0,0,0,0,0,1,0,
89,0,0,2,0,0,29,167,0,0,0,0,0,1,0,
104,0,0,3,0,0,24,221,0,0,1,1,0,1,0,1,97,0,0,
123,0,0,4,0,0,29,223,0,0,0,0,0,1,0,
138,0,0,1,0,0,17,263,0,0,1,1,0,1,0,1,97,0,0,
157,0,0,1,0,0,45,269,0,0,0,0,0,1,0,
172,0,0,1,0,0,13,277,0,0,6,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,
0,0,
211,0,0,1,0,0,15,323,0,0,0,0,0,1,0,
226,0,0,5,0,0,29,325,0,0,0,0,0,1,0,
241,0,0,1,0,0,17,348,0,0,1,1,0,1,0,1,97,0,0,
260,0,0,1,0,0,45,352,0,0,0,0,0,1,0,
275,0,0,1,0,0,13,362,0,0,2,0,0,1,0,2,3,0,0,2,9,0,0,
298,0,0,1,0,0,15,379,0,0,0,0,0,1,0,
313,0,0,6,0,0,24,434,0,0,1,1,0,1,0,1,97,0,0,
332,0,0,7,0,0,29,437,0,0,0,0,0,1,0,
347,0,0,1,0,0,17,457,0,0,1,1,0,1,0,1,97,0,0,
366,0,0,1,0,0,45,463,0,0,0,0,0,1,0,
381,0,0,1,0,0,13,468,0,0,3,0,0,1,0,2,9,0,0,2,3,0,0,2,3,0,0,
408,0,0,1,0,0,15,508,0,0,0,0,0,1,0,
423,0,0,8,0,0,29,510,0,0,0,0,0,1,0,
438,0,0,9,0,0,24,523,0,0,1,1,0,1,0,1,97,0,0,
457,0,0,10,0,0,29,530,0,0,0,0,0,1,0,
472,0,0,1,0,0,17,552,0,0,1,1,0,1,0,1,97,0,0,
491,0,0,1,0,0,45,558,0,0,0,0,0,1,0,
506,0,0,1,0,0,13,565,0,0,4,0,0,1,0,2,9,0,0,2,9,0,0,2,3,0,0,2,3,0,0,
537,0,0,1,0,0,15,598,0,0,0,0,0,1,0,
552,0,0,11,0,0,29,600,0,0,0,0,0,1,0,
567,0,0,12,0,0,24,675,0,0,1,1,0,1,0,1,97,0,0,
586,0,0,13,0,0,29,682,0,0,0,0,0,1,0,
601,0,0,1,0,0,17,720,0,0,1,1,0,1,0,1,97,0,0,
620,0,0,1,0,0,45,724,0,0,0,0,0,1,0,
635,0,0,1,0,0,13,731,0,0,1,0,0,1,0,2,3,0,0,
654,0,0,1,0,0,15,736,0,0,0,0,0,1,0,
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

void gogakMain(char str_id[20]);
void gogakUsgin();
void gogakDelete();
void gogakUpdate();
int Select_tuple(char *no);
void getBuyList();
void pc_start(char str_id[20]);
void insert_use(int select);
void change_state();
void search_pro();
void pc_exit();
void pc_stop();
int getPrice(char pro[10]);
void buy_pro(char num[10], char number[10], int price);
int choose_food();

// win32 Visual C 2010 이상컴파일시 추가

//-----------------------------------------

//#ifdef WIN32
#include < windows.h >

#define getch() _getch()

int fail;
  /* EXEC SQL WHENEVER SQLERROR DO fail = sql_error("\7ORACLE ERROR:\n"); */ 


/*---------------   고객 메인 시작 함수 --------------------*/
void gogakMain(char str_id[20]){
	Select_tuple(str_id);
	char gogak_select[10];
	while(1){
		clrscr();
		print_screen("gogakMain.txt");
		gotoxy(16,4);
		printf("%s", gogakNAME);
		gotoxy(36,17);
		gets_s(gogak_select, sizeof gogak_select);
		if(gogak_select[0]=='\0'){
			gotoxy(25,18); // 잘 못 입력 되었다는 것을 알리기
			printf("메인으로 돌아갑니다..");
			getch();
			return;
		}else{ 
		if( strcmp(gogak_select,"1") == 0){
			search_pro();
		}else if (strcmp(gogak_select,"2") == 0){
			pc_stop();
		}else if (strcmp(gogak_select,"3") == 0){
			gogakUpdate();
		}else if (strcmp(gogak_select,"4") == 0){
			gogakUsgin();
		}else if (strcmp(gogak_select,"5") == 0){
			getBuyList();
		}else{
			gotoxy(25,18); // 잘 못 입력 되었다는 것을 알리기
			printf("잘못된 입력입니다. 다시 입력해주세요");
			getch();
		}
		}
		
	}

}

/*---------------   본인 사용 기록 조회 함수 --------------------*/
void gogakUsgin(){
	clrscr();
	print_screen("myUsing.txt");
	int x,y,count=0, page=1;
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

   		/* varchar hnum[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } hnum;

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

	/* 실행시킬 SQL 문장*/

   	sprintf(dynstmt,"select to_char(hnum), to_char(seat) , to_char(stime, 'YYYY-MM-DD') , to_char(stime, 'HH24:MI')  , nvl2(etime, to_char(stime, 'HH24:MI'),to_char('사용 중')) from use_history where gid='%s' order by hnum desc",gogakID); 

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


	x = 8;
  	y = 11 ;
	char c;
  	for (;;){
		/* EXEC SQL FETCH b_cursor INTO :hnum, :seat, :day, :stime, :etime; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 13;
  sqlstm.arrsiz = 5;
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
  sqlstm.sqhstv[1] = (         void  *)&seat;
  sqlstm.sqhstl[1] = (unsigned int  )102;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)&day;
  sqlstm.sqhstl[2] = (unsigned int  )102;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)0;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)&stime;
  sqlstm.sqhstl[3] = (unsigned int  )102;
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         void  *)0;
  sqlstm.sqinds[3] = (         int  )0;
  sqlstm.sqharm[3] = (unsigned int  )0;
  sqlstm.sqadto[3] = (unsigned short )0;
  sqlstm.sqtdso[3] = (unsigned short )0;
  sqlstm.sqhstv[4] = (         void  *)&etime;
  sqlstm.sqhstl[4] = (unsigned int  )102;
  sqlstm.sqhsts[4] = (         int  )0;
  sqlstm.sqindv[4] = (         void  *)0;
  sqlstm.sqinds[4] = (         int  )0;
  sqlstm.sqharm[4] = (unsigned int  )0;
  sqlstm.sqadto[4] = (unsigned short )0;
  sqlstm.sqtdso[4] = (unsigned short )0;
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
		seat.arr[seat.len] = '\0';
		day.arr[day.len] = '\0' ;
		stime.arr[stime.len] = '\0';
		etime.arr[etime.len] = '\0' ;

		gotoxy(x,y);
		printf("   %4s     %5s      %-11s       %-8s    %-10s", hnum.arr, seat.arr,day.arr,stime.arr,etime.arr);

		y++;
		count++;
		gotoxy(40,16);
		printf("%d",page);
		if( count == 5){
			count = 0;
			page++;
			
			while(1){
				if (_kbhit()) {       
					c = getch();   
					if (c == -32) {    
						c = getch();
						if(c==77){
							break;
						}				
					}else if( c==13){
						return;
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
	gotoxy(70,16);
    printf("(END)");
	getE();

    	/* Close the cursor. */
   	/* EXEC SQL CLOSE b_cursor; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 5;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )74;
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
    sqlstm.arrsiz = 5;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )89;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) (fail=sql_error("\7ORACLE ERROR:\n"));
}


}

/*---------------   회원 정보 변경 함수 --------------------*/
void gogakUpdate(){
	/* EXEC SQL BEGIN DECLARE SECTION; */ 


	   char dynstmt[1000];

  /* EXEC SQL END DECLARE SECTION; */ 

	
   char  upw[50];
   char uphone[50];
  
   //EXEC SQL WHENEVER SQLERROR DO sql_error("\7ORACLE ERROR:\n");
  
  
	clrscr();
	print_screen("gogakUpdate.txt");
	
while(1){
     
  gotoxy(35,9);
  printf("%s", gogakID);
  
  gotoxy(35, 11);
  printf("%s", gogakNAME);

   gotoxy(35,13);
  gets_s(upw, sizeof upw);
   if(upw[0] == '\0' ) {
       gotoxy(35,13);
       strcpy(upw, gogakPW);
        printf("%s\n", gogakPW );
   }

   gotoxy(35,15);
   gets_s(uphone, sizeof uphone);
   if(uphone[0] == '\0' ) {
       gotoxy(35,15);
       printf("%s\n", gogakPHONE );
       strcpy(uphone, gogakPHONE);
   }
   
   gotoxy(26,19);
   printf("정말로 변경하시겠습니까? (y/n) >> ");
   char flag[10];
	gets_s(flag, sizeof flag);
   if( strcmp(flag,"y")==0 || strcmp(flag,"Y")==0 ){
       			sprintf(dynstmt,"update gogak set gpw ='%s', phone='%s' where gid = '%s'", upw, uphone, gogakID);
       			
			gotoxy(35,20);
      		 	printf("변경이 완료되습니다! ");
			getch();
			/* EXEC SQL EXECUTE IMMEDIATE :dynstmt ; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 5;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )104;
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
      sqlstm.arrsiz = 5;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )123;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)4352;
      sqlstm.occurs = (unsigned int  )0;
      sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
      if (sqlca.sqlcode < 0) (fail=sql_error("\7ORACLE ERROR:\n"));
}

 
			break;
			
		   }
   		else {
			gotoxy(35,20);
      		 	printf("변경을 취소했습니다.");
			getch();
			break;
   		}
		gotoxy(29,19);
   		printf("                                                          ");   
		gotoxy(35,20);
     	 	printf("                                                           ");
	
   
 }

}
/*---------------   구매이력 조회 함수 --------------------*/
void getBuyList(){
	clrscr();
	print_screen("myBuy.txt");
	int x,y,count=0, page=1;
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

   		/* varchar snum[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } snum;

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

	/* 실행시킬 SQL 문장*/
   	sprintf(dynstmt,"select to_char(s.snum), to_char(p.pname), to_char(s.sales_date, 'YY-MM-DD HH24:MI'), to_char(s.samount),to_char(p.pprice) ,to_char(s.samount*p.pprice) from gogak g join sales s  on g.gid = s.gid join product p on s.pnum = p.pnum where g.gid = '%s' order by s.snum desc", gogakID); 

	/* EXEC SQL PREPARE S FROM :dynstmt ; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 13;
 sqlstm.arrsiz = 5;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )138;
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
 sqlstm.arrsiz = 5;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )157;
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


	x = 11;
  	y = 11 ;
	char c;
  	for (;;){
		/* EXEC SQL FETCH a_cursor INTO :snum, :pname, :date, :samount, :pprice, :total; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 13;
  sqlstm.arrsiz = 6;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )172;
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
  sqlstm.sqhstv[1] = (         void  *)&pname;
  sqlstm.sqhstl[1] = (unsigned int  )102;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)&date;
  sqlstm.sqhstl[2] = (unsigned int  )102;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)0;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)&samount;
  sqlstm.sqhstl[3] = (unsigned int  )102;
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         void  *)0;
  sqlstm.sqinds[3] = (         int  )0;
  sqlstm.sqharm[3] = (unsigned int  )0;
  sqlstm.sqadto[3] = (unsigned short )0;
  sqlstm.sqtdso[3] = (unsigned short )0;
  sqlstm.sqhstv[4] = (         void  *)&pprice;
  sqlstm.sqhstl[4] = (unsigned int  )102;
  sqlstm.sqhsts[4] = (         int  )0;
  sqlstm.sqindv[4] = (         void  *)0;
  sqlstm.sqinds[4] = (         int  )0;
  sqlstm.sqharm[4] = (unsigned int  )0;
  sqlstm.sqadto[4] = (unsigned short )0;
  sqlstm.sqtdso[4] = (unsigned short )0;
  sqlstm.sqhstv[5] = (         void  *)&total;
  sqlstm.sqhstl[5] = (unsigned int  )102;
  sqlstm.sqhsts[5] = (         int  )0;
  sqlstm.sqindv[5] = (         void  *)0;
  sqlstm.sqinds[5] = (         int  )0;
  sqlstm.sqharm[5] = (unsigned int  )0;
  sqlstm.sqadto[5] = (unsigned short )0;
  sqlstm.sqtdso[5] = (unsigned short )0;
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
		pname.arr[pname.len] = '\0' ;
		date.arr[date.len] = '\0';
		samount.arr[samount.len] = '\0' ;
		pprice.arr[pprice.len] = '\0' ;
		total.arr[total.len] = '\0' ;
		

		gotoxy(x,y);
		printf("%-3s  %-10s %-15s         %s     %s      %s", snum.arr, pname.arr,date.arr,samount.arr, pprice.arr, total.arr);

		y++;
		count++;
		gotoxy(39,16);
		printf("%d",page);
		if( count == 5){
			count = 0;
			page++;
			
			while(1){
				if (_kbhit()) {       
					c = getch();   
					if (c == -32) {    
						c = getch();
						if(c==77){
							break;
						}				
					}else if( c==13){
						return;
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
	gotoxy(71,16);
    printf("(END)");
	getE();

	/* Close the cursor. */
	/* EXEC SQL CLOSE a_cursor; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 13;
 sqlstm.arrsiz = 6;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )211;
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
    sqlstm.arrsiz = 6;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )226;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) (fail=sql_error("\7ORACLE ERROR:\n"));
}


   
}

/*---------------   PC 사용 확인 함수 --------------------*/
void pc_start(char str_id[20]){
	Select_tuple(str_id);
	clrscr();
	print_screen("useState.txt");
		
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

   		 int  v_seat;
   		 /* varchar  v_name[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } v_name;

	
    		char dynstmt[1000];
	/* EXEC SQL END DECLARE SECTION; */ 

    
	
    
    //EXEC SQL WHENEVER SQLERROR DO sql_error("\7ORACLE ERROR:\n");
   
    sprintf(dynstmt,"select u.seat, g.gname from use_history u join gogak g on u.gid = g.gid where etime is Null") ;
	
    /* EXEC SQL PREPARE S FROM :dynstmt ; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 6;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )241;
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



    /* EXEC SQL DECLARE d_cursor CURSOR FOR S ; */ 
 

    /* EXEC SQL OPEN d_cursor ; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 6;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )260;
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
        /* EXEC SQL FETCH d_cursor INTO :v_seat, :v_name; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 6;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )275;
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
	
    /* EXEC SQL CLOSE d_cursor; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 6;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )298;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) (fail=sql_error("\7ORACLE ERROR:\n"));
}

 
	
   /*---------------   좌석 예약하기 --------------------*/
	char seat_select[SEAT];	
	while(1){
		gotoxy(22,18);
		printf("예약하실 좌석을 선택해 주세요 >> ");
		gets_s(seat_select,sizeof seat_select);
	
		if(strcmp(seat_select,"exit")==0 || strcmp(seat_select,"EXIT")==0){
			break;
		}else{
			if((seat_select[1]=='\0' && strcmp(seat_select,"[0-9]")) || strcmp(seat_select, "10") == 0) {
				int seat = seat_select[0] - 48;
				if(arr[seat-1] == 'y'){
					insert_use(seat);
					gotoxy(27,20);
					printf("예약이 완료되었습니다.");
					getch();
					break;
				}else if(arr[seat-1] == 'n'){
					gotoxy(26,20);
					printf("이미 예약된 좌석입니다..");
					getch();
				}
			}else{
				gotoxy(26,19);
				printf("잘 못 입력하셨습니다..");
				getch();
		
			}
			gotoxy(26,19);
			printf("                                                    ");
			gotoxy(26,20);
			printf("                                           ");
			gotoxy(22,18);
			printf("                                                            ");
		}
	}	

}
/*---------------   좌석 예약 함수 --------------------*/
void insert_use(int select){	
/* EXEC SQL BEGIN DECLARE SECTION; */ 

    		char dynstmt[1000];
	/* EXEC SQL END DECLARE SECTION; */ 



 	/* Register sql_error() as the error handler. */
	//EXEC SQL WHENEVER SQLERROR DO sql_error("\7ORACLE ERROR:\n");

	sprintf(dynstmt,"insert into use_history values (nvl2((select max(hnum) from use_history),(select max(hnum)+1 from use_history),1), %d, '%s', default, default)",select  ,gogakID );
	
	   /* 실행시킬 SQL 문장*/
	while(1){
		/* EXEC SQL EXECUTE IMMEDIATE :dynstmt ; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 13;
  sqlstm.arrsiz = 6;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )313;
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
 sqlstm.arrsiz = 6;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )332;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
 if (sqlca.sqlcode < 0) (fail=sql_error("\7ORACLE ERROR:\n"));
}


	
	
}

/*---------------   PC 사용 중지 함수 --------------------*/
void pc_stop(){
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

   		/* varchar stime[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } stime;

		int usingtime;
		int total;

  		char dynstmt[1000];
	/* EXEC SQL END DECLARE SECTION; */ 

	
	//EXEC SQL WHENEVER SQLERROR DO sql_error("\7ORACLE ERROR:\n");

	/* 실행시킬 SQL 문장*/
   	sprintf(dynstmt,"select to_char(stime, 'YY-MM-DD HH24:MI'), round(to_number(sysdate-stime)*24*60), round((to_number(sysdate-stime)*24*60*100)/100)*100 from use_history where gid='%s' and etime is NULL", gogakID); 

	/* EXEC SQL PREPARE S FROM :dynstmt ; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 13;
 sqlstm.arrsiz = 6;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )347;
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
	/* EXEC SQL DECLARE f_cursor CURSOR FOR S ; */ 
 
	
	/* cursor open */
	/* EXEC SQL OPEN f_cursor ; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 13;
 sqlstm.arrsiz = 6;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )366;
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
		/* EXEC SQL FETCH f_cursor INTO :stime, :usingtime, :total; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 13;
  sqlstm.arrsiz = 6;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )381;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.sqlpfmem = (unsigned int  )0;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)4352;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqfoff = (           int )0;
  sqlstm.sqfmod = (unsigned int )2;
  sqlstm.sqhstv[0] = (         void  *)&stime;
  sqlstm.sqhstl[0] = (unsigned int  )102;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&usingtime;
  sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)&total;
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


		
		stime.arr[stime.len] = '\0' ;

		gotoxy(26,18);
		printf("시작 시간 : %s", stime.arr);
		
		gotoxy(26,19);
		printf("사용 시간 : %d 시간 %d 분", usingtime/60, usingtime%60);
		
		gotoxy(26,20);
		printf("결제 가격 : %d 원", total);
			
		while(1){
			gotoxy(26,21);
			printf("종료하시겠습니까? (y/n)>>");
			char asd[10];
			gets_s(asd, sizeof asd);
			if(strcmp(asd,"y")==0 || strcmp(asd,"Y")==0){
				pc_exit();
				start();
				break;
			} else if(strcmp(asd,"n")==0 || strcmp(asd,"N")==0){
				gotoxy(31,22);
				printf("취소합니다.");
				getch();
				break;
			}else{
				gotoxy(31,22);
				printf("잘못 입력했습니다.");
				getch();
			}
			gotoxy(31,22);
			printf("                                        ");
			gotoxy(26,21);
			printf("                                                     ");
		}
   	 }

    	/* Close the cursor. */
   	/* EXEC SQL CLOSE f_cursor; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 6;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )408;
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
    sqlstm.arrsiz = 6;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )423;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) (fail=sql_error("\7ORACLE ERROR:\n"));
}

	
}
/*---------------   종료 함수 --------------------*/
void pc_exit(){
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

  		char dynstmt[1000];
	/* EXEC SQL END DECLARE SECTION; */ 

	
	//EXEC SQL WHENEVER SQLERROR DO sql_error("\7ORACLE ERROR:\n");
		sprintf(dynstmt,"update use_history set etime =systimestamp where gid ='%s'",  gogakID);
       			
			
				while(1){
			/* EXEC SQL EXECUTE IMMEDIATE :dynstmt ; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )438;
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
			gotoxy(32,22);
      		 	printf("감사합니다!! ");
			getch();
			
		       	/* EXEC SQL COMMIT WORK ; */ 

{
          struct sqlexd sqlstm;
          sqlstm.sqlvsn = 13;
          sqlstm.arrsiz = 6;
          sqlstm.sqladtp = &sqladt;
          sqlstm.sqltdsp = &sqltds;
          sqlstm.iters = (unsigned int  )1;
          sqlstm.offset = (unsigned int  )457;
          sqlstm.cud = sqlcud0;
          sqlstm.sqlest = (unsigned char  *)&sqlca;
          sqlstm.sqlety = (unsigned short)4352;
          sqlstm.occurs = (unsigned int  )0;
          sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
          if (sqlca.sqlcode < 0) (fail=sql_error("\7ORACLE ERROR:\n"));
}

 
}

/*---------------   음식 찾기 함수 --------------------*/
void search_pro(){
              clrscr();
	print_screen("buy_pro.txt");
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
 sqlstm.arrsiz = 6;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )472;
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
	/* EXEC SQL DECLARE e_cursor CURSOR FOR S ; */ 
 
	
	/* cursor open */
	/* EXEC SQL OPEN e_cursor ; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 13;
 sqlstm.arrsiz = 6;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )491;
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
  	y = 10 ;
  	for (;;){	
		/* EXEC SQL FETCH e_cursor INTO :pnum, :pname, :pamount, :pprice; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 13;
  sqlstm.arrsiz = 6;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )506;
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
		printf("%s   %15s            %d          %d", pnum.arr, pname.arr, pprice,pamount);
		
		y++;
		count++;
		gotoxy(40,15);
		printf("%-2d",page);
		if( count == 5){
			page++;
			count = 0;
   			int a = choose_food();
			if(a==0){
				return;
			}
			gotoxy(18,11); //이전 화면 부분 클리어	
			for(int i= 0; i < 5; i++){
				printf("                                                                                             \n");
			}
			y = 10 ;
			
		}	
	}
	choose_food();
	gotoxy(27,17);
	printf("Enter key를 누르면 종료합니다.");
	getE();
	/* Close the cursor. */
		/* EXEC SQL CLOSE e_cursor; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 13;
  sqlstm.arrsiz = 6;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )537;
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
  sqlstm.arrsiz = 6;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )552;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)4352;
  sqlstm.occurs = (unsigned int  )0;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
  if (sqlca.sqlcode < 0) (fail=sql_error("\7ORACLE ERROR:\n"));
}


				
	
}
/*---------------   음식 선택 함수 --------------------*/
int choose_food(){
	char num[10];
	char number[10];
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
						gotoxy(26,17);
						printf("구매할 상품의 번호를 입력해주세요");
						gotoxy(26,18);
						printf("번호 >>              수량>>       ");
						gotoxy(34,18);
						gets_s(num, sizeof num);
						gotoxy(54,18);
						gets_s(number, sizeof number);
						if(num[0]!='\0' && number[0] !='\0'){
							int price = getPrice(num);
							if(price ==-1){
								gotoxy(32,21);
								printf("잘못된 번호입니다.");
								getch();	
								gotoxy(32,21);
								printf("                            ");
							}else{
								buy_pro(num,number,price);
								return 1;
							}
						}else{
							gotoxy(30,22);
							printf("구매를 취소했습니다.");
							getch();
							return 0;
						}
					}
				}
	
			}else if (c==13){
					gotoxy(32,21);
					printf("구매를 종료합니다.");
					getch();
					return 0;
			}
		}
	}
}

/*---------------   음식 구매 함수 --------------------*/
void buy_pro(char num[10], char number[10], int price){
	/* EXEC SQL BEGIN DECLARE SECTION; */ 


		char dynstmt[1000];

	/* EXEC SQL END DECLARE SECTION; */ 

	int co = atoi(number);
   	sprintf(dynstmt,"insert into sales values ((nvl2((select max(snum) from sales),(select max(snum)+1 from sales),1)),'%s','%s',default,%d)", num,  gogakID, co);
     		
	gotoxy(30,21);
      	printf("가격은 %d입니다.",price*co);
	while(1){
		gotoxy(30,22);
		printf("구매 (y/n) >>");
		char buy[20];
		gets_s(buy,sizeof buy);
		if(strcmp(buy,"y")==0 || strcmp(buy,"Y")==0){
			/* EXEC SQL EXECUTE IMMEDIATE :dynstmt ; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )567;
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


			if(fail==1){
				gotoxy(30,22);
				printf("재고가 부족합니다!!");
				getch();
				return;
			}else{
		       		/* EXEC SQL COMMIT WORK ; */ 

{
           struct sqlexd sqlstm;
           sqlstm.sqlvsn = 13;
           sqlstm.arrsiz = 6;
           sqlstm.sqladtp = &sqladt;
           sqlstm.sqltdsp = &sqltds;
           sqlstm.iters = (unsigned int  )1;
           sqlstm.offset = (unsigned int  )586;
           sqlstm.cud = sqlcud0;
           sqlstm.sqlest = (unsigned char  *)&sqlca;
           sqlstm.sqlety = (unsigned short)4352;
           sqlstm.occurs = (unsigned int  )0;
           sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
           if (sqlca.sqlcode < 0) (fail=sql_error("\7ORACLE ERROR:\n"));
}

 
				gotoxy(30,22);
				printf("                      ");
				gotoxy(30,22);
				printf("구매를 하였습니다.");
				getch();
				return;
			}
		} else if(strcmp(buy,"n")==0 || strcmp(buy,"N")==0){
			gotoxy(30,22);
			printf("구매를 취소했습니다.");
			getch();
			return;
		}else{
			gotoxy(30,23);
			printf("잘못 입력했습니다.");
			getch();
			gotoxy(30,23);
			printf("                                ");
		}
	}
}

			

/*---------------   물품 가격 찾기 함수 --------------------*/
int getPrice(char pro[10]){
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

  	int pprice;
    char dynstmt[1000];
/* EXEC SQL END DECLARE SECTION; */ 

    
    
    //EXEC SQL WHENEVER SQLERROR DO sql_error("\7ORACLE ERROR:\n");
   
    sprintf(dynstmt,"SELECT pprice  FROM product where pnum = '%s'", pro) ;


    /* EXEC SQL PREPARE S FROM :dynstmt ; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 6;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )601;
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



    /* EXEC SQL DECLARE t_cursor CURSOR FOR S ; */ 
 

    /* EXEC SQL OPEN t_cursor ; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 6;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )620;
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

 

  int price=-1;
    /* EXEC SQL WHENEVER NOT FOUND do break; */ 


    for(;;)
    {
        /* EXEC SQL FETCH t_cursor INTO :pprice; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 6;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )635;
        sqlstm.selerr = (unsigned short)1;
        sqlstm.sqlpfmem = (unsigned int  )0;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqfoff = (           int )0;
        sqlstm.sqfmod = (unsigned int )2;
        sqlstm.sqhstv[0] = (         void  *)&pprice;
        sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
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



	price = pprice;
    }

    /* EXEC SQL CLOSE t_cursor; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 6;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )654;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) (fail=sql_error("\7ORACLE ERROR:\n"));
}

 
	return price;
}