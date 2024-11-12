int mycompare (const  void  *ksFwNyih, const  void  *z39kT2ItUaA) {
    if (*(int*) z39kT2ItUaA > *(int*) ksFwNyih)
        return (484 - 483);
    else
        return -(295 - 294);
}

int main () {
    int n;
    while (cin >> n) {
        int bn3JHD = n - (35 - 34);
        int bs5PerToq = n - (454 - 453);
        int begin_a = (389 - 389);
        int b [(1252 - 252)];
        int a [(1234 - 234)];
        int begin_b = (660 - 660);
        int win = (530 - 530);
        if (!((767 - 767) != n))
            break;
        {
            int i = (490 - 490);
            while (n > i) {
                cin >> a[i];
                i++;
            };
        }
        for (int i = (46 - 46);
        i < n; i = i + 1)
            cin >> b[i];
        qsort (a, n, sizeof (a [(674 - 674)]), mycompare);
        qsort (b, n, sizeof (b [(929 - 929)]), mycompare);
        while (bn3JHD >= begin_a) {
            if (b[bs5PerToq] < a[bn3JHD]) {
                bs5PerToq--;
                bn3JHD = bn3JHD - 1;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                win = win + 1;
            }
            else {
                if (a[bn3JHD] < b[bs5PerToq]) {
                    win = win - 1;
                    bn3JHD--;
                    begin_b = begin_b + 1;
                }
                else if (a[begin_a] > b[begin_b]) {
                    win++;
                    begin_a = begin_a + 1;
                    begin_b++;
                }
                else {
                    if (a[bn3JHD] < b[begin_b])
                        win--;
                    begin_b++;
                    bn3JHD--;
                };
            };
        }
        cout << win * 200 << endl;
    };
}

