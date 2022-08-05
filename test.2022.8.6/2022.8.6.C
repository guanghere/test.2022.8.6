
#include <stdio.h>
//int sum(int a){
//
//    int c = 0;
//    static int b = 3;
//    c += 1;
//    b += 2;
//    return (a + b + c);
//}
//int main(){
//
//    int i;
//    int a = 2;
//
//    for (i = 0; i < 5; i++){
//        printf("%d,", sum(a));
//    }
//}
// 8,   10,   12,   14,   16,
//a=2   a=2   a=2   a=2   a=2
//c=1   c=1   c=1   c=1   c=1
//b=5   b=7   b=9   b=11  b=13


//int main() {
//
//	int a = 10;
//	// &  给出该变量的地址
//	int* pa = &a;
//	//	int :pa指向的对象是int类型
//	//	 *  :说明pa是指针
//	//	pa  :被成为指针变量
//
//	*pa = 20;//解引用操作符,通过地址找到需要的数据
//	//通过pa的地址找到了a
//	// * :给出储存在指针指向地址上的空间
//
//	printf("%d\n", a);
//	//最终结果是把22赋给pa
//
//	return 0;
//}

//总结 :
//		每个内存会被划分成一个内存单元（1字节）且都有相对应的编号（地址/指针）
//		可以存放在变量中，被称为指针变量
//		通过指针变量中的地址，可以找到对应的空间
//		指针变量是用来存放地址的一种变量
//		在指针变量中什么都可以作为地址



int main() {
	int a = 0;
	char b = 'b';
	short c = 0;
	float d = 0;
	double e = 0;
	long f = 0;
	
	int* pa =&a;
	char* pb = &b;
	short* pc = &c;
	float* pd = &d;
	double* pe = &e;
	long* pf = &f;

	printf("%d\n", sizeof(pa));
	printf("%d\n", sizeof(pb));
	printf("%d\n", sizeof(pc));
	printf("%d\n", sizeof(pd));
	printf("%d\n", sizeof(pe));
	printf("%d\n", sizeof(pf));

	return 0;
}