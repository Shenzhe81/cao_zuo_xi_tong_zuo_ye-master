#include"cpu.h"
#include<iostream>
#include<string>
#include<stdio.h>
#include<string.h>

using namespace std;

cpu::cpu()
{
	if (JudgeState() == true)
	{

	}
}
int cpu::GetTime()
{
	return time;
}
int cpu::GetPsw()
{
	return psw;
}
char* cpu::GetIr()
{
	return ir;
}
void cpu::SetInterrupt(int p)//�����ж�
{
	psw = p;
}
bool cpu::JudgeState()//�ж��Ƿ�����ж�
{
	if (psw == 1 && psw ==2 && psw == 4)
	{
		return true;
    }
	else
	{
		return false;
	}

}
void cpu::SaveState()//���浱ǰ״̬
{
	int ndr, npsw;
	pro_count np;
	char *nir;
	nir = new char[4];
	strcpy(nir,ir);
	ndr = dr;
	npsw = psw;
	np = pc;
}
void cpu::DealInterrupt()//�����ж�
{}
void cpu::DisposeIR()//cpu����ָ��
{
	string str;
	str = ir;
	if (str.compare("x++;") == 1)
	{
		dr++;
		pc.pcb_no++;
	}
	else if (str.compare("x--;") == 1)
	{
		dr--;
		pc.pcb_no++;
	}
	else if (str.compare("x=1;") == 1)
	{
		dr = 1;
		pc.pcb_no++;
	}
	else if (str.compare("end;") == 1)
	{
		
	}
	else if (str.compare("!=A9;") == 1)
	{
		
	}



}