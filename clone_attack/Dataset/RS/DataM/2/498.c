void  main () {
    int bBD4xCTPa8 = (319 - 319), qngrc0H87Lxs, YyxvfOD, v2nsVjEwxYBf, P4JjdNon, Dmxw1JOWAv3r, ngM8azYFySCm [(1613 - 614)], VrDAQmEfM52e [26] = {0};
    char KISMaB6G79z [999] [999];
    scanf ("%d\n", &qngrc0H87Lxs);
    {
        YyxvfOD = 0;
        while (YyxvfOD < qngrc0H87Lxs) {
            scanf ("%d %s", &ngM8azYFySCm[YyxvfOD], KISMaB6G79z[YyxvfOD]);
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
            YyxvfOD = YyxvfOD +1;
        };
    }
    {
        YyxvfOD = 0;
        while (YyxvfOD < qngrc0H87Lxs) {
            Dmxw1JOWAv3r = strlen (KISMaB6G79z[YyxvfOD]);
            {
                v2nsVjEwxYBf = 0;
                while (v2nsVjEwxYBf < Dmxw1JOWAv3r) {
                    VrDAQmEfM52e[KISMaB6G79z[YyxvfOD][v2nsVjEwxYBf] - 'A']++;
                    v2nsVjEwxYBf = v2nsVjEwxYBf + 1;
                };
            }
            YyxvfOD = YyxvfOD +1;
        };
    }
    {
        v2nsVjEwxYBf = 0;
        while (v2nsVjEwxYBf < 26) {
            if (bBD4xCTPa8 < VrDAQmEfM52e[v2nsVjEwxYBf])
                bBD4xCTPa8 = VrDAQmEfM52e[v2nsVjEwxYBf];
            v2nsVjEwxYBf = v2nsVjEwxYBf + 1;
        };
    }
    {
        YyxvfOD = 0;
        while (YyxvfOD < 26) {
            if (VrDAQmEfM52e[YyxvfOD] == bBD4xCTPa8) {
                printf ("%c\n", YyxvfOD +'A');
                break;
            }
            YyxvfOD++;
        };
    }
    printf ("%d\n", bBD4xCTPa8);
    {
        v2nsVjEwxYBf = 0;
        while (v2nsVjEwxYBf < qngrc0H87Lxs) {
            Dmxw1JOWAv3r = strlen (KISMaB6G79z[v2nsVjEwxYBf]);
            {
                P4JjdNon = 0;
                while (Dmxw1JOWAv3r > P4JjdNon) {
                    if ((KISMaB6G79z[v2nsVjEwxYBf][P4JjdNon] - 'A') == YyxvfOD)
                        printf ("%d\n", ngM8azYFySCm[v2nsVjEwxYBf]);
                    P4JjdNon = P4JjdNon +1;
                };
            }
            v2nsVjEwxYBf++;
        };
    };
}

