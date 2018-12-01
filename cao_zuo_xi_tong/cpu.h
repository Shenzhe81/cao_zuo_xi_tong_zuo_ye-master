#include<stdio.h>
typedef struct _pro_count { //程序计数器
	int pcb_no; //pcb编号
	char *ir_index; //下一条指令位置
}pro_count;




class cpu {
public:
	
	int reg_1, reg_2, reg_3, reg_4; //四个寄存器
	int psw;//程序状态寄存器
	int time;//时间片寄存器
	char *ir;//指令寄存器
	//char *nir;
	pro_count pc;//程序计数器
	int dr; //数据寄存器 存放x
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
