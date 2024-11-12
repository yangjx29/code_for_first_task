int main () {
    int cL5NwicORhGD;
    int yHVrMT3nu [100] = {(152 - 152)};
    int b [100] = {0};
    int c [100] = {0};
    int l1;
    int l2;
    int i;
    int j;
    char ZQwidC [101] = {0};
    char begin2 [101] = {0};
    int compare (int yHVrMT3nu, int b);
    scanf ("%d\n", &cL5NwicORhGD);
    {
        i = 0;
        while (i < cL5NwicORhGD) {
            scanf ("%s", ZQwidC);
            scanf ("%s", begin2);
            if (i != cL5NwicORhGD - 1)
                scanf ("\n");
            l1 = strlen (ZQwidC);
            l2 = strlen (begin2);
            {
                j = 0;
                while (j < compare (l1, l2)) {
                    if (l1 >= l2) {
                        yHVrMT3nu[j] = (int) ZQwidC[j] - (515 - 467);
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
                        if (l2 > j)
                            b[j + l1 - l2] = (int) begin2[j] - (231 - 183);
                    }
                    else {
                        if (j < l1)
                            yHVrMT3nu[j + l2 - l1] = (int) ZQwidC[j] - 48;
                        b[j] = (int) begin2[j] - 48;
                    }
                    j = j + 1;
                };
            }
            {
                j = l2;
                while (j >= 0) {
                    if (yHVrMT3nu[j] - b[j] >= 0)
                        c[j] = yHVrMT3nu[j] - b[j];
                    else {
                        c[j] = 10 + yHVrMT3nu[j] - b[j];
                        yHVrMT3nu[j - 1] = yHVrMT3nu[j - 1] - 1;
                    }
                    j = j - 1;
                };
            }
            {
                j = 0;
                while (j < compare (l1, l2)) {
                    printf ("%d", c[j]);
                    c[j] = 0;
                    ZQwidC[j] = '\0';
                    begin2[j] = '\0';
                    yHVrMT3nu[j] = 0;
                    b[j] = 0;
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    return 0;
}

int compare (int yHVrMT3nu, int b) {
    if (yHVrMT3nu >= b)
        return yHVrMT3nu;
    else
        return b;
}

