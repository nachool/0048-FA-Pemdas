#include <iostream>
using namespace std;
class MasukUniversitas {
protected: // isi access modifier disini
	int uangPendaftaran;
	int uangSemesterPertama;
	int uangBangunan;
	int totalBiaya;
	// isi daftar variable yang dibutuhkan di bawah ini
public:
	MasukUniversitas() {
		uangPendaftaran = 0;
		uangSemesterPertama = 0;
		uangBangunan = 0;
		totalBiaya = 0;
		// isi nilai default variable yang dibutuhkan di bawah ini
	}
	virtual void namaJalurMasuk() { return; }
	virtual void hitungTotalBiaya() { return; }
	virtual void tampilkanTotalBiaya() { return; }
	virtual void input() { return; }
	// isi disini dengan fungsi virtual yang dibutuhkan
	void setUangPendaftaran(int nilai) {
		this->uangPendaftaran = nilai;
	}
	float getUangPendaftaran() {
		return uangPendaftaran;
	}

	void setUangSemesterPertama(int nilai) {
		this->uangSemesterPertama = nilai;
	}
	float setUangSemesterPertama() {
		return uangSemesterPertama;
	}

	void setUangBangunan(int nilai) {
		this->uangBangunan = nilai;
	}
	float getUangBangunan() {
		return uangBangunan;
	}

	void setTotalBiaya(int nilai) {
		this->totalBiaya = nilai;
	}
	float getTotalBiaya() {
		return totalBiaya;
	}

	// isi setter dan getter variable yang dibutuhkan di bawah ini
};
class SNBT : public MasukUniversitas {

	void input() override {
		cout << "Masukkan uang pendaftaran: ";
		cin >> uangPendaftaran;
		cout << "Masukkan uang semester pertama: ";
		cin >> uangSemesterPertama;
		cout << "Masukkan uang bangunan: ";
		cin >> uangBangunan;
	}

	void hitungTotalBiaya() override {
		totalBiaya = uangPendaftaran + uangSemesterPertama + uangBangunan;
	}

	void tampilkanTotalBiaya() override {
		cout << "Masukkan total biaya: " << totalBiaya << endl;
		if (totalBiaya > 10000000) {
			cout << "Kategori: Mahal";
			cout << "Rekomendasi: Tidak Direkomendasikan";
		}
		else if (totalBiaya > 5000000) {
			cout << "Kategori: Sedang";
			cout << "Rekomendasi: Dipertimbangkan";
		}
		else {
			cout << "Kategori: Murah";
			cout << "Rekomendasi: Dipertimbangkan";
		}
	}
};
class SNBP : public MasukUniversitas {
	// isi disini untuk melengkapi class SNBP
	void input() {
		cout << "Masukkan uang pendaftaran: " << endl;
		cin >> uangPendaftaran;
		cout << "Masukkan uang semester pertama: " << endl;
		cin >> uangSemesterPertama;
	}

	void hitungTotalBiaya() override {
		totalBiaya = uangPendaftaran + uangSemesterPertama;
	}

	void tampilkanTotalBiaya() override {
		cout << "Masukkan total biaya: " << totalBiaya << endl;
		if (totalBiaya > 10000000) {
			cout << "Kategori: Mahal" << endl;
			cout << "Rekomendasi: Tidak Direkomendasikan" << endl;
		}
		else if (totalBiaya > 5000000) {
			cout << "Kategori: Sedang" << endl;
			cout << "Rekomendasi: Dipertimbangkan" << endl;
		}
		else {
			cout << "Kategori: Murah" << endl;
			cout << "Rekomendasi: Dipertimbangkan" << endl;
		}
	}

};

int tampilkanMenu() {
	cout << "Pilih Menu: " << endl;
	cout << "1. SNBT" << endl;
	cout << "2. SNBP" << endl;
	cout << "3. Keluar" << endl;
	int pilihan;
	cout << "Masukkan pilihan anda: ";
	cin >> pilihan;
	return pilihan;
}

int main() {
	// isi disini untuk fungsi main
	int pilihan = tampilkanMenu();

	MasukUniversitas* MasukUniversitas = 0;
	MasukUniversitas = new SNBT();
	MasukUniversitas = new SNBP();


	MasukUniversitas->input();
	MasukUniversitas->namaJalurMasuk();
	MasukUniversitas->hitungTotalBiaya();
	MasukUniversitas->tampilkanTotalBiaya();

	return 0;
}

