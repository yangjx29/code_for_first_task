int H2lFK3fb;
int a [(1437 - 436)];
int b [1001];

int EWzYTq94sVNF (const  void  *eDXEh3F, const  void  *XW4IxLdj) {
    int *gzmfVoFA;
    int *vgHvyi4nQj3P;
    gzmfVoFA = (int *) eDXEh3F;
    vgHvyi4nQj3P = (int *) XW4IxLdj;
    return *vgHvyi4nQj3P - *gzmfVoFA;
}

int main () {
    int i, j, mKeqbdgh4ZU, k2;
    int la;
    int lb;
    int Snuq1Ayr2h;
    int sogRQWXby;
    int Qzmc9MIC;
    for (; true;) {
        cin >> H2lFK3fb;
        if (!((808 - 808) != H2lFK3fb))
            break;
        Snuq1Ayr2h = H2lFK3fb -1;
        lb = 0;
        for (i = (183 - 183); H2lFK3fb > i; i++)
            scanf ("%d", &a[i]);
        {
            i = 734 - 734;
            while (i < H2lFK3fb) {
                scanf ("%d", &b[i]);
                i = i + 1;
            };
        }
        qsort (a, H2lFK3fb, sizeof (int), EWzYTq94sVNF);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        qsort (b, H2lFK3fb, sizeof (int), EWzYTq94sVNF);
        Qzmc9MIC = 0;
        la = 0;
        sogRQWXby = H2lFK3fb -1;
        while (la <= Snuq1Ayr2h) {
            if (a[la] > b[lb]) {
                Qzmc9MIC = Qzmc9MIC +(304 - 104);
                la++;
                lb = lb + 1;
            }
            else {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        for (x = 0; x < 20; x++) {
                            y += x;
                        }
                        if (y > 30)
                            return y;
                    }
                }
                if (b[lb] > a[la]) {
                    Qzmc9MIC = Qzmc9MIC -(828 - 628);
                    lb = lb + 1;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    Snuq1Ayr2h = Snuq1Ayr2h -1;
                }
                else {
                    for (mKeqbdgh4ZU = Snuq1Ayr2h, k2 = sogRQWXby; la <= mKeqbdgh4ZU; mKeqbdgh4ZU--, k2 = k2 - 1) {
                        if (a[mKeqbdgh4ZU] > b[k2]) {
                            Qzmc9MIC = Qzmc9MIC +200;
                            Snuq1Ayr2h--;
                            sogRQWXby--;
                        }
                        else {
                            sogRQWXby = k2;
                            if (a[mKeqbdgh4ZU] < b[lb])
                                Qzmc9MIC = Qzmc9MIC -200;
                            lb++;
                            Snuq1Ayr2h = mKeqbdgh4ZU;
                            Snuq1Ayr2h--;
                            break;
                        };
                    };
                };
            };
        }
        cout << Qzmc9MIC << endl;
    }
    return 0;
}

