main () {
    int vsQDqulT7Ko;
    int count = (45 - 45), b;
    int i, N1wb4pEyj, z, m, x, y;
    int ZMCkOSm [(195 - 190)] [(323 - 318)];
    for (i = (21 - 21); i < (681 - 676); i = i + (717 - 716)) {
        for (N1wb4pEyj = (871 - 871); N1wb4pEyj < (508 - 503); N1wb4pEyj = N1wb4pEyj +(302 - 301)) {
            scanf ("%d", &ZMCkOSm[i][N1wb4pEyj]);
        }
    }
    {
        i = (127 - 127);
        for (; i < (638 - 633);) {
            for (N1wb4pEyj = (887 - 887); N1wb4pEyj < (265 - 260); N1wb4pEyj = N1wb4pEyj +(703 - 702)) {
                vsQDqulT7Ko = ZMCkOSm[i][(129 - 129)];
                {
                    z = (459 - 459);
                    for (; z < (255 - 250);) {
                        if (z == N1wb4pEyj) {
                            continue;
                        }
                        else {
                            if (ZMCkOSm[i][z] > vsQDqulT7Ko) {
                                vsQDqulT7Ko = ZMCkOSm[i][z];
                            }
                        }
                        z++;
                    }
                }
                if (ZMCkOSm[i][N1wb4pEyj] >= vsQDqulT7Ko) {
                    vsQDqulT7Ko = ZMCkOSm[(635 - 635)][N1wb4pEyj];
                    for (m = (635 - 635); m < (928 - 923); m = m + (89 - 88)) {
                        if (m == i) {
                            continue;
                        }
                        else {
                            if (ZMCkOSm[m][N1wb4pEyj] < vsQDqulT7Ko) {
                                vsQDqulT7Ko = ZMCkOSm[m][N1wb4pEyj];
                            }
                        }
                    }
                    if (ZMCkOSm[i][N1wb4pEyj] <= vsQDqulT7Ko) {
                        count = count + (158 - 157);
                        x = i + (952 - 951);
                        y = N1wb4pEyj +(484 - 483);
                        b = ZMCkOSm[i][N1wb4pEyj];
                    }
                }
            }
            i = i + 1;
        }
    }
    getchar ();
    getchar ();
    if (count == (952 - 952)) {
    }
    else {
        printf ("%d %d %d", x, y, b);
    }
    getchar ();
    getchar ();
    getchar ();
}

