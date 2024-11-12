main () {
    int L56Uzi4Ct [(417 - 317)] [(1086 - 986)];
    int oYSo25H [(496 - 396)] [(1087 - 987)];
    int c [100] [100];
    int ZI27E9oa;
    int lElxWK4juS7;
    int JSA1wrL;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    scanf ("%d%d", &ZI27E9oa, &JSA1wrL);
    for (int vYWrF2Nx7 = (201 - 201);
    ZI27E9oa > vYWrF2Nx7; vYWrF2Nx7 = vYWrF2Nx7 + 1)
        for (int UYqW9gLyZUn4 = (428 - 428);
        JSA1wrL > UYqW9gLyZUn4; UYqW9gLyZUn4 = UYqW9gLyZUn4 +1)
            scanf ("%d", &L56Uzi4Ct[vYWrF2Nx7][UYqW9gLyZUn4]);
    scanf ("%d%d", &JSA1wrL, &lElxWK4juS7);
    for (int vYWrF2Nx7 = (99 - 99);
    JSA1wrL > vYWrF2Nx7; vYWrF2Nx7 = vYWrF2Nx7 + 1)
        for (int UYqW9gLyZUn4 = (625 - 625);
        UYqW9gLyZUn4 < lElxWK4juS7; UYqW9gLyZUn4 = UYqW9gLyZUn4 +1)
            scanf ("%d", &oYSo25H[vYWrF2Nx7][UYqW9gLyZUn4]);
    for (int vYWrF2Nx7 = (686 - 686);
    vYWrF2Nx7 < ZI27E9oa; vYWrF2Nx7 = vYWrF2Nx7 + 1) {
        int UYqW9gLyZUn4 = (787 - 787);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (UYqW9gLyZUn4 < lElxWK4juS7) {
            c[vYWrF2Nx7][UYqW9gLyZUn4] = (368 - 368);
            for (int s = (910 - 910);
            s < JSA1wrL; s = s + 1)
                c[vYWrF2Nx7][UYqW9gLyZUn4] = c[vYWrF2Nx7][UYqW9gLyZUn4] + L56Uzi4Ct[vYWrF2Nx7][s] * oYSo25H[s][UYqW9gLyZUn4];
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
            UYqW9gLyZUn4++;
        };
    }
    for (int vYWrF2Nx7 = (533 - 533);
    vYWrF2Nx7 < ZI27E9oa; vYWrF2Nx7++) {
        for (int UYqW9gLyZUn4 = 0;
        UYqW9gLyZUn4 < lElxWK4juS7; UYqW9gLyZUn4 = UYqW9gLyZUn4 +1) {
            if (UYqW9gLyZUn4 == 0)
                printf ("%d", c[vYWrF2Nx7][UYqW9gLyZUn4]);
            else
                printf (" %d", c[vYWrF2Nx7][UYqW9gLyZUn4]);
        }
        printf ("\n");
    };
}

