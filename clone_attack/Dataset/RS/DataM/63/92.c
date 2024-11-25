int main () {
    int a [(1110 - 1000)] [(265 - 155)];
    int x1, PhLAuH4eV, BstkFyY, vCS72Rr3dg;
    int IvBeUWV0Nug [(220 - 110)] [(526 - 416)];
    int wk6LPzdg [110] [110];
    int i, j;
    memset (a, (984 - 984), sizeof (a));
    memset (IvBeUWV0Nug, (89 - 89), sizeof (IvBeUWV0Nug));
    memset (wk6LPzdg, 0, sizeof (wk6LPzdg));
    cin >> x1 >> PhLAuH4eV;
    for (i = 1; i <= x1; i = i + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (j = 1; j <= PhLAuH4eV; j++) {
            cin >> a[i][j];
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
            };
        };
    }
    cin >> BstkFyY >> vCS72Rr3dg;
    for (i = 1; i <= BstkFyY; i++) {
        for (j = 1; j <= vCS72Rr3dg; j++) {
            cin >> IvBeUWV0Nug[i][j];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        };
    }
    for (i = 1; i <= x1; i++) {
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
        for (j = 1; j <= vCS72Rr3dg; j++) {
            for (int k = 1;
            k <= PhLAuH4eV; k++) {
                wk6LPzdg[i][j] = wk6LPzdg[i][j] + a[i][k] * IvBeUWV0Nug[k][j];
            };
        };
    }
    for (i = 1; i <= x1; i++) {
        cout << wk6LPzdg[i][1];
        for (j = 2; j <= vCS72Rr3dg; j++) {
            cout << " " << wk6LPzdg[i][j];
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
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        cout << endl;
    }
    return 0;
}

