void  main () {
    int m9Ne4A = (69 - 69), qh6a1Ql, k, LPjrpJkSKvA, CAzSxCYqnho, eJ94QKIi, XMxDg128nQT = 0;
    char w4DV7tubQ20 [(733 - 633)] [12], PfOyjgzJGZk6 [100] [5];
    for (; scanf ("%s%s", &w4DV7tubQ20[m9Ne4A], &PfOyjgzJGZk6[m9Ne4A]) != EOF;) {
        LPjrpJkSKvA = strlen (w4DV7tubQ20[m9Ne4A]);
        {
            qh6a1Ql = 0;
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
            while (qh6a1Ql < LPjrpJkSKvA) {
                XMxDg128nQT = 0;
                {
                    k = 0;
                    while (k < LPjrpJkSKvA) {
                        if (w4DV7tubQ20[m9Ne4A][k] <= w4DV7tubQ20[m9Ne4A][qh6a1Ql])
                            XMxDg128nQT++;
                        k++;
                    };
                }
                if (XMxDg128nQT == LPjrpJkSKvA)
                    break;
                qh6a1Ql++;
            };
        }
        {
            eJ94QKIi = 0;
            while (eJ94QKIi <= qh6a1Ql) {
                printf ("%c", w4DV7tubQ20[m9Ne4A][eJ94QKIi]);
                eJ94QKIi++;
            };
        }
        printf ("%s", PfOyjgzJGZk6[m9Ne4A]);
        for (eJ94QKIi = qh6a1Ql + 1; eJ94QKIi < LPjrpJkSKvA; eJ94QKIi++)
            printf ("%c", w4DV7tubQ20[m9Ne4A][eJ94QKIi]);
        m9Ne4A++;
        printf ("\n");
    };
}

