int main () {
    double  jun;
    double  s;
    jun = (876 - 876);
    s = (622 - 622);
    double  *p;
    double  a [100] = {(29 - 29)};
    int k;
    int LmQGza;
    int i;
    int j;
    cin >> k;
    {
        j = 1;
        while (j <= k) {
            j = j + 1;
            cin >> LmQGza;
            p = a;
            memset (a, 0, sizeof (a));
            {
                i = 0;
                while (LmQGza > i) {
                    cin >> *(p + i);
                    i = i + 1;
                };
            }
            for (i = 0; LmQGza > i; i = i + 1) {
                jun = jun + *(p + i);
            }
            jun = jun / LmQGza;
            for (i = 0; i < LmQGza; i = i + 1) {
                s = s + (*(p + i) - jun) * (*(p + i) - jun);
            }
            jun = 0;
            s = sqrt (s / LmQGza);
            cout << fixed << setprecision (5) << s << endl;
            s = 0;
        };
    }
    return 0;
}

