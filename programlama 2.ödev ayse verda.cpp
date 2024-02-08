/****************************************************************************
**					SAKARYA �N�VERS�TES�
**			         B�LG�SAYAR VE B�L���M B�L�MLER� FAK�LTES�
**				    B�LG�SAYAR M�HEND�SL��� B�L�M�
**				          PROGRAMLAMAYA G�R��� DERS�
**
**				�DEV NUMARASI�...: 2
**				��RENC� ADI...............: Ay�e Verda G�lcemal
**				��RENC� NUMARASI.: g221210038
**				DERS GRUBU����: �kinci ��retim A
****************************************************************************/


#include <iostream>
#include <cmath>
using namespace std;

class karmasik                                                     // karma��k say�lar i�in bir s�n�f olu�turduk
{
public:
	float gercel;
	float sanal;
	void cikti()                                      // karma��k say�y� yazd�rmak i�in olu�turulan fonksiyon
	{
		cout << "gercel kismi giriniz";
		cin >> gercel;
		cout << "sanal kismi giriniz:";
		cin >> sanal;
	}
	karmasik operator+(karmasik a)                    // operat�r� a��r� y�kleme fonksiyonu ile toplama fonksiyonu
	{
		karmasik toplam;
		toplam.gercel = gercel + a.gercel;
		toplam.sanal = sanal + a.sanal;
		return toplam;
	}
	void ciktitoplam()                                
	{
		if (sanal > 0)
			cout << "toplam:" << gercel << "+" << sanal << "i";
		else
			cout << "toplam:" << gercel << "-" << sanal << "i";
	}

	karmasik operator-(karmasik a)                  // operat�r� a��r� y�kleme ile ��karma fonksiyonu 
	{
		karmasik fark;
		fark.gercel = gercel - a.gercel;
		fark.sanal = sanal - a.sanal;
		return fark;
	}
	void ciktifark()
	{
		if (sanal > 0)
			cout << "fark:" << gercel << "+" << sanal << "i";
		else
			cout << "fark:" << gercel << "-" << sanal << "i";
	}

	karmasik operator*(karmasik a)                                 // operat�r� a��r� y�kleme ile �arpma fonksiyonu
	{
		karmasik carpim;
		carpim.gercel = gercel * a.gercel - sanal * a.sanal;
		carpim.sanal = gercel * a.sanal + sanal * a.gercel;
		return carpim;
	}
	void cikticarpim()
	{
		if (sanal > 0)
			cout << "carpim" << gercel << "+" << sanal << "i";
		else
			cout << "carpim" << gercel << "-" << sanal << "i";
	}
	
	karmasik operator/(karmasik a)                                 // operat�r� a��r� y�kleme ile b�lme fonksiyonu
	{
		karmasik bolum;
		bolum.gercel = (gercel * a.gercel + sanal * a.sanal) / (a.gercel * a.gercel + a.gercel * a.gercel);
		bolum.sanal = (sanal * a.gercel - gercel * a.sanal) / (a.gercel * a.gercel + a.sanal + a.sanal * a.sanal);
		return bolum;
	}
	void ciktibolme()
	{
		if (sanal > 0)
			cout << "bolum" << gercel << "+" << sanal << "i";
		else
			cout << "bolum" << gercel << "-" << sanal << "i";
	}
	karmasik operator+=(karmasik a)                            // yeni say� atamak i�in kullan�lan operat�r� a��r� y�kleme fonksiyonlar�
	{
		karmasik artiesittir;
		artiesittir.gercel = gercel + a.gercel;
		artiesittir.sanal = sanal + a.sanal;
		return artiesittir;
	}
	void ciktiartiesittir()
	{
		if (sanal > 0)
			cout << "yeni sayiniz:" << gercel << "+" << sanal << "i";
		else
			cout << "yeni sayiniz:" << gercel << "-" << sanal << "i";
	}
	karmasik operator-=(karmasik a)
	{
		karmasik eksiesittir;
		eksiesittir.gercel = gercel - a.gercel;
		eksiesittir.sanal = sanal - a.sanal;
		return eksiesittir;
	}
	void ciktieksiesittir()
	{
		if (sanal > 0)
			cout << "yeni sayiniz:" << gercel << "+" << sanal << "i";
		else
			cout << "yeni sayiniz:" << gercel << "-" << sanal << "i";
	}
	karmasik operator*=(karmasik a)
	{
		karmasik carpesit;
		carpesit.gercel = gercel * a.gercel - sanal * a.sanal;
		carpesit.sanal = gercel * a.sanal + sanal * a.gercel;
		return carpesit;
	}
	void cikticarpesit()
	{
		if (sanal > 0)
			cout << "yeni sayiniz:" << gercel << "+" << sanal << "i";
		else
			cout << "yeni sayiniz:" << gercel << "-" << sanal << "i";
	}
	karmasik operator/=(karmasik a)
	{
		karmasik bolesit;
		bolesit.gercel = (gercel * a.gercel + sanal * a.sanal) / (a.gercel * a.gercel + a.gercel * a.gercel);
		bolesit.sanal = (sanal * a.gercel - gercel * a.sanal) / (a.gercel * a.gercel + a.sanal + a.sanal * a.sanal);
		return bolesit;
	}
	void ciktibolesit()
	{
		if (sanal > 0)
			cout << "yeni sayiniz:" << gercel << "+" << sanal << "i";
		else
			cout << "yeni sayiniz:" << gercel << "-" << sanal << "i";
	}
};

int main() {
	karmasik sayi1, sayi2, sonuc;
	cout << "ilk karmasik sayiyi gir:" << endl;                       // ilk karmasik sayiyi olusturma
	sayi1.cikti();

	cout << "ikinci karmasik sayiyi gir:" << endl;                    // ikinci karmasik sayiyi olusturma
	sayi2.cikti();

	cout << "MENU:" << endl;                                         // kullan�c�n�n yapt�rmak istedigi islemi secebilemesi icin menu sistemi
	cout << "1.toplama islemi" << endl;
	cout << "2.cikarma islemi" << endl;
	cout << "3.carpma islemi" << endl;
	cout << "4.bolme islemi" << endl;
	cout << "5.kutupsal gosterim" << endl;
	cout << "6.+= islemi sonucu yeni sayi atama" << endl;
	cout << "7.-= islemi sonucu yeni sayi atama" << endl;
	cout << "8.*= islemi sonucu yeni sayi atama" << endl;
	cout << "9./= islemi sonucu yeni sayi atama" << endl;
	int secenek;
	cout << "yapmak istediginiz islemi seciniz:";
	cin >> secenek;

	if (secenek == 1)
	{
		cout << "toplama isleminin sonucu:";                         // toplama fonksiyonunu �a��r�yor
		sonuc = sayi1 + sayi2;
		sonuc.ciktitoplam();
	}
	else if (secenek == 2)                                          // ��karma fonksiyonunu �a��r�yor
	{
		cout << "cikarma isleminin sonucu:";
		sonuc = sayi1 - sayi2;
		sonuc.ciktifark();
	}
	else if (secenek == 3)                                          // �arpma fonksiyonunu �a��r�yor
	{
		cout << "carpma isleminin sonucu:";
		sonuc = sayi1 * sayi2;
		sonuc.cikticarpim();
	}
	else if (secenek == 4)                                         // b�lme fonksiyonunu �a��r�yor
	{
		cout << "bolme isleminin sonucu:";
		sonuc = sayi1 / sayi2;
		sonuc.ciktibolme();
	}
	else if (secenek == 5)                                        // kutupsal g�sterim i�lemleri
	{
		const double pi = 3.14;
		double k = sayi1.gercel / sayi1.sanal, a;
		a = atan(k);
		float j = pow(sayi1.gercel, 2) + pow(sayi1.sanal, 2);
		float r = pow(j, (1.0 / 2.0));


		float e = pow(sayi2.gercel, 2) + pow(sayi2.sanal, 2);
		float x = pow(e, (1.0 / 2.0));

		double m = sayi1.sanal / sayi1.gercel, p1;
		p1 = atan(m);
		double z = sayi2.sanal / sayi2.gercel, p2;
		p2 = atan(z);

		cout << endl << "Birinci karmasik sayinin kutupsal gosterimi: (" << j << " , " << p1 * 180 /pi << ")" << endl;
		cout << "ikinci karmasik sayinin kutupsal gosterimi:  (" << x << " , " << p2 * 180/pi << ")" << endl;
	}
	else if (secenek == 6)                                       // atama fonksiyonlar�n� �a��r�yor
	{
		cout << "+= islemi sonucu ";
		sonuc = sayi1 + sayi2;
		sonuc.ciktiartiesittir();
	}
	else if (secenek == 7)
	{
		cout << "-= islemi sonucu ";
		sonuc = sayi1 - sayi2;
		sonuc.ciktieksiesittir();
	}
	else if (secenek == 8)
	{
		cout << "*= islemi sonucu ";
		sonuc = sayi1 * sayi2;
		sonuc.cikticarpesit();
	}
	else if (secenek == 9)
	{
		cout << "/= islemi sonucu ";
		sonuc = sayi1 / sayi2;
		sonuc.ciktibolesit();
	}
	else                                                         // aral�k d���nda girilen say� i�in uyar� veriyor
	{
		cout << "1-9 arasi bir secenek seciniz";
	}
}