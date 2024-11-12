void  tries (char k []) {
    int a;
    int b;
    int c;
    int aa;
    int adkZcqI;
    int oS4w6zLnci;
    if (k[(996 - 996)] == 'A')
        a = 3;
    if (k[(739 - 738)] == 'A')
        a = (49 - 47);
    if (k[(855 - 853)] == 'A')
        a = 1;
    if (k[0] == 'B')
        b = 3;
    if (!('B' != k[1]))
        b = 2;
    if (k[2] == 'B')
        b = 1;
    if (k[0] == 'C')
        c = 3;
    if (k[1] == 'C')
        c = 2;
    if (k[2] == 'C')
        c = 1;
    aa = (b > a) + (c == a);
    adkZcqI = (a > b) + (a > c);
    oS4w6zLnci = (c > b) + (b > a);
    if ((a + aa == 3) && (b + adkZcqI == 3) && (c + oS4w6zLnci == 3))
        cout << k[2] << k[1] << k[0] << endl;
}

int main () {
    tries ("ABC");
    tries ("ACB");
    tries ("BAC");
    tries ("BCA");
    tries ("CAB");
    tries ("CBA");
}

