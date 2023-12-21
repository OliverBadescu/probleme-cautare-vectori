#include "probleme.h"

// 1) todo: Sa se sorteze prima jumatate a vectorului crescator iar a doua jumatate dewscrescator. Sa se caute in interiorul primei jumatati, pozitiile pe care apare minimul.
// Sa se caute in interiorul celei de a doua jumatati, pozitiile pe care apare maximul ??

void sol1() {

	int v[] = { 42, 1, 31, 412, 21, 52, 82, 13, 821 };
	int dim = 9;
	int min = indiceMin(v, dim);
	int max = indiceMax(v, dim);

	cout << "Pozitia pe care se afla minimul este: ";

	cautareaBinaraPrima(v, dim, min);

	cout << ";" << endl;

	cout << "Pozitia pe care se afla maximul este: ";

	cautareaBinaraDoi(v, dim, max);

	cout << ";" << endl;
}


// 2) todo: Sa se verifice daca cifra de control a primului element apare in interiorul celei de a doua doua jumatati a vectorului

void sol2() {

	int v[] = { 42, 1, 31, 412, 21, 52, 82, 61, 821 };
	int dim = 9;

	int cifC = cifraControl(42);

	if (cautareaBinaraDoi(v, dim, cifC) == true) {
		cout << "Cifra de control a primului element apare in a doua jumatate a vectorlui"<<endl;
	}
	else {
		cout << "Cifra de control nu apare in a doua jumatate a vectorlui"<<endl;
	}

}


// 3) todo: Sa se verifice daca fiecare element din a doua jumatate apare cel putin de doua ori in interiorul primei jumatati a vectorului ???

void sol3() {

	int v[] = { 42, 1, 31, 412, 21, 52, 82, 61, 821 };
	int dim = 9;

}


// 4) todo: Sa se sorteze vectorul crescator intre [pmin, pmax] daca elementul minim este anterior celui maxim si [pmax, pmin] daca elemenetul maxim este anterior celui de minim.

void sol4() {

	int v[] = { 42, 1, 31, 412, 21, 52, 82, 61, 821 };
	int dim = 9;

	cout << " Vectorul inainte de sortare este V={ ";
	afisare(v, dim);
	cout << "}" << endl;

	cout << " Vectorul dupa sortare este V={ ";
	sortareIntervalMinMax(v, dim);
	afisare(v, dim);
	cout << "}" << endl;

}


// 5) todo: Sa se verifice daca elementul k apare in intervalul [pmin, pmax]. Sa se afiseze un mesaj corespunzator 

void sol5() {

	int v[] = { 42, 1, 31, 412, 21, 52, 82, 61, 821 };
	int dim = 9;
	int k = 21;

	if (cautareaBinaraMinMax(v, dim, k) == true) {
		cout << k << " apare in intervalul [pmin, pmax]" <<endl;
	}
	else {
		cout << k << " nu apare in intervalul [pmin, pmax]" << endl;
	}

}


// 6) todo: Sa se verfice daca cel mai mic numar prim apartine intervaului [pmin, pmax]. Sa se afiseze un mesaj corespunzator 

void sol6() {

	int v[] = { 42, 1, 31, 412, 21, 52, 82, 61, 821 };
	int dim = 9;
	int prim = celMaiMicNrPrim(v, dim);

	if (cautareaBinaraMinMax(v, dim, prim) == true) {
		cout << prim << " apare in intervalul [pmin, pmax]" << endl;
	}
	else {
		cout << prim << " nu apare in intervalul [pmin, pmax]" << endl;
	}

}


// 7) todo: Sa se verifice daca elementul k apare in afara intervalului [pmin,pmax]


void sol7() {

	int v[] = { 42, 1, 31, 412, 21, 52, 82, 61, 821, 52, 72 };
	int dim = 11;
	int kk = 72;

	if (cautareaBinaraMin(v, dim, kk) == true || cautareaBinaraMax(v, dim, kk) == true) {
		cout << kk << " se afla in afara intervalului [pmin, pmax]" << endl;
	}
	else {
		cout << kk << " nu se afla in afara intervalului [pmin, pmax]" << endl;
	}

}


// algoritm interclasare  ????????


void algoritmInterclasare(int a[], int b[], int c[], int n,int m){}

