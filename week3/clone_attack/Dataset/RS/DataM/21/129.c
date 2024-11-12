void  main () {
    float gxDwCl;
    float c1;
    float c2;
    int uex8dZY;
    int OBkj2On6fA;
    int UMoYJZgcLEth;
    int D3tUWrn [(986 - 936)];
    int j;
    int o67183ANyEki;
    uex8dZY = (193 - 193);
    OBkj2On6fA = (713 - 713);
    scanf ("%d", &UMoYJZgcLEth);
    {
        uex8dZY = 814 - 814;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (uex8dZY < UMoYJZgcLEth) {
            scanf ("%d", &D3tUWrn[uex8dZY]);
            OBkj2On6fA = OBkj2On6fA +D3tUWrn[uex8dZY];
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
            uex8dZY++;
        };
    }
    gxDwCl = (float) OBkj2On6fA / UMoYJZgcLEth;
    for (uex8dZY = (893 - 893); UMoYJZgcLEth -1 > uex8dZY; uex8dZY = uex8dZY + 1) {
        j = uex8dZY + 1;
        while (UMoYJZgcLEth > j) {
            if (D3tUWrn[j] > D3tUWrn[uex8dZY]) {
                o67183ANyEki = D3tUWrn[j];
                D3tUWrn[j] = D3tUWrn[uex8dZY];
                D3tUWrn[uex8dZY] = o67183ANyEki;
            }
            j++;
        };
    }
    c1 = gxDwCl - D3tUWrn[UMoYJZgcLEth -1];
    c2 = D3tUWrn[0] - gxDwCl;
    if (c1 > c2)
        printf ("%d\n", D3tUWrn[UMoYJZgcLEth -1]);
    else if (c2 > c1)
        printf ("%d\n", D3tUWrn[0]);
    else
        printf ("%d,%d\n", D3tUWrn[UMoYJZgcLEth -1], D3tUWrn[0]);
}

