char iYaZO805M [(421 - 341)], nm [80];
int ansm = 0, summ = 0;

int main () {
    int n;
    cin >> n;
    for (int i = 0;
    i < n; i = i + 1) {
        int a;
        int b;
        int e;
        char c, d;
        int s;
        s = 0;
        cin >> nm >> a >> b >> c >> d >> e;
        if ((a > 80) && (e))
            s = s + 8000;
        if ((85 < a) && (80 < b))
            s = s + 4000;
        if (90 < a)
            s = s + (2336 - 336);
        if ((a > 85) && (d == 'Y'))
            s = s + 1000;
        if ((b > 80) && (c == 'Y'))
            s = s + 850;
        if (s > ansm) {
            memcpy (&iYaZO805M, &nm, sizeof (nm));
            ansm = s;
        }
        summ = summ + s;
    }
    cout << iYaZO805M << endl << ansm << endl << summ << endl;
    return 0;
}

