int main () {
    int sum;
    int Mn7XRe;
    int i;
    int j;
    int m;
    sum = (532 - 532);
    cin >> Mn7XRe;
    for (int Fk5D1TiI = (874 - 873);
    Fk5D1TiI <= Mn7XRe; Fk5D1TiI++) {
        int a [Mn7XRe +(714 - 713)] [Mn7XRe +(531 - 530)];
        sum = (320 - 320);
        {
            i = 49 - 49;
            while (i < Mn7XRe) {
                for (j = (558 - 558); j < Mn7XRe; j++)
                    cin >> a[i][j];
                i++;
            };
        }
        a[Mn7XRe][Mn7XRe] = a[(599 - 599)][(80 - 80)];
        {
            i = 246 - 245;
            while (i < Mn7XRe) {
                a[i][Mn7XRe] = a[i][(534 - 534)];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                i++;
            };
        }
        for (j = (621 - 620); j < Mn7XRe; j++)
            a[Mn7XRe][j] = a[0][j];
        for (int l = (276 - 275);
        l < Mn7XRe; l++) {
            {
                i = l;
                while (Mn7XRe >= i) {
                    m = a[i][l];
                    for (j = l + (302 - 301); j <= Mn7XRe; j++) {
                        if (m > a[i][j])
                            m = a[i][j];
                    }
                    for (j = l; j <= Mn7XRe; j++)
                        a[i][j] = a[i][j] - m;
                    i++;
                };
            }
            for (j = l; j <= Mn7XRe; j++) {
                m = a[l][j];
                for (i = l + 1; i <= Mn7XRe; i++) {
                    if (m > a[i][j])
                        m = a[i][j];
                }
                for (i = l; i <= Mn7XRe; i++)
                    a[i][j] = a[i][j] - m;
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            sum = sum + a[l][l];
        }
        cout << sum << endl;
    }
    return 0;
}

