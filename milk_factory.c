
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
           char  filnam[16];
};
static const struct sqlcxp sqlfpn =
{
    15,
    "milk_factory.pc"
};


static unsigned int sqlctx = 2493155;


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
            void  *sqhstv[12];
   unsigned int   sqhstl[12];
            int   sqhsts[12];
            void  *sqindv[12];
            int   sqinds[12];
   unsigned int   sqharm[12];
   unsigned int   *sqharc[12];
   unsigned short  sqadto[12];
   unsigned short  sqtdso[12];
} sqlstm = {13,12};

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
{13,4130,840,0,0,
5,0,0,0,0,0,27,436,0,0,4,4,0,1,0,1,9,0,0,1,9,0,0,1,10,0,0,1,10,0,0,
36,0,0,2,0,0,17,486,0,0,1,1,0,1,0,1,97,0,0,
55,0,0,2,0,0,45,492,0,0,0,0,0,1,0,
70,0,0,2,0,0,13,498,0,0,2,0,0,1,0,2,9,0,0,2,9,0,0,
93,0,0,3,0,0,17,538,0,0,1,1,0,1,0,1,97,0,0,
112,0,0,3,0,0,45,544,0,0,0,0,0,1,0,
127,0,0,3,0,0,13,550,0,0,1,0,0,1,0,2,9,0,0,
146,0,0,4,0,0,24,625,0,0,1,1,0,1,0,1,97,0,0,
165,0,0,5,0,0,24,626,0,0,1,1,0,1,0,1,97,0,0,
184,0,0,6,0,0,29,629,0,0,0,0,0,1,0,
199,0,0,3,0,0,15,630,0,0,0,0,0,1,0,
214,0,0,2,0,0,15,631,0,0,0,0,0,1,0,
229,0,0,7,0,0,17,681,0,0,1,1,0,1,0,1,97,0,0,
248,0,0,8,0,0,17,682,0,0,1,1,0,1,0,1,97,0,0,
267,0,0,7,0,0,45,689,0,0,0,0,0,1,0,
282,0,0,8,0,0,45,690,0,0,0,0,0,1,0,
297,0,0,7,0,0,13,696,0,0,1,0,0,1,0,2,9,0,0,
316,0,0,8,0,0,13,703,0,0,1,0,0,1,0,2,9,0,0,
335,0,0,9,0,0,24,844,0,0,1,1,0,1,0,1,97,0,0,
354,0,0,10,0,0,29,848,0,0,0,0,0,1,0,
369,0,0,11,0,0,24,997,0,0,1,1,0,1,0,1,97,0,0,
388,0,0,12,0,0,29,1000,0,0,0,0,0,1,0,
403,0,0,13,0,0,24,1132,0,0,1,1,0,1,0,1,97,0,0,
422,0,0,14,0,0,29,1135,0,0,0,0,0,1,0,
437,0,0,15,0,0,17,1173,0,0,1,1,0,1,0,1,97,0,0,
456,0,0,15,0,0,45,1181,0,0,0,0,0,1,0,
471,0,0,15,0,0,13,1191,0,0,6,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,
9,0,0,
510,0,0,15,0,0,15,1236,0,0,0,0,0,1,0,
525,0,0,16,0,0,17,1301,0,0,1,1,0,1,0,1,97,0,0,
544,0,0,16,0,0,45,1307,0,0,0,0,0,1,0,
559,0,0,16,0,0,13,1317,0,0,6,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,
9,0,0,
598,0,0,16,0,0,15,1347,0,0,0,0,0,1,0,
613,0,0,17,0,0,29,1349,0,0,0,0,0,1,0,
628,0,0,18,0,0,17,1387,0,0,1,1,0,1,0,1,97,0,0,
647,0,0,18,0,0,45,1391,0,0,0,0,0,1,0,
662,0,0,18,0,0,13,1401,0,0,5,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,
697,0,0,18,0,0,15,1438,0,0,0,0,0,1,0,
712,0,0,18,0,0,17,1477,0,0,1,1,0,1,0,1,97,0,0,
731,0,0,18,0,0,45,1481,0,0,0,0,0,1,0,
746,0,0,18,0,0,13,1492,0,0,6,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,
9,0,0,
785,0,0,18,0,0,15,1531,0,0,0,0,0,1,0,
800,0,0,19,0,0,17,1615,0,0,1,1,0,1,0,1,97,0,0,
819,0,0,20,0,0,17,1616,0,0,1,1,0,1,0,1,97,0,0,
838,0,0,21,0,0,17,1617,0,0,1,1,0,1,0,1,97,0,0,
857,0,0,22,0,0,17,1618,0,0,1,1,0,1,0,1,97,0,0,
876,0,0,23,0,0,17,1619,0,0,1,1,0,1,0,1,97,0,0,
895,0,0,19,0,0,45,1629,0,0,0,0,0,1,0,
910,0,0,20,0,0,45,1630,0,0,0,0,0,1,0,
925,0,0,21,0,0,45,1631,0,0,0,0,0,1,0,
940,0,0,22,0,0,45,1632,0,0,0,0,0,1,0,
955,0,0,23,0,0,45,1633,0,0,0,0,0,1,0,
970,0,0,23,0,0,13,1638,0,0,1,0,0,1,0,2,9,0,0,
989,0,0,19,0,0,13,1647,0,0,12,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,
2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,
1052,0,0,21,0,0,13,1674,0,0,1,0,0,1,0,2,9,0,0,
1071,0,0,20,0,0,13,1690,0,0,12,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,
2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,
1134,0,0,22,0,0,13,1717,0,0,2,0,0,1,0,2,9,0,0,2,9,0,0,
1157,0,0,19,0,0,15,1729,0,0,0,0,0,1,0,
1172,0,0,20,0,0,15,1730,0,0,0,0,0,1,0,
1187,0,0,21,0,0,15,1731,0,0,0,0,0,1,0,
1202,0,0,22,0,0,15,1732,0,0,0,0,0,1,0,
1217,0,0,24,0,0,29,1734,0,0,0,0,0,1,0,
1232,0,0,25,0,0,17,1810,0,0,1,1,0,1,0,1,97,0,0,
1251,0,0,26,0,0,17,1811,0,0,1,1,0,1,0,1,97,0,0,
1270,0,0,27,0,0,17,1812,0,0,1,1,0,1,0,1,97,0,0,
1289,0,0,28,0,0,17,1813,0,0,1,1,0,1,0,1,97,0,0,
1308,0,0,25,0,0,45,1822,0,0,0,0,0,1,0,
1323,0,0,26,0,0,45,1823,0,0,0,0,0,1,0,
1338,0,0,27,0,0,45,1824,0,0,0,0,0,1,0,
1353,0,0,28,0,0,45,1825,0,0,0,0,0,1,0,
1368,0,0,25,0,0,13,1835,0,0,4,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,
1399,0,0,26,0,0,13,1866,0,0,1,0,0,1,0,2,9,0,0,
1418,0,0,27,0,0,13,1881,0,0,4,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,
1449,0,0,28,0,0,13,1912,0,0,1,0,0,1,0,2,9,0,0,
1468,0,0,25,0,0,15,1925,0,0,0,0,0,1,0,
1483,0,0,26,0,0,15,1926,0,0,0,0,0,1,0,
1498,0,0,27,0,0,15,1928,0,0,0,0,0,1,0,
1513,0,0,28,0,0,15,1929,0,0,0,0,0,1,0,
1528,0,0,29,0,0,29,1931,0,0,0,0,0,1,0,
1543,0,0,30,0,0,17,1987,0,0,1,1,0,1,0,1,97,0,0,
1562,0,0,30,0,0,45,1993,0,0,0,0,0,1,0,
1577,0,0,30,0,0,13,2001,0,0,5,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,
1612,0,0,30,0,0,15,2033,0,0,0,0,0,1,0,
1627,0,0,31,0,0,29,2035,0,0,0,0,0,1,0,
1642,0,0,32,0,0,17,2098,0,0,1,1,0,1,0,1,97,0,0,
1661,0,0,32,0,0,45,2104,0,0,0,0,0,1,0,
1676,0,0,32,0,0,13,2113,0,0,6,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,
2,9,0,0,
1715,0,0,32,0,0,15,2146,0,0,0,0,0,1,0,
1730,0,0,33,0,0,29,2148,0,0,0,0,0,1,0,
1745,0,0,34,0,0,17,2189,0,0,1,1,0,1,0,1,97,0,0,
1764,0,0,35,0,0,17,2190,0,0,1,1,0,1,0,1,97,0,0,
1783,0,0,34,0,0,45,2195,0,0,0,0,0,1,0,
1798,0,0,35,0,0,45,2196,0,0,0,0,0,1,0,
1813,0,0,35,0,0,13,2203,0,0,1,0,0,1,0,2,9,0,0,
1832,0,0,34,0,0,13,2214,0,0,6,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,
2,9,0,0,
1871,0,0,36,0,0,24,2257,0,0,1,1,0,1,0,1,97,0,0,
1890,0,0,37,0,0,29,2260,0,0,0,0,0,1,0,
1905,0,0,34,0,0,15,2285,0,0,0,0,0,1,0,
1920,0,0,35,0,0,15,2286,0,0,0,0,0,1,0,
1935,0,0,38,0,0,17,2328,0,0,1,1,0,1,0,1,97,0,0,
1954,0,0,39,0,0,17,2329,0,0,1,1,0,1,0,1,97,0,0,
1973,0,0,38,0,0,45,2334,0,0,0,0,0,1,0,
1988,0,0,39,0,0,45,2335,0,0,0,0,0,1,0,
2003,0,0,39,0,0,13,2341,0,0,1,0,0,1,0,2,9,0,0,
2022,0,0,38,0,0,13,2352,0,0,5,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,
2057,0,0,40,0,0,24,2392,0,0,1,1,0,1,0,1,97,0,0,
2076,0,0,41,0,0,24,2396,0,0,1,1,0,1,0,1,97,0,0,
2095,0,0,42,0,0,29,2401,0,0,0,0,0,1,0,
2110,0,0,38,0,0,15,2423,0,0,0,0,0,1,0,
2125,0,0,39,0,0,15,2424,0,0,0,0,0,1,0,
2140,0,0,43,0,0,17,2467,0,0,1,1,0,1,0,1,97,0,0,
2159,0,0,25,0,0,17,2468,0,0,1,1,0,1,0,1,97,0,0,
2178,0,0,43,0,0,45,2473,0,0,0,0,0,1,0,
2193,0,0,25,0,0,45,2474,0,0,0,0,0,1,0,
2208,0,0,25,0,0,13,2480,0,0,1,0,0,1,0,2,9,0,0,
2227,0,0,43,0,0,13,2491,0,0,6,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,
2,9,0,0,
2266,0,0,44,0,0,24,2533,0,0,1,1,0,1,0,1,97,0,0,
2285,0,0,45,0,0,29,2538,0,0,0,0,0,1,0,
2300,0,0,43,0,0,15,2567,0,0,0,0,0,1,0,
2315,0,0,25,0,0,15,2568,0,0,0,0,0,1,0,
2330,0,0,46,0,0,17,2612,0,0,1,1,0,1,0,1,97,0,0,
2349,0,0,47,0,0,17,2613,0,0,1,1,0,1,0,1,97,0,0,
2368,0,0,46,0,0,45,2620,0,0,0,0,0,1,0,
2383,0,0,47,0,0,45,2621,0,0,0,0,0,1,0,
2398,0,0,46,0,0,13,2627,0,0,1,0,0,1,0,2,9,0,0,
2417,0,0,47,0,0,13,2634,0,0,1,0,0,1,0,2,9,0,0,
2436,0,0,46,0,0,15,2670,0,0,0,0,0,1,0,
2451,0,0,47,0,0,15,2671,0,0,0,0,0,1,0,
2466,0,0,48,0,0,24,2777,0,0,1,1,0,1,0,1,97,0,0,
2485,0,0,49,0,0,29,2780,0,0,0,0,0,1,0,
2500,0,0,50,0,0,17,2885,0,0,1,1,0,1,0,1,97,0,0,
2519,0,0,50,0,0,45,2891,0,0,0,0,0,1,0,
2534,0,0,50,0,0,13,2897,0,0,1,0,0,1,0,2,9,0,0,
2553,0,0,51,0,0,24,2907,0,0,1,1,0,1,0,1,97,0,0,
2572,0,0,52,0,0,24,2908,0,0,1,1,0,1,0,1,97,0,0,
2591,0,0,53,0,0,29,2911,0,0,0,0,0,1,0,
2606,0,0,54,0,0,24,2917,0,0,1,1,0,1,0,1,97,0,0,
2625,0,0,55,0,0,24,2918,0,0,1,1,0,1,0,1,97,0,0,
2644,0,0,56,0,0,29,2921,0,0,0,0,0,1,0,
2659,0,0,50,0,0,15,2927,0,0,0,0,0,1,0,
2674,0,0,57,0,0,32,2949,0,0,0,0,0,1,0,
};


// win32 Visual C 2010 이상컴파일시 추가
// 프로그램 가장 첫 줄에 추가할 것
#define _CRT_SECURE_NO_WARNINGS
//-----------------------------------------

#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <conio.h>

/* for oracle */
#include <sqlda.h>
#include <sqlca.h>
#include <sqlcpr.h>


// win32 Visual C 2010 이상컴파일시 추가
#define PAGE_NUM 5
#define getch() _getch()
//-----------------------------------------

/*---------------  화면 커서 위치 제어 ----------------------*/
#include < windows.h >
void gotoxy(int x, int y) ;
void getxy(int *x, int *y) ;
void clrscr(void) ;
/*-----------------------------------------------------------*/
void print_screen(char fname[]);
void DB_connect();
void Milk_get_tuple();
void Milk_insert_tuple();
void Milk_select_tuple();
void Milk_update_tuple();
void Milk_delete_tuple();

void Del_get_tuple();
void Del_insert_tuple();
void Del_select_tuple();
void Del_update_tuple();
void Del_delete_tuple();

void Cus_insert_tuple();
void Cus_get_tuple();
void Cus_update_Select_tuple();
void Cus_update_tuple();
void Cus_delete_tuple();

void Day_sales_get_tuple();
void Month_sales_get_tuple();

void sql_error();

/* EXEC SQL BEGIN DECLARE SECTION; */ 

	/* VARCHAR uid[80]; */ 
struct { unsigned short len; unsigned char arr[80]; } uid;

	/* VARCHAR pwd[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } pwd;

/* EXEC SQL END DECLARE SECTION; */ 


#define getch() _getch()

char Milkid[10], Milktype[10], Makedate[15], Selldate[15],Price[10],Amount[10],check[10];
char CusId[100], CusName[100], CusDate[100], CusEndDate[100], Ceo[100], Loc[100] ;
char del_id[10],temp_id[10],milk_id[10],cus_id[10],del_date[20],del_num[10],temp_num[10];
int chk = 0, chk2 = 0, milk_ch = 0, main_ch = 0, sales_ch=0, del_ch = 0;
int cus_ch = 0;
int chk3 = 0;
int chk4 = 0;
int chk5 = 0;
int chk6 = 0;
int chk7 = 0;
int chk8 = 0;
int chk9 = 0;


void main()
{
	DB_connect();
	while(1){
		main_ch = 0;
		gotoxy(0,0);
		for (int i = 0; i < 25; i++){
		printf("                                                                                         \n");
		}
		gotoxy(0,0);
		print_screen("menu_view.txt");
		gotoxy(40,9);
		scanf("%d",&main_ch);
		fflush(stdin);

	if(main_ch == 1){
	while(1){
	milk_ch = 0;
	gotoxy(0,0);
	//clrscr();
	for (int i = 0; i < 25; i++){
		printf("                                                                                         \n");
	}
	gotoxy(0,0);
   	print_screen("menu2_view.txt");
	
	gotoxy(40,9);
	scanf("%d",&milk_ch);
	fflush(stdin);
	
	if(milk_ch == 1){
		gotoxy(0,0);
		Milk_get_tuple();
		getch();
		gotoxy(0,0);
           for(int i= 0; i < 25; i++){
		printf("                                                                                         \n");
	   }
		gotoxy(0,0);
	}
	else if(milk_ch == 2){
		gotoxy(0,0);
		Milk_insert_tuple();
		getch();
		gotoxy(0,0);
 	   for(int i= 0; i < 25; i++){
		printf("                                                                                         \n");
	   }
		gotoxy(0,0);
	}
	else if(milk_ch == 3){
		gotoxy(0,0);
		Milk_select_tuple();
		getch();
		
		for(int i= 0; i < 25; i++){
		printf("                                                                                         \n");
	   }
		if(chk == 0){
			gotoxy(0,0);
			continue;
		}
		gotoxy(0,0);
		Milk_update_tuple();
		getch();
		gotoxy(0,0);
 	   for(int i= 0; i < 25; i++){
		printf("                                                                                         \n");
	   }
		gotoxy(0,0);
		chk = 0;
	}
	else if(milk_ch == 4){
		gotoxy(0,0);
		Milk_delete_tuple();
		getch();
		gotoxy(0,0);
 	   for(int i= 0; i < 25; i++){
		printf("                                                                                         \n");
	   }
		gotoxy(0,0);
		chk2 = 0;
	}
	else if(milk_ch == 5){
		gotoxy(28,10);
		printf("                          ");
		gotoxy(28,11);
		printf("                          ");
		gotoxy(28,10);
		break;
	}else{
		gotoxy(0,10);
		printf("                                                                   ");
		gotoxy(0,11);
		printf("                                                                   ");
		gotoxy(28,10);
		printf("잘못 입력하셨습니다.");
		gotoxy(28,11);
		printf("다시 입력하세요.");
		continue;
		}
	}
	}
	else if (main_ch == 2){
	while(1){
	cus_ch = 0;
	gotoxy(0,0);
	clrscr();
   	print_screen("menu3_view.txt");
	
	gotoxy(47,9);
	scanf("%d",&cus_ch);
	fflush(stdin);
	gotoxy(28,11);  
	printf("                                                                                           ");
	gotoxy(28,12);
	printf("                                                                                                 ");
	for(int i= 0; i < 25; i++){
		printf("                                                                                         \n");
	   }
	if(cus_ch == 1){
		gotoxy(0,0);
		Cus_get_tuple();
		getch();
		gotoxy(0,0);
           for(int i= 0; i < 25; i++){
		printf("                                                                                         \n");
	   }
		gotoxy(0,0);
	}
	else if(cus_ch == 2){
		gotoxy(0,0);
		Cus_insert_tuple();
		getch();
		gotoxy(0,0);
 	   for(int i= 0; i < 25; i++){
		printf("                                                                                         \n");
	   }
		gotoxy(0,0);
	}
	else if(cus_ch == 3){
		
		gotoxy(0,0);
		Cus_update_Select_tuple();
		getch();
		gotoxy(0,0);
	        for(int i= 0; i < 25; i++){
		printf("                                                                                         \n");
	   	}
			gotoxy(0,0);
			Cus_update_tuple();
			getch();
			gotoxy(0,0);
                
 	        	 for(int i= 0; i < 25; i++){
			printf("                                                                                         \n");
	  		 }
            	gotoxy(0,0);
		chk=0;
		
	}
	else if(cus_ch == 4){
	
		gotoxy(0,0);
		Cus_delete_tuple();
		getch();
		gotoxy(0,0);
 	   for(int i= 0; i < 25; i++){
		printf("                                                                                         \n");
	   }
		gotoxy(0,0);
		chk2 = 0;
	}
	else if(cus_ch == 5){
		break;
	}else{
		gotoxy(28,11);
		printf("잘못 입력하셨습니다.");
		gotoxy(28,12);
		printf("다시 입력하세요.");
	}
	
		}
	}
	else if (main_ch == 3){
	while(1){
		del_ch = 0;
	gotoxy(0,0);
	clrscr();
   	print_screen("menu4_view.txt");
	
	gotoxy(40,9);
	scanf("%d",&del_ch);
	fflush(stdin);
	gotoxy(28,11);  
	printf("                                                                                           ");
	gotoxy(28,12);
	printf("                                                                                                 ");
	for(int i= 0; i < 25; i++){
		printf("                                                                                         \n");
	   }
	if(del_ch == 1){
		gotoxy(0,0);
		Del_get_tuple();
		getch();
		gotoxy(0,0);
           for(int i= 0; i < 25; i++){
		printf("                                                                                         \n");
	   }
		gotoxy(0,0);
	}
	else if(del_ch == 2){
		gotoxy(0,0);
		Del_insert_tuple();
		getch();
		gotoxy(0,0);
 	   for(int i= 0; i < 25; i++){
		printf("                                                                                         \n");
	   }
		gotoxy(0,0);
	}
	else if(del_ch == 3){
		gotoxy(0,0);
		Del_select_tuple();
		getch();
		gotoxy(0,0);
		for(int i= 0; i < 25; i++){
		printf("                                                                                         \n");
	   }
		if(chk == 0){
			gotoxy(0,0);
			continue;
		}
		gotoxy(0,0);
		Del_update_tuple();
		getch();
		gotoxy(0,0);
 	   for(int i= 0; i < 25; i++){
		printf("                                                                                         \n");
	   }
		gotoxy(0,0);
		chk = 0;
	}
	else if(del_ch == 4){
		gotoxy(0,0);
		Del_delete_tuple();
		getch();
		gotoxy(0,0);
 	   for(int i= 0; i < 25; i++){
		printf("                                                                               \n");
	   }
		gotoxy(0,0);
		chk2 = 0;
	}
	else if(del_ch == 5){
		gotoxy(28,10);
		printf("                          ");
		gotoxy(28,11);
		printf("                          ");
		gotoxy(28,10);
		break;
	}else{
		gotoxy(0,10);
		printf("                                                                   ");
		gotoxy(0,11);
		printf("                                                                   ");
		gotoxy(28,10);
		printf("잘못 입력하셨습니다.");
		gotoxy(28,11);
		printf("다시 입력하세요.");
		continue;
		}
		}
	}
	else if (main_ch == 4){
		while(1){
	sales_ch = 0;
	gotoxy(0,0);
	//clrscr();
	for (int i = 0; i < 25; i++){
		printf("                                                                                         \n");
	}
	gotoxy(0, 0);
   	print_screen("sales_menu_view.txt");
	
	gotoxy(31,9);
	scanf("%d",&sales_ch);
	fflush(stdin);
	
	if(sales_ch == 1){
		gotoxy(0,0);
		Month_sales_get_tuple();
		getch();
		gotoxy(0,0);
           for(int i= 0; i < 25; i++){
		printf("                                                                                         \n");
	   }
		gotoxy(0,0);

		}
	else if (sales_ch == 2){
		gotoxy(0,0);
		Day_sales_get_tuple();
		getch();
		gotoxy(0,0);
           for(int i= 0; i < 25; i++){
		printf("                                                                                         \n");
	   }
		gotoxy(0,0);

		}
	else if (sales_ch == 3){
		gotoxy(28,10);
		printf("                          ");
		gotoxy(28,11);
		printf("                          ");
		gotoxy(28,10);
		break;
		}	
		else{
		gotoxy(0,10);
		printf("                                                                   ");
		gotoxy(0,11);
		printf("                                                                   ");
		gotoxy(28,10);
		printf("잘못 입력하셨습니다.");
		gotoxy(28,11);
		printf("다시 입력하세요.");
		continue;
		}
	}
	}else if (main_ch == 5){
		gotoxy(28,10);
		printf("                          ");
		gotoxy(28,11);
		printf("                          ");
		gotoxy(28,10);
		break;
	}
	else{
		gotoxy(0,10);
		printf("                                                                   ");
		gotoxy(0,11);
		printf("                                                                   ");
		gotoxy(28,10);
		printf("잘못 입력하셨습니다.");
		gotoxy(28,11);
		printf("다시 입력하세요.");
		continue;
	}
	
		}
	
}
void DB_connect()
{
   strcpy((char *)uid.arr,"a20113390@//seasadal.deu.ac.kr:1521/orcl");
   uid.len = (short) strlen((char *)uid.arr);
   strcpy((char *)pwd.arr,"a20113390");
   pwd.len = (short) strlen((char *)pwd.arr);

   /* EXEC SQL CONNECT :uid IDENTIFIED BY :pwd; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 4;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )10;
   sqlstm.offset = (unsigned int  )5;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)&uid;
   sqlstm.sqhstl[0] = (unsigned int  )82;
   sqlstm.sqhsts[0] = (         int  )82;
   sqlstm.sqindv[0] = (         void  *)0;
   sqlstm.sqinds[0] = (         int  )0;
   sqlstm.sqharm[0] = (unsigned int  )0;
   sqlstm.sqadto[0] = (unsigned short )0;
   sqlstm.sqtdso[0] = (unsigned short )0;
   sqlstm.sqhstv[1] = (         void  *)&pwd;
   sqlstm.sqhstl[1] = (unsigned int  )22;
   sqlstm.sqhsts[1] = (         int  )22;
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
   sqlstm.sqlcmax = (unsigned int )100;
   sqlstm.sqlcmin = (unsigned int )2;
   sqlstm.sqlcincr = (unsigned int )1;
   sqlstm.sqlctimeout = (unsigned int )0;
   sqlstm.sqlcnowait = (unsigned int )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



	// connection이 실패했을경우의 처리부분

	if (sqlca.sqlcode != 0 && sqlca.sqlcode != -1405){ 
		printf("\7Cconnect error: %s", sqlca.sqlerrm.sqlerrmc);
		getch();
		exit(-1);
	}
}

void Del_insert_tuple()
{
/* EXEC SQL BEGIN DECLARE SECTION; */ 

    /* varchar    del_id[10]; */ 
struct { unsigned short len; unsigned char arr[10]; } del_id;
 //납품번호
    /* varchar   milk_id[10]; */ 
struct { unsigned short len; unsigned char arr[10]; } milk_id;
 //우유번호
    /* varchar   milk_id2[10]; */ 
struct { unsigned short len; unsigned char arr[10]; } milk_id2;
 //우유번호2
    /* varchar    cus_id[10]; */ 
struct { unsigned short len; unsigned char arr[10]; } cus_id;
 //고객번호
    /* varchar    cus_id2[10]; */ 
struct { unsigned short len; unsigned char arr[10]; } cus_id2;
 //고객번호2
    /* varchar  del_date[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } del_date;
 //납품일자
    /* varchar     milk_num[10]; */ 
struct { unsigned short len; unsigned char arr[10]; } milk_num;
 //우유개수
    /* varchar     del_num[10]; */ 
struct { unsigned short len; unsigned char arr[10]; } del_num;
 //납품개수

    char dynstmt[1000];
    char dynstmt2[1000];
    char dynstmt3[1000];
    char dynstmt4[1000];
/* EXEC SQL END DECLARE SECTION; */ 

    
   

   /* Register sql_error() as the error handler. */
    /* EXEC SQL WHENEVER SQLERROR DO sql_error("\7ORACLE ERROR:\n"); */ 


   clrscr();
   print_screen("insert_del_view.txt");

 /* 데이터 입력 */
 while(1){//고객번호
	gotoxy(27,5);
   printf("              ");
	gotoxy(27,5);
   gets(milk_id.arr); 
   milk_id.len = strlen(milk_id.arr);
   for(int j = 0; j<strlen(milk_id.arr); j++)
	milk_id.arr[j] = (char)toupper(milk_id.arr[j]);
	chk6 = 0;

   sprintf(dynstmt,"select milk_id, amount from milk_storage where milk_id = '%s'", milk_id.arr);
	
   /* EXEC SQL PREPARE S21 FROM :dynstmt ; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 4;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )36;
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
   if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}



   	/* cursor 선언 */
  	 /* EXEC SQL DECLARE c_cursor21 CURSOR FOR S21 ; */ 
 

   	/* cursor open */
   	/* EXEC SQL OPEN c_cursor21 ; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 4;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )55;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.sqlpfmem = (unsigned int  )0;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqcmod = (unsigned int )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}

 

  	 /* EXEC SQL WHENEVER NOT FOUND DO break; */ 


	for(;;)
        {
        /* EXEC SQL FETCH c_cursor21 INTO :milk_id2, :milk_num; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 4;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )70;
        sqlstm.selerr = (unsigned short)1;
        sqlstm.sqlpfmem = (unsigned int  )0;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqfoff = (           int )0;
        sqlstm.sqfmod = (unsigned int )2;
        sqlstm.sqhstv[0] = (         void  *)&milk_id2;
        sqlstm.sqhstl[0] = (unsigned int  )12;
        sqlstm.sqhsts[0] = (         int  )0;
        sqlstm.sqindv[0] = (         void  *)0;
        sqlstm.sqinds[0] = (         int  )0;
        sqlstm.sqharm[0] = (unsigned int  )0;
        sqlstm.sqadto[0] = (unsigned short )0;
        sqlstm.sqtdso[0] = (unsigned short )0;
        sqlstm.sqhstv[1] = (         void  *)&milk_num;
        sqlstm.sqhstl[1] = (unsigned int  )12;
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
        if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}



	    milk_id2.arr[milk_id2.len] = '\0';
	    milk_num.arr[milk_num.len] = '\0';
		chk6 = 1;
        }
	/* EXEC SQL WHENEVER NOT FOUND CONTINUE; */ 

   
   if(chk6 == 1 && milk_id.arr[4] != '\0' && milk_id.arr[5] == '\0'){
        gotoxy(27,15);
	printf("                                        \n");
        gotoxy(27,16);
	printf("                                        \n");
	break;
   }
   else if(chk6 == 0){
	gotoxy(27,15);
	printf("재고에 없는 제품번호이므로\n");
        gotoxy(27,16);
	printf("제품번호를 다시 입력하세요.\n");
	}
   else{
   gotoxy(27,15);
   printf("ERROR : 제품번호를 올바르게 입력하세요.");
   gotoxy(27,16);
   printf("W1111, C1111, S1111");
	}
   }

   while(1){
   gotoxy(55,5);
   printf("                ");
   gotoxy(55,5);
   gets(cus_id.arr); 
   cus_id.len = strlen(cus_id.arr);
   cus_id.arr[0] = (char)toupper(cus_id.arr[0]);
   chk6 = 0;

   sprintf(dynstmt2,"select cus_id from customer where cus_id = '%s'", cus_id.arr);
	
   /* EXEC SQL PREPARE S20 FROM :dynstmt2 ; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 4;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )93;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)dynstmt2;
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
   if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}



   	/* cursor 선언 */
  	 /* EXEC SQL DECLARE c_cursor20 CURSOR FOR S20 ; */ 
 

   	/* cursor open */
   	/* EXEC SQL OPEN c_cursor20 ; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 4;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )112;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.sqlpfmem = (unsigned int  )0;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqcmod = (unsigned int )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}

 

  	 /* EXEC SQL WHENEVER NOT FOUND DO break; */ 


	for(;;)
        {
        /* EXEC SQL FETCH c_cursor20 INTO :cus_id2; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 4;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )127;
        sqlstm.selerr = (unsigned short)1;
        sqlstm.sqlpfmem = (unsigned int  )0;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqfoff = (           int )0;
        sqlstm.sqfmod = (unsigned int )2;
        sqlstm.sqhstv[0] = (         void  *)&cus_id2;
        sqlstm.sqhstl[0] = (unsigned int  )12;
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
        if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}



	    cus_id2.arr[cus_id2.len] = '\0';
		chk6 = 1;
        }
	/* EXEC SQL WHENEVER NOT FOUND CONTINUE; */ 

   
   if((chk6 == 1 && cus_id.arr[3] != '\0' &&cus_id.arr[4] == '\0') ){
	gotoxy(27,15);
	printf("                                      \n");
        gotoxy(27,16);
	printf("                                      \n");
	break;
   
   }
   else if(chk6 == 0){
	gotoxy(27,15);
	printf("등록 되지 않은 거래처번호이므로\n");
        gotoxy(27,16);
	printf("거래처번호를 다시 입력하세요.\n");
	}
   else{
   gotoxy(27,15);
   printf("ERROR : 거래처 번호를 올바르게 입력하세요.");
   gotoxy(27,16);
   printf("ex)영어 + 세자리 숫자");
   }
   }
   
   while(1){//납품 날짜
   gotoxy(27,7);
   printf("                ");
   gotoxy(27,7);
   gets(del_date.arr); 
   del_date.len = strlen(del_date.arr);
   if((del_date.arr[4] == '-' &&del_date.arr[7] == '-') && (del_date.arr[9] != '\0' && del_date.arr[10] == '\0')){
	gotoxy(27,15);
	printf("                                        \n");
        gotoxy(27,16);
	printf("                                        \n");
	break;
   }
   else{
   gotoxy(27,15);
   printf("ERROR : 납품할 날짜를 올바르게 입력하세요.");
   gotoxy(27,16);
   printf("ex)2016-11-12");
   }
   }

   while(1){
   gotoxy(51,7);
   printf("                ");
   gotoxy(51,7);
   gets(del_num.arr); 
   del_num.len = strlen(del_num.arr);
   if(del_num.arr[0] == '1' || del_num.arr[0] == '2' || del_num.arr[0] == '3'|| del_num.arr[0] == '4' || del_num.arr[0] == '5' || del_num.arr[0] == '6' || del_num.arr[0] == '7' || del_num.arr[0] == '8' || del_num.arr[0] == '9'){
        gotoxy(27,15);
	printf("                                       \n");
        gotoxy(27,16);
	printf("                                       \n");
	break;
   }else {
   gotoxy(27,15);
   printf("ERROR : 납품 개수를 올바르게 입력하세요.");
   gotoxy(27,16);
   printf("ex)20");
   }
   }
        if(atoi(milk_num.arr) >= atoi(del_num.arr)){
    sprintf(dynstmt3,"insert into deliver values (seq_del_id.NEXTVAL,'%s','%s',to_date('%s','YYYY-MM-DD'),'%s')",milk_id.arr,cus_id.arr,del_date.arr,del_num.arr);

    sprintf(dynstmt4,"update milk_storage set amount = amount-'%s' where milk_id='%s'",del_num.arr,milk_id.arr);
    /* 실행시킬 SQL 문장*/

    /* EXEC SQL EXECUTE IMMEDIATE :dynstmt3 ; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 4;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )146;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)dynstmt3;
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
    if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}


    /* EXEC SQL EXECUTE IMMEDIATE :dynstmt4 ; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 4;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )165;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)dynstmt4;
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
    if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}


	gotoxy(27,16);
    printf("Insert Success\n");
    /* EXEC SQL COMMIT WORK ; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 4;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )184;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}


	/* EXEC SQL CLOSE c_cursor20; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 13;
 sqlstm.arrsiz = 4;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )199;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
 if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}


	/* EXEC SQL CLOSE c_cursor21; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 13;
 sqlstm.arrsiz = 4;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )214;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
 if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}


    }
	else{
	gotoxy(27,15);
   	printf("ERROR : 납품할 수량보다 재고 수량이 작습니다.");
	}
    

}


void Cus_insert_tuple(){

/* EXEC SQL BEGIN DECLARE SECTION; */ 

	 
     /* varchar c_no[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } c_no;

     /* varchar c_no2[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } c_no2;

     /* varchar c_no3[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } c_no3;

     /* varchar c_name[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } c_name;

     /* varchar c_date[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } c_date;

     /* varchar c_end[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } c_end;

     /* varchar ceo[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } ceo;

     /* varchar loc[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } loc;


    char dynstmt[1000];
    char dynstmt2[1000];
    char dynstmt3[1000];
/* EXEC SQL END DECLARE SECTION; */ 

   

   /* Register sql_error() as the error handler. */
    /* EXEC SQL WHENEVER SQLERROR DO sql_error("\7ORACLE ERROR:\n"); */ 


   clrscr();
   print_screen("insert_part_scn.txt");

   /* 데이터 입력 */
 while(1){
	gotoxy(21,5);
   printf("            ");
	gotoxy(21,5);
   gets(c_no.arr); 
   c_no.len = strlen(c_no.arr);
   c_no.arr[0] = (char)toupper(c_no.arr[0]);
	chk5 = 0;
	chk8 = 0;
 
   sprintf(dynstmt2,"select cus_id from deliver where cus_id = '%s'", c_no.arr);
   sprintf(dynstmt3,"select cus_id from customer where cus_id = '%s'", c_no.arr);
	
   /* EXEC SQL PREPARE S19 FROM :dynstmt2 ; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 4;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )229;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)dynstmt2;
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
   if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}


   /* EXEC SQL PREPARE S29 FROM :dynstmt3 ; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 4;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )248;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)dynstmt3;
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
   if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}



   	/* cursor 선언 */
  	 /* EXEC SQL DECLARE c_cursor19 CURSOR FOR S19 ; */ 
 
	/* EXEC SQL DECLARE c_cursor29 CURSOR FOR S29 ; */ 
 

   	/* cursor open */
   	/* EXEC SQL OPEN c_cursor19 ; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 4;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )267;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.sqlpfmem = (unsigned int  )0;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqcmod = (unsigned int )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}

 
	/* EXEC SQL OPEN c_cursor29 ; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 13;
 sqlstm.arrsiz = 4;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )282;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.sqlpfmem = (unsigned int  )0;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqcmod = (unsigned int )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
 if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}

 

  	 /* EXEC SQL WHENEVER NOT FOUND DO break; */ 


	for(;;)
        {
        /* EXEC SQL FETCH c_cursor19 INTO :c_no2; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 4;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )297;
        sqlstm.selerr = (unsigned short)1;
        sqlstm.sqlpfmem = (unsigned int  )0;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqfoff = (           int )0;
        sqlstm.sqfmod = (unsigned int )2;
        sqlstm.sqhstv[0] = (         void  *)&c_no2;
        sqlstm.sqhstl[0] = (unsigned int  )102;
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
        if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}



	    c_no2.arr[c_no2.len] = '\0';
		chk5 = 1;
        }
	for(;;)
        {
        /* EXEC SQL FETCH c_cursor29 INTO :c_no3; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 4;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )316;
        sqlstm.selerr = (unsigned short)1;
        sqlstm.sqlpfmem = (unsigned int  )0;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqfoff = (           int )0;
        sqlstm.sqfmod = (unsigned int )2;
        sqlstm.sqhstv[0] = (         void  *)&c_no3;
        sqlstm.sqhstl[0] = (unsigned int  )102;
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
        if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}



	    c_no3.arr[c_no3.len] = '\0';
		chk8 = 1;
        }
	/* EXEC SQL WHENEVER NOT FOUND CONTINUE; */ 

   
   if((chk5 == 0 && chk8 == 0 && c_no.arr[0] != '\0' && (c_no.arr[3] != '\0' &&c_no.arr[4] == '\0')) ){
	gotoxy(27,15);
	printf("                                          \n");
        gotoxy(27,16);
	printf("                                          \n");
	break;
   
   }
   else if(chk5 == 1 || chk8 == 1){
	gotoxy(27,15);
	printf("                                          \n");
        gotoxy(27,16);
	printf("                                          \n");
	gotoxy(27,15);
	printf("납품 또는 등록된 거래처번호이므로\n");
        gotoxy(27,16);
	printf("이 거래처번호를 등록할 수 없습니다.\n");
	continue;
	}
   else{
   gotoxy(27,15);
   printf("                                          \n");
   gotoxy(27,16);
   printf("                                          \n");
   gotoxy(27,15);
   printf("ERROR : 거래처 번호를 올바르게 입력하세요.");
   gotoxy(27,16);
   printf("ex)영어 + 세자리 숫자");
	}
   }

   while(1){
   gotoxy(55,5);
   printf("            ");
   gotoxy(55,5);
   gets(c_name.arr); 
   c_name.len = strlen(c_name.arr);
    if(c_name.arr[0] != '\0' ){
	gotoxy(27,15);
	printf("                                          \n");
        gotoxy(27,16);
	printf("                                          \n");
	break;
   }else{
   gotoxy(27,15);
   printf("ERROR : 지점 명을 올바르게 입력하세요.");
   gotoxy(27,16);
   printf("ex)부산지점");
   }
   }

   while(1){
   gotoxy(21,7);
   printf("            ");
   gotoxy(21,7);
   gets(c_date.arr); 
   c_date.len = strlen(c_date.arr);
   if((c_date.arr[4] == '-' && c_date.arr[7] == '-') && (c_date.arr[9] != '\0' && c_date.arr[10] == '\0') ){
        gotoxy(27,15);
	printf("                                          \n");
        gotoxy(21,16);
	printf("                                          \n");
	break;
   }else{
   gotoxy(27,15);
   printf("ERROR : 계약 날짜를 올바르게 입력하세요.");
   gotoxy(27,16);
   printf("ex)2016-11-11");
   }
   }
   
   while(1){
   gotoxy(56,7);
   printf("            ");
   gotoxy(56,7);
   gets(c_end.arr); 
   c_end.len = strlen(c_end.arr);
   if((c_end.arr[4] == '-' && c_end.arr[7] == '-') && (c_end.arr[9] != '\0' && c_end.arr[10] == '\0') ){
	gotoxy(27,15);
	printf("                                          \n");
        gotoxy(27,16);
	printf("                                          \n");
	break;
   }else{
   gotoxy(27,15);
   printf("ERROR : 계약 종료일을 올바르게 입력하세요.");
   gotoxy(27,16);
   printf("ex)2016-11-18 ");
   }
   }
   
   while(1){
   gotoxy(21,9);
   printf("            ");
   gotoxy(21,9);
   gets(ceo.arr); 
   ceo.len = strlen(ceo.arr);
   if((ceo.arr[0] != '\0') ){
        gotoxy(27,15);
	printf("                                          \n");
        gotoxy(27,16);
	printf("                                          \n");
	break;
   }else{
   gotoxy(27,15);
   printf("ERROR : 점주의 이름을 올바르게 입력하세요.");
   gotoxy(27,16);
   printf("ex)김성래");
   }
   }

   while(1){
   gotoxy(56,9);
   printf("            ");
   gotoxy(56,9);
   gets(loc.arr); 
   loc.len = strlen(loc.arr);
   if(loc.arr[0] != '\0' ){
	gotoxy(27,15);
	printf("                                          \n");
        gotoxy(27,16);
	printf("                                          \n");
	break;
   }else{
   gotoxy(27,15);
   printf("ERROR : 지역명을 올바르게 입력하세요.");
   gotoxy(27,16);
   printf("ex)부산");
   }
   }	

    sprintf(dynstmt,"insert into customer values('%s','%s',to_date('%s','YY-MM-DD'),to_date('%s','YY-MM-DD'),'%s','%s')",c_no.arr, c_name.arr, c_date.arr, c_end.arr, ceo.arr, loc.arr);

   /* 실행시킬 SQL 문장*/
    /* EXEC SQL EXECUTE IMMEDIATE :dynstmt ; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 4;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )335;
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
    if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}


	gotoxy(27,16);
    printf("거래처 등록에 성공하셨습니다.\n");

    /* EXEC SQL COMMIT WORK ; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 4;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )354;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}




}



void Cus_update_tuple()
{

/* EXEC SQL BEGIN DECLARE SECTION; */ 



   char dynstmt2[1000];

/* EXEC SQL END DECLARE SECTION; */ 

   char v_cno[20];
   char v_cname[40];
   char v_cdate[30];
   char v_cend[30];
   char v_ceo[50];
   char v_loc[50];
	
  
   /* EXEC SQL WHENEVER SQLERROR DO sql_error("\7ORACLE ERROR:\n"); */ 

   /* 사용자 입력 */
    clrscr();
    if(chk==1){
    print_screen("update_part_scn.txt");

   while(1){
   gotoxy(21,5);
   printf("            ");
   gotoxy(21,5);
   gets(v_cname); 

   if((v_cname[0] != '\0' ) ){
        gotoxy(27,15);
	printf("                                      \n");
        gotoxy(27,16);
	printf("                                      \n");
	break;
   }else if(v_cname[0] == '\0'){
   strcpy(v_cname,CusName);
   break;
   }
   else{
   gotoxy(27,15);
   printf("ERROR : 거래처 명을 올바르게 입력하세요.");
   gotoxy(27,16);
   printf("ex)부산지점1");
   }
   }

   while(1){
   gotoxy(21,7);
   printf("            ");
   gotoxy(21,7);
   gets(v_cdate); 
   if((v_cdate[4] == '-' && v_cdate[7] == '-') && (v_cdate[9] != '\0' && v_cdate[10] == '\0') ){
        gotoxy(27,15);
	printf("                                      \n");
        gotoxy(27,16);
	printf("                                      \n");
	break;
   }else if(v_cdate[0] == '\0'){
   strcpy(v_cdate,CusDate);
   break;
   }
   else{
   gotoxy(27,15);
   printf("ERROR : 계약일을 올바르게 입력하세요.");
   gotoxy(27,16);
   printf("ex)2016-11-11");
   }
   }
   
   while(1){
   gotoxy(56,7);
   printf("            ");
   gotoxy(56,7);
   gets(v_cend); 
   if((v_cend[4] == '-' && v_cend[7] == '-') && (v_cend[9] != '\0' && v_cend[10] == '\0') ){
	gotoxy(27,15);
	printf("                                      \n");
        gotoxy(27,16);
	printf("                                      \n");
	break;
   }else if(v_cend[0] == '\0'){
   strcpy(v_cend,CusEndDate);
   break;
   }
   else{
   gotoxy(27,15);
   printf("ERROR : 계약 종료일을 올바르게 입력하세요.");
   gotoxy(27,16);
   printf("ex)2016-11-18 ");
   }
   }
   
   while(1){
   gotoxy(21,9);
   printf("            ");
   gotoxy(21,9);
   gets(v_ceo); 
   if(v_ceo[0] != '\0' ){
	gotoxy(27,15);
	printf("                                      \n");
        gotoxy(27,16);
	printf("                                      \n");
	break;
   }else if(v_ceo[0] == '\0'){
   strcpy(v_ceo,Ceo);
   break;
   }
   else{
   gotoxy(27,15);
   printf("ERROR : 점주의 이름을 올바르게 입력하세요.");
   gotoxy(27,16);
   printf("ex)mike");
   }
   }

   while(1){
   gotoxy(56,9);
   printf("            ");
   gotoxy(56,9);
   gets(v_loc); 
   v_loc[0] = (char)toupper(v_loc[0]);
   if(v_loc[0] != '\0' ){
	gotoxy(27,15);
	printf("                                      \n");
        gotoxy(27,16);
	printf("                                      \n");
	break;
   }else if(v_loc[0] == '\0'){
   strcpy(v_loc,Loc);
   break;
   }
   else{
   gotoxy(27,15);
   printf("ERROR : 지역명을 올바르게 입력하세요.");
   gotoxy(27,16);
   printf("ex)Busan");
   }
   }

   sprintf(dynstmt2,"update customer set cus_name= '%s',cus_date = to_date('%s','YY/MM/DD'),cus_end_date = to_date('%s','YY/MM/DD'),ceo_name = '%s',loc = '%s' where cus_id = '%s' ", v_cname,v_cdate,v_cend,v_ceo,v_loc,CusId);
   
   /* EXEC SQL EXECUTE IMMEDIATE :dynstmt2 ; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 4;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )369;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)dynstmt2;
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
   if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}


	gotoxy(27,16);
   printf("거래처 정보 수정에 성공하셨습니다.\n");
   /* EXEC SQL COMMIT WORK ; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 4;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )388;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
   if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}

 
  }
   else{
      gotoxy(0,0);
      clrscr();
      print_screen("update_fail.txt"); 
   }

}


void Milk_update_tuple()
{

/* EXEC SQL BEGIN DECLARE SECTION; */ 


   char dynstmt2[1000];


/* EXEC SQL END DECLARE SECTION; */ 

   
   char  type[10];
   char  makedate[15];
   char  selldate[15];
   char  price[10];
   char  amount[10];

   
  
   /* EXEC SQL WHENEVER SQLERROR DO sql_error("\7ORACLE ERROR:\n"); */ 

   /* 사용자 입력 */
    clrscr();

    print_screen("update_milk_view.txt");

   while(1){
   gotoxy(27,6);
   printf("                ");
   gotoxy(27,6);
   gets(makedate); 
   //makedate.len = strlen(makedate.arr);
   if((makedate[4] == '-' && makedate[7] == '-') && (makedate[9] != '\0' && makedate[10] == '\0') ){
        gotoxy(27,15);
	printf("                                        \n");
        gotoxy(27,16);
	printf("                                        \n");
	break;
   }else if(makedate[0] == '\0'){
   strcpy(makedate,Makedate);
   break;
   }
   else{
   gotoxy(27,15);
   printf("ERROR : 생산날짜를 올바르게 입력하세요.");
   gotoxy(27,16);
   printf("ex)2016-11-11");
   }
   }
   
   while(1){
   gotoxy(55,6);
   printf("                ");
   gotoxy(55,6);
   gets(selldate); 
   //selldate.len = strlen(selldate.arr);
   if((selldate[4] == '-' && selldate[7] == '-') && (selldate[9] != '\0' && selldate[10] == '\0') ){
	gotoxy(27,15);
	printf("                                        \n");
        gotoxy(27,16);
	printf("                                        \n");
	break;
   }else if(selldate[0] == '\0'){
   strcpy(selldate,Selldate);
   break;
   }
   else{
   gotoxy(27,15);
   printf("ERROR : 유통기한을 올바르게 입력하세요.");
   gotoxy(27,16);
   printf("ex)2016-11-18 (생산날짜 + 7일)");
   }
   }
   
   while(1){
   gotoxy(24,8);
   printf("                ");
   gotoxy(24,8);
   gets(price); 
   if((price[0] == '1') && price[3] != '\0' && (price[4] == '\0')){
	gotoxy(27,15);
	printf("                                        \n");
        gotoxy(27,16);
	printf("                                        \n");
	break;
   }else if(price[0] == '\0'){
   strcpy(price,Price);
   break;
   }
   else{
   gotoxy(27,15);
   printf("ERROR : 가격을 올바르게 입력하세요.");
   gotoxy(27,16);
   printf("ex)WHITE = 1000, CHOCO,STRAW = 1200");
   }
   }

   while(1){
   gotoxy(52,8);
   printf("                ");
   gotoxy(52,8);
   gets(amount); 
   //amount.len = strlen(amount.arr);
   if(amount[0] == '1' || amount[0] == '2' || amount[0] == '3' || amount[0] == '4' || amount[0] == '5' || amount[0] == '6' || amount[0] == '7' || amount[0] == '8' || amount[0] == '9'){
	gotoxy(27,15);
	printf("                                        \n");
        gotoxy(27,16);
	printf("                                        \n");
	break;
   }else if(amount[0] == '\0'){
   strcpy(amount,Amount);
   break;
   }
   else{
   gotoxy(27,15);
   printf("ERROR : 수량을 올바르게 입력하세요.");
   gotoxy(27,16);
   printf("ex)20");
   }
   }

   sprintf(dynstmt2,"update milk_storage set make_date = to_date('%s','YYYY-MM-DD'),sell_date = to_date('%s','YYYY-MM-DD'),price = %s,amount = %s where milk_id = '%s' ",makedate,selldate,price,amount,Milkid);
   
   /* EXEC SQL EXECUTE IMMEDIATE :dynstmt2 ; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 4;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )403;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)dynstmt2;
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
   if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}


	gotoxy(27,16);
   printf("Update Success\n");
   /* EXEC SQL COMMIT WORK ; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 4;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )422;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
   if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}

 

}

void Cus_update_Select_tuple(){

/* EXEC SQL BEGIN DECLARE SECTION; */ 

   /* varchar c_no[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } c_no;

   /* varchar c_no2[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } c_no2;

   /* varchar c_name[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } c_name;

   /* varchar c_date[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } c_date;

   /* varchar c_end[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } c_end;

   /* varchar ceo[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } ceo;

   /* varchar loc[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } loc;


   char dynstmt2[1000];
   char dynstmt3[1000];

/* EXEC SQL END DECLARE SECTION; */ 

  
   char no_temp2[10];
    int x, y, count=0, i;
    /* Register sql_error() as the error handler. */
   /* EXEC SQL WHENEVER SQLERROR DO sql_error("\7ORACLE ERROR:\n"); */ 

   
    /* 사용자 입력 */
    clrscr();

   print_screen("update_select_cus_view.txt"); 
   gotoxy(33,5);
   fgets(no_temp2,10,stdin);
   no_temp2[strlen(no_temp2)-1]='\0';
   no_temp2[0] = (char)toupper(no_temp2[0]);
	
   sprintf(dynstmt2,"SELECT cus_id, cus_name,to_char(cus_date,'YYYY-MM-DD'), to_char(cus_end_date,'YYYY-MM-DD'), ceo_name, loc FROM customer where cus_id ='%s'", 
                    no_temp2); 
   
	
   /* EXEC SQL PREPARE S13 FROM :dynstmt2 ; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 4;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )437;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)dynstmt2;
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
   if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}


   

   /* cursor 선언 */
   /* EXEC SQL DECLARE c_cursor13 CURSOR FOR S13 ; */ 
 
   

   /* cursor open */
   /* EXEC SQL OPEN c_cursor13 ; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 4;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )456;
   sqlstm.selerr = (unsigned short)1;
   sqlstm.sqlpfmem = (unsigned int  )0;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqcmod = (unsigned int )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
   if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}

 
   

   /* EXEC SQL WHENEVER NOT FOUND do break; */ 


    x = 1;
    y = 10;

    for (;;)
    {
        /* EXEC SQL FETCH c_cursor13 INTO :c_no, :c_name, :c_date, :c_end, :ceo, :loc; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 6;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )471;
        sqlstm.selerr = (unsigned short)1;
        sqlstm.sqlpfmem = (unsigned int  )0;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqfoff = (           int )0;
        sqlstm.sqfmod = (unsigned int )2;
        sqlstm.sqhstv[0] = (         void  *)&c_no;
        sqlstm.sqhstl[0] = (unsigned int  )102;
        sqlstm.sqhsts[0] = (         int  )0;
        sqlstm.sqindv[0] = (         void  *)0;
        sqlstm.sqinds[0] = (         int  )0;
        sqlstm.sqharm[0] = (unsigned int  )0;
        sqlstm.sqadto[0] = (unsigned short )0;
        sqlstm.sqtdso[0] = (unsigned short )0;
        sqlstm.sqhstv[1] = (         void  *)&c_name;
        sqlstm.sqhstl[1] = (unsigned int  )102;
        sqlstm.sqhsts[1] = (         int  )0;
        sqlstm.sqindv[1] = (         void  *)0;
        sqlstm.sqinds[1] = (         int  )0;
        sqlstm.sqharm[1] = (unsigned int  )0;
        sqlstm.sqadto[1] = (unsigned short )0;
        sqlstm.sqtdso[1] = (unsigned short )0;
        sqlstm.sqhstv[2] = (         void  *)&c_date;
        sqlstm.sqhstl[2] = (unsigned int  )102;
        sqlstm.sqhsts[2] = (         int  )0;
        sqlstm.sqindv[2] = (         void  *)0;
        sqlstm.sqinds[2] = (         int  )0;
        sqlstm.sqharm[2] = (unsigned int  )0;
        sqlstm.sqadto[2] = (unsigned short )0;
        sqlstm.sqtdso[2] = (unsigned short )0;
        sqlstm.sqhstv[3] = (         void  *)&c_end;
        sqlstm.sqhstl[3] = (unsigned int  )102;
        sqlstm.sqhsts[3] = (         int  )0;
        sqlstm.sqindv[3] = (         void  *)0;
        sqlstm.sqinds[3] = (         int  )0;
        sqlstm.sqharm[3] = (unsigned int  )0;
        sqlstm.sqadto[3] = (unsigned short )0;
        sqlstm.sqtdso[3] = (unsigned short )0;
        sqlstm.sqhstv[4] = (         void  *)&ceo;
        sqlstm.sqhstl[4] = (unsigned int  )102;
        sqlstm.sqhsts[4] = (         int  )0;
        sqlstm.sqindv[4] = (         void  *)0;
        sqlstm.sqinds[4] = (         int  )0;
        sqlstm.sqharm[4] = (unsigned int  )0;
        sqlstm.sqadto[4] = (unsigned short )0;
        sqlstm.sqtdso[4] = (unsigned short )0;
        sqlstm.sqhstv[5] = (         void  *)&loc;
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
        if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}



        c_no.arr[c_no.len] = '\0' ;
	c_name.arr[c_name.len] = '\0';
	c_date.arr[c_date.len] = '\0';
        c_end.arr[c_end.len] = '\0' ;
	ceo.arr[ceo.len] = '\0';
	loc.arr[loc.len] = '\0';

            gotoxy(x,y);
	printf(" |   %-4s   |  %-5s  |  %-8s  |  %-8s  | %-5s | %-4s |",
 		c_no.arr, c_name.arr, c_date.arr, c_end.arr,ceo.arr,loc.arr);
	y++;
	count++; //pagecount
	if( count == PAGE_NUM){
	   printf("\n                                    hit any key\n");
	   count = 0;
	   getch();

	  gotoxy(0,10);
	  for(int i=0;i<PAGE_NUM;i++){
		 printf("                                                                               \n");
	  }
	   y = 10 ;

	}

    }
    printf("\n                                     (END)                                     \n");
  

   strcpy(CusId,c_no.arr);
   strcpy(CusName,c_name.arr);
   strcpy(CusDate,c_date.arr);
   strcpy(CusEndDate,c_end.arr);
   strcpy(Ceo,ceo.arr);
   strcpy(Loc,loc.arr);

    if(count==0){
   	chk=0;	
    }else{
	chk=1;
    }
   

  /* EXEC SQL CLOSE c_cursor13; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 13;
  sqlstm.arrsiz = 6;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )510;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)4352;
  sqlstm.occurs = (unsigned int  )0;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
  if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}



}


void Cus_get_tuple()
{
/* --------------------------------------------------------------------------
   Retrieve the current maximum employee number
-------------------------------------------------------------------------- */
/* EXEC SQL BEGIN DECLARE SECTION; */ 

   /* varchar c_no[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } c_no;

   /* varchar c_name[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } c_name;

   /* varchar c_date[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } c_date;

   /* varchar c_end[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } c_end;

   /* varchar ceo[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } ceo;

   /* varchar loc[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } loc;


   char dynstmt[1000];
/* EXEC SQL END DECLARE SECTION; */ 


   char v_cno[20];
   char v_cname[40];
   char v_cdate[30];
   char v_cend[30];
   char v_ceo[50];
   char v_loc[50];
	
   int x, y, count=0 ;


   /* Register sql_error() as the error handler. */
   /* EXEC SQL WHENEVER SQLERROR DO sql_error("\7ORACLE ERROR:\n"); */ 



   /* 사용자 입력 */
   clrscr();

   print_screen("select_part_scn.txt");

   gotoxy(21,5);
   gets(v_cno); 
   
   gotoxy(55,5);
   gets(v_cname);

   gotoxy(21,7);
   gets(v_cdate);
   
   gotoxy(56,7);
   gets(v_cend);
   
   gotoxy(21,9);
   gets(v_ceo);
      
   gotoxy(56,9);
   gets(v_loc);
   
   /* 실행시킬 SQL 문장*/      //%s%  :s를 포함하는 모든 것 
   sprintf(dynstmt,"SELECT cus_id, cus_name, to_char(cus_date,'YYYY-MM-DD'), to_char(cus_end_date,'YYYY-MM-DD'), ceo_name, loc FROM customer where cus_id LIKE '%%%s%%' and cus_name LIKE '%%%s%%' and cus_date LIKE '%%%s%%' and cus_end_date LIKE '%%%s%%' and ceo_name LIKE '%%%s%%' and loc LIKE '%%%s%%'", 
                    v_cno, v_cname, v_cdate, v_cend, v_ceo, v_loc); 

   /* select 문장이 제대로 구성되어 있는지 화면에 찍어봄 */
   //printf("dynstmt:%s\n", dynstmt);

   /* EXEC SQL PREPARE S12 FROM :dynstmt ; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )525;
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
   if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}



   /* cursor 선언 */
   /* EXEC SQL DECLARE c_cursor12 CURSOR FOR S12 ; */ 
 

   /* cursor open */
   /* EXEC SQL OPEN c_cursor12 ; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )544;
   sqlstm.selerr = (unsigned short)1;
   sqlstm.sqlpfmem = (unsigned int  )0;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqcmod = (unsigned int )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
   if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}

 

   /* EXEC SQL WHENEVER NOT FOUND do break; */ 

 

   x= 2;
   y = 14 ;

   for (;;)
    {
        /* EXEC SQL FETCH c_cursor12 INTO :c_no, :c_name, :c_date, :c_end, :ceo, :loc; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 6;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )559;
        sqlstm.selerr = (unsigned short)1;
        sqlstm.sqlpfmem = (unsigned int  )0;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqfoff = (           int )0;
        sqlstm.sqfmod = (unsigned int )2;
        sqlstm.sqhstv[0] = (         void  *)&c_no;
        sqlstm.sqhstl[0] = (unsigned int  )102;
        sqlstm.sqhsts[0] = (         int  )0;
        sqlstm.sqindv[0] = (         void  *)0;
        sqlstm.sqinds[0] = (         int  )0;
        sqlstm.sqharm[0] = (unsigned int  )0;
        sqlstm.sqadto[0] = (unsigned short )0;
        sqlstm.sqtdso[0] = (unsigned short )0;
        sqlstm.sqhstv[1] = (         void  *)&c_name;
        sqlstm.sqhstl[1] = (unsigned int  )102;
        sqlstm.sqhsts[1] = (         int  )0;
        sqlstm.sqindv[1] = (         void  *)0;
        sqlstm.sqinds[1] = (         int  )0;
        sqlstm.sqharm[1] = (unsigned int  )0;
        sqlstm.sqadto[1] = (unsigned short )0;
        sqlstm.sqtdso[1] = (unsigned short )0;
        sqlstm.sqhstv[2] = (         void  *)&c_date;
        sqlstm.sqhstl[2] = (unsigned int  )102;
        sqlstm.sqhsts[2] = (         int  )0;
        sqlstm.sqindv[2] = (         void  *)0;
        sqlstm.sqinds[2] = (         int  )0;
        sqlstm.sqharm[2] = (unsigned int  )0;
        sqlstm.sqadto[2] = (unsigned short )0;
        sqlstm.sqtdso[2] = (unsigned short )0;
        sqlstm.sqhstv[3] = (         void  *)&c_end;
        sqlstm.sqhstl[3] = (unsigned int  )102;
        sqlstm.sqhsts[3] = (         int  )0;
        sqlstm.sqindv[3] = (         void  *)0;
        sqlstm.sqinds[3] = (         int  )0;
        sqlstm.sqharm[3] = (unsigned int  )0;
        sqlstm.sqadto[3] = (unsigned short )0;
        sqlstm.sqtdso[3] = (unsigned short )0;
        sqlstm.sqhstv[4] = (         void  *)&ceo;
        sqlstm.sqhstl[4] = (unsigned int  )102;
        sqlstm.sqhsts[4] = (         int  )0;
        sqlstm.sqindv[4] = (         void  *)0;
        sqlstm.sqinds[4] = (         int  )0;
        sqlstm.sqharm[4] = (unsigned int  )0;
        sqlstm.sqadto[4] = (unsigned short )0;
        sqlstm.sqtdso[4] = (unsigned short )0;
        sqlstm.sqhstv[5] = (         void  *)&loc;
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
        if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}



	c_no.arr[c_no.len] = '\0' ;
	c_name.arr[c_name.len] = '\0';
	c_date.arr[c_date.len] = '\0';
        c_end.arr[c_end.len] = '\0' ;
	ceo.arr[ceo.len] = '\0';
	loc.arr[loc.len] = '\0';

	gotoxy(x,y);
	printf(" |   %-4s   | %-6s | %-10s | %-10s | %-7s | %-6s |  ", c_no.arr, c_name.arr,c_date.arr,c_end.arr,ceo.arr,loc.arr);
	y++;
	count++; //pagecount
	if( count == PAGE_NUM){
	   printf("\n                                  hit any key\n");
	   count = 0;
	   getch();

	  gotoxy(0,14);
	  for(int i=0;i<PAGE_NUM;i++){
		 printf("                                                                               \n");
	  }
	   y = 14 ;

	}

    }
    printf("\n                                     (END)                                  \n");
   
    /* Close the cursor. */
   /* EXEC SQL CLOSE c_cursor12; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )598;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
   if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}



   /* EXEC SQL COMMIT ; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )613;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
   if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}


  

}



void Del_select_tuple()
{
/* EXEC SQL BEGIN DECLARE SECTION; */ 

    /* varchar      d_id[10]; */ 
struct { unsigned short len; unsigned char arr[10]; } d_id;
 //납품번호
    /* varchar      m_id[10]; */ 
struct { unsigned short len; unsigned char arr[10]; } m_id;
 //우유번호
    /* varchar      c_id[10]; */ 
struct { unsigned short len; unsigned char arr[10]; } c_id;
 //고객번호
    /* varchar  selldate[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } selldate;
 //납품일자
    /* varchar      d_num[3]; */ 
struct { unsigned short len; unsigned char arr[3]; } d_num;
 //납품개수

    char dynstmt[1000];
/* EXEC SQL END DECLARE SECTION; */ 

    
    char no_temp1[10];

    int x, y, count=0, i;

    /* EXEC SQL WHENEVER SQLERROR DO sql_error("\7ORACLE ERROR:\n"); */ 

   
    /* 사용자 입력 */
    clrscr();

    print_screen("select_update_del_view.txt");

    gotoxy(27,5);
    fgets(no_temp1, 10, stdin); 
    no_temp1[strlen(no_temp1)-1] = '\0' ;  
   // no_temp1[0] = (char)toupper(no_temp1[0]);
   
   
    sprintf(dynstmt,"SELECT deliver_id,milk_id,cus_id,to_char(deliver_date,'YYYY-MM-DD'),deliver_amount  FROM deliver where deliver_id = '%s'", no_temp1) ;
   
    /* EXEC SQL PREPARE S2 FROM :dynstmt ; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 6;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )628;
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
    if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}



    /* EXEC SQL DECLARE d2_cursor CURSOR FOR S2 ; */ 
 

    /* EXEC SQL OPEN d2_cursor ; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 6;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )647;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.sqlpfmem = (unsigned int  )0;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqcmod = (unsigned int )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}

 

  
    /* EXEC SQL WHENEVER NOT FOUND do break; */ 


    x = 1;
    y = 10;

    for(;;)
    {
        /* EXEC SQL FETCH d2_cursor INTO :d_id, :m_id, :c_id, :selldate, :d_num; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 6;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )662;
        sqlstm.selerr = (unsigned short)1;
        sqlstm.sqlpfmem = (unsigned int  )0;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqfoff = (           int )0;
        sqlstm.sqfmod = (unsigned int )2;
        sqlstm.sqhstv[0] = (         void  *)&d_id;
        sqlstm.sqhstl[0] = (unsigned int  )12;
        sqlstm.sqhsts[0] = (         int  )0;
        sqlstm.sqindv[0] = (         void  *)0;
        sqlstm.sqinds[0] = (         int  )0;
        sqlstm.sqharm[0] = (unsigned int  )0;
        sqlstm.sqadto[0] = (unsigned short )0;
        sqlstm.sqtdso[0] = (unsigned short )0;
        sqlstm.sqhstv[1] = (         void  *)&m_id;
        sqlstm.sqhstl[1] = (unsigned int  )12;
        sqlstm.sqhsts[1] = (         int  )0;
        sqlstm.sqindv[1] = (         void  *)0;
        sqlstm.sqinds[1] = (         int  )0;
        sqlstm.sqharm[1] = (unsigned int  )0;
        sqlstm.sqadto[1] = (unsigned short )0;
        sqlstm.sqtdso[1] = (unsigned short )0;
        sqlstm.sqhstv[2] = (         void  *)&c_id;
        sqlstm.sqhstl[2] = (unsigned int  )12;
        sqlstm.sqhsts[2] = (         int  )0;
        sqlstm.sqindv[2] = (         void  *)0;
        sqlstm.sqinds[2] = (         int  )0;
        sqlstm.sqharm[2] = (unsigned int  )0;
        sqlstm.sqadto[2] = (unsigned short )0;
        sqlstm.sqtdso[2] = (unsigned short )0;
        sqlstm.sqhstv[3] = (         void  *)&selldate;
        sqlstm.sqhstl[3] = (unsigned int  )22;
        sqlstm.sqhsts[3] = (         int  )0;
        sqlstm.sqindv[3] = (         void  *)0;
        sqlstm.sqinds[3] = (         int  )0;
        sqlstm.sqharm[3] = (unsigned int  )0;
        sqlstm.sqadto[3] = (unsigned short )0;
        sqlstm.sqtdso[3] = (unsigned short )0;
        sqlstm.sqhstv[4] = (         void  *)&d_num;
        sqlstm.sqhstl[4] = (unsigned int  )5;
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
        if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}



	    d_id.arr[d_id.len] = '\0';
	    m_id.arr[m_id.len] = '\0';
	    c_id.arr[c_id.len] = '\0';
	    selldate.arr[selldate.len] = '\0';
	    d_num.arr[d_num.len]='\0';
	    
	    gotoxy(x,y);
	printf(" |  %-8s  |  %-8s  |  %-8s  |  %-8s  |  %-8s  |",
 d_id.arr, m_id.arr, c_id.arr, selldate.arr,d_num.arr);
	y++;
	count++;
	if( count == PAGE_NUM){
	   printf("\n                             hit any key\n");
	   count = 0;
	   getch();

           gotoxy(0,10);
           for(i= 0; i < PAGE_NUM; i++){
		printf("                                                                             \n");
	   }
	  
	   y = 10 ;
	}
	 chk = 1;
    }
    printf("\n                                      (END)\n");
	
	gotoxy(0,0);
    	
        strcpy(del_id, d_id.arr);
	strcpy(milk_id, m_id.arr);
	strcpy(cus_id, c_id.arr);
	strcpy(del_date, selldate.arr);
	strcpy(del_num, d_num.arr);

    /* EXEC SQL CLOSE d2_cursor; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 6;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )697;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}

 
   
}

void Milk_select_tuple()
{


/* EXEC SQL BEGIN DECLARE SECTION; */ 

    /* varchar  id[10]; */ 
struct { unsigned short len; unsigned char arr[10]; } id;

    /* varchar  id2[10]; */ 
struct { unsigned short len; unsigned char arr[10]; } id2;

    /* varchar type[10]; */ 
struct { unsigned short len; unsigned char arr[10]; } type;

    /* varchar makedate[15]; */ 
struct { unsigned short len; unsigned char arr[15]; } makedate;

    /* varchar selldate[15]; */ 
struct { unsigned short len; unsigned char arr[15]; } selldate;

    /* varchar price[10]; */ 
struct { unsigned short len; unsigned char arr[10]; } price;

    /* varchar amount[10]; */ 
struct { unsigned short len; unsigned char arr[10]; } amount;


    char dynstmt[1000];
    char dynstmt2[1000];
/* EXEC SQL END DECLARE SECTION; */ 

    
    char no_temp1[10];

    int x, y, count=0, i;

    /* EXEC SQL WHENEVER SQLERROR DO sql_error("\7ORACLE ERROR:\n"); */ 

   
    /* 사용자 입력 */
    clrscr();

    print_screen("select_update_milk_view.txt");

    gotoxy(27,5);
    fgets(no_temp1, 10, stdin); 
    no_temp1[strlen(no_temp1)-1] = '\0' ;  
    no_temp1[0] = (char)toupper(no_temp1[0]);
   
    sprintf(dynstmt,"SELECT milk_id,milk_type,to_char(make_date,'YYYY-MM-DD'),to_char(sell_date,'YYYY-MM-DD'),price,amount  FROM milk_storage where milk_id = '%s%'", no_temp1) ;

    /* EXEC SQL PREPARE S2 FROM :dynstmt ; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 6;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )712;
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
    if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}



    /* EXEC SQL DECLARE c2_cursor CURSOR FOR S2 ; */ 
  

    /* EXEC SQL OPEN c2_cursor ; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 6;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )731;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.sqlpfmem = (unsigned int  )0;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqcmod = (unsigned int )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}

 
 

  
    /* EXEC SQL WHENEVER NOT FOUND do break; */ 


    x = 1;
    y = 10;

    for(;;)
    {
        /* EXEC SQL FETCH c2_cursor INTO :id, :type, :makedate, :selldate, :price, :amount ; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 6;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )746;
        sqlstm.selerr = (unsigned short)1;
        sqlstm.sqlpfmem = (unsigned int  )0;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqfoff = (           int )0;
        sqlstm.sqfmod = (unsigned int )2;
        sqlstm.sqhstv[0] = (         void  *)&id;
        sqlstm.sqhstl[0] = (unsigned int  )12;
        sqlstm.sqhsts[0] = (         int  )0;
        sqlstm.sqindv[0] = (         void  *)0;
        sqlstm.sqinds[0] = (         int  )0;
        sqlstm.sqharm[0] = (unsigned int  )0;
        sqlstm.sqadto[0] = (unsigned short )0;
        sqlstm.sqtdso[0] = (unsigned short )0;
        sqlstm.sqhstv[1] = (         void  *)&type;
        sqlstm.sqhstl[1] = (unsigned int  )12;
        sqlstm.sqhsts[1] = (         int  )0;
        sqlstm.sqindv[1] = (         void  *)0;
        sqlstm.sqinds[1] = (         int  )0;
        sqlstm.sqharm[1] = (unsigned int  )0;
        sqlstm.sqadto[1] = (unsigned short )0;
        sqlstm.sqtdso[1] = (unsigned short )0;
        sqlstm.sqhstv[2] = (         void  *)&makedate;
        sqlstm.sqhstl[2] = (unsigned int  )17;
        sqlstm.sqhsts[2] = (         int  )0;
        sqlstm.sqindv[2] = (         void  *)0;
        sqlstm.sqinds[2] = (         int  )0;
        sqlstm.sqharm[2] = (unsigned int  )0;
        sqlstm.sqadto[2] = (unsigned short )0;
        sqlstm.sqtdso[2] = (unsigned short )0;
        sqlstm.sqhstv[3] = (         void  *)&selldate;
        sqlstm.sqhstl[3] = (unsigned int  )17;
        sqlstm.sqhsts[3] = (         int  )0;
        sqlstm.sqindv[3] = (         void  *)0;
        sqlstm.sqinds[3] = (         int  )0;
        sqlstm.sqharm[3] = (unsigned int  )0;
        sqlstm.sqadto[3] = (unsigned short )0;
        sqlstm.sqtdso[3] = (unsigned short )0;
        sqlstm.sqhstv[4] = (         void  *)&price;
        sqlstm.sqhstl[4] = (unsigned int  )12;
        sqlstm.sqhsts[4] = (         int  )0;
        sqlstm.sqindv[4] = (         void  *)0;
        sqlstm.sqinds[4] = (         int  )0;
        sqlstm.sqharm[4] = (unsigned int  )0;
        sqlstm.sqadto[4] = (unsigned short )0;
        sqlstm.sqtdso[4] = (unsigned short )0;
        sqlstm.sqhstv[5] = (         void  *)&amount;
        sqlstm.sqhstl[5] = (unsigned int  )12;
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
        if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}



	    id.arr[id.len] = '\0';
	    type.arr[type.len] = '\0';
	    makedate.arr[makedate.len] = '\0';
	    selldate.arr[selldate.len] = '\0';
	    price.arr[price.len] = '\0';
	    amount.arr[amount.len] = '\0';

	    gotoxy(x,y);
	printf(" |  %-4s  |  %-5s  |  %-8s  |  %-8s  | %-5s | %-4s |",
 id.arr, type.arr, makedate.arr, selldate.arr,price.arr,amount.arr);
	y++;
	count++;
	if( count == PAGE_NUM){
	   printf("\n                             hit any key\n");
	   count = 0;
	   getch();

           gotoxy(0,10);
           for(i= 0; i < PAGE_NUM; i++){
		printf("                                                                             \n");
	   }
	  
	   y = 10 ;
	}
	 chk = 1;
    }
    printf("                                      (END)\n");
	
	gotoxy(0,0);
    	
        strcpy(Milkid, id.arr);
	strcpy(Milktype, type.arr);
	strcpy(Makedate, makedate.arr);
	strcpy(Selldate, selldate.arr);
	strcpy(Price, price.arr);
	strcpy(Amount, amount.arr);

    /* EXEC SQL CLOSE c2_cursor; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 6;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )785;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}

 
   

}

void Month_sales_get_tuple()
{
/* --------------------------------------------------------------------------
   Retrieve the current maximum employee number
-------------------------------------------------------------------------- */
/* EXEC SQL BEGIN DECLARE SECTION; */ 

   /* varchar month1[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } month1;

   /* varchar month2[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } month2;

   /* varchar month3[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } month3;

   /* varchar month4[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } month4;

   /* varchar month5[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } month5;

   /* varchar month6[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } month6;

   /* varchar month7[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } month7;

   /* varchar month8[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } month8;

   /* varchar month9[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } month9;

   /* varchar month10[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } month10;

   /* varchar month11[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } month11;

   /* varchar month12[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } month12;

   /* varchar yearsales[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } yearsales;

   /* varchar yearsales2[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } yearsales2;

   /* varchar curyear[10]; */ 
struct { unsigned short len; unsigned char arr[10]; } curyear;

   /* varchar year[10]; */ 
struct { unsigned short len; unsigned char arr[10]; } year;


   char dynstmt[1000];
   char dynstmt2[1000];
   char dynstmt3[1000];
   char dynstmt4[1000];
   char dynstmt5[1000];
/* EXEC SQL END DECLARE SECTION; */ 


   char no_temp1[20];
   

   int x, y,x2,y2 ;


   /* Register sql_error() as the error handler. */
   /* EXEC SQL WHENEVER SQLERROR DO sql_error("\7ORACLE ERROR:\n"); */ 



   /* 사용자 입력 */
   clrscr();

   print_screen("month_sales_view.txt");

   while(1){
   gotoxy(36,5);
   printf("                ");
   gotoxy(36,5);
   fgets(no_temp1,20,stdin); 
   no_temp1[strlen(no_temp1)-1] = '\0';
	chk9 = 0;
	gotoxy(53,4);
	printf("                                        ");
	gotoxy(53,5);
	printf("                                        ");
   
   if(no_temp1[0] == '2' && no_temp1[1] == '0' && no_temp1[3] != '\0' && no_temp1[4] == '\0'){
	break;
   	}
   else if(no_temp1[0] == '\0'){
	break;
	}else{
	gotoxy(53,4);
   	printf("ERROR : 년도를 올바르게 입력하세요.");
  	 gotoxy(53,5);
  	 printf("ex)2016");
		continue;
		}
	
   }
   
   /* 실행시킬 SQL 문장*/
   sprintf(dynstmt,"select sum(decode(to_char(deliver_date,'MM'),'01',price*deliver_amount,0)),sum(decode(to_char(deliver_date,'MM'),'02',price*deliver_amount,0)),sum(decode(to_char(deliver_date,'MM'),'03',price*deliver_amount,0)),sum(decode(to_char(deliver_date,'MM'),'04',price*deliver_amount,0)),sum(decode(to_char(deliver_date,'MM'),'05',price*deliver_amount,0)),sum(decode(to_char(deliver_date,'MM'),'06',price*deliver_amount,0)),sum(decode(to_char(deliver_date,'MM'),'07',price*deliver_amount,0)),sum(decode(to_char(deliver_date,'MM'),'08',price*deliver_amount,0)),sum(decode(to_char(deliver_date,'MM'),'09',price*deliver_amount,0)),sum(decode(to_char(deliver_date,'MM'),'10',price*deliver_amount,0)),sum(decode(to_char(deliver_date,'MM'),'11',price*deliver_amount,0)),sum(decode(to_char(deliver_date,'MM'),'12',price*deliver_amount,0)) from customer join (milk_storage join deliver using(milk_id)) using(cus_id) where to_char(deliver_date,'YYYY') = '%s'",no_temp1); 
   sprintf(dynstmt2,"select sum(decode(to_char(deliver_date,'MM'),'01',price*deliver_amount,0)),sum(decode(to_char(deliver_date,'MM'),'02',price*deliver_amount,0)),sum(decode(to_char(deliver_date,'MM'),'03',price*deliver_amount,0)),sum(decode(to_char(deliver_date,'MM'),'04',price*deliver_amount,0)),sum(decode(to_char(deliver_date,'MM'),'05',price*deliver_amount,0)),sum(decode(to_char(deliver_date,'MM'),'06',price*deliver_amount,0)),sum(decode(to_char(deliver_date,'MM'),'07',price*deliver_amount,0)),sum(decode(to_char(deliver_date,'MM'),'08',price*deliver_amount,0)),sum(decode(to_char(deliver_date,'MM'),'09',price*deliver_amount,0)),sum(decode(to_char(deliver_date,'MM'),'10',price*deliver_amount,0)),sum(decode(to_char(deliver_date,'MM'),'11',price*deliver_amount,0)),sum(decode(to_char(deliver_date,'MM'),'12',price*deliver_amount,0))from customer join (milk_storage join deliver using(milk_id)) using(cus_id) where to_char(deliver_date,'YYYY') = to_char(sysdate,'YYYY')"); 
   sprintf(dynstmt3,"select sum(price*deliver_amount) from customer join (milk_storage join deliver using(milk_id)) using(cus_id)where to_char(deliver_date,'YYYY') = '%s'",no_temp1);
   sprintf(dynstmt4,"select to_char(sysdate,'YYYY'),sum(price*deliver_amount) from customer join (milk_storage join deliver using(milk_id)) using(cus_id)where to_char(deliver_date,'YYYY') = to_char(sysdate,'YYYY')");
   sprintf(dynstmt5,"select to_char(deliver_date,'YYYY') from deliver where to_char(deliver_date,'YYYY') = '%s'",no_temp1);
   
   /* EXEC SQL PREPARE S8 FROM :dynstmt ; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )800;
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
   if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}


   /* EXEC SQL PREPARE S9 FROM :dynstmt2 ; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )819;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)dynstmt2;
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
   if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}


   /* EXEC SQL PREPARE S10 FROM :dynstmt3 ; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )838;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)dynstmt3;
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
   if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}


   /* EXEC SQL PREPARE S11 FROM :dynstmt4 ; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )857;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)dynstmt4;
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
   if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}


   /* EXEC SQL PREPARE S35 FROM :dynstmt5 ; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )876;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)dynstmt5;
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
   if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}



   /* cursor 선언 */
   /* EXEC SQL DECLARE c_cursor8 CURSOR FOR S8 ; */ 
 
   /* EXEC SQL DECLARE c_cursor9 CURSOR FOR S9 ; */ 
 
   /* EXEC SQL DECLARE c_cursor10 CURSOR FOR S10 ; */ 
 
   /* EXEC SQL DECLARE c_cursor11 CURSOR FOR S11 ; */ 
 
   /* EXEC SQL DECLARE c_cursor35 CURSOR FOR S35 ; */ 


   /* cursor open */
   /* EXEC SQL OPEN c_cursor8 ; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )895;
   sqlstm.selerr = (unsigned short)1;
   sqlstm.sqlpfmem = (unsigned int  )0;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqcmod = (unsigned int )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
   if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}

 
   /* EXEC SQL OPEN c_cursor9 ; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )910;
   sqlstm.selerr = (unsigned short)1;
   sqlstm.sqlpfmem = (unsigned int  )0;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqcmod = (unsigned int )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
   if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}

 
   /* EXEC SQL OPEN c_cursor10 ; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )925;
   sqlstm.selerr = (unsigned short)1;
   sqlstm.sqlpfmem = (unsigned int  )0;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqcmod = (unsigned int )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
   if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}

 
   /* EXEC SQL OPEN c_cursor11 ; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )940;
   sqlstm.selerr = (unsigned short)1;
   sqlstm.sqlpfmem = (unsigned int  )0;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqcmod = (unsigned int )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
   if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}


   /* EXEC SQL OPEN c_cursor35 ; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )955;
   sqlstm.selerr = (unsigned short)1;
   sqlstm.sqlpfmem = (unsigned int  )0;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqcmod = (unsigned int )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
   if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}



   /* EXEC SQL WHENEVER NOT FOUND DO break; */ 

	for (;;)
    {
        /* EXEC SQL FETCH c_cursor35 INTO :year; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 6;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )970;
        sqlstm.selerr = (unsigned short)1;
        sqlstm.sqlpfmem = (unsigned int  )0;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqfoff = (           int )0;
        sqlstm.sqfmod = (unsigned int )2;
        sqlstm.sqhstv[0] = (         void  *)&year;
        sqlstm.sqhstl[0] = (unsigned int  )12;
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
        if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}



	year.arr[year.len] = '\0' ;
		chk9 = 1;
	}

if(chk9 == 1 && no_temp1[0] == '2' && no_temp1[3] != '\0' && no_temp1[4] == '\0'){
   for (;;)
    {
        /* EXEC SQL FETCH c_cursor8 INTO :month1,:month2,:month3,:month4,:month5,:month6,:month7,:month8,:month9,:month10,:month11, :month12; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 12;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )989;
        sqlstm.selerr = (unsigned short)1;
        sqlstm.sqlpfmem = (unsigned int  )0;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqfoff = (           int )0;
        sqlstm.sqfmod = (unsigned int )2;
        sqlstm.sqhstv[0] = (         void  *)&month1;
        sqlstm.sqhstl[0] = (unsigned int  )102;
        sqlstm.sqhsts[0] = (         int  )0;
        sqlstm.sqindv[0] = (         void  *)0;
        sqlstm.sqinds[0] = (         int  )0;
        sqlstm.sqharm[0] = (unsigned int  )0;
        sqlstm.sqadto[0] = (unsigned short )0;
        sqlstm.sqtdso[0] = (unsigned short )0;
        sqlstm.sqhstv[1] = (         void  *)&month2;
        sqlstm.sqhstl[1] = (unsigned int  )102;
        sqlstm.sqhsts[1] = (         int  )0;
        sqlstm.sqindv[1] = (         void  *)0;
        sqlstm.sqinds[1] = (         int  )0;
        sqlstm.sqharm[1] = (unsigned int  )0;
        sqlstm.sqadto[1] = (unsigned short )0;
        sqlstm.sqtdso[1] = (unsigned short )0;
        sqlstm.sqhstv[2] = (         void  *)&month3;
        sqlstm.sqhstl[2] = (unsigned int  )102;
        sqlstm.sqhsts[2] = (         int  )0;
        sqlstm.sqindv[2] = (         void  *)0;
        sqlstm.sqinds[2] = (         int  )0;
        sqlstm.sqharm[2] = (unsigned int  )0;
        sqlstm.sqadto[2] = (unsigned short )0;
        sqlstm.sqtdso[2] = (unsigned short )0;
        sqlstm.sqhstv[3] = (         void  *)&month4;
        sqlstm.sqhstl[3] = (unsigned int  )102;
        sqlstm.sqhsts[3] = (         int  )0;
        sqlstm.sqindv[3] = (         void  *)0;
        sqlstm.sqinds[3] = (         int  )0;
        sqlstm.sqharm[3] = (unsigned int  )0;
        sqlstm.sqadto[3] = (unsigned short )0;
        sqlstm.sqtdso[3] = (unsigned short )0;
        sqlstm.sqhstv[4] = (         void  *)&month5;
        sqlstm.sqhstl[4] = (unsigned int  )102;
        sqlstm.sqhsts[4] = (         int  )0;
        sqlstm.sqindv[4] = (         void  *)0;
        sqlstm.sqinds[4] = (         int  )0;
        sqlstm.sqharm[4] = (unsigned int  )0;
        sqlstm.sqadto[4] = (unsigned short )0;
        sqlstm.sqtdso[4] = (unsigned short )0;
        sqlstm.sqhstv[5] = (         void  *)&month6;
        sqlstm.sqhstl[5] = (unsigned int  )102;
        sqlstm.sqhsts[5] = (         int  )0;
        sqlstm.sqindv[5] = (         void  *)0;
        sqlstm.sqinds[5] = (         int  )0;
        sqlstm.sqharm[5] = (unsigned int  )0;
        sqlstm.sqadto[5] = (unsigned short )0;
        sqlstm.sqtdso[5] = (unsigned short )0;
        sqlstm.sqhstv[6] = (         void  *)&month7;
        sqlstm.sqhstl[6] = (unsigned int  )102;
        sqlstm.sqhsts[6] = (         int  )0;
        sqlstm.sqindv[6] = (         void  *)0;
        sqlstm.sqinds[6] = (         int  )0;
        sqlstm.sqharm[6] = (unsigned int  )0;
        sqlstm.sqadto[6] = (unsigned short )0;
        sqlstm.sqtdso[6] = (unsigned short )0;
        sqlstm.sqhstv[7] = (         void  *)&month8;
        sqlstm.sqhstl[7] = (unsigned int  )102;
        sqlstm.sqhsts[7] = (         int  )0;
        sqlstm.sqindv[7] = (         void  *)0;
        sqlstm.sqinds[7] = (         int  )0;
        sqlstm.sqharm[7] = (unsigned int  )0;
        sqlstm.sqadto[7] = (unsigned short )0;
        sqlstm.sqtdso[7] = (unsigned short )0;
        sqlstm.sqhstv[8] = (         void  *)&month9;
        sqlstm.sqhstl[8] = (unsigned int  )102;
        sqlstm.sqhsts[8] = (         int  )0;
        sqlstm.sqindv[8] = (         void  *)0;
        sqlstm.sqinds[8] = (         int  )0;
        sqlstm.sqharm[8] = (unsigned int  )0;
        sqlstm.sqadto[8] = (unsigned short )0;
        sqlstm.sqtdso[8] = (unsigned short )0;
        sqlstm.sqhstv[9] = (         void  *)&month10;
        sqlstm.sqhstl[9] = (unsigned int  )102;
        sqlstm.sqhsts[9] = (         int  )0;
        sqlstm.sqindv[9] = (         void  *)0;
        sqlstm.sqinds[9] = (         int  )0;
        sqlstm.sqharm[9] = (unsigned int  )0;
        sqlstm.sqadto[9] = (unsigned short )0;
        sqlstm.sqtdso[9] = (unsigned short )0;
        sqlstm.sqhstv[10] = (         void  *)&month11;
        sqlstm.sqhstl[10] = (unsigned int  )102;
        sqlstm.sqhsts[10] = (         int  )0;
        sqlstm.sqindv[10] = (         void  *)0;
        sqlstm.sqinds[10] = (         int  )0;
        sqlstm.sqharm[10] = (unsigned int  )0;
        sqlstm.sqadto[10] = (unsigned short )0;
        sqlstm.sqtdso[10] = (unsigned short )0;
        sqlstm.sqhstv[11] = (         void  *)&month12;
        sqlstm.sqhstl[11] = (unsigned int  )102;
        sqlstm.sqhsts[11] = (         int  )0;
        sqlstm.sqindv[11] = (         void  *)0;
        sqlstm.sqinds[11] = (         int  )0;
        sqlstm.sqharm[11] = (unsigned int  )0;
        sqlstm.sqadto[11] = (unsigned short )0;
        sqlstm.sqtdso[11] = (unsigned short )0;
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
        if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}



	month1.arr[month1.len] = '\0' ;
	month2.arr[month2.len] = '\0' ;
	month3.arr[month3.len] = '\0' ;
	month4.arr[month4.len] = '\0' ;
	month5.arr[month5.len] = '\0' ;
	month6.arr[month6.len] = '\0' ;
	month7.arr[month7.len] = '\0' ;
	month8.arr[month8.len] = '\0' ;
	month9.arr[month9.len] = '\0' ;
	month10.arr[month10.len] = '\0' ;
	month11.arr[month11.len] = '\0' ;
	month12.arr[month12.len] = '\0' ;
	
	
	gotoxy(1,9);
	printf(" |  %-7s원  |  %-7s원  |  %-7s원  |  %-7s원  |  %-7s원  |  %-7s원  |",
 month1.arr, month2.arr, month3.arr, month4.arr, month5.arr, month6.arr);
	gotoxy(1,14);
	printf(" |  %-7s원  |  %-7s원  |  %-7s원  |  %-7s원  |  %-7s원  |  %-7s원  |",
	month7.arr, month8.arr, month9.arr, month10.arr, month11.arr, month12.arr);
	
	printf("                                      (END)\n");
	}
	for (;;)
    {
        /* EXEC SQL FETCH c_cursor10 INTO :yearsales; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 12;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )1052;
        sqlstm.selerr = (unsigned short)1;
        sqlstm.sqlpfmem = (unsigned int  )0;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqfoff = (           int )0;
        sqlstm.sqfmod = (unsigned int )2;
        sqlstm.sqhstv[0] = (         void  *)&yearsales;
        sqlstm.sqhstl[0] = (unsigned int  )102;
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
        if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}



	yearsales.arr[yearsales.len] = '\0' ;
	gotoxy(44,16);
	printf("%s년 총매출 : %s원",no_temp1,yearsales.arr);
	gotoxy(0,0);
	}
	}else if(chk9 == 0 && no_temp1[0] != '\0'){
		gotoxy(51,4);
   		printf("납품하지 않은 년도입니다.");
  		 gotoxy(51,5);
  		 printf("매출을 조회할 수 없습니다.");
	}
if(no_temp1[0] == '\0'){
   for (;;)
    {
        /* EXEC SQL FETCH c_cursor9 INTO :month1,:month2,:month3,:month4,:month5,:month6,:month7,:month8,:month9,:month10,:month11, :month12; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 12;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )1071;
        sqlstm.selerr = (unsigned short)1;
        sqlstm.sqlpfmem = (unsigned int  )0;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqfoff = (           int )0;
        sqlstm.sqfmod = (unsigned int )2;
        sqlstm.sqhstv[0] = (         void  *)&month1;
        sqlstm.sqhstl[0] = (unsigned int  )102;
        sqlstm.sqhsts[0] = (         int  )0;
        sqlstm.sqindv[0] = (         void  *)0;
        sqlstm.sqinds[0] = (         int  )0;
        sqlstm.sqharm[0] = (unsigned int  )0;
        sqlstm.sqadto[0] = (unsigned short )0;
        sqlstm.sqtdso[0] = (unsigned short )0;
        sqlstm.sqhstv[1] = (         void  *)&month2;
        sqlstm.sqhstl[1] = (unsigned int  )102;
        sqlstm.sqhsts[1] = (         int  )0;
        sqlstm.sqindv[1] = (         void  *)0;
        sqlstm.sqinds[1] = (         int  )0;
        sqlstm.sqharm[1] = (unsigned int  )0;
        sqlstm.sqadto[1] = (unsigned short )0;
        sqlstm.sqtdso[1] = (unsigned short )0;
        sqlstm.sqhstv[2] = (         void  *)&month3;
        sqlstm.sqhstl[2] = (unsigned int  )102;
        sqlstm.sqhsts[2] = (         int  )0;
        sqlstm.sqindv[2] = (         void  *)0;
        sqlstm.sqinds[2] = (         int  )0;
        sqlstm.sqharm[2] = (unsigned int  )0;
        sqlstm.sqadto[2] = (unsigned short )0;
        sqlstm.sqtdso[2] = (unsigned short )0;
        sqlstm.sqhstv[3] = (         void  *)&month4;
        sqlstm.sqhstl[3] = (unsigned int  )102;
        sqlstm.sqhsts[3] = (         int  )0;
        sqlstm.sqindv[3] = (         void  *)0;
        sqlstm.sqinds[3] = (         int  )0;
        sqlstm.sqharm[3] = (unsigned int  )0;
        sqlstm.sqadto[3] = (unsigned short )0;
        sqlstm.sqtdso[3] = (unsigned short )0;
        sqlstm.sqhstv[4] = (         void  *)&month5;
        sqlstm.sqhstl[4] = (unsigned int  )102;
        sqlstm.sqhsts[4] = (         int  )0;
        sqlstm.sqindv[4] = (         void  *)0;
        sqlstm.sqinds[4] = (         int  )0;
        sqlstm.sqharm[4] = (unsigned int  )0;
        sqlstm.sqadto[4] = (unsigned short )0;
        sqlstm.sqtdso[4] = (unsigned short )0;
        sqlstm.sqhstv[5] = (         void  *)&month6;
        sqlstm.sqhstl[5] = (unsigned int  )102;
        sqlstm.sqhsts[5] = (         int  )0;
        sqlstm.sqindv[5] = (         void  *)0;
        sqlstm.sqinds[5] = (         int  )0;
        sqlstm.sqharm[5] = (unsigned int  )0;
        sqlstm.sqadto[5] = (unsigned short )0;
        sqlstm.sqtdso[5] = (unsigned short )0;
        sqlstm.sqhstv[6] = (         void  *)&month7;
        sqlstm.sqhstl[6] = (unsigned int  )102;
        sqlstm.sqhsts[6] = (         int  )0;
        sqlstm.sqindv[6] = (         void  *)0;
        sqlstm.sqinds[6] = (         int  )0;
        sqlstm.sqharm[6] = (unsigned int  )0;
        sqlstm.sqadto[6] = (unsigned short )0;
        sqlstm.sqtdso[6] = (unsigned short )0;
        sqlstm.sqhstv[7] = (         void  *)&month8;
        sqlstm.sqhstl[7] = (unsigned int  )102;
        sqlstm.sqhsts[7] = (         int  )0;
        sqlstm.sqindv[7] = (         void  *)0;
        sqlstm.sqinds[7] = (         int  )0;
        sqlstm.sqharm[7] = (unsigned int  )0;
        sqlstm.sqadto[7] = (unsigned short )0;
        sqlstm.sqtdso[7] = (unsigned short )0;
        sqlstm.sqhstv[8] = (         void  *)&month9;
        sqlstm.sqhstl[8] = (unsigned int  )102;
        sqlstm.sqhsts[8] = (         int  )0;
        sqlstm.sqindv[8] = (         void  *)0;
        sqlstm.sqinds[8] = (         int  )0;
        sqlstm.sqharm[8] = (unsigned int  )0;
        sqlstm.sqadto[8] = (unsigned short )0;
        sqlstm.sqtdso[8] = (unsigned short )0;
        sqlstm.sqhstv[9] = (         void  *)&month10;
        sqlstm.sqhstl[9] = (unsigned int  )102;
        sqlstm.sqhsts[9] = (         int  )0;
        sqlstm.sqindv[9] = (         void  *)0;
        sqlstm.sqinds[9] = (         int  )0;
        sqlstm.sqharm[9] = (unsigned int  )0;
        sqlstm.sqadto[9] = (unsigned short )0;
        sqlstm.sqtdso[9] = (unsigned short )0;
        sqlstm.sqhstv[10] = (         void  *)&month11;
        sqlstm.sqhstl[10] = (unsigned int  )102;
        sqlstm.sqhsts[10] = (         int  )0;
        sqlstm.sqindv[10] = (         void  *)0;
        sqlstm.sqinds[10] = (         int  )0;
        sqlstm.sqharm[10] = (unsigned int  )0;
        sqlstm.sqadto[10] = (unsigned short )0;
        sqlstm.sqtdso[10] = (unsigned short )0;
        sqlstm.sqhstv[11] = (         void  *)&month12;
        sqlstm.sqhstl[11] = (unsigned int  )102;
        sqlstm.sqhsts[11] = (         int  )0;
        sqlstm.sqindv[11] = (         void  *)0;
        sqlstm.sqinds[11] = (         int  )0;
        sqlstm.sqharm[11] = (unsigned int  )0;
        sqlstm.sqadto[11] = (unsigned short )0;
        sqlstm.sqtdso[11] = (unsigned short )0;
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
        if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}



	month1.arr[month1.len] = '\0' ;
	month2.arr[month2.len] = '\0' ;
	month3.arr[month3.len] = '\0' ;
	month4.arr[month4.len] = '\0' ;
	month5.arr[month5.len] = '\0' ;
	month6.arr[month6.len] = '\0' ;
	month7.arr[month7.len] = '\0' ;
	month8.arr[month8.len] = '\0' ;
	month9.arr[month9.len] = '\0' ;
	month10.arr[month10.len] = '\0' ;
	month11.arr[month11.len] = '\0' ;
	month12.arr[month12.len] = '\0' ;

	
	gotoxy(1,9);
	printf(" |  %-7s원  |  %-7s원  |  %-7s원  |  %-7s원  |  %-7s원  |  %-7s원  |",
 month1.arr, month2.arr, month3.arr, month4.arr, month5.arr, month6.arr);
	gotoxy(1,14);
	printf(" |  %-7s원  |  %-7s원  |  %-7s원  |  %-7s원  |  %-7s원  |  %-7s원  |",
	month7.arr, month8.arr, month9.arr, month10.arr, month11.arr, month12.arr);
	
	printf("                                      (END)\n");
	}
	for (;;)
        {
        /* EXEC SQL FETCH c_cursor11 INTO :curyear, :yearsales2; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 12;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )1134;
        sqlstm.selerr = (unsigned short)1;
        sqlstm.sqlpfmem = (unsigned int  )0;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqfoff = (           int )0;
        sqlstm.sqfmod = (unsigned int )2;
        sqlstm.sqhstv[0] = (         void  *)&curyear;
        sqlstm.sqhstl[0] = (unsigned int  )12;
        sqlstm.sqhsts[0] = (         int  )0;
        sqlstm.sqindv[0] = (         void  *)0;
        sqlstm.sqinds[0] = (         int  )0;
        sqlstm.sqharm[0] = (unsigned int  )0;
        sqlstm.sqadto[0] = (unsigned short )0;
        sqlstm.sqtdso[0] = (unsigned short )0;
        sqlstm.sqhstv[1] = (         void  *)&yearsales2;
        sqlstm.sqhstl[1] = (unsigned int  )102;
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
        if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}



	curyear.arr[curyear.len] = '\0' ;
	yearsales2.arr[yearsales2.len] = '\0' ;

	gotoxy(44,16);
	printf("%s년 총매출 : %s원",curyear.arr,yearsales2.arr);
	}
   gotoxy(0,0);

	}
    /* Close the cursor. */
   /* EXEC SQL CLOSE c_cursor8; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 12;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )1157;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
   if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}


   /* EXEC SQL CLOSE c_cursor9; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 12;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )1172;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
   if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}


   /* EXEC SQL CLOSE c_cursor10; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 12;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )1187;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
   if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}


   /* EXEC SQL CLOSE c_cursor11; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 12;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )1202;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
   if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}



   /* EXEC SQL COMMIT ; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 12;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )1217;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
   if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}


	
}



void Day_sales_get_tuple()
{
/* --------------------------------------------------------------------------
   Retrieve the current maximum employee number
-------------------------------------------------------------------------- */
/* EXEC SQL BEGIN DECLARE SECTION; */ 

   /* varchar cusname[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } cusname;

   /* varchar type[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } type;

   /* varchar deliverdate[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } deliverdate;

   /* varchar total[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } total;

   /* varchar daytotal[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } daytotal;

   /* varchar cusname2[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } cusname2;

   /* varchar type2[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } type2;

   /* varchar deliverdate2[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } deliverdate2;

   /* varchar total2[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } total2;

   /* varchar daytotal2[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } daytotal2;

   
   char dynstmt[1000];
   char dynstmt2[1000];
   char dynstmt3[1000];
   char dynstmt4[1000];
/* EXEC SQL END DECLARE SECTION; */ 


   char no_temp1[20];
   

   int x, y, count=0, i ;


   /* Register sql_error() as the error handler. */
   /* EXEC SQL WHENEVER SQLERROR DO sql_error("\7ORACLE ERROR:\n"); */ 



   /* 사용자 입력 */
   clrscr();

   print_screen("day_sales_view.txt");

   while(1){
   gotoxy(27,5);
   printf("                ");
   gotoxy(27,5);
   fgets(no_temp1,20,stdin); 
   no_temp1[strlen(no_temp1)-1] = '\0';
   gotoxy(51,4);
	printf("                                        ");
	gotoxy(51,5);
	printf("                                        ");
   
   if((no_temp1[4] == '-' && no_temp1[7] == '-') && (no_temp1[9] != '\0' && no_temp1[10] == '\0')){
	break;
   	}
   else if(no_temp1[0] == '\0'){
	break;
	}else{
		gotoxy(51,4);
   	printf("ERROR : 날짜를 올바르게 입력하세요.");
  	 gotoxy(51,5);
  	 printf("ex)2016-11-11");
		continue;
		}
	
   }
   
   /* 실행시킬 SQL 문장*/
   sprintf(dynstmt,"select cus_name, milk_type,to_char(deliver_date,'YYYY-MM-DD'), to_char(price*deliver_amount,'999,999')||'원' from customer join (milk_storage join deliver using(milk_id)) using(cus_id) where deliver_date = to_date('%s','YYYY-MM-DD')",no_temp1); 
   sprintf(dynstmt2,"select sum(price*deliver_amount) from customer join (milk_storage join deliver using(milk_id)) using(cus_id) where deliver_date = to_date('%s','YYYY-MM-DD') group by deliver_date",no_temp1); 
   sprintf(dynstmt3,"select cus_name, milk_type,to_char(deliver_date,'YYYY-MM-DD'), to_char(price*deliver_amount,'999,999')||'원' from customer join (milk_storage join deliver using(milk_id)) using(cus_id) where to_date(deliver_date,'YYYY-MM-DD') = to_date(sysdate,'YYYY-MM-DD')"); 
   sprintf(dynstmt4,"select sum(price*deliver_amount) from customer join (milk_storage join deliver using(milk_id)) using(cus_id) where to_date(deliver_date,'YYYY-MM-DD') = to_date(sysdate,'YYYY-MM-DD') group by deliver_date"); 
   
   /* EXEC SQL PREPARE S4 FROM :dynstmt ; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 12;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )1232;
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
   if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}


   /* EXEC SQL PREPARE S5 FROM :dynstmt2 ; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 12;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )1251;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)dynstmt2;
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
   if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}


   /* EXEC SQL PREPARE S6 FROM :dynstmt3 ; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 12;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )1270;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)dynstmt3;
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
   if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}


   /* EXEC SQL PREPARE S7 FROM :dynstmt4 ; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 12;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )1289;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)dynstmt4;
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
   if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}



   /* cursor 선언 */
   /* EXEC SQL DECLARE c_cursor4 CURSOR FOR S4 ; */ 
 
   /* EXEC SQL DECLARE c_cursor5 CURSOR FOR S5 ; */ 
 
   /* EXEC SQL DECLARE c_cursor6 CURSOR FOR S6 ; */ 
 
   /* EXEC SQL DECLARE c_cursor7 CURSOR FOR S7 ; */ 
 

   /* cursor open */
   /* EXEC SQL OPEN c_cursor4 ; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 12;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )1308;
   sqlstm.selerr = (unsigned short)1;
   sqlstm.sqlpfmem = (unsigned int  )0;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqcmod = (unsigned int )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
   if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}

 
   /* EXEC SQL OPEN c_cursor5 ; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 12;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )1323;
   sqlstm.selerr = (unsigned short)1;
   sqlstm.sqlpfmem = (unsigned int  )0;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqcmod = (unsigned int )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
   if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}

 
   /* EXEC SQL OPEN c_cursor6 ; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 12;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )1338;
   sqlstm.selerr = (unsigned short)1;
   sqlstm.sqlpfmem = (unsigned int  )0;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqcmod = (unsigned int )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
   if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}

 
   /* EXEC SQL OPEN c_cursor7 ; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 12;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )1353;
   sqlstm.selerr = (unsigned short)1;
   sqlstm.sqlpfmem = (unsigned int  )0;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqcmod = (unsigned int )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
   if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}

 

   /* EXEC SQL WHENEVER NOT FOUND DO break; */ 


    x = 1;
   y = 9;

   if((no_temp1[4] == '-' && no_temp1[7] == '-') && (no_temp1[9] != '\0' && no_temp1[10] == '\0')){
   for (;;)
    {
        /* EXEC SQL FETCH c_cursor4 INTO :cusname, :type, :deliverdate, :total; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 12;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )1368;
        sqlstm.selerr = (unsigned short)1;
        sqlstm.sqlpfmem = (unsigned int  )0;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqfoff = (           int )0;
        sqlstm.sqfmod = (unsigned int )2;
        sqlstm.sqhstv[0] = (         void  *)&cusname;
        sqlstm.sqhstl[0] = (unsigned int  )102;
        sqlstm.sqhsts[0] = (         int  )0;
        sqlstm.sqindv[0] = (         void  *)0;
        sqlstm.sqinds[0] = (         int  )0;
        sqlstm.sqharm[0] = (unsigned int  )0;
        sqlstm.sqadto[0] = (unsigned short )0;
        sqlstm.sqtdso[0] = (unsigned short )0;
        sqlstm.sqhstv[1] = (         void  *)&type;
        sqlstm.sqhstl[1] = (unsigned int  )102;
        sqlstm.sqhsts[1] = (         int  )0;
        sqlstm.sqindv[1] = (         void  *)0;
        sqlstm.sqinds[1] = (         int  )0;
        sqlstm.sqharm[1] = (unsigned int  )0;
        sqlstm.sqadto[1] = (unsigned short )0;
        sqlstm.sqtdso[1] = (unsigned short )0;
        sqlstm.sqhstv[2] = (         void  *)&deliverdate;
        sqlstm.sqhstl[2] = (unsigned int  )102;
        sqlstm.sqhsts[2] = (         int  )0;
        sqlstm.sqindv[2] = (         void  *)0;
        sqlstm.sqinds[2] = (         int  )0;
        sqlstm.sqharm[2] = (unsigned int  )0;
        sqlstm.sqadto[2] = (unsigned short )0;
        sqlstm.sqtdso[2] = (unsigned short )0;
        sqlstm.sqhstv[3] = (         void  *)&total;
        sqlstm.sqhstl[3] = (unsigned int  )102;
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
        if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}



	cusname.arr[cusname.len] = '\0' ;
	type.arr[type.len] = '\0';
	deliverdate.arr[deliverdate.len] = '\0';
	total.arr[total.len] = '\0';
	
	
	
	gotoxy(x,y);
	printf(" |  %-6s  |  %-5s  |  %-10s  |  %-7s  |",
 cusname.arr, type.arr, deliverdate.arr, total.arr);
	y++;
	count++;
	if( count == PAGE_NUM){
	   printf("\n                             hit any key\n");
	   count = 0;
	   getch();

           gotoxy(0,9);
           for(i= 0; i < PAGE_NUM; i++){
		printf("                                                                             \n");
	   }

	   y = 9 ;
	}

    }
	printf("\n                                      (END)\n");
	for (;;)
    	{
        /* EXEC SQL FETCH c_cursor5 INTO :daytotal; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 12;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )1399;
        sqlstm.selerr = (unsigned short)1;
        sqlstm.sqlpfmem = (unsigned int  )0;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqfoff = (           int )0;
        sqlstm.sqfmod = (unsigned int )2;
        sqlstm.sqhstv[0] = (         void  *)&daytotal;
        sqlstm.sqhstl[0] = (unsigned int  )22;
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
        if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}



	daytotal.arr[daytotal.len] = '\0' ;
	
	
	gotoxy(30,15);
	printf("일 매출 : %s원",daytotal.arr);

   	 }
}
    if(no_temp1[0] == '\0'){
	x = 1;
	y = 9;
	for (;;)
    {
        /* EXEC SQL FETCH c_cursor6 INTO :cusname2, :type2, :deliverdate2, :total2; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 12;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )1418;
        sqlstm.selerr = (unsigned short)1;
        sqlstm.sqlpfmem = (unsigned int  )0;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqfoff = (           int )0;
        sqlstm.sqfmod = (unsigned int )2;
        sqlstm.sqhstv[0] = (         void  *)&cusname2;
        sqlstm.sqhstl[0] = (unsigned int  )102;
        sqlstm.sqhsts[0] = (         int  )0;
        sqlstm.sqindv[0] = (         void  *)0;
        sqlstm.sqinds[0] = (         int  )0;
        sqlstm.sqharm[0] = (unsigned int  )0;
        sqlstm.sqadto[0] = (unsigned short )0;
        sqlstm.sqtdso[0] = (unsigned short )0;
        sqlstm.sqhstv[1] = (         void  *)&type2;
        sqlstm.sqhstl[1] = (unsigned int  )102;
        sqlstm.sqhsts[1] = (         int  )0;
        sqlstm.sqindv[1] = (         void  *)0;
        sqlstm.sqinds[1] = (         int  )0;
        sqlstm.sqharm[1] = (unsigned int  )0;
        sqlstm.sqadto[1] = (unsigned short )0;
        sqlstm.sqtdso[1] = (unsigned short )0;
        sqlstm.sqhstv[2] = (         void  *)&deliverdate2;
        sqlstm.sqhstl[2] = (unsigned int  )102;
        sqlstm.sqhsts[2] = (         int  )0;
        sqlstm.sqindv[2] = (         void  *)0;
        sqlstm.sqinds[2] = (         int  )0;
        sqlstm.sqharm[2] = (unsigned int  )0;
        sqlstm.sqadto[2] = (unsigned short )0;
        sqlstm.sqtdso[2] = (unsigned short )0;
        sqlstm.sqhstv[3] = (         void  *)&total2;
        sqlstm.sqhstl[3] = (unsigned int  )102;
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
        if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}



	cusname2.arr[cusname2.len] = '\0' ;
	type2.arr[type2.len] = '\0';
	deliverdate2.arr[deliverdate2.len] = '\0';
	total2.arr[total2.len] = '\0';
	
	
	
	gotoxy(x,y);
	printf(" |  %-6s  |  %-5s  |  %-10s  |  %-7s  |",
 cusname2.arr, type2.arr, deliverdate2.arr, total2.arr);
	y++;
	count++;
	if( count == PAGE_NUM){
	   printf("\n                             hit any key\n");
	   count = 0;
	   getch();

           gotoxy(0,9);
           for(i= 0; i < PAGE_NUM; i++){
		printf("                                                                             \n");
	   }

	   y = 9 ;
	}

    }
	printf("                                      (END)\n");
for (;;)
    {
        /* EXEC SQL FETCH c_cursor7 INTO :daytotal2; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 12;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )1449;
        sqlstm.selerr = (unsigned short)1;
        sqlstm.sqlpfmem = (unsigned int  )0;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqfoff = (           int )0;
        sqlstm.sqfmod = (unsigned int )2;
        sqlstm.sqhstv[0] = (         void  *)&daytotal2;
        sqlstm.sqhstl[0] = (unsigned int  )22;
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
        if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}



	daytotal2.arr[daytotal2.len] = '\0' ;
	
	
	gotoxy(30,15);
	printf("일 매출 : %s원",daytotal2.arr);

    } 
	}
	gotoxy(0,0);

    /* Close the cursor. */
   /* EXEC SQL CLOSE c_cursor4; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 12;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )1468;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
   if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}


   /* EXEC SQL CLOSE c_cursor5; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 12;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )1483;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
   if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}



   /* EXEC SQL CLOSE c_cursor6; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 12;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )1498;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
   if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}


   /* EXEC SQL CLOSE c_cursor7; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 12;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )1513;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
   if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}



   /* EXEC SQL COMMIT ; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 12;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )1528;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
   if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}


}

void Del_get_tuple()
{
/* EXEC SQL BEGIN DECLARE SECTION; */ 

    /* varchar d_id[10]; */ 
struct { unsigned short len; unsigned char arr[10]; } d_id;

    /* varchar m_id[10]; */ 
struct { unsigned short len; unsigned char arr[10]; } m_id;

    /* varchar c_id[10]; */ 
struct { unsigned short len; unsigned char arr[10]; } c_id;

    /* varchar selldate[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } selldate;

    /* varchar d_num[10]; */ 
struct { unsigned short len; unsigned char arr[10]; } d_num;


   char dynstmt[1000];
/* EXEC SQL END DECLARE SECTION; */ 


   char no_temp1[10];
   char no_temp2[10];
   char no_temp3[10];
   char no_temp4[15];
 
   int x, y, count=0, i ;


   /* Register sql_error() as the error handler. */
   /* EXEC SQL WHENEVER SQLERROR DO sql_error("\7ORACLE ERROR:\n"); */ 



   /* 사용자 입력 */
   clrscr();

   print_screen("select_del_view.txt");
	
   gotoxy(27,5);
   fgets(no_temp1,10,stdin); 
   no_temp1[strlen(no_temp1)-1] = '\0';
   no_temp1[0] = (char)toupper(no_temp1[0]);
   
   gotoxy(55,5);  
   fgets(no_temp2,10,stdin); 
   no_temp2[strlen(no_temp2)-1] = '\0';
   for(int j = 0; j<strlen(no_temp2); j++)
	no_temp2[j] = (char)toupper(no_temp2[j]);
    

   gotoxy(27,7);
   fgets(no_temp3,10,stdin); 
   no_temp3[strlen(no_temp3)-1] = '\0';

   gotoxy(55,7);
   fgets(no_temp4,10,stdin); 
   no_temp4[strlen(no_temp4)-1] = '\0';

    /* 실행시킬 SQL 문장*/
   sprintf(dynstmt,"select deliver_id,milk_id,cus_id, to_char(deliver_date,'YYYY')||'년'||to_char(deliver_date,'MM')||'월'||to_char(deliver_date,'DD')||'일',deliver_amount from deliver where deliver_id like '%%%s%%' and milk_id like '%%%s%%' and cus_id like '%%%s%%' and deliver_date like '%%%s%%'",no_temp1, no_temp2, no_temp3, no_temp4); 


   /* EXEC SQL PREPARE S22 FROM :dynstmt ; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 12;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )1543;
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
   if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}



   /* cursor 선언 */
   /* EXEC SQL DECLARE c_cursor22 CURSOR FOR S22 ; */ 
 

   /* cursor open */
   /* EXEC SQL OPEN c_cursor22 ; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 12;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )1562;
   sqlstm.selerr = (unsigned short)1;
   sqlstm.sqlpfmem = (unsigned int  )0;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqcmod = (unsigned int )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
   if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}

 

   /* EXEC SQL WHENEVER NOT FOUND DO break; */ 


    x = 1;
   y = 11;
	for (;;)
    {
        /* EXEC SQL FETCH c_cursor22 INTO :d_id, :m_id, :c_id, :selldate, :d_num; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 12;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )1577;
        sqlstm.selerr = (unsigned short)1;
        sqlstm.sqlpfmem = (unsigned int  )0;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqfoff = (           int )0;
        sqlstm.sqfmod = (unsigned int )2;
        sqlstm.sqhstv[0] = (         void  *)&d_id;
        sqlstm.sqhstl[0] = (unsigned int  )12;
        sqlstm.sqhsts[0] = (         int  )0;
        sqlstm.sqindv[0] = (         void  *)0;
        sqlstm.sqinds[0] = (         int  )0;
        sqlstm.sqharm[0] = (unsigned int  )0;
        sqlstm.sqadto[0] = (unsigned short )0;
        sqlstm.sqtdso[0] = (unsigned short )0;
        sqlstm.sqhstv[1] = (         void  *)&m_id;
        sqlstm.sqhstl[1] = (unsigned int  )12;
        sqlstm.sqhsts[1] = (         int  )0;
        sqlstm.sqindv[1] = (         void  *)0;
        sqlstm.sqinds[1] = (         int  )0;
        sqlstm.sqharm[1] = (unsigned int  )0;
        sqlstm.sqadto[1] = (unsigned short )0;
        sqlstm.sqtdso[1] = (unsigned short )0;
        sqlstm.sqhstv[2] = (         void  *)&c_id;
        sqlstm.sqhstl[2] = (unsigned int  )12;
        sqlstm.sqhsts[2] = (         int  )0;
        sqlstm.sqindv[2] = (         void  *)0;
        sqlstm.sqinds[2] = (         int  )0;
        sqlstm.sqharm[2] = (unsigned int  )0;
        sqlstm.sqadto[2] = (unsigned short )0;
        sqlstm.sqtdso[2] = (unsigned short )0;
        sqlstm.sqhstv[3] = (         void  *)&selldate;
        sqlstm.sqhstl[3] = (unsigned int  )22;
        sqlstm.sqhsts[3] = (         int  )0;
        sqlstm.sqindv[3] = (         void  *)0;
        sqlstm.sqinds[3] = (         int  )0;
        sqlstm.sqharm[3] = (unsigned int  )0;
        sqlstm.sqadto[3] = (unsigned short )0;
        sqlstm.sqtdso[3] = (unsigned short )0;
        sqlstm.sqhstv[4] = (         void  *)&d_num;
        sqlstm.sqhstl[4] = (unsigned int  )12;
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
        if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}



	d_id.arr[d_id.len] = '\0' ;
	m_id.arr[m_id.len] = '\0';
	c_id.arr[c_id.len] = '\0';
	selldate.arr[selldate.len] = '\0';
	d_num.arr[d_num.len] = '\0';
	
	
	gotoxy(x,y);
	printf(" |  %-3s  |   %-4s   |   %-4s   |  %-10s  |  %-4s  |",
 d_id.arr, m_id.arr, c_id.arr, selldate.arr,d_num.arr);
	y++;
	count++;
	if( count == PAGE_NUM){
	   printf("\n                             hit any key\n");
	   count = 0;
	   getch();

           gotoxy(0,11);
           for(i= 0; i < PAGE_NUM; i++){
		printf("                                                                             \n");
	   }

	   y = 11 ;
	}

    }
    printf("\n                                      (END)\n");
	gotoxy(0,0);

    /* Close the cursor. */
   /* EXEC SQL CLOSE c_cursor22; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 12;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )1612;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
   if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}



   /* EXEC SQL COMMIT ; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 12;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )1627;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
   if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}



}

void Milk_get_tuple()
{
/* --------------------------------------------------------------------------
   Retrieve the current maximum employee number
-------------------------------------------------------------------------- */
/* EXEC SQL BEGIN DECLARE SECTION; */ 

   /* varchar id[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } id;

   /* varchar type[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } type;

   /* varchar makedate[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } makedate;

   /* varchar selldate[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } selldate;

   /* varchar price[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } price;

   /* varchar amount[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } amount;


   char dynstmt[1000];
/* EXEC SQL END DECLARE SECTION; */ 


   char no_temp1[10];
   char no_temp2[10];
   char no_temp3[15];
   char no_temp4[15];

   int x, y, count=0, i ;


   /* Register sql_error() as the error handler. */
   /* EXEC SQL WHENEVER SQLERROR DO sql_error("\7ORACLE ERROR:\n"); */ 



   /* 사용자 입력 */
   clrscr();

   print_screen("select_milk_view.txt");


   gotoxy(27,5);
   fgets(no_temp1,10,stdin); 
   no_temp1[strlen(no_temp1)-1] = '\0';
   no_temp1[0] = (char)toupper(no_temp1[0]);
   
   gotoxy(55,5);
   fgets(no_temp2,10,stdin); 
   no_temp2[strlen(no_temp2)-1] = '\0';
   for(int j = 0; j<strlen(no_temp2); j++)
	no_temp2[j] = (char)toupper(no_temp2[j]);
    

   gotoxy(27,7);
   fgets(no_temp3,10,stdin); 
   no_temp3[strlen(no_temp3)-1] = '\0';

   gotoxy(55,7);
   fgets(no_temp4,10,stdin); 
   no_temp4[strlen(no_temp4)-1] = '\0';
      
   
   /* 실행시킬 SQL 문장*/
   sprintf(dynstmt,"select milk_id, milk_type,to_char(make_date,'YYYY')||'년'||to_char(make_date,'MM')||'월'||to_char(make_date,'DD')||'일',to_char(sell_date,'YYYY')||'년'||to_char(sell_date,'MM')||'월'||to_char(sell_date,'DD')||'일',to_char(price,'9,999'), amount from milk_storage where milk_id like '%%%s%%' and milk_type like '%%%s%%' and make_date like '%%%s%%' and sell_date like '%%%s%%'",no_temp1, no_temp2, no_temp3, no_temp4); 


   /* EXEC SQL PREPARE S FROM :dynstmt ; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 12;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )1642;
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
   if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}



   /* cursor 선언 */
   /* EXEC SQL DECLARE c_cursor CURSOR FOR S ; */ 
 

   /* cursor open */
   /* EXEC SQL OPEN c_cursor ; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 12;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )1661;
   sqlstm.selerr = (unsigned short)1;
   sqlstm.sqlpfmem = (unsigned int  )0;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqcmod = (unsigned int )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
   if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}

 

   /* EXEC SQL WHENEVER NOT FOUND DO break; */ 


    x = 1;
   y = 11;

   for (;;)
    {
        /* EXEC SQL FETCH c_cursor INTO :id, :type, :makedate, :selldate, :price, :amount; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 12;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )1676;
        sqlstm.selerr = (unsigned short)1;
        sqlstm.sqlpfmem = (unsigned int  )0;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqfoff = (           int )0;
        sqlstm.sqfmod = (unsigned int )2;
        sqlstm.sqhstv[0] = (         void  *)&id;
        sqlstm.sqhstl[0] = (unsigned int  )102;
        sqlstm.sqhsts[0] = (         int  )0;
        sqlstm.sqindv[0] = (         void  *)0;
        sqlstm.sqinds[0] = (         int  )0;
        sqlstm.sqharm[0] = (unsigned int  )0;
        sqlstm.sqadto[0] = (unsigned short )0;
        sqlstm.sqtdso[0] = (unsigned short )0;
        sqlstm.sqhstv[1] = (         void  *)&type;
        sqlstm.sqhstl[1] = (unsigned int  )102;
        sqlstm.sqhsts[1] = (         int  )0;
        sqlstm.sqindv[1] = (         void  *)0;
        sqlstm.sqinds[1] = (         int  )0;
        sqlstm.sqharm[1] = (unsigned int  )0;
        sqlstm.sqadto[1] = (unsigned short )0;
        sqlstm.sqtdso[1] = (unsigned short )0;
        sqlstm.sqhstv[2] = (         void  *)&makedate;
        sqlstm.sqhstl[2] = (unsigned int  )102;
        sqlstm.sqhsts[2] = (         int  )0;
        sqlstm.sqindv[2] = (         void  *)0;
        sqlstm.sqinds[2] = (         int  )0;
        sqlstm.sqharm[2] = (unsigned int  )0;
        sqlstm.sqadto[2] = (unsigned short )0;
        sqlstm.sqtdso[2] = (unsigned short )0;
        sqlstm.sqhstv[3] = (         void  *)&selldate;
        sqlstm.sqhstl[3] = (unsigned int  )102;
        sqlstm.sqhsts[3] = (         int  )0;
        sqlstm.sqindv[3] = (         void  *)0;
        sqlstm.sqinds[3] = (         int  )0;
        sqlstm.sqharm[3] = (unsigned int  )0;
        sqlstm.sqadto[3] = (unsigned short )0;
        sqlstm.sqtdso[3] = (unsigned short )0;
        sqlstm.sqhstv[4] = (         void  *)&price;
        sqlstm.sqhstl[4] = (unsigned int  )102;
        sqlstm.sqhsts[4] = (         int  )0;
        sqlstm.sqindv[4] = (         void  *)0;
        sqlstm.sqinds[4] = (         int  )0;
        sqlstm.sqharm[4] = (unsigned int  )0;
        sqlstm.sqadto[4] = (unsigned short )0;
        sqlstm.sqtdso[4] = (unsigned short )0;
        sqlstm.sqhstv[5] = (         void  *)&amount;
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
        if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}



	id.arr[id.len] = '\0' ;
	type.arr[type.len] = '\0';
	makedate.arr[makedate.len] = '\0';
	selldate.arr[selldate.len] = '\0';
	price.arr[price.len] = '\0';
	amount.arr[amount.len] = '\0';
	
	
	gotoxy(x,y);
	printf(" |  %-4s  |  %-5s  |  %-8s  |  %-8s  | %-6s | %-4s |",
 id.arr, type.arr, makedate.arr, selldate.arr,price.arr,amount.arr);
	y++;
	count++;
	if( count == PAGE_NUM){
	   printf("\n                             hit any key\n");
	   count = 0;
	   getch();

           gotoxy(0,11);
           for(i= 0; i < PAGE_NUM; i++){
		printf("                                                                             \n");
	   }

	   y = 11 ;
	}

    }
    printf("                                      (END)\n");
	gotoxy(0,0);

    /* Close the cursor. */
   /* EXEC SQL CLOSE c_cursor; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 12;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )1715;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
   if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}



   /* EXEC SQL COMMIT ; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 12;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )1730;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
   if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}


}


void Cus_delete_tuple()
{

/* EXEC SQL BEGIN DECLARE SECTION; */ 

   /* varchar c_no[10]; */ 
struct { unsigned short len; unsigned char arr[10]; } c_no;

   /* varchar c_no2[10]; */ 
struct { unsigned short len; unsigned char arr[10]; } c_no2;

   /* varchar c_name[15]; */ 
struct { unsigned short len; unsigned char arr[15]; } c_name;

   /* varchar c_date[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } c_date;

   /* varchar c_end[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } c_end;

   /* varchar ceo[10]; */ 
struct { unsigned short len; unsigned char arr[10]; } ceo;

   /* varchar loc[10]; */ 
struct { unsigned short len; unsigned char arr[10]; } loc;


    char dynstmt[1000];
    char dynstmt2[1000];
    char dynstmt3[1000];
/* EXEC SQL END DECLARE SECTION; */ 

    
    char no_temp1[10];
    char yes_no[5];

    int x, y, count=0, i;

    /* EXEC SQL WHENEVER SQLERROR DO sql_error("\7ORACLE ERROR:\n"); */ 

   
    /* 사용자 입력 */
    clrscr();
    print_screen("delete_cus_view.txt");

    gotoxy(32,5);
    fgets(no_temp1, 10, stdin); 
    no_temp1[strlen(no_temp1)-1] = '\0' ;  
    no_temp1[0] = (char)toupper(no_temp1[0]);
   
   
    sprintf(dynstmt,"SELECT cus_id,cus_name,to_char(cus_date,'YY-MM-DD'),to_char(cus_end_date,'YY-MM-DD'),ceo_name,loc FROM customer where cus_id = '%s%'", no_temp1) ;
    sprintf(dynstmt3,"SELECT cus_id FROM deliver where cus_id = '%s%'", no_temp1) ;
   
    /* EXEC SQL PREPARE S14 FROM :dynstmt ; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 12;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )1745;
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
    if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}


    /* EXEC SQL PREPARE S15 FROM :dynstmt3 ; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 12;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )1764;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)dynstmt3;
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
    if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}



    /* EXEC SQL DECLARE c_cursor14 CURSOR FOR S14 ; */ 
 
    /* EXEC SQL DECLARE c_cursor15 CURSOR FOR S15 ; */ 
 

    /* EXEC SQL OPEN c_cursor14 ; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 12;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )1783;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.sqlpfmem = (unsigned int  )0;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqcmod = (unsigned int )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}

 
    /* EXEC SQL OPEN c_cursor15 ; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 12;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )1798;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.sqlpfmem = (unsigned int  )0;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqcmod = (unsigned int )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}

 

  
    /* EXEC SQL WHENEVER NOT FOUND do break; */ 


	for(;;)
        {
        /* EXEC SQL FETCH c_cursor15 INTO :c_no2; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 12;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )1813;
        sqlstm.selerr = (unsigned short)1;
        sqlstm.sqlpfmem = (unsigned int  )0;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqfoff = (           int )0;
        sqlstm.sqfmod = (unsigned int )2;
        sqlstm.sqhstv[0] = (         void  *)&c_no2;
        sqlstm.sqhstl[0] = (unsigned int  )12;
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
        if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}



	    c_no2.arr[c_no2.len] = '\0';
	    chk3 = 1;
        }

    x = 1;
    y = 10;

    for(;;)
    {
        /* EXEC SQL FETCH c_cursor14 INTO :c_no, :c_name, :c_date, :c_end, :ceo, :loc ; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 12;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )1832;
        sqlstm.selerr = (unsigned short)1;
        sqlstm.sqlpfmem = (unsigned int  )0;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqfoff = (           int )0;
        sqlstm.sqfmod = (unsigned int )2;
        sqlstm.sqhstv[0] = (         void  *)&c_no;
        sqlstm.sqhstl[0] = (unsigned int  )12;
        sqlstm.sqhsts[0] = (         int  )0;
        sqlstm.sqindv[0] = (         void  *)0;
        sqlstm.sqinds[0] = (         int  )0;
        sqlstm.sqharm[0] = (unsigned int  )0;
        sqlstm.sqadto[0] = (unsigned short )0;
        sqlstm.sqtdso[0] = (unsigned short )0;
        sqlstm.sqhstv[1] = (         void  *)&c_name;
        sqlstm.sqhstl[1] = (unsigned int  )17;
        sqlstm.sqhsts[1] = (         int  )0;
        sqlstm.sqindv[1] = (         void  *)0;
        sqlstm.sqinds[1] = (         int  )0;
        sqlstm.sqharm[1] = (unsigned int  )0;
        sqlstm.sqadto[1] = (unsigned short )0;
        sqlstm.sqtdso[1] = (unsigned short )0;
        sqlstm.sqhstv[2] = (         void  *)&c_date;
        sqlstm.sqhstl[2] = (unsigned int  )22;
        sqlstm.sqhsts[2] = (         int  )0;
        sqlstm.sqindv[2] = (         void  *)0;
        sqlstm.sqinds[2] = (         int  )0;
        sqlstm.sqharm[2] = (unsigned int  )0;
        sqlstm.sqadto[2] = (unsigned short )0;
        sqlstm.sqtdso[2] = (unsigned short )0;
        sqlstm.sqhstv[3] = (         void  *)&c_end;
        sqlstm.sqhstl[3] = (unsigned int  )22;
        sqlstm.sqhsts[3] = (         int  )0;
        sqlstm.sqindv[3] = (         void  *)0;
        sqlstm.sqinds[3] = (         int  )0;
        sqlstm.sqharm[3] = (unsigned int  )0;
        sqlstm.sqadto[3] = (unsigned short )0;
        sqlstm.sqtdso[3] = (unsigned short )0;
        sqlstm.sqhstv[4] = (         void  *)&ceo;
        sqlstm.sqhstl[4] = (unsigned int  )12;
        sqlstm.sqhsts[4] = (         int  )0;
        sqlstm.sqindv[4] = (         void  *)0;
        sqlstm.sqinds[4] = (         int  )0;
        sqlstm.sqharm[4] = (unsigned int  )0;
        sqlstm.sqadto[4] = (unsigned short )0;
        sqlstm.sqtdso[4] = (unsigned short )0;
        sqlstm.sqhstv[5] = (         void  *)&loc;
        sqlstm.sqhstl[5] = (unsigned int  )12;
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
        if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}



	    c_no.arr[c_no.len] = '\0';
	    c_name.arr[c_name.len] = '\0';
	    c_date.arr[c_date.len] = '\0';
	    c_end.arr[c_end.len] = '\0';
	    ceo.arr[ceo.len] = '\0';
	    loc.arr[loc.len] = '\0';

	   gotoxy(x,y);
	printf(" |  %-4s  |  %-5s  |  %-8s  |  %-8s  | %-5s | %-4s |",
 c_no.arr, c_name.arr, c_date.arr, c_end.arr,ceo.arr,loc.arr);
	y++;
	count++;
	if( count == PAGE_NUM){
	   printf("\n                             hit any key\n");
	   count = 0;
	   getch();

           gotoxy(0,10);
           for(i= 0; i < PAGE_NUM; i++){
		printf("                                                                             \n");
	   }
	  
	   y = 10 ;
	}
	 chk2 = 1;
    }
    printf("\n                                      (END)\n");
	
	if(chk3 == 0){
	while(1){
	if(chk2 == 1){
	gotoxy(27,16);
	printf("삭제 하시겠습니까?(Y/N) ");
	fgets(yes_no, 5, stdin); 
        yes_no[strlen(yes_no)-1] = '\0' ;  
        yes_no[0] = (char)toupper(yes_no[0]);
	
		
		if(yes_no[0] == 'Y' && yes_no[1] == '\0'){
		sprintf(dynstmt2,"delete from customer where cus_id = '%s'",no_temp1);
   
  		 /* EXEC SQL EXECUTE IMMEDIATE :dynstmt2 ; */ 

{
     struct sqlexd sqlstm;
     sqlstm.sqlvsn = 13;
     sqlstm.arrsiz = 12;
     sqlstm.sqladtp = &sqladt;
     sqlstm.sqltdsp = &sqltds;
     sqlstm.stmt = "";
     sqlstm.iters = (unsigned int  )1;
     sqlstm.offset = (unsigned int  )1871;
     sqlstm.cud = sqlcud0;
     sqlstm.sqlest = (unsigned char  *)&sqlca;
     sqlstm.sqlety = (unsigned short)4352;
     sqlstm.occurs = (unsigned int  )0;
     sqlstm.sqhstv[0] = (         void  *)dynstmt2;
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
     if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}


			gotoxy(27,17);
   			printf("거래처 정보 삭제에 성공하였습니다.\n");
   		/* EXEC SQL COMMIT WORK ; */ 

{
     struct sqlexd sqlstm;
     sqlstm.sqlvsn = 13;
     sqlstm.arrsiz = 12;
     sqlstm.sqladtp = &sqladt;
     sqlstm.sqltdsp = &sqltds;
     sqlstm.iters = (unsigned int  )1;
     sqlstm.offset = (unsigned int  )1890;
     sqlstm.cud = sqlcud0;
     sqlstm.sqlest = (unsigned char  *)&sqlca;
     sqlstm.sqlety = (unsigned short)4352;
     sqlstm.occurs = (unsigned int  )0;
     sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
     if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}

 
		break;
		}
		else if(yes_no[0] == 'N' && yes_no[1] == '\0'){
		gotoxy(27,17);
	  	 printf("                                      \n");
			break;
		}else{
			gotoxy(27,16);
			printf("                                      \n");
			gotoxy(27,17);
			printf("값을 잘못 입력하셨습니다.");
			continue;
			}
	}
	if(chk2 == 0)
		break;
		}
	}else if(strcmp(c_no2.arr,c_no.arr) == 0){
	gotoxy(27,17);
	printf("제품을 납품한 업체는 삭제할 수 없습니다.");
	chk3 = 0;
	}
	

    /* EXEC SQL CLOSE c_cursor14; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 12;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )1905;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}

 
    /* EXEC SQL CLOSE c_cursor15; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 12;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )1920;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}

 
   

}

void Del_delete_tuple()
{
/* EXEC SQL BEGIN DECLARE SECTION; */ 

    /* varchar d_id[10]; */ 
struct { unsigned short len; unsigned char arr[10]; } d_id;

    /* varchar m_id[10]; */ 
struct { unsigned short len; unsigned char arr[10]; } m_id;

    /* varchar c_id[10]; */ 
struct { unsigned short len; unsigned char arr[10]; } c_id;

    /* varchar selldate[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } selldate;

    /* varchar d_num[10]; */ 
struct { unsigned short len; unsigned char arr[10]; } d_num;

    /* varchar milk_num[10]; */ 
struct { unsigned short len; unsigned char arr[10]; } milk_num;


    char dynstmt[1000];
    char dynstmt2[1000];
    char dynstmt3[1000];
    char dynstmt4[1000];
/* EXEC SQL END DECLARE SECTION; */ 

    
    char no_temp1[10];
    char yes_no[5];

    int x, y, count=0, i;

    /* EXEC SQL WHENEVER SQLERROR DO sql_error("\7ORACLE ERROR:\n"); */ 

   
    /* 사용자 입력 */
    clrscr();

    print_screen("delete_del_view.txt");

     gotoxy(29,5);
    fgets(no_temp1, 10, stdin); 
    no_temp1[strlen(no_temp1)-1] = '\0' ;  
    no_temp1[0] = (char)toupper(no_temp1[0]);
   
   
    sprintf(dynstmt,"SELECT deliver_id,milk_id,cus_id,to_char(deliver_date,'yyyy-mm-dd'),deliver_amount  FROM deliver where deliver_id = '%s'", no_temp1) ;
    sprintf(dynstmt3,"select amount from milk_storage where milk_id = '%s'", m_id.arr);   

    /* EXEC SQL PREPARE S30 FROM :dynstmt ; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 12;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )1935;
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
    if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}


    /* EXEC SQL PREPARE S26 FROM :dynstmt3 ; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 12;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )1954;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)dynstmt3;
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
    if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}



    /* EXEC SQL DECLARE c_cursor30 CURSOR FOR S30 ; */ 
 
    /* EXEC SQL DECLARE c_cursor26 CURSOR FOR S26 ; */ 
 

    /* EXEC SQL OPEN c_cursor30 ; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 12;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )1973;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.sqlpfmem = (unsigned int  )0;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqcmod = (unsigned int )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}

 
    /* EXEC SQL OPEN c_cursor26 ; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 12;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )1988;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.sqlpfmem = (unsigned int  )0;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqcmod = (unsigned int )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}

 
  
    /* EXEC SQL WHENEVER NOT FOUND do break; */ 


    for(;;)
        	{
        	/* EXEC SQL FETCH c_cursor26 INTO :milk_num; */ 

{
         struct sqlexd sqlstm;
         sqlstm.sqlvsn = 13;
         sqlstm.arrsiz = 12;
         sqlstm.sqladtp = &sqladt;
         sqlstm.sqltdsp = &sqltds;
         sqlstm.iters = (unsigned int  )1;
         sqlstm.offset = (unsigned int  )2003;
         sqlstm.selerr = (unsigned short)1;
         sqlstm.sqlpfmem = (unsigned int  )0;
         sqlstm.cud = sqlcud0;
         sqlstm.sqlest = (unsigned char  *)&sqlca;
         sqlstm.sqlety = (unsigned short)4352;
         sqlstm.occurs = (unsigned int  )0;
         sqlstm.sqfoff = (           int )0;
         sqlstm.sqfmod = (unsigned int )2;
         sqlstm.sqhstv[0] = (         void  *)&milk_num;
         sqlstm.sqhstl[0] = (unsigned int  )12;
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
         if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}



	    	milk_num.arr[milk_num.len] = '\0';
			
       		 }
	
    x = 1;
    y = 10;

    for(;;)
    {
        /* EXEC SQL FETCH c_cursor30 INTO :d_id, :m_id, :c_id, :selldate, :d_num; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 12;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )2022;
        sqlstm.selerr = (unsigned short)1;
        sqlstm.sqlpfmem = (unsigned int  )0;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqfoff = (           int )0;
        sqlstm.sqfmod = (unsigned int )2;
        sqlstm.sqhstv[0] = (         void  *)&d_id;
        sqlstm.sqhstl[0] = (unsigned int  )12;
        sqlstm.sqhsts[0] = (         int  )0;
        sqlstm.sqindv[0] = (         void  *)0;
        sqlstm.sqinds[0] = (         int  )0;
        sqlstm.sqharm[0] = (unsigned int  )0;
        sqlstm.sqadto[0] = (unsigned short )0;
        sqlstm.sqtdso[0] = (unsigned short )0;
        sqlstm.sqhstv[1] = (         void  *)&m_id;
        sqlstm.sqhstl[1] = (unsigned int  )12;
        sqlstm.sqhsts[1] = (         int  )0;
        sqlstm.sqindv[1] = (         void  *)0;
        sqlstm.sqinds[1] = (         int  )0;
        sqlstm.sqharm[1] = (unsigned int  )0;
        sqlstm.sqadto[1] = (unsigned short )0;
        sqlstm.sqtdso[1] = (unsigned short )0;
        sqlstm.sqhstv[2] = (         void  *)&c_id;
        sqlstm.sqhstl[2] = (unsigned int  )12;
        sqlstm.sqhsts[2] = (         int  )0;
        sqlstm.sqindv[2] = (         void  *)0;
        sqlstm.sqinds[2] = (         int  )0;
        sqlstm.sqharm[2] = (unsigned int  )0;
        sqlstm.sqadto[2] = (unsigned short )0;
        sqlstm.sqtdso[2] = (unsigned short )0;
        sqlstm.sqhstv[3] = (         void  *)&selldate;
        sqlstm.sqhstl[3] = (unsigned int  )22;
        sqlstm.sqhsts[3] = (         int  )0;
        sqlstm.sqindv[3] = (         void  *)0;
        sqlstm.sqinds[3] = (         int  )0;
        sqlstm.sqharm[3] = (unsigned int  )0;
        sqlstm.sqadto[3] = (unsigned short )0;
        sqlstm.sqtdso[3] = (unsigned short )0;
        sqlstm.sqhstv[4] = (         void  *)&d_num;
        sqlstm.sqhstl[4] = (unsigned int  )12;
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
        if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}



	d_id.arr[d_id.len] = '\0' ;
	m_id.arr[m_id.len] = '\0';
	c_id.arr[c_id.len] = '\0';
	selldate.arr[selldate.len] = '\0';
	d_num.arr[d_num.len] = '\0';

	    gotoxy(x,y);
	printf(" |  %-4s |  %-4s  |   %-4s   |  %-10s  |  %-4s  |",
 d_id.arr, m_id.arr, c_id.arr, selldate.arr,d_num.arr);
	y++;
	count++;
	if( count == PAGE_NUM){
	   printf("\n                             hit any key\n");
	   count = 0;
	   getch();

           gotoxy(0,10);
           for(i= 0; i < PAGE_NUM; i++){
		printf("                                                                             \n");
	   }
	  
	   y = 10 ;
	}
	 chk2 = 1;
    }
    printf("\n                                      (END)\n");


	while(1){
	if(chk2 == 1){
	gotoxy(27,16);
	printf("삭제 하시겠습니까?(Y/N) ");
	fgets(yes_no, 5, stdin); 
        yes_no[strlen(yes_no)-1] = '\0' ;  
        yes_no[0] = (char)toupper(yes_no[0]);
		
		if(yes_no[0] == 'Y' && yes_no[1] == '\0'){
		sprintf(dynstmt4,"update milk_storage set amount = amount +'%s' where milk_id='%s'",d_num.arr, m_id.arr);   
		/* EXEC SQL EXECUTE IMMEDIATE :dynstmt4 ; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 13;
  sqlstm.arrsiz = 12;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )2057;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)4352;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)dynstmt4;
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
  if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}


		
		sprintf(dynstmt2,"delete from deliver where deliver_id = '%s'",no_temp1);
   
  		 /* EXEC SQL EXECUTE IMMEDIATE :dynstmt2 ; */ 

{
     struct sqlexd sqlstm;
     sqlstm.sqlvsn = 13;
     sqlstm.arrsiz = 12;
     sqlstm.sqladtp = &sqladt;
     sqlstm.sqltdsp = &sqltds;
     sqlstm.stmt = "";
     sqlstm.iters = (unsigned int  )1;
     sqlstm.offset = (unsigned int  )2076;
     sqlstm.cud = sqlcud0;
     sqlstm.sqlest = (unsigned char  *)&sqlca;
     sqlstm.sqlety = (unsigned short)4352;
     sqlstm.occurs = (unsigned int  )0;
     sqlstm.sqhstv[0] = (         void  *)dynstmt2;
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
     if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}


			gotoxy(27,17);
			printf("                                      \n");
			gotoxy(27,17);
   			printf("Delete Success\n");
   		/* EXEC SQL COMMIT WORK ; */ 

{
     struct sqlexd sqlstm;
     sqlstm.sqlvsn = 13;
     sqlstm.arrsiz = 12;
     sqlstm.sqladtp = &sqladt;
     sqlstm.sqltdsp = &sqltds;
     sqlstm.iters = (unsigned int  )1;
     sqlstm.offset = (unsigned int  )2095;
     sqlstm.cud = sqlcud0;
     sqlstm.sqlest = (unsigned char  *)&sqlca;
     sqlstm.sqlety = (unsigned short)4352;
     sqlstm.occurs = (unsigned int  )0;
     sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
     if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}

 
		break;
		}
		else if(yes_no[0] == 'N' && yes_no[0] == '\0'){
		gotoxy(27,17);
	  	 printf("                                      \n");
			break;
		}else{
			gotoxy(27,16);
			printf("                                      \n");
			gotoxy(27,17);
			printf("값을 잘못 입력하셨습니다.");
			continue;
			}
	}
	if(chk2 == 0)
		break;
	}
	
	//gotoxy(0,0);
    	

    /* EXEC SQL CLOSE c_cursor30; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 12;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )2110;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}

 
    /* EXEC SQL CLOSE c_cursor26; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 12;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )2125;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}

 
}


void Milk_delete_tuple()
{


/* EXEC SQL BEGIN DECLARE SECTION; */ 

    /* varchar  id[10]; */ 
struct { unsigned short len; unsigned char arr[10]; } id;

    /* varchar  id2[10]; */ 
struct { unsigned short len; unsigned char arr[10]; } id2;

    /* varchar type[10]; */ 
struct { unsigned short len; unsigned char arr[10]; } type;

    /* varchar makedate[15]; */ 
struct { unsigned short len; unsigned char arr[15]; } makedate;

    /* varchar selldate[15]; */ 
struct { unsigned short len; unsigned char arr[15]; } selldate;

    /* varchar price[10]; */ 
struct { unsigned short len; unsigned char arr[10]; } price;

    /* varchar amount[10]; */ 
struct { unsigned short len; unsigned char arr[10]; } amount;


    char dynstmt[1000];
    char dynstmt2[1000];
    char dynstmt3[1000];
/* EXEC SQL END DECLARE SECTION; */ 

    
    char no_temp1[10];
    char yes_no2[5];

    int x, y, count=0, i;

    /* EXEC SQL WHENEVER SQLERROR DO sql_error("\7ORACLE ERROR:\n"); */ 

   
    /* 사용자 입력 */
    clrscr();

    print_screen("delete_milk_view.txt");

    gotoxy(29,5);
    fgets(no_temp1, 10, stdin); 
    no_temp1[strlen(no_temp1)-1] = '\0' ;  
    no_temp1[0] = (char)toupper(no_temp1[0]);
   
   
    sprintf(dynstmt,"SELECT milk_id,milk_type,to_char(make_date,'YYYY-MM-DD'),to_char(sell_date,'YYYY-MM-DD'),price,amount  FROM milk_storage where milk_id = '%s%'", no_temp1) ;
    sprintf(dynstmt3,"SELECT milk_id FROM deliver where milk_id = '%s%'", no_temp1) ;
   
    /* EXEC SQL PREPARE S3 FROM :dynstmt ; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 12;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )2140;
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
    if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}


    /* EXEC SQL PREPARE S4 FROM :dynstmt3 ; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 12;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )2159;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)dynstmt3;
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
    if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}



    /* EXEC SQL DECLARE c3_cursor CURSOR FOR S3 ; */ 
 
    /* EXEC SQL DECLARE c3_cursor2 CURSOR FOR S4 ; */ 
 

    /* EXEC SQL OPEN c3_cursor ; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 12;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )2178;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.sqlpfmem = (unsigned int  )0;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqcmod = (unsigned int )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}

 
    /* EXEC SQL OPEN c3_cursor2 ; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 12;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )2193;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.sqlpfmem = (unsigned int  )0;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqcmod = (unsigned int )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}

 
  
    /* EXEC SQL WHENEVER NOT FOUND do break; */ 


	for(;;)
        {
        /* EXEC SQL FETCH c3_cursor2 INTO :id2; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 12;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )2208;
        sqlstm.selerr = (unsigned short)1;
        sqlstm.sqlpfmem = (unsigned int  )0;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqfoff = (           int )0;
        sqlstm.sqfmod = (unsigned int )2;
        sqlstm.sqhstv[0] = (         void  *)&id2;
        sqlstm.sqhstl[0] = (unsigned int  )12;
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
        if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}



	    id2.arr[id2.len] = '\0';
		chk3 = 1;
        }
	
    x = 1;
    y = 10;

    for(;;)
    {
        /* EXEC SQL FETCH c3_cursor INTO :id, :type, :makedate, :selldate, :price, :amount ; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 12;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )2227;
        sqlstm.selerr = (unsigned short)1;
        sqlstm.sqlpfmem = (unsigned int  )0;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqfoff = (           int )0;
        sqlstm.sqfmod = (unsigned int )2;
        sqlstm.sqhstv[0] = (         void  *)&id;
        sqlstm.sqhstl[0] = (unsigned int  )12;
        sqlstm.sqhsts[0] = (         int  )0;
        sqlstm.sqindv[0] = (         void  *)0;
        sqlstm.sqinds[0] = (         int  )0;
        sqlstm.sqharm[0] = (unsigned int  )0;
        sqlstm.sqadto[0] = (unsigned short )0;
        sqlstm.sqtdso[0] = (unsigned short )0;
        sqlstm.sqhstv[1] = (         void  *)&type;
        sqlstm.sqhstl[1] = (unsigned int  )12;
        sqlstm.sqhsts[1] = (         int  )0;
        sqlstm.sqindv[1] = (         void  *)0;
        sqlstm.sqinds[1] = (         int  )0;
        sqlstm.sqharm[1] = (unsigned int  )0;
        sqlstm.sqadto[1] = (unsigned short )0;
        sqlstm.sqtdso[1] = (unsigned short )0;
        sqlstm.sqhstv[2] = (         void  *)&makedate;
        sqlstm.sqhstl[2] = (unsigned int  )17;
        sqlstm.sqhsts[2] = (         int  )0;
        sqlstm.sqindv[2] = (         void  *)0;
        sqlstm.sqinds[2] = (         int  )0;
        sqlstm.sqharm[2] = (unsigned int  )0;
        sqlstm.sqadto[2] = (unsigned short )0;
        sqlstm.sqtdso[2] = (unsigned short )0;
        sqlstm.sqhstv[3] = (         void  *)&selldate;
        sqlstm.sqhstl[3] = (unsigned int  )17;
        sqlstm.sqhsts[3] = (         int  )0;
        sqlstm.sqindv[3] = (         void  *)0;
        sqlstm.sqinds[3] = (         int  )0;
        sqlstm.sqharm[3] = (unsigned int  )0;
        sqlstm.sqadto[3] = (unsigned short )0;
        sqlstm.sqtdso[3] = (unsigned short )0;
        sqlstm.sqhstv[4] = (         void  *)&price;
        sqlstm.sqhstl[4] = (unsigned int  )12;
        sqlstm.sqhsts[4] = (         int  )0;
        sqlstm.sqindv[4] = (         void  *)0;
        sqlstm.sqinds[4] = (         int  )0;
        sqlstm.sqharm[4] = (unsigned int  )0;
        sqlstm.sqadto[4] = (unsigned short )0;
        sqlstm.sqtdso[4] = (unsigned short )0;
        sqlstm.sqhstv[5] = (         void  *)&amount;
        sqlstm.sqhstl[5] = (unsigned int  )12;
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
        if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}



	    id.arr[id.len] = '\0';
	    type.arr[type.len] = '\0';
	    makedate.arr[makedate.len] = '\0';
	    selldate.arr[selldate.len] = '\0';
	    price.arr[price.len] = '\0';
	    amount.arr[amount.len] = '\0';

	    gotoxy(x,y);
	printf(" |  %-4s  |  %-5s  |  %-8s  |  %-8s  | %-5s | %-4s |",
 id.arr, type.arr, makedate.arr, selldate.arr,price.arr,amount.arr);
	y++;
	count++;
	if( count == PAGE_NUM){
	   printf("\n                             hit any key\n");
	   count = 0;
	   getch();

           gotoxy(0,10);
           for(i= 0; i < PAGE_NUM; i++){
		printf("                                                                             \n");
	   }
	  
	   y = 10 ;
	}
	 chk2 = 1;
    }
    printf("                                      (END)\n");

	if(chk3 == 0){
	while(1){
	if(chk2 == 1){
	gotoxy(27,16);
	printf("삭제 하시겠습니까?(Y/N) ");
	fgets(yes_no2, 5, stdin); 
        yes_no2[strlen(yes_no2)-1] = '\0' ;  
        yes_no2[0] = (char)toupper(yes_no2[0]);
		
		if(yes_no2[0] == 'Y' && yes_no2[1] == '\0'){
		sprintf(dynstmt2,"delete from milk_storage where milk_id = '%s'",no_temp1);
   
  		 /* EXEC SQL EXECUTE IMMEDIATE :dynstmt2 ; */ 

{
     struct sqlexd sqlstm;
     sqlstm.sqlvsn = 13;
     sqlstm.arrsiz = 12;
     sqlstm.sqladtp = &sqladt;
     sqlstm.sqltdsp = &sqltds;
     sqlstm.stmt = "";
     sqlstm.iters = (unsigned int  )1;
     sqlstm.offset = (unsigned int  )2266;
     sqlstm.cud = sqlcud0;
     sqlstm.sqlest = (unsigned char  *)&sqlca;
     sqlstm.sqlety = (unsigned short)4352;
     sqlstm.occurs = (unsigned int  )0;
     sqlstm.sqhstv[0] = (         void  *)dynstmt2;
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
     if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}


			gotoxy(27,17);
			printf("                                      \n");
			gotoxy(27,17);
   			printf("Delete Success\n");
   		/* EXEC SQL COMMIT WORK ; */ 

{
     struct sqlexd sqlstm;
     sqlstm.sqlvsn = 13;
     sqlstm.arrsiz = 12;
     sqlstm.sqladtp = &sqladt;
     sqlstm.sqltdsp = &sqltds;
     sqlstm.iters = (unsigned int  )1;
     sqlstm.offset = (unsigned int  )2285;
     sqlstm.cud = sqlcud0;
     sqlstm.sqlest = (unsigned char  *)&sqlca;
     sqlstm.sqlety = (unsigned short)4352;
     sqlstm.occurs = (unsigned int  )0;
     sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
     if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}

 
		break;
		}
		else if(yes_no2[0] == 'N' && yes_no2[1] == '\0'){
		gotoxy(27,17);
	  	 printf("                                      \n");
			break;
		}else{
			gotoxy(27,16);
			printf("                                      \n");
			gotoxy(27,17);
			printf("값을 잘못 입력하셨습니다.");
			continue;
			}
	}
	if(chk2 == 0)
		break;
	}
}else if(strcmp(id2.arr,id.arr) == 0){
	gotoxy(27,17);
	printf("납품된 제품은 삭제할 수 없습니다.");
	chk3 = 0;
}
	
	//gotoxy(0,0);
    	
       
	

    /* EXEC SQL CLOSE c3_cursor; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 12;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )2300;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}

 
    /* EXEC SQL CLOSE c3_cursor2; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 12;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )2315;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}

 
   

}

void Milk_insert_tuple()
{
/* EXEC SQL BEGIN DECLARE SECTION; */ 

    /* varchar id[7]; */ 
struct { unsigned short len; unsigned char arr[7]; } id;

    /* varchar id2[7]; */ 
struct { unsigned short len; unsigned char arr[7]; } id2;

    /* varchar id3[7]; */ 
struct { unsigned short len; unsigned char arr[7]; } id3;

    /* varchar type[10]; */ 
struct { unsigned short len; unsigned char arr[10]; } type;

    /* varchar makedate[15]; */ 
struct { unsigned short len; unsigned char arr[15]; } makedate;

    /* varchar selldate[15]; */ 
struct { unsigned short len; unsigned char arr[15]; } selldate;

    /* varchar price[6]; */ 
struct { unsigned short len; unsigned char arr[6]; } price;

    /* varchar amount[5]; */ 
struct { unsigned short len; unsigned char arr[5]; } amount;


    char dynstmt3[1000];
    char dynstmt4[1000];
    char dynstmt5[1000];
/* EXEC SQL END DECLARE SECTION; */ 

    
   

   /* Register sql_error() as the error handler. */
    /* EXEC SQL WHENEVER SQLERROR DO sql_error("\7ORACLE ERROR:\n"); */ 


   clrscr();
   print_screen("insert_milk_view.txt");

   /* 데이터 입력 */
 while(1){
	gotoxy(27,5);
   printf("                ");
	gotoxy(27,5);
   gets(id.arr); 
   id.len = strlen(id.arr);
   id.arr[0] = (char)toupper(id.arr[0]);
	chk5 = 0;
	chk8 = 0;
 
   sprintf(dynstmt4,"select milk_id from deliver where milk_id = '%s'", id.arr);
   sprintf(dynstmt5,"select milk_id from milk_storage where milk_id = '%s'", id.arr);
	
   /* EXEC SQL PREPARE S18 FROM :dynstmt4 ; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 12;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )2330;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)dynstmt4;
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
   if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}


   /* EXEC SQL PREPARE S28 FROM :dynstmt5 ; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 12;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )2349;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)dynstmt5;
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
   if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}



   	/* cursor 선언 */
  	 /* EXEC SQL DECLARE c_cursor18 CURSOR FOR S18 ; */ 
 
	 /* EXEC SQL DECLARE c_cursor28 CURSOR FOR S28 ; */ 
 

   	/* cursor open */
   	/* EXEC SQL OPEN c_cursor18 ; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 12;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )2368;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.sqlpfmem = (unsigned int  )0;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqcmod = (unsigned int )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}

 
	/* EXEC SQL OPEN c_cursor28 ; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 13;
 sqlstm.arrsiz = 12;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )2383;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.sqlpfmem = (unsigned int  )0;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqcmod = (unsigned int )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
 if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}

 

  	 /* EXEC SQL WHENEVER NOT FOUND DO break; */ 


	for(;;)
        {
        /* EXEC SQL FETCH c_cursor18 INTO :id2; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 12;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )2398;
        sqlstm.selerr = (unsigned short)1;
        sqlstm.sqlpfmem = (unsigned int  )0;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqfoff = (           int )0;
        sqlstm.sqfmod = (unsigned int )2;
        sqlstm.sqhstv[0] = (         void  *)&id2;
        sqlstm.sqhstl[0] = (unsigned int  )9;
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
        if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}



	    id2.arr[id2.len] = '\0';
		chk5 = 1;
        }
	for(;;)
        {
        /* EXEC SQL FETCH c_cursor28 INTO :id3; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 12;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )2417;
        sqlstm.selerr = (unsigned short)1;
        sqlstm.sqlpfmem = (unsigned int  )0;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqfoff = (           int )0;
        sqlstm.sqfmod = (unsigned int )2;
        sqlstm.sqhstv[0] = (         void  *)&id3;
        sqlstm.sqhstl[0] = (unsigned int  )9;
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
        if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}



	    id3.arr[id3.len] = '\0';
		chk8 = 1;
        }
	/* EXEC SQL WHENEVER NOT FOUND CONTINUE; */ 

   
   if((chk5 == 0 && chk8 == 0 && id.arr[0] != '\0' && (id.arr[4] != '\0' && id.arr[5] == '\0')) ){
	gotoxy(27,15);
	printf("                                        \n");
        gotoxy(27,16);
	printf("                                        \n");
	break;
   
   }
   else if(chk5 == 1 || chk8 == 1){
	gotoxy(27,15);
	printf("                                        \n");
        gotoxy(27,16);
	printf("                                        \n");
	gotoxy(27,15);
	printf("납품 또는 재고에 있는 제품번호이므로\n");
        gotoxy(27,16);
	printf("이 제품번호를 등록할 수 없습니다.\n");
	}
   else{
   gotoxy(27,15);
   printf("                                        \n");
   gotoxy(27,16);
   printf("                                        \n");
   gotoxy(27,15);
   printf("ERROR : 제품번호를 올바르게 입력하세요.");
   gotoxy(27,16);
   printf("ex)W1111, C1111, S1111");
	}
   }
   /* EXEC SQL CLOSE c_cursor18; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 12;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )2436;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
   if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}


   /* EXEC SQL CLOSE c_cursor28; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 12;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )2451;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
   if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}


   
   while(1){
   gotoxy(55,5);
   printf("                ");
   gotoxy(55,5);
   gets(type.arr); 
   type.len = strlen(type.arr);
   for(int j = 0; j<strlen(type.arr); j++)
	type.arr[j] = (char)toupper(type.arr[j]);
   if((type.arr[4] != '\0' &&type.arr[5] == '\0') && (id.arr[0] == type.arr[0]) ){
        gotoxy(27,15);
	printf("                                        \n");
        gotoxy(27,16);
	printf("                                        \n");
	break;
   }else{
   gotoxy(27,15);
   printf("ERROR : 제품종류를 올바르게 입력하세요.");
   gotoxy(27,16);
   printf("ex)WHITE, CHOCO, STRAW");
   }
   }

   while(1){
   gotoxy(27,7);
   printf("                ");
   gotoxy(27,7);
   gets(makedate.arr); 
   makedate.len = strlen(makedate.arr);
   if((makedate.arr[4] == '-' && makedate.arr[7] == '-') && (makedate.arr[9] != '\0' && makedate.arr[10] == '\0') ){
        gotoxy(27,15);
	printf("                                        \n");
        gotoxy(27,16);
	printf("                                        \n");
	break;
   }else{
   gotoxy(27,15);
   printf("ERROR : 생산날짜를 올바르게 입력하세요.");
   gotoxy(27,16);
   printf("ex)2016-11-11");
   }
   }
   
   while(1){
   gotoxy(55,7);
   printf("                ");
   gotoxy(55,7);
   gets(selldate.arr); 
   selldate.len = strlen(selldate.arr);
   if((selldate.arr[4] == '-' && selldate.arr[7] == '-') && (selldate.arr[9] != '\0' && selldate.arr[10] == '\0') ){
	gotoxy(27,15);
	printf("                                        \n");
        gotoxy(27,16);
	printf("                                        \n");
	break;
   }else{
   gotoxy(27,15);
   printf("ERROR : 유통기한을 올바르게 입력하세요.");
   gotoxy(27,16);
   printf("ex)2016-11-18 (생산날짜 + 7일)");
   }
   }
   
   while(1){
   gotoxy(24,9);
   printf("                ");
   gotoxy(24,9);
   gets(price.arr); 
   price.len = strlen(price.arr);
   if((price.arr[0] == '1') && price.arr[3] != '\0' && (price.arr[4] == '\0') ){
	gotoxy(27,15);
	printf("                                        \n");
        gotoxy(27,16);
	printf("                                        \n");
	break;
   }else{
   gotoxy(27,15);
   printf("ERROR : 가격을 올바르게 입력하세요.");
   gotoxy(27,16);
   printf("ex)WHITE = 1000, CHOCO,STRAW = 1200");
   }
   }

   while(1){
   gotoxy(52,9);
   printf("                ");
   gotoxy(52,9);
   gets(amount.arr); 
   amount.len = strlen(amount.arr);
   if(amount.arr[0] == '1' || amount.arr[0] == '2' || amount.arr[0] == '3' || amount.arr[0] == '4' || amount.arr[0] == '5' || amount.arr[0] == '6' || amount.arr[0] == '7' || amount.arr[0] == '8' || amount.arr[0] == '9'){
	gotoxy(27,15);
	printf("                                        \n");
        gotoxy(27,16);
	printf("                                        \n");
	break;
   }else{
   gotoxy(27,15);
   printf("ERROR : 수량을 올바르게 입력하세요.");
   gotoxy(27,16);
   printf("ex)20");
   }
   }
    sprintf(dynstmt3,"insert into milk_storage values ('%s','%s',to_date('%s','YYYY-MM-DD'),to_date('%s','YYYY-MM-DD'),%s,%s)" ,id.arr,type.arr,makedate.arr,selldate.arr,price.arr,amount.arr);

   /* 실행시킬 SQL 문장*/
    /* EXEC SQL EXECUTE IMMEDIATE :dynstmt3 ; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 12;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )2466;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)dynstmt3;
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
    if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}


	gotoxy(27,16);
    printf("Insert Success\n");
    /* EXEC SQL COMMIT WORK ; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 12;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )2485;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}


    
    
}



void print_screen(char fname[])
{
	FILE *fp;
	char line[100];

	if ( (fp = fopen(fname,"r"))  == NULL ){
		printf("file open error\n");
		getch();
		exit(-1);
	}
	while(1)
	{
		if( fgets(line, 99, fp) == NULL){
		     break;
		}
		printf("%s", line);
	}

	fclose(fp);
}

void Del_update_tuple() //납품 항목 수정
{

  /* EXEC SQL BEGIN DECLARE SECTION; */ 


   /* varchar milk_num[10]; */ 
struct { unsigned short len; unsigned char arr[10]; } milk_num;

  
   char dynstmt[1000];
   char dynstmt2[1000];
   char dynstmt3[1000];
   char dynstmt4[1000];
   char dynstmt5[1000];
   char chk_del[1000];

/* EXEC SQL END DECLARE SECTION; */ 


   
    char  selldate[20]; //납품일자
    char     d_num[10]; //납품개수

 
 /* EXEC SQL WHENEVER SQLERROR DO sql_error("\7ORACLE ERROR:\n"); */ 

   /* 사용자 입력 */
    clrscr();

    print_screen("update_del_view.txt");

   while(1){
   gotoxy(27,7);
   printf("                ");
   gotoxy(27,7);
   gets(selldate); 
   //selldate.len = strlen(selldate.arr);
   if((selldate[4] == '-' &&selldate[7] == '-') && (selldate[9] != '\0' && selldate[10] == '\0')){
	gotoxy(27,15);
	printf("                                        \n");
        gotoxy(27,16);
	printf("                                        \n");
	break;
   }else if(selldate[0] == '\0'){
   strcpy(selldate,del_date);
   break;
   }
   else{
   gotoxy(27,15);
   printf("ERROR : 납품날짜를 올바르게 입력하세요.");
   gotoxy(27,16);
   printf("ex)2016-11-18");
   }
   }

   while(1){
   gotoxy(55,7);
   printf("                ");
   gotoxy(55,7);
   gets(d_num); 
   //d_num.len = strlen(d_num.arr);
   if(d_num[0]=='1' || d_num[0]=='2' || d_num[0]=='3' || d_num[0]=='4' || d_num[0]=='5' || d_num[0]=='6' || d_num[0]=='7' || d_num[0]=='8' || d_num[0]=='9'){
        gotoxy(27,15);
	printf("                                        \n");
        gotoxy(27,16);
	printf("                                        \n");
	break;
   }else if(d_num[0]=='\0'){
   strcpy(d_num,del_num);
   break;
   }
   else{
   gotoxy(27,15);
   printf("ERROR : 납품개수를 올바르게 입력하세요.");
   gotoxy(27,16);
   printf("ex)20");
   }
   }

	sprintf(dynstmt5,"select amount from milk_storage where milk_id = '%s'", milk_id);
	
   /* EXEC SQL PREPARE S23 FROM :dynstmt5 ; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 12;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )2500;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)dynstmt5;
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
   if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}



   	/* cursor 선언 */
  	 /* EXEC SQL DECLARE c_cursor23 CURSOR FOR S23 ; */ 
 

   	/* cursor open */
   	/* EXEC SQL OPEN c_cursor23 ; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 12;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )2519;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.sqlpfmem = (unsigned int  )0;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqcmod = (unsigned int )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}

 

  	 /* EXEC SQL WHENEVER NOT FOUND DO break; */ 


	for(;;)
        {
        /* EXEC SQL FETCH c_cursor23 INTO :milk_num; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 12;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )2534;
        sqlstm.selerr = (unsigned short)1;
        sqlstm.sqlpfmem = (unsigned int  )0;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqfoff = (           int )0;
        sqlstm.sqfmod = (unsigned int )2;
        sqlstm.sqhstv[0] = (         void  *)&milk_num;
        sqlstm.sqhstl[0] = (unsigned int  )12;
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
        if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}



	    milk_num.arr[milk_num.len] = '\0';
        }
	/* EXEC SQL WHENEVER NOT FOUND CONTINUE; */ 



	if(atoi(del_num)>atoi(d_num)){
 sprintf(dynstmt,"update milk_storage set amount = amount + ('%s'-'%s') where milk_id='%s'",del_num,d_num, milk_id);   
 sprintf(dynstmt2,"update deliver set deliver_date = to_date('%s','yyyy-mm-dd'),deliver_amount='%s' where deliver_id=%s",selldate,d_num,del_id);
 /* EXEC SQL EXECUTE IMMEDIATE :dynstmt ; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 13;
 sqlstm.arrsiz = 12;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )2553;
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
 if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}


 /* EXEC SQL EXECUTE IMMEDIATE :dynstmt2 ; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 13;
 sqlstm.arrsiz = 12;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )2572;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)dynstmt2;
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
 if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}


gotoxy(27,16);
   printf("Update Success\n");
   /* EXEC SQL COMMIT WORK ; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 12;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )2591;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
   if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}


	
	}
	else if(atoi(del_num)<atoi(d_num) && atoi(milk_num.arr)>=(atoi(d_num)-atoi(del_num))){
 sprintf(dynstmt3,"update milk_storage set amount = amount - ('%s'-'%s') where milk_id='%s'",d_num,del_num, milk_id);   
 sprintf(dynstmt4,"update deliver set deliver_date = to_date('%s','yyyy-mm-dd'),deliver_amount=%s where deliver_id=%s",selldate,d_num,del_id);
 /* EXEC SQL EXECUTE IMMEDIATE :dynstmt3 ; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 13;
 sqlstm.arrsiz = 12;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )2606;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)dynstmt3;
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
 if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}


 /* EXEC SQL EXECUTE IMMEDIATE :dynstmt4 ; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 13;
 sqlstm.arrsiz = 12;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )2625;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)dynstmt4;
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
 if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}


gotoxy(27,16);
   printf("Update Success\n");
   /* EXEC SQL COMMIT WORK ; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 12;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )2644;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
   if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}


	}
	else if(atoi(milk_num.arr)<(atoi(d_num)-atoi(del_num))){
	gotoxy(27,15);
  	 printf("ERROR : 재고 수량이 부족합니다.");
	}
	/* EXEC SQL CLOSE c_cursor23; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 13;
 sqlstm.arrsiz = 12;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )2659;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
 if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}

 
 
}

/* --------------------------------------------------------------------------
int sql_error()

   errrpt prints the ORACLE error msg and number.
-------------------------------------------------------------------------- */
void sql_error(char *msg)
{
    char err_msg[128];
    size_t buf_len, msg_len;

    /* EXEC SQL WHENEVER SQLERROR CONTINUE; */ 


    printf("\n%s\n", msg);
    buf_len = sizeof (err_msg);
    sqlglm(err_msg, &buf_len, &msg_len);
    printf("%.*s\n", msg_len, err_msg);

    getch();
    /* EXEC SQL ROLLBACK RELEASE; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 12;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )2674;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


    //exit(EXIT_FAILURE);
}
/*---------------  화면 커서 제어 함수 --------------------*/
#define STD_HANDLE GetStdHandle(STD_OUTPUT_HANDLE)

void gotoxy(int x, int y)
{
    COORD Cur= {(SHORT)x, (SHORT) y};

    SetConsoleCursorPosition(STD_HANDLE, Cur);
}

void getxy(int *x, int *y)
{
    CONSOLE_SCREEN_BUFFER_INFO Buf ;

    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &Buf);
    *x = (int)Buf.dwCursorPosition.X ;
    *y = (int)Buf.dwCursorPosition.Y ;
 
}

void clrscr(void)
{
    COORD Cur= {0, 0};
    unsigned long dwLen;

    FillConsoleOutputCharacter(STD_HANDLE, ' ', 80*25, Cur, &dwLen);
}

/*---------------------------------------------------------*/
