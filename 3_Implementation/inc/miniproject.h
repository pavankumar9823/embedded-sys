/**
 * @file miniproject.h
 * @author Pavan Kumar H
 * @brief 
 * @version 0.1
 * @date 2021-07-14
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __MINIPROJECT_H__
#define __MINIPROJECT_H__
#include<stdio.h>
void PurchaseMedicine(int number);
void EnterInfoAboutMedicine(int number);
void StockOfMedicine(int number);
void KnowInfoAboutMedicine(int number);
void AddMedicineinStore(int number,struct Medicine m[]);
void DeleteMedicineStore(int number);
void ChangeMedicineDetails(int number);
struct Medicine{
   int id,price,quantity;
   char medicneName[100],Company[100],Mfg_Date[11],Exp_Date[11],info[5000];
  }m[100];
int i,j,choice,number=0,c;
#endif