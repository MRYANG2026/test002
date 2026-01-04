#include<iostream>
#include<sql.h>
#include<sqlext.h>
SQLHENV env;
SQLHDBC dbc;
SQLRETURN ret;

void sql_connect() {
    // 分配环境句柄
    ret = SQLAllocHandle(SQL_HANDLE_ENV, SQL_NULL_HANDLE, &env);
    if (ret != SQL_SUCCESS && ret != SQL_SUCCESS_WITH_INFO) {
        // 错误处理
    }

    // 设置ODBC版本
    ret = SQLSetEnvAttr(env, SQL_ATTR_ODBC_VERSION, (void*)SQL_OV_ODBC3, 0);
    if (ret != SQL_SUCCESS && ret != SQL_SUCCESS_WITH_INFO) {
        // 错误处理
    }

    // 分配连接句柄
    ret = SQLAllocHandle(SQL_HANDLE_DBC, env, &dbc);
    if (ret != SQL_SUCCESS && ret != SQL_SUCCESS_WITH_INFO) {
        // 错误处理
    }

    // 连接数据库
    ret = SQLConnect(dbc, (SQLCHAR*)u8"MySQL-DSN", SQL_NTS,
        (SQLCHAR*)u8"", SQL_NTS,
        (SQLCHAR*)u8"", SQL_NTS);
    if (ret != SQL_SUCCESS && ret != SQL_SUCCESS_WITH_INFO) {
        // 错误处理
    }

    // 后续执行SQL语句...

    // 释放资源
    SQLDisconnect(dbc);
    SQLFreeHandle(SQL_HANDLE_DBC, dbc);
    SQLFreeHandle(SQL_HANDLE_ENV, env);


}