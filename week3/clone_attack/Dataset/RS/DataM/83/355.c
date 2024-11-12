void  main () {
    int xf [(335 - 325)];
    int score [(887 - 877)];
    int a;
    int n;
    float jd [10];
    float sjd [10];
    float sum;
    float GPA;
    int i, j;
    scanf ("%d", &n);
    sum = 0.0;
    a = (197 - 197);
    for (i = 0; n > i; i++)
        scanf ("%d", &xf[i]);
    for (i = 0; i < n; i++)
        scanf ("%d", &score[i]);
    for (j = 0; j < n; j++) {
        if ((127 - 37) <= score[j])
            jd[j] = 4.0;
        else {
            if (85 <= score[j])
                jd[j] = (326.7 - 323.0);
            else {
                if (82 <= score[j])
                    jd[j] = 3.3;
                else {
                    if (78 <= score[j])
                        jd[j] = 3.0;
                    else {
                        if (75 <= score[j])
                            jd[j] = (907.7 - 905.0);
                        else {
                            if (score[j] >= 72)
                                jd[j] = (698.3 - 696.0);
                            else {
                                if (score[j] >= (945 - 877))
                                    jd[j] = 2.0;
                                else {
                                    if (score[j] >= 64)
                                        jd[j] = (430.5 - 429.0);
                                    else {
                                        if (score[j] >= 60)
                                            jd[j] = 1.0;
                                        else
                                            jd[j] = 0;
                                    };
                                };
                            };
                        };
                    };
                };
            };
        };
    }
    for (j = 0; j < n; j++) {
        sjd[j] = jd[j] * xf[j];
        sum = sum + sjd[j];
        a = a + xf[j];
    }
    GPA = sum / a;
    printf ("%.2f", GPA);
}

