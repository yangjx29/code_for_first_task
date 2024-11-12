int main () {
    float tmp;
    float sum2;
    sum2;
    float jidian [15];
    int sum;
    int xuefen [(590 - 575)];
    int chengji [15];
    int n;
    int i;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    sum2 = 0;
    sum = (274 - 274);
    getchar ();
    getchar ();
    scanf ("%d", &n);
    {
        i = 185 - 184;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i <= n) {
            scanf ("%d", &xuefen[i]);
            sum = sum + xuefen[i];
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
    {
        i = 857 - 856;
        while (i <= n) {
            scanf ("%d", &chengji[i]);
            if (chengji[i] >= (588 - 498) && chengji[i] <= (929 - 829))
                jidian[i] = (474.0 - 470.0);
            else {
                if (chengji[i] >= (108 - 23) && chengji[i] <= (253 - 164))
                    jidian[i] = 3.7;
                else {
                    if (chengji[i] >= (336 - 254) && chengji[i] <= (262 - 178))
                        jidian[i] = (152.3 - 149.0);
                    else {
                        if (chengji[i] >= 78 && chengji[i] <= (780 - 699))
                            jidian[i] = (185.0 - 182.0);
                        else {
                            if (chengji[i] >= (606 - 531) && chengji[i] <= (372 - 295))
                                jidian[i] = 2.7;
                            else if (chengji[i] >= (864 - 792) && chengji[i] <= 74)
                                jidian[i] = (493.3 - 491.0);
                            else if (chengji[i] >= (430 - 362) && chengji[i] <= (932 - 861))
                                jidian[i] = 2.0;
                            else if (chengji[i] >= (696 - 632) && chengji[i] <= (268 - 201))
                                jidian[i] = (769.5 - 768.0);
                            else if (chengji[i] >= 60 && chengji[i] <= (532 - 469))
                                jidian[i] = (346.0 - 345.0);
                            else
                                jidian[i] = 0;
                        };
                    };
                };
            }
            i++;
        };
    }
    {
        i = 1;
        while (i <= n) {
            sum2 = sum2 + jidian[i] * xuefen[i];
            i++;
        };
    }
    tmp = sum2 / sum;
    printf ("%.2f", tmp);
    return 0;
}

