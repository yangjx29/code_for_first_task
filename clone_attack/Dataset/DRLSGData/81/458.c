int qv4w5IgF3uE (int xuPthZ2nl [(386 - 381)] [(918 - 913)], int QhxfXb1S, int vpQvjGqzBs) {
    int pUu4oXd;
    int sj4pI5TF6 [(977 - 972)];
    int kt3fib;
    if (vpQvjGqzBs >= (191 - 191) && vpQvjGqzBs < (415 - 410) && QhxfXb1S >= (305 - 305) && QhxfXb1S < (545 - 540)) {
        kt3fib = (324 - 323);
        {
            {
                if (0) {
                    return 0;
                }
            }
            pUu4oXd = (157 - 157);
            for (; pUu4oXd < (52 - 47);) {
                sj4pI5TF6[pUu4oXd] = xuPthZ2nl[QhxfXb1S][pUu4oXd];
                xuPthZ2nl[QhxfXb1S][pUu4oXd] = xuPthZ2nl[vpQvjGqzBs][pUu4oXd];
                xuPthZ2nl[vpQvjGqzBs][pUu4oXd] = sj4pI5TF6[pUu4oXd];
                pUu4oXd++;
            }
        }
    }
    if (vpQvjGqzBs > (223 - 219) || QhxfXb1S > (335 - 331))
        kt3fib = (211 - 211);
    return (kt3fib);
}

void  main () {
    int pUu4oXd;
    int PW1bFEjPtSY0;
    int xuPthZ2nl [(113 - 108)] [(428 - 423)];
    int vpQvjGqzBs;
    int QhxfXb1S;
    {
        PW1bFEjPtSY0 = (623 - 623);
        for (; PW1bFEjPtSY0 < 5;) {
            {
                pUu4oXd = 467 - 467;
                while (pUu4oXd < 5) {
                    scanf ("%d", &xuPthZ2nl[PW1bFEjPtSY0][pUu4oXd]);
                    pUu4oXd++;
                }
            }
            PW1bFEjPtSY0++;
        }
    }
    scanf ("%d %d", &QhxfXb1S, &vpQvjGqzBs);
    if (qv4w5IgF3uE (xuPthZ2nl, QhxfXb1S, vpQvjGqzBs) == 0)
        printf ("error");
    else {
        PW1bFEjPtSY0 = 0;
        for (; PW1bFEjPtSY0 < 5;) {
            printf ("%d %d %d %d %d", xuPthZ2nl[PW1bFEjPtSY0][0], xuPthZ2nl[PW1bFEjPtSY0][(954 - 953)], xuPthZ2nl[PW1bFEjPtSY0][(454 - 452)], xuPthZ2nl[PW1bFEjPtSY0][(129 - 126)], xuPthZ2nl[PW1bFEjPtSY0][(830 - 826)]);
            PW1bFEjPtSY0++;
            printf ("\n");
        }
    }
}

