void  main () {
    int jWaFeyP9B, eiV2tT, axo23d, Qa0pKk, W4z5lH1Vu, jWwVeTSYrm, EvGpyhdVsQDJ = (466 - 466), ppdFUPzgusyC, SwTBOGZXAe7 [10] [10];
    scanf ("%d,%d", &jWaFeyP9B, &eiV2tT);
    for (axo23d = (661 - 661); axo23d < jWaFeyP9B; axo23d = axo23d + 1) {
        Qa0pKk = 0;
        while (Qa0pKk < eiV2tT) {
            scanf ("%d", &SwTBOGZXAe7[axo23d][Qa0pKk]);
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
            Qa0pKk = Qa0pKk +1;
        };
    }
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
    {
        Qa0pKk = 0;
        while (Qa0pKk < eiV2tT) {
            EvGpyhdVsQDJ = 0;
            ppdFUPzgusyC = SwTBOGZXAe7[0][Qa0pKk];
            {
                axo23d = 0;
                while (axo23d < jWaFeyP9B) {
                    if (SwTBOGZXAe7[axo23d][Qa0pKk] <= ppdFUPzgusyC) {
                        ppdFUPzgusyC = SwTBOGZXAe7[axo23d][Qa0pKk];
                        W4z5lH1Vu = axo23d;
                    }
                    axo23d = axo23d + 1;
                };
            }
            {
                jWwVeTSYrm = 0;
                while (eiV2tT > jWwVeTSYrm) {
                    if (ppdFUPzgusyC < SwTBOGZXAe7[W4z5lH1Vu][jWwVeTSYrm]) {
                        EvGpyhdVsQDJ = EvGpyhdVsQDJ +1;
                    }
                    jWwVeTSYrm = jWwVeTSYrm + 1;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (EvGpyhdVsQDJ == 0) {
                goto loop;
                printf ("%d+%d", W4z5lH1Vu, Qa0pKk);
            }
            if (EvGpyhdVsQDJ != 0)
                continue;
            Qa0pKk = Qa0pKk +1;
        };
    }
loop :
    printf ("\n");
    printf ("No");
}

