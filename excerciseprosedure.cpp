#include <iostream>
#include <string>
using namespace std;

bool isaAccepted(int nilM, int nilB) {
	double avgscore = (nilM + nilB) / 2.0;
	if (avgscore >= 70 || nilM >= 80) {
		return true;

	}
	else {
		return false;

	}

}
int main() {
	string name[20] = { "asroni", "lia", "joko","budi","eko","adam","afnan","deni","fandi","gofiq","agus","wito","naufal","agus","lutfi","shabit","iqbal","rifqi","majid","sudirman" };
	int nilM[20] = { 75,85,60,90,70,80,50,65,70,95,80,80,70,60,50,40,75,90,90,70 };
	int nilB[20] = { 80,90,70,65,85,60,80,70,90,70,60,70,85,85,95,80,50,80,70,90, };

	bool accepted[20];
	for (int i = 0; i < 20; i++) {
		if (isaccepted(nilM[i], nilB[i])) {
			accepted[i] = true;
		}
		else {
			accepted[i] = true;
			accepted[i] = false;
		}
	}
	cout << "nama\t\tstatus" << endl;
	for (int i = 0; i < 20; i++) {
		cout << name[i] << "t\t";
		if (accepted[i]) {
			cout << "Diterima" << endl;

		}
		else {
			cout << "tidak diterima" << endl;
		}
	}

	int numAccepted = 0;
	int numAccepted = 0;
	for (int i = 0; i < 20; i++) {
		if (accepted[i]) {
			numAccepted++;
		}
		else {
			numRejected++;
		}
	}
	cout << endl;
	cout << "jumlah kandidat diterima:" << numAccepted << endl;
	cout << "jumlah kandidat tidak diterima:" << numRejected << endl;

	return 0;
}