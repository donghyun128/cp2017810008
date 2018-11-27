#include <stdio.h>

//����ü(structure) : "�������" + ��� ���� "����"
//����ü ���� : ������ ������ Ÿ������ �����Ͽ� ���ο� ������ Ÿ���� �����Ѵ�.
	//struct complex {
	//	double real; // ��� ���� (member variable)
	//	double imag; // ���(ditto)
	//}; // ����ü ���� �������� �ݵ�� �����ݷ����� ������ �Ѵ�.
	//typedef struct complex Complex; //�ڷ��� 'struct complex'�� ������ Complex��� �θ��ڴ�.

	//���� �� ������ �� �������� ���� �� �ִ�.

	typedef struct complex {
		double real;
		double imag;
	} Complex; 

	//������ Ÿ���� ��Ī ����
	typedef int myintType;//�ڷ��� "int"�� ������ "myintType"��� �θ��ڴ�.

	//�Լ� printComplex()
	//�Է�: ���Ҽ�
	//���: ����
	//�μ�ȿ�� : ����
	
	void printComplex(Complex* ptr){
		printf("%f + j%f\n", ptr->real, ptr->imag);
	}

	//�Լ� : ConvertToConjugate()
	//�Է� : ���Ҽ� (������)
	//��� : ����
	//�μ�ȿ�� : �Էµ� ���Ҽ��� �ӷ� ���Ҽ��� ��ȯ��
	void ConvertToConjugate(Complex* ptr) {
		ptr->imag = -1 * ptr->imag;
	}

	//�Լ� : ReturnConjugate()
	//�Է� : ���Ҽ�(������)
	//��� : ���Ҽ� ����
	//�μ�ȿ�� : ����
		Complex ReturnConjugate(Complex* ptr) {
			Complex temp;
			temp.real = ptr->real; temp.imag = -1 * ptr->imag;
			return temp;
		}
	
 int main(){
 // ����ü ���� ����
	Complex a;
	a.real = 10; // ����ü������ ������� ���� ��� ==> ����ü�����̸�.��������̸�
	a.imag = 20;
	printf("%f + j%f\n", a.real, a.imag);
	



 // ����ü ������ ���� ����
	Complex* ptr;
	ptr = &a;
	ptr->real = 100; //����ü ������ ������ ������� ���ٹ�� ==> ����ü �����̸�->��������̸�
	ptr->imag = 200;
	
	printComplex(ptr); 
	ConvertToConjugate(&a); printComplex(&a);
	Complex b= ReturnConjugate(&a); printComplex(&b);
	ConvertToConjugate(&a); printComplex(&a);
	 

	return 0;
	// ��κ��� ��� ����ü�� ������ �� ������ ����ü�� Ȱ���Ѵ�.
}