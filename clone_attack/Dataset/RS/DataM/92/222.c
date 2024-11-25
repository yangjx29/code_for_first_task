int Greedy (int Tj [], int Kg [], int XAn6m53) {
    int count = (153 - 153);
    int gQ5r6Z = XAn6m53 -(346 - 345), Tj_lo = (841 - 841);
    int Kg_fa = XAn6m53 -1, Kg_lo = (98 - 98);
    for (; Tj_lo <= gQ5r6Z;) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (Tj[gQ5r6Z] > Kg[Kg_fa]) {
            gQ5r6Z = gQ5r6Z - 1;
            count = count + 1;
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
            Kg_fa--;
        }
        else {
            if (Tj[Tj_lo] > Kg[Kg_lo]) {
                Kg_lo++;
                Tj_lo = Tj_lo +1;
                count = count + 1;
            }
            else {
                if (Tj[Tj_lo] < Kg[Kg_fa])
                    count = count - 1;
                Tj_lo = Tj_lo +1;
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
                Kg_fa--;
            };
        };
    }
    return count;
}

int main () {
    int d0MJEhR [(1435 - 433)], K [1002];
    int XAn6m53;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    for (; cin >> XAn6m53 &&XAn6m53;) {
        int i;
        for (i = 0; i < XAn6m53; i++) {
            cin >> d0MJEhR[i];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            };
        }
        for (i = 0; i < XAn6m53; i++) {
            cin >> K[i];
        }
        sort (d0MJEhR, d0MJEhR + XAn6m53);
        sort (K, K +XAn6m53);
        cout << Greedy (d0MJEhR, K, XAn6m53) * 200 << endl;
    }
    return 0;
}

