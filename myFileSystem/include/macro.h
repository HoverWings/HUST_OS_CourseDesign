//
// Created by wings on 9/3/18.
//

#ifndef MYFS_MACRO_H
#define MYFS_MACRO_H

#include <fstream>

//#include ""
#include "stdint.h"
using namespace std;
#define SEC_SIZE 512    // 扇区大小
#define INODE_NUM 1024    // inode数量
#define BLOCK_NUM 1024  // 数据扇区数量

//fstream disk_file;
#define DISK  "disk.img"  // 模拟磁盘
#define SUPER_BEGIN 0
#define INODE_BEGIN SEC_SIZE*10
#define BLOCK_BEGIN INODE_BEGIN+SEC_SIZE*BLOCK_NUM
#define MAX_SEC  ((BLOCK_BEGIN + BLOCK_NUM * SEC_SIZE) / SEC_SIZE )

static int inode_total=0;

#endif //MYFS_MACRO_H
