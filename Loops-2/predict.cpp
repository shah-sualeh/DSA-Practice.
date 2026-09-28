// #include <iostream>
// using namespace std;
// int main() {
// while ('1' < '2')
// cout << "In while loop" << endl;
// }
// #include <iostream>
// using namespace std;
// int main( ) {
// int t = 10;
// while (t /= 2) {
// cout << "Hello" << endl;
// }
// }
// #include <iostream>
// using namespace std;
// int main( ) {
// for (int x = 1; x * x <= 10; x++)
// cout << "In for loop" << endl;
// }
// #include <iostream>
// using namespace std;
// int main( ) {
// int x = 10, y = 0 ;
// while ( x >= y ) {
// x-- ;
// y++ ;
// cout << x << " " << y << endl ;
// }
// }
#include <iostream>
using namespace std;
int main( ) {
for (int i = 1; i <= 500; i++) {
int x = 0, temp = i;
while (temp > 0) {
int m = temp % 10;
x += m * m * m;
temp /= 10;
}
if (i == x) {
cout << i << endl;
}
}
}