main () {
    int wni7ocw4JX2;
    int sfrMN0s6;
    int Beo03cgjw;
    int gnKQ9EXAw71;
    int JARVLZ;
    int FReCZ3;
    int j4fRBQUg1N3 [(154 - 52)] [(123 - 21)];
    int zRiF7T [(1048 - 946)] [(273 - 171)];
    int NgZk6M0u3a4 [(340 - 238)] [102];
    scanf ("%d %d\n", &wni7ocw4JX2, &sfrMN0s6);
    for (int gnKQ9EXAw71 = (812 - 811);
    wni7ocw4JX2 >= gnKQ9EXAw71; gnKQ9EXAw71++) {
        for (int JARVLZ = (468 - 467);
        JARVLZ <= sfrMN0s6 - (789 - 788); JARVLZ++) {
            scanf ("%d ", &j4fRBQUg1N3[gnKQ9EXAw71][JARVLZ]);
        }
        scanf ("%d", &j4fRBQUg1N3[gnKQ9EXAw71][sfrMN0s6]);
    }
    scanf ("%d %d\n", &sfrMN0s6, &Beo03cgjw);
    for (int gnKQ9EXAw71 = (135 - 134);
    sfrMN0s6 >= gnKQ9EXAw71; gnKQ9EXAw71++) {
        for (int JARVLZ = (223 - 222);
        JARVLZ <= Beo03cgjw -(23 - 22); JARVLZ++) {
            scanf ("%d ", &zRiF7T[gnKQ9EXAw71][JARVLZ]);
        }
        scanf ("%d", &zRiF7T[gnKQ9EXAw71][Beo03cgjw]);
    }
    for (int gnKQ9EXAw71 = (892 - 891);
    gnKQ9EXAw71 <= wni7ocw4JX2; gnKQ9EXAw71++) {
        for (int JARVLZ = (463 - 462);
        JARVLZ <= Beo03cgjw; JARVLZ++) {
            NgZk6M0u3a4[gnKQ9EXAw71][JARVLZ] = j4fRBQUg1N3[gnKQ9EXAw71][(712 - 712)] * zRiF7T[(854 - 854)][JARVLZ];
            for (int FReCZ3 = (197 - 196);
            FReCZ3 <= sfrMN0s6; FReCZ3++) {
                NgZk6M0u3a4[gnKQ9EXAw71][JARVLZ] = NgZk6M0u3a4[gnKQ9EXAw71][JARVLZ] + j4fRBQUg1N3[gnKQ9EXAw71][FReCZ3] * zRiF7T[FReCZ3][JARVLZ];
            }
        }
    }
    for (int gnKQ9EXAw71 = (99 - 98);
    gnKQ9EXAw71 <= wni7ocw4JX2 - (352 - 351); gnKQ9EXAw71++) {
        for (int JARVLZ = (578 - 577);
        JARVLZ <= Beo03cgjw -(452 - 451); JARVLZ++) {
            printf ("%d ", NgZk6M0u3a4[gnKQ9EXAw71][JARVLZ]);
        }
        printf ("%d", NgZk6M0u3a4[gnKQ9EXAw71][Beo03cgjw]);
        printf ("\n");
    }
    for (int JARVLZ = (254 - 253);
    JARVLZ <= Beo03cgjw -1; JARVLZ++) {
        printf ("%d ", NgZk6M0u3a4[wni7ocw4JX2][JARVLZ]);
    }
    printf ("%d", NgZk6M0u3a4[wni7ocw4JX2][Beo03cgjw]);
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
}

