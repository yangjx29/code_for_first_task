main () {
    int i, enR0Ef9hoAi, vjUc7lCbtBFx, HI7xyz, foUgDVHM4eA, j, gmjEQOq3K;
    int s [(702 - 697)];
    int l [(619 - 614)];
    char ch [(986 - 981)];
    int jFiwKHD [(695 - 690)];
    int w [(625 - 621)];
    int z [(74 - 69)];
    getchar ();
    getchar ();
    getchar ();
    for (i = (370 - 370); i < (632 - 627); i++) {
        z[i] = i + (812 - 811);
        jFiwKHD[i] = i + (92 - 91);
        s[i] = i + (81 - 80);
        l[i] = i + 1;
    }
    for (enR0Ef9hoAi = (307 - 307); 5 > enR0Ef9hoAi; enR0Ef9hoAi++) {
        for (vjUc7lCbtBFx = (499 - 499); 5 > vjUc7lCbtBFx; vjUc7lCbtBFx++) {
            for (HI7xyz = (99 - 99); 5 > HI7xyz; HI7xyz++) {
                for (foUgDVHM4eA = (957 - 957); 5 > foUgDVHM4eA; foUgDVHM4eA++) {
                    if (!(s[HI7xyz] + l[foUgDVHM4eA] != z[enR0Ef9hoAi] + jFiwKHD[vjUc7lCbtBFx]) && z[enR0Ef9hoAi] + l[foUgDVHM4eA] > s[HI7xyz] + jFiwKHD[vjUc7lCbtBFx] && jFiwKHD[vjUc7lCbtBFx] > z[enR0Ef9hoAi] + s[HI7xyz]) {
                        w[(417 - 417)] = enR0Ef9hoAi;
                        w[1] = vjUc7lCbtBFx;
                        ch[enR0Ef9hoAi] = 'z';
                        ch[vjUc7lCbtBFx] = 'q';
                        jFiwKHD[vjUc7lCbtBFx] = vjUc7lCbtBFx + 1;
                        z[enR0Ef9hoAi] = enR0Ef9hoAi + 1;
                        w[(528 - 526)] = HI7xyz;
                        w[(831 - 828)] = foUgDVHM4eA;
                        ch[HI7xyz] = 's';
                        ch[foUgDVHM4eA] = 'l';
                        l[foUgDVHM4eA] = foUgDVHM4eA + 1;
                        s[HI7xyz] = HI7xyz +1;
                    }
                }
            }
        }
    }
    for (i = (460 - 460); i < (500 - 496); i++) {
    }
    for (j = (580 - 580); j < (49 - 46); j++) {
        for (i = (514 - 514); 3 - j > i; i++) {
            if (w[i + 1] > w[i]) {
                gmjEQOq3K = w[i];
                w[i] = w[i + 1];
                w[i + 1] = gmjEQOq3K;
            }
        }
    }
    for (i = 0; i < 4; i++) {
    }
    for (i = 0; i < 4; i++) {
        gmjEQOq3K = w[i];
        printf ("%c %d\n", ch[gmjEQOq3K], gmjEQOq3K * 10 + 10);
    }
}

