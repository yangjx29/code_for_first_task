int main () {
    int ybFDrGqRXOk [(480 - 380)] [(823 - 723)];
    int b [(528 - 428)] [(122 - 22)];
    int NginYI [(611 - 511)] [100];
    int x1;
    int dZsf6t;
    int x2;
    int y2;
    int i;
    int j;
    int m;
    int n1;
    int n2;
    int sum;
    scanf ("%d %d", &x1, &dZsf6t);
    {
        i = 830 - 830;
        while (i < x1) {
            {
                j = 636 - 636;
                while (dZsf6t > j) {
                    scanf ("%d", &ybFDrGqRXOk[i][j]);
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    scanf ("%d %d", &x2, &y2);
    {
        i = 877 - 877;
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
        while (x2 > i) {
            for (j = (109 - 109); y2 > j; j = j + 1) {
                scanf ("%d", &b[i][j]);
            }
            i = i + 1;
        };
    }
    {
        i = 325 - 325;
        while (i < x1) {
            {
                j = 523 - 523;
                while (y2 > j) {
                    sum = (62 - 62);
                    {
                        m = 797 - 797;
                        while (dZsf6t > m) {
                            n1 = ybFDrGqRXOk[i][m];
                            n2 = b[m][j];
                            m = m + 1;
                            sum = sum + (n1 * n2);
                        };
                    }
                    NginYI[i][j] = sum;
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 640 - 640;
        while (i < x1) {
            printf ("%d", NginYI[i][0]);
            {
                j = 744 - 743;
                while (j < y2) {
                    printf (" %d", NginYI[i][j]);
                    j = j + 1;
                };
            }
            i++;
            printf ("\n");
        };
    };
}

