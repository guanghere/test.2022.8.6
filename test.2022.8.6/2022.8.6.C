
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
//	// &  �����ñ����ĵ�ַ
//	int* pa = &a;
//	//	int :paָ��Ķ�����int����
//	//	 *  :˵��pa��ָ��
//	//	pa  :����Ϊָ�����
//
//	*pa = 20;//�����ò�����,ͨ����ַ�ҵ���Ҫ������
//	//ͨ��pa�ĵ�ַ�ҵ���a
//	// * :����������ָ��ָ���ַ�ϵĿռ�
//
//	printf("%d\n", a);
//	//���ս���ǰ�22����pa
//
//	return 0;
//}

//�ܽ� :
//		ÿ���ڴ�ᱻ���ֳ�һ���ڴ浥Ԫ��1�ֽڣ��Ҷ������Ӧ�ı�ţ���ַ/ָ�룩
//		���Դ���ڱ����У�����Ϊָ�����
//		ͨ��ָ������еĵ�ַ�������ҵ���Ӧ�Ŀռ�
//		ָ�������������ŵ�ַ��һ�ֱ���
//		��ָ�������ʲô��������Ϊ��ַ



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