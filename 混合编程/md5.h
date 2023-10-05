#ifndef __MD5_H__
#define __MD5_H__

#ifdef __cplusplus // 判断是否是c++编译器  是的话就用下面这个
extern "C"         // 用来声明以下代码儿用c语言方法编译
{
#endif
    void md5_data(const void *data, unsigned int size, char *result);
    void md5_file(const char *file_name, char *result);

#ifdef __cplusplus
}
#endif

#endif
