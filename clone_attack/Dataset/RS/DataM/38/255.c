int main () {
    int vxYCJhw1 = (358 - 358), j = (704 - 704), h = (950 - 950);
    double  NBovJadX [(187 - 87)] [(115 - 15)];
    double  sum1 [(487 - 387)];
    double  sum2 [(477 - 377)];
    double  LObY71R [(204 - 104)];
    double  c27h1u8J [100];
    int OBRKjl, n [(292 - 192)];
    scanf ("%d", &OBRKjl);
    {
        vxYCJhw1 = 751 - 751;
        while (OBRKjl > vxYCJhw1) {
            sum1[vxYCJhw1] = (638 - 638);
            sum2[vxYCJhw1] = (657 - 657);
            LObY71R[vxYCJhw1] = (679 - 679);
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
            c27h1u8J[vxYCJhw1] = (289 - 289);
            vxYCJhw1 = vxYCJhw1 + 1;
        };
    }
    for (vxYCJhw1 = (579 - 579); OBRKjl > vxYCJhw1; vxYCJhw1 = vxYCJhw1 + 1) {
        scanf ("%d", &n[vxYCJhw1]);
        {
            j = 756 - 756;
            while (n[vxYCJhw1] > j) {
                scanf ("%lf", &NBovJadX[h][j]);
                j = j + 1;
            };
        }
        h = h + 1;
    }
    for (vxYCJhw1 = 0; OBRKjl > vxYCJhw1; vxYCJhw1 = vxYCJhw1 + 1) {
        {
            j = 0;
            while (n[vxYCJhw1] > j) {
                sum1[vxYCJhw1] += NBovJadX[vxYCJhw1][j];
                j = j + 1;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        LObY71R[vxYCJhw1] = (double ) sum1[vxYCJhw1] / n[vxYCJhw1];
    }
    {
        vxYCJhw1 = 0;
        while (OBRKjl > vxYCJhw1) {
            for (j = 0; j < n[vxYCJhw1]; j = j + 1) {
                sum2[vxYCJhw1] += (double ) pow ((NBovJadX[vxYCJhw1][j] - LObY71R[vxYCJhw1]), 2) / n[vxYCJhw1];
            }
            c27h1u8J[vxYCJhw1] = sqrt (sum2[vxYCJhw1]);
            vxYCJhw1 = vxYCJhw1 + 1;
        };
    }
    for (vxYCJhw1 = 0; vxYCJhw1 < OBRKjl; vxYCJhw1 = vxYCJhw1 + 1) {
        printf ("%.5f\n", c27h1u8J[vxYCJhw1]);
    }
    return 0;
}

