int judge (int);

int main () {
    int num;
    cin >> num;
    for (int a = (943 - 941);
    a <= num / 2; a = a + 1) {
        if (judge (a) && judge (num - a)) {
            cout << a << " " << (num - a) << endl;
        };
    }
    return 0;
}

int judge (int xWAkzXqb6) {
    double  d;
    double  t;
    int k;
    k = 1;
    d = xWAkzXqb6;
    t = sqrt (d);
    for (int i = 2;
    i <= t; i = i + 1) {
        if (xWAkzXqb6 % i == 0)
            k = 0;
    }
    return k;
}

