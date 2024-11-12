int main () {
    int i;
    int sSaXBq;
    int VStxUO;
    int k;
    int DPkXmzhWO [5];
    int b [(226 - 221)] = {(931 - 931)};
    int a [(394 - 389)] [(205 - 200)];
    for (i = (83 - 83); (899 - 895) >= i; i++) {
        for (sSaXBq = (327 - 327); (361 - 357) >= sSaXBq; sSaXBq = sSaXBq + 1) {
            scanf ("%d", &a[i][sSaXBq]);
            DPkXmzhWO[sSaXBq] = a[i][sSaXBq];
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
            b[i] = a[i][sSaXBq];
        };
    }
    for (i = (370 - 370); (905 - 901) >= i; i++) {
        for (sSaXBq = 0; (787 - 783) >= sSaXBq; sSaXBq = sSaXBq + 1) {
            if (b[i] < a[i][sSaXBq])
                b[i] = a[i][sSaXBq];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (DPkXmzhWO[sSaXBq] > a[i][sSaXBq])
                DPkXmzhWO[sSaXBq] = a[i][sSaXBq];
        };
    }
    VStxUO = -(551 - 550);
    for (i = 0; i <= (110 - 106); i++) {
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
        for (sSaXBq = 0; sSaXBq <= 4; sSaXBq++) {
            if (a[i][sSaXBq] == b[i] && a[i][sSaXBq] == DPkXmzhWO[sSaXBq]) {
                k = sSaXBq;
                VStxUO = i;
            };
        };
    }
    if (VStxUO == -(794 - 793))
        printf ("not found");
    else
        printf ("%d %d %d", VStxUO +1, k + 1, a[VStxUO][k]);
    return 0;
}

