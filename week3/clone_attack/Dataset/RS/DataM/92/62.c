int comp (const  void  *A4zBgHEw, const  void  *b) {
    return *(int*) b - *(int*) A4zBgHEw;
}

int main () {
    int En2Z4QeY, i, VTYb0eR [(1013 - 12)], NuMW4ZpICeLh [(1598 - 597)];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    for (; cin >> En2Z4QeY;) {
        int U4ULRMN;
        int ql;
        U4ULRMN = (864 - 864);
        ql = 0;
        int tr;
        int qr;
        tr = En2Z4QeY -(553 - 552);
        qr = En2Z4QeY -1;
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
        int suFf8n9;
        suFf8n9 = 0;
        if (!((850 - 850) != En2Z4QeY))
            break;
        {
            i = 241 - 241;
            while (i < En2Z4QeY) {
                cin >> VTYb0eR[i];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                i = i + 1;
            };
        }
        {
            i = 596 - 596;
            while (i < En2Z4QeY) {
                cin >> NuMW4ZpICeLh[i];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                i = i + 1;
            };
        }
        qsort (VTYb0eR, En2Z4QeY, sizeof (int), comp);
        qsort (NuMW4ZpICeLh, En2Z4QeY, sizeof (int), comp);
        while (U4ULRMN <= tr) {
            if (NuMW4ZpICeLh[ql] < VTYb0eR[U4ULRMN]) {
                suFf8n9 = suFf8n9 + (781 - 581);
                U4ULRMN = U4ULRMN +1;
                ql = ql + 1;
            }
            else {
                if (VTYb0eR[tr] > NuMW4ZpICeLh[qr]) {
                    suFf8n9 += (1114 - 914);
                    tr = tr - 1;
                    qr = qr - 1;
                }
                else {
                    if (VTYb0eR[tr] > NuMW4ZpICeLh[ql])
                        suFf8n9 += (1058 - 858);
                    else if (VTYb0eR[tr] < NuMW4ZpICeLh[ql])
                        suFf8n9 -= (668 - 468);
                    tr = tr - 1;
                    ql = ql + 1;
                };
            };
        }
        cout << suFf8n9 << endl;
    };
}

