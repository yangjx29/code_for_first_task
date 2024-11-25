int main () {
    float bhmrcSbM;
    bhmrcSbM = 0;
    double  c;
    int dahC9SG6s2;
    int a;
    int ovk2ZISTW8QU;
    int nGXKCBuyvqUa [100] [3];
    int i;
    int j;
    scanf ("%d", &dahC9SG6s2);
    scanf ("%d %d", &a, &ovk2ZISTW8QU);
    {
        i = 0;
        while (i < dahC9SG6s2 - 1) {
            {
                j = 0;
                while (j < 2) {
                    scanf ("%d", &(nGXKCBuyvqUa[i][j]));
                    j++;
                };
            }
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
            i++;
        };
    }
    c = 1.0 * ovk2ZISTW8QU / a;
    for (i = 0; i < dahC9SG6s2 - 1; i++) {
        bhmrcSbM = (float) nGXKCBuyvqUa[i][1] / nGXKCBuyvqUa[i][0];
        if ((bhmrcSbM - c) > 0.05) {
        }
        else {
            if ((c - bhmrcSbM) > 0.05) {
                printf ("worse\n");
            }
            else {
                if ((c - bhmrcSbM) < 0.05 || (bhmrcSbM - c) < 0.05) {
                };
            };
        };
    }
    return 0;
}

