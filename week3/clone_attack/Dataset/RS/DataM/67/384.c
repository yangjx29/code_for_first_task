int main () {
    double  jv5HbfT8t [10000], cha [10000];
    int n9CVFauyd34G, bl [10000], yx [10000], xXZ789bzD;
    scanf ("%d", &n9CVFauyd34G);
    {
        xXZ789bzD = 0;
        while (n9CVFauyd34G > xXZ789bzD) {
            scanf ("%d %d", &bl[xXZ789bzD], &yx[xXZ789bzD]);
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
            xXZ789bzD = xXZ789bzD + 1;
        };
    }
    for (xXZ789bzD = 0; n9CVFauyd34G > xXZ789bzD; xXZ789bzD = xXZ789bzD + 1) {
        jv5HbfT8t[xXZ789bzD] = (1.0 * yx[xXZ789bzD]) / bl[xXZ789bzD];
    }
    {
        xXZ789bzD = 1;
        while (n9CVFauyd34G > xXZ789bzD) {
            cha[xXZ789bzD] = jv5HbfT8t[xXZ789bzD] - jv5HbfT8t[0];
            xXZ789bzD = xXZ789bzD + 1;
        };
    }
    {
        xXZ789bzD = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (xXZ789bzD < n9CVFauyd34G) {
            if (0.05 < cha[xXZ789bzD]) {
                printf ("better\n");
            }
            else if (cha[xXZ789bzD] < -0.05) {
            }
            else
                printf ("same\n");
            xXZ789bzD++;
        };
    }
    return 0;
}

