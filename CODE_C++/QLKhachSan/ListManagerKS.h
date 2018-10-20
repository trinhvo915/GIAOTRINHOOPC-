#pragma once
#include "PhongKS.h"
#include<iostream>
#include<string>;
#include "Date.h"
using namespace std;
class ListManagerKS
{
	int n;
	PhongKS *listP;
	public:
		ListManagerKS();
		ListManagerKS(int);
		ListManagerKS(const ListManagerKS &);
		~ListManagerKS();
		PhongKS &operator [](const int);
		//friend istream &operator >> (istream &in, ListManagerKS &p);
		void InputList();
		void ShowListKS();
		void AddHeadPhongKS(PhongKS &p);
		void AddTailPhongKS(PhongKS &p);
		void AddPhongKS(PhongKS &p, int k);
		void Update(string maP);
		void DeleteHeadPhongKS();
		void DeleteTailPhongKS();
		void DeletePhongKS(int k);
		PhongKS *BinarySearchPhongKS(string);
		void MergeSortPhongKS(int l, int r, bool (*function)(double, double));
		void merge( int l, int m, int r, bool (*function)(double, double));
		//===========================//
		void setN(int n);
		int getN();
		void setListP(PhongKS *listP);
		PhongKS * getListP();
		
};

