#include<stdio.h>
typedef struct _pro_count { //���������
	int pcb_no; //pcb���
	char *ir_index; //��һ��ָ��λ��
}pro_count;




class cpu {
public:
	
	int reg_1, reg_2, reg_3, reg_4; //�ĸ��Ĵ���
	int psw;//����״̬�Ĵ���
	int time;//ʱ��Ƭ�Ĵ���
	char *ir;//ָ��Ĵ���
	//char *nir;
	pro_count pc;//���������
	int dr; //���ݼĴ��� ���x
	cpu();
	int GetTime();
	int GetPsw();
	char* GetIr();
	void SetTime(int t);
	void SetPsw(int p);
	void SetIr(char a[],int n);
	void DisposeIR();
	bool JudgeState();
	void SetInterrupt(int p);
	void DealInterrupt();
	void SaveState();
	
};
