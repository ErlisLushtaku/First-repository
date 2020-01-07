#include <iostream>
#include <math.h>
using namespace std;

void towerOfHanoi(int n, char sourcePole, char destinationPole, char auxiliaryPole);
void printoMeRadhe(int n);
int PMMP(int n1, int n2);
int SHMVP(int n1, int n2);
int ktheNrBinar(int n);
int ktheNrDecimal(int n);
bool iThjeshte(int n, int i);
int vShuma(int v[], int n);
int vProdhimi(int v[], int n);
int vMax(int v[], int m);
void combinationUtil(int arr[], int n, int r,
	int index, int data[], int i);
void printCombination(int v[], int m, int r);
int shumaMeFuqi(int n);
int shumaMeProdhim(int faktoriiPare, int numriiFaktoreve, int n);

int main()
{
	int funksioni;

	int n;
	int n1, n2;

	int i = 2;
	const int m = 5;
	int v[m];
	int r = 3;

	cout << "Zgjedhni funksionin qe deshironi ta perdorni \n"
		 << "1. Tower of Hanoi; \n"
		 << "2. Paraqitja e numrave duke u zvogeluar e pastaj duke u rritur; \n"
		 << "3. Pjestuesi me i madh i perbashket; \n"
		 << "4. Shumefishi me i vogel i perbashket; \n"
		 << "5. Kthe nje numer decimal ne numer binar; \n"
		 << "6. Kthe nje numer binar ne numer decimal; \n"
		 << "7. Shqyrto nje numer nese eshte i thjeshte apo jo; \n"
		 << "8. Shuma e anetareve te vargut; \n"
		 << "9. Prodhimi i anetareve te vargut; \n"
		 << "10. Anetari me i madh i vargut; \n"
		 << "11. Kombinimet e mundshme me r elemente nga n elementet e vargut; \n"
		 << "12. Shuma e serise f(n) = 1^1 + 2^2 + 3^3 + ... + n^n; \n"
		 << "13. Shuma e serise f(n)= (1) + (2*3) + (4*5*6) ... n; \n\n"
		
		 << "Funksioni: ";
	cin  >> funksioni;
	cout << "\n";

	switch (funksioni) {

	case 1: // Tower of Hanoi

		cout << "Vendos numrin e disqeve: ";
		cin >> n;

		cout << "Numri minimal i levizjeve: " << pow(2, n) - 1 << endl << endl;

		towerOfHanoi(n, 'F', 'D', 'N');

		cout << "\n"
			<< "F - shkopi fillestar ku gjenden disqet, \n"
			<< "D - shkopi i destinacionit ku duhet te zhvendosen disqet, \n"
			<< "N - shkopi ndihmes. \n";

		break;

	case 2: // Printo numrat me radhe

		cout << "Vendos numrin fillestar: ";
		cin >> n;

		printoMeRadhe(n);

		cout << "\n";

		break;

	case 3: // PMMP

		cout << "Vendos dy numra te plote: ";
		cin >> n1 >> n2;

		cout << "Pjetstuesi me i madh i perbashket eshte: " << PMMP(n1, n2) << "\n";

		break;

	case 4: // SHMVP

		cout << "Vendos dy numra te plote: ";
		cin >> n1 >> n2;

		if (n1 > n2)
			cout << "Shumefishi me i vogel i perbashket eshte: " << SHMVP(n2, n1) << "\n";
		else
			cout << "Shumefishi me i vogel i perbashket eshte: " << SHMVP(n1, n2) << "\n";

		break;

	case 5: // Kthe numrin decimal ne numer binar

		cout << "Vendos nje numer te decimal: ";
		cin >> n;

		cout << "Numri binar: " << ktheNrBinar(n) << "\n";

		break;

	case 6: // Kthe numrin binar ne numer decimal

		cout << "Vendos nje numer binar: ";
		cin >> n;

		cout << "Numri decimal: " << ktheNrDecimal(n) << "\n";

		break;

	case 7: // Trego a eshte i thjeshte nje numer

		cout << "Vendos nje numer te plote: ";
		cin >> n;

		if (iThjeshte(n, i))
			cout << "Numri eshte i thjeshte." << "\n";
		else
			cout << "Numri nuk eshte i thjeshte." << "\n";

		break;

	case 8: // Shuma e anetareve te vargut

		cout << "Vendos anetaret e vargut \n";
		for (int i = 0; i < m; i++)
		{
			cout << "v[" << i + 1 << "] = ";
			cin >> v[i];
		}

		cout << "Shuma e anetareve te vargut eshte: " << vShuma(v, m) << "\n";

		break;

	case 9: // Prodhimi i anetareve te vargut

		cout << "Vendos anetaret e vargut \n";
		for (int i = 0; i < m; i++)
		{
			cout << "v[" << i + 1 << "] = ";
			cin >> v[i];
		}

		cout << "Prodhimi i anetareve te vargut eshte: " << vProdhimi(v, m) << "\n";

		break;

	case 10: // Anetari me i madh i vargut

		cout << "Vendos anetaret e vargut \n";
		for (int i = 0; i < m; i++)
		{
			cout << "v[" << i + 1 << "] = ";
			cin >> v[i];
		}

		cout << "Anetari me i madh i vargut eshte: " << vMax(v, m) << "\n";

		break;

	case 11: // Kombinimet e mundshme me r elemente nga n elementet e vargut

		cout << "Vendos anetaret e vargut \n";
		for (int i = 0; i < m; i++)
		{
			cout << "v[" << i + 1 << "] = ";
			cin >> v[i];
		}

		printCombination(v, m, r);

		cout << "\n";

		break;

	case 12: // Shuma e serise 1^1 + 2^2 + 3^3 + ... + n^n

		cout << "Vendos nje numer te plote: ";
		cin >> n;

		cout << "Shuma e serise eshte: " << shumaMeFuqi(n) << "\n";

		break;

	case 13: // Shuma e serise f(n)= (1) + (2*3) + (4*5*6) ů n;

		cout << "Vendos nje numer te plote: ";
		cin >> n;

		cout << "Shuma e serise eshte: " << shumaMeProdhim(1, 1, n) << "\n";

		break;

	default:
		cout << "Funksioni nuk eshte perkufizuar!" << "\n";

	}

	return 0;
}

// Supozojme se disku i n-te eshte diksu ne fund (duke numeruar prej lart) 
void towerOfHanoi(int n, char sourceRod, char destinationRod, char auxiliaryRod)
{
	// Rasti baze (kushti terminar) 
	if (n == 0)
		return;

	// Levizi n - 1 disqet e para prej shkopit fillestar
	// ne shkopin ndihmes duke e perdorur destinacionin si 
	// shkop te perkohshem 
	towerOfHanoi(n - 1, sourceRod, auxiliaryRod, destinationRod);

	// Levize diskun e mbetur nga shkopi fillestar 
	// ne shkopin e destinacionit 
	cout << "Leviz diskun " << n << " nga shkopi " << sourceRod << " ne shkopin " << destinationRod << endl;

	// Levizi n - 1 disqet nga shkopi ndihmes (tani ka rolin e shkopit fillestar) 
	// ne shkopin e destinacionit duke e perdorur shkopin fillestar si
	// shkop te perkohshem (ndihmes) 
	towerOfHanoi(n - 1, auxiliaryRod, destinationRod, sourceRod);
}

void printoMeRadhe(int n) {

	if (n < 1)
		return;
	else
	{
		cout << n << " ";
		printoMeRadhe(n - 1);
		cout << n << " ";
		return;
	}
}

int PMMP(int n1, int n2)
{
	if (n2 != 0)
		return PMMP(n2, n1 % n2);
	else
		return n1;
}

int SHMVP(int n1, int n2)
{
	static int shumefishi = 0;

	shumefishi += n2;

	if (shumefishi % n1 == 0) // Dihet se  shumefishi % n2 == 0  prandaj nuk shkruhet ne kusht
	{
		return shumefishi;
	}
	else
	{
		return SHMVP(n1, n2);
	}
}

int ktheNrBinar(int n)
{
	if (n == 0)
		return 0;
	else
		return (n % 2 + 10 * ktheNrBinar(n / 2));
}

int ktheNrDecimal(int n)
{
	if (n == 0)
		return 0;
	return (n % 10 + 2 * ktheNrDecimal(n / 10));
}

bool iThjeshte(int n, int i = 2)
{
	if (n <= 2)
		return (n == 2) ? true : false;

	if (n % i == 0)
		return false;

	if (2 * i > n)
		return true;

	return iThjeshte(n, i + 1);
}

int vShuma(int v[], int m)
{

	if (m == 0)
		return 0;

	return v[m - 1] + vShuma(v, m - 1);
}

int vProdhimi(int v[], int m)
{

	if (m == 0)
		return 1;

	return v[m - 1] * vProdhimi(v, m - 1);
}

int vMax(int v[], int m)
{
	static int max = v[m - 1];

	if (m == 0)
		return max;

	if (max < v[m - 2])
		max = v[m - 2];

	vMax(v, m - 1);
}

/* Funksioni kryesor qe i printon te
gjitha kombinimet e gjatesise r ne
vargun v[] te gjatesise n. Ky funksion
kryesisht e perdor combinationUtil() */
void printCombination(int v[], int m, int r)
{
	// Varg i perkohshem per ti vendosur
	// te gjitha kombinimet nje nga nje  
	int data[3]; // int data[r];

	// Printo te gjitha kombinimet duke perdorur
	// vargun e perkohshem data[]
	combinationUtil(v, m, r, 0, data, 0);
}

/* v[] ---> Vargu hyres
m ---> Gjatesia e vargut
r ---> Gjatesia e kombinimit qe printohet
index ---> Indeksi ne vargun data[]
data[] ---> Varg i perkohshem per te vendosur kombinimin e tanishem
i ---> Indeksi i elementit te tanishem ne vargun v[] */
void combinationUtil(int v[], int m, int r,
	int index, int data[], int i = 0)
{
	// Kombinimi i tanishem eshte i gatshem te printohet 
	if (index == r)
	{
		for (int j = 0; j < r; j++)
			cout << data[j] << " ";

		cout << endl;
		return;
	}

	// Kur nuk ka me elemente per ti vendosur ne data[]  
	if (i >= m)
		return;

	// Perfshihet, vendose ne lokacionin e radhes 
	data[index] = v[i];
	combinationUtil(v, m, r, index + 1, data, i + 1);

	// Nuk perfshihet, zevendesoje me te radhes  
	// (i-se i shtohet vlera, ndersa indeksi nuk ndryshon)  
	combinationUtil(v, m, r, index, data, i + 1);
}

int shumaMeFuqi(int n)
{
	// 1^1 = 1
	if (n == 1)
		return 1;
	else
		return (pow(n, n) + shumaMeFuqi(n - 1));
}

int shumaMeProdhim(int faktoriiPare, int numriiFaktoreve, int n)
{
	/*
	faktoriiPare ---> faktori i pare i prodhimit te anetarit,
					 e barabarte me i-ne e fundit te llogaritur ne anetarin paraprak
	numriiFaktoreve ---> numri i faktoreve te anetarit
	n ---> numri total i anetareve
	prodhimi ---> variabla per grumbullimin e prodhimit te faktoreve te anetareve nje nga nje */
	int i, prodhimi = 1;

	// Kushti terminar
	// Numri i anetareve te serise eshte i barabarte me numrin e faktoreve te anetarit te fundit
	if (numriiFaktoreve > n)
		return 0;

	// Prodhimi i termave prej vleres se faktorit te pare deri te faktori i pare plus numri i faktoreve
	for (i = faktoriiPare; i < faktoriiPare + numriiFaktoreve; i++)
		prodhimi *= i;

	// Thirrja rekurzive per te shtuar termin e radhes ne seri 
	return prodhimi + shumaMeProdhim(i, numriiFaktoreve + 1, n);
}