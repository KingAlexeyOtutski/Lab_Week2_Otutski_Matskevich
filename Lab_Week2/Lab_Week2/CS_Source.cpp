#include<iostream>
#include<iomanip>
#include<cmath>
#include<math.h>
using namespace std;

const double Pi = 3.14159265358979323846264338327950288419;//7169399375105820974944592307816406286208998628034825342117067982148086513282306647093844609550582231725359408128481117450284102701938521105559644622948954930381964428810975665933446128475648233786783165271201909145648566923460348610454326648213393607260249141273724587006606315588174881520920962829254091715364367892590360011330530548820466521384146951941511609433057270365759591953092186117381932611793105118548074462379962749567351885752724891227938183011949129833673362440656643086021394946395224737190702179860943702770539217176293176752384674818467669405132000568127145263560827785771342757789609173637178721468440901224953430146549585371050792279689258923542019956112129021960864034418159813629774771309960518707211349999998372978049951059731732816096318595024459455346908302642522308253344685035261931188171010003137838752886587533208381420617177669147303598253490428755468731159562863882353787593751957781857780532171226806613001927876611195909216420198;



double number_pi(double e)
{
	double calc_pi = 0;
	int i = 1;
	while (abs(Pi - calc_pi)*1000000 > e*1000000)
	{
		calc_pi += 4 * pow(-1, i - 1) * (1./(2*i-1));
		i++;
		//cout << i << endl;
		//cout << calc_pi << endl;
	}
	return calc_pi;
}

void check(double e)
{
	if (abs(Pi - number_pi(e)) <= e)
		cout << "Alright. Works for with " << e << " precision." << endl;
	else
		cout << "Fail. Doesn't work  with " << e << " precision." << endl;
}

int main()
{
	double e;
	cout <<  "Please, set the precision."<<endl;
	cin >> e;
	cout << fixed << setprecision(30) << Pi << endl << endl;
	cout << "| " << number_pi(e) << " - " << Pi << " | <= " << e;
	check(0.0001);
	check(0.00001);
	check(0.000001);
	check(0.0000001);
	check(0.00000001);
	check(0.000000001);
	check(0.0000000001);
	return 0;
}
