#include<stdio.h>
#include<windows.h>
#include<sql.h>
#include<sqlext.h>
#include<sqltypes.h>

void query_all()
{
	SQLRETURN ret;
	SQLHENV henv;
	SQLHDBC hdbc;
	SQLHSTMT hstmt;

	ret = SQLAllocHandle(SQL_HANDLE_ENV, NULL, &henv); //申请环境
	ret = SQLSetEnvAttr(henv, SQL_ATTR_ODBC_VERSION, (SQLPOINTER)SQL_OV_ODBC3, SQL_IS_INTEGER);
	ret = SQLAllocHandle(SQL_HANDLE_DBC, henv, &hdbc);//申请连接数据库

	ret = SQLConnect(hdbc, (SQLCHAR*)"数据", SQL_NTS, (SQLCHAR*)"root", SQL_NTS, (SQLCHAR*)"******", SQL_NTS);


	if (!(ret == SQL_SUCCESS || ret == SQL_SUCCESS_WITH_INFO))
	{
		printf("error:连接失败!");
	}

	ret = SQLAllocHandle(SQL_HANDLE_STMT, hdbc, &hstmt);

	SQLCHAR sql1[] = "use [2024春]"; //SQL语句选择数据库，我的数据库名字是[2024春]
	SQLCHAR sql2[] = "select * from test"; //SQL语句执行最简单的查询，test是表名
	ret = SQLExecDirect(hstmt, sql1, SQL_NTS);
	ret = SQLExecDirect(hstmt, sql2, SQL_NTS);
	/*C语言操作数据库其实就是用C语言的函数，在其中嵌套SQL语句*/

	if (!(ret == SQL_SUCCESS || ret == SQL_SUCCESS_WITH_INFO))
		printf("error:调用错误
			");
			if (ret == SQL_SUCCESS || ret == SQL_SUCCESS_WITH_INFO)
			{
				printf("学号		姓名	楼栋号	寝室号	是否回寝
					");
					SQLCHAR str1[50], str2[50], str3[50], str4[50], str5[50], str6[50];
				SQLLEN len_str1, len_str2, len_str3, len_str4, len_str5, len_str6;
				while (SQLFetch(hstmt) != SQL_NO_DATA)
				{
					SQLGetData(hstmt, 1, SQL_C_CHAR, str1, 50, &len_str1);   //获取第一列数据
					SQLGetData(hstmt, 2, SQL_C_CHAR, str2, 50, &len_str2);
					SQLGetData(hstmt, 3, SQL_C_CHAR, str3, 50, &len_str3);
					SQLGetData(hstmt, 4, SQL_C_CHAR, str4, 50, &len_str4);
					SQLGetData(hstmt, 5, SQL_C_CHAR, str5, 50, &len_str5);
					/*这里总共你建立表用了几列，你就用几次，比如我的表有(学号，姓名，楼栋号，寝室号，是否回寝)
					总共5列，所以用了5次*/
					printf("%s	%s	%s	%s	%s
						", str1, str2, str3, str4, str5);
				}
			}

	SQLFreeHandle(SQL_HANDLE_DBC, hdbc);//释放连接
	SQLFreeHandle(SQL_HANDLE_ENV, henv);//释放环境
}

int main()
{
	query_all();
}