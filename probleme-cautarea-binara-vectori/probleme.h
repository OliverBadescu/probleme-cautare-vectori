#include <iostream>
using namespace std;

void afisare(int v[], int dim) {

	for (int i = 0; i < dim; i++) {
		cout << v[i] << " ";
	}

}

void sortareSelectie(int v[], int dim) {
	for (int i = 0; i < dim - 1; i++) {
		for (int j = i + 1; j < dim; j++) {
			if (v[i] > v[j]) {
				int aux = v[i];
				v[i] = v[j];
				v[j] = aux;
			}
		}
	}
}

void bubbleSort(int v[], int dim) {



	bool sortat = false;

	do {

		sortat = true;

		for (int i = 0; i < dim - 1; i++) {

			if (v[i] > v[i + 1]) {
				int aux = v[i];
				v[i] = v[i + 1];
				v[i + 1] = aux;

				sortat = false;
			}

		}

	} while (sortat == false);
}

bool cautareaBinara(int v[], int dim, int key) {


	bubbleSort(v, dim);
	int a = 0;
	int b = dim;


	while (a <= b) {

		int mj = (a + b) / 2;

		if (v[mj] == key) {

			return true;
		}

		if (v[mj] > key) {

			b = mj - 1;
		}
		else {

			a = mj + 1;
		}
	}

	return false;
}

int indiceMax(int v[], int dim) {

	int max = INT_MIN;
	int imax = INT_MIN;

	for (int i = 0; i < dim; i++) {

		if (v[i] > max) {
			max = v[i];
			imax = i;
		}

	}
	return imax;
}

int indiceMin(int v[], int dim) {

	int min = INT_MAX;
	int imin = INT_MAX;

	for (int i = 0; i < dim; i++) {

		if (v[i] < min) {
			min = v[i];
			imin = i;
		}

	}

	imin++;
	return imin;
}

void primaJumatateBubble(int v[], int dim) {

	int jumatate = dim / 2;

	int sortat = false;

	do {

		sortat = true;

		for (int i = 0; i < jumatate - 1; i++) {
			if (v[i] > v[i + 1]) {
				int aux = v[i];
				v[i] = v[i + 1];
				v[i + 1] = aux;

				sortat = false;
			}
		}
	} while (sortat == false);

}

void douaJumatateBubble(int v[], int dim) {

	int jumatate = dim / 2;

	int sortat = false;

	do {

		sortat = true;

		for (int i = jumatate; i < dim - 1; i++) {
			if (v[i] > v[i + 1]) {
				int aux = v[i];
				v[i] = v[i + 1];
				v[i + 1] = aux;

				sortat = false;
			}
		}
	} while (sortat == false);

}

void douaJumatateSelectie(int v[], int dim) {

	int jumatate = dim / 2;

	for (int i = jumatate; i < dim - 1; i++) {

		for (int j = i + 1; j < dim; j++) {
			if (v[i] < v[j]) {
				int aux = v[i];
				v[i] = v[j];
				v[j] = aux;
			}
		}
	}

}

void cautareaBinaraPrima(int v[], int dim, int key) {


	primaJumatateBubble(v, dim);
	int a = 0;
	int b = dim / 2;


	while (a <= b) {

		int mj = (a + b) / 2;

		if (v[mj] == key) {

			cout << mj;
		}

		if (v[mj] > key) {

			b = mj - 1;
		}
		else {

			a = mj + 1;
		}
	}


}

bool cautareaBinaraDoi(int v[], int dim, int key) {


	douaJumatateBubble(v, dim);
	int a = dim/2;
	int b = dim;


	while (a <= b) {

		int mj = (a + b) / 2;

		if (v[mj] == key) {

			return true;
		}

		if (v[mj] > key) {

			b = mj - 1;
		}
		else {

			a = mj + 1;
		}
	}

	return false;
}

int pozitieControl(int v[], int dim) {

	int pozitie = 0;

	for (int i = 0; i < dim; i++) {

		if (i == 3) {
			pozitie = i;
		}

	}
	return pozitie;

}

int cifraControl(int n) {

	while (n > 9)
	{
		int s = 0;
		while (n > 0)
		{
			s += n % 10;
			n /= 10;
		}
		n = s;
	}
	return n;
}

void sortareIntervalMinMax(int v[], int dim) {

	int min = indiceMin(v, dim);
	int max = indiceMax(v, dim);

	int sortat = false;

	do {

		sortat = true;

		for (int i = min; i < max - 1; i++) {
			if (v[i] > v[i + 1]) {
				int aux = v[i];
				v[i] = v[i + 1];
				v[i + 1] = aux;

				sortat = false;
			}
		}
	} while (sortat == false);


}

bool cautareaBinaraMinMax(int v[], int dim, int key) {


	sortareIntervalMinMax(v, dim);
	int min = indiceMin(v, dim);
	int max = indiceMax(v, dim);
	int a = min;
	int b = max;


	while (a <= b) {

		int mj = (a + b) / 2;

		if (v[mj] == key) {

			return true;
		}

		if (v[mj] > key) {

			b = mj - 1;
		}
		else {

			a = mj + 1;
		}
	}

	return false;
}

int nrDivizori(int nr) {

	int ct = 0;

	for (int i = 1; i <= nr; i++) {
		if (nr % i == 0) {
			ct++;
		}
	}
	return ct;
}

bool isNrPrim(int nr) {

	if (nrDivizori(nr) == 2) {
		return true;
	}
	else {
		return false;
	}

}

int celMaiMicNrPrim(int v[], int dim) {

	int min = INT_MAX;

	for (int i = 0; i < dim; i++) {

		if (v[i] < min) {
			if (isNrPrim(v[i]) == true) {
				min = v[i];
			}
		}

	}
	return min;
}

void sortareIntervalMin(int v[], int dim) {

	int min = indiceMin(v, dim);

	int sortat = false;

	do {

		sortat = true;

		for (int i = 0; i < min - 1; i++) {
			if (v[i] < v[i + 1]) {
				int aux = v[i];
				v[i] = v[i + 1];
				v[i + 1] = aux;

				sortat = false;
			}
		}
	} while (sortat == false);


}

void sortareIntervalMax(int v[], int dim) {

	int max = indiceMax(v, dim);

	int sortat = false;

	do {

		sortat = true;

		for (int i = max; i < dim - 1; i++) {
			if (v[i] < v[i + 1]) {
				int aux = v[i];
				v[i] = v[i + 1];
				v[i + 1] = aux;

				sortat = false;
			}
		}
	} while (sortat == false);

}

bool cautareaBinaraMin(int v[], int dim, int key) {


	sortareIntervalMinMax(v, dim);
	int min = indiceMin(v, dim);
	int max = indiceMax(v, dim);
	int a = 0;
	int b = min;


	while (a <= b) {

		int mj = (a + b) / 2;

		if (v[mj] == key) {

			return true;
		}

		if (v[mj] > key) {

			b = mj - 1;
		}
		else {

			a = mj + 1;
		}
	}

	return false;
}

bool cautareaBinaraMax(int v[], int dim, int key) {


	sortareIntervalMinMax(v, dim);

	int min = indiceMin(v, dim);
	int max = indiceMax(v, dim);
	int a = max;
	int b = dim;


	while (a <= b) {

		int mj = (a + b) / 2;

		if (v[mj] == key) {

			return true;
		}

		if (v[mj] > key) {

			b = mj - 1;
		}
		else {

			a = mj + 1;
		}
	}

	return false;
}