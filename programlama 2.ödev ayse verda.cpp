/****************************************************************************
**					SAKARYA ÜNÝVERSÝTESÝ
**			         BÝLGÝSAYAR VE BÝLÝÞÝM BÝLÝMLERÝ FAKÜLTESÝ
**				    BÝLGÝSAYAR MÜHENDÝSLÝÐÝ BÖLÜMÜ
**				          PROGRAMLAMAYA GÝRÝÞÝ DERSÝ
**
**				ÖDEV NUMARASI…...: 2
**				ÖÐRENCÝ ADI...............: Ayþe Verda Gülcemal
**				ÖÐRENCÝ NUMARASI.: g221210038
**				DERS GRUBU…………: Ýkinci Öðretim A
****************************************************************************/


#include <iostream>
#include <cmath>
using namespace std;

class karmasik                                                     // karmaþýk sayýlar için bir sýnýf oluþturduk
{
public:
	float gercel;
	float sanal;
	void cikti()                                      // karmaþýk sayýyý yazdýrmak için oluþturulan fonksiyon
	{
		cout << "gercel kismi giriniz";
		cin >> gercel;
		cout << "sanal kismi giriniz:";
		cin >> sanal;
	}
	karmasik operator+(karmasik a)                    // operatörü aþýrý yükleme fonksiyonu ile toplama fonksiyonu
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

	karmasik operator-(karmasik a)                  // operatörü aþýrý yükleme ile çýkarma fonksiyonu 
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

	karmasik operator*(karmasik a)                                 // operatörü aþýrý yükleme ile çarpma fonksiyonu
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
	
	karmasik operator/(karmasik a)                                 // operatörü aþýrý yükleme ile bölme fonksiyonu
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
	karmasik operator+=(karmasik a)                            // yeni sayý atamak için kullanýlan operatörü aþýrý yükleme fonksiyonlarý
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

	cout << "MENU:" << endl;                                         // kullanýcýnýn yaptýrmak istedigi islemi secebilemesi icin menu sistemi
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
		cout << "toplama isleminin sonucu:";                         // toplama fonksiyonunu çaðýrýyor
		sonuc = sayi1 + sayi2;
		sonuc.ciktitoplam();
	}
	else if (secenek == 2)                                          // çýkarma fonksiyonunu çaðýrýyor
	{
		cout << "cikarma isleminin sonucu:";
		sonuc = sayi1 - sayi2;
		sonuc.ciktifark();
	}
	else if (secenek == 3)                                          // çarpma fonksiyonunu çaðýrýyor
	{
		cout << "carpma isleminin sonucu:";
		sonuc = sayi1 * sayi2;
		sonuc.cikticarpim();
	}
	else if (secenek == 4)                                         // bölme fonksiyonunu çaðýrýyor
	{
		cout << "bolme isleminin sonucu:";
		sonuc = sayi1 / sayi2;
		sonuc.ciktibolme();
	}
	else if (secenek == 5)                                        // kutupsal gösterim iþlemleri
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
	else if (secenek == 6)                                       // atama fonksiyonlarýný çaðýrýyor
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
	else                                                         // aralýk dýþýnda girilen sayý için uyarý veriyor
	{
		cout << "1-9 arasi bir secenek seciniz";
	}
}