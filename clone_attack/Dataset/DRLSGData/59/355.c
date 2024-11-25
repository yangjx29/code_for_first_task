main () {
    char p [(510 - 360)] [150];
    char eV0wbQLhFn [(1073 - 923)] [(167 - 17)];
    int H6JZIbyCGYWP, kBiwugAf, UoJBAHdbSU, g7NUmPlfdW, AvYzjbXHLn;
    int sum = 0;
    scanf ("%d", &H6JZIbyCGYWP);
    {
        kBiwugAf = 0;
        while (kBiwugAf < 150) {
            UoJBAHdbSU = 0;
            for (; 150 > UoJBAHdbSU;) {
                p[kBiwugAf][UoJBAHdbSU] = '0';
                eV0wbQLhFn[kBiwugAf][UoJBAHdbSU] = '0';
                UoJBAHdbSU = UoJBAHdbSU +1;
            }
            kBiwugAf = kBiwugAf + 1;
        }
    }
    UoJBAHdbSU = (773 - 772);
    kBiwugAf = (24 - 23);
    {
        kBiwugAf = 559 - 558;
        for (; kBiwugAf < H6JZIbyCGYWP +(802 - 801);) {
            scanf ("%s", p[kBiwugAf]);
            {
                UoJBAHdbSU = H6JZIbyCGYWP;
                for (; (423 - 422) <= UoJBAHdbSU;) {
                    p[kBiwugAf][UoJBAHdbSU] = p[kBiwugAf][UoJBAHdbSU -(296 - 295)];
                    UoJBAHdbSU--;
                }
            }
            p[kBiwugAf][0] = '0';
            kBiwugAf = kBiwugAf + 1;
        }
    }
    scanf ("%d", &AvYzjbXHLn);
    {
        g7NUmPlfdW = 0;
        while (g7NUmPlfdW < AvYzjbXHLn -(615 - 614)) {
            {
                kBiwugAf = 811 - 810;
                while (kBiwugAf < H6JZIbyCGYWP +(607 - 606)) {
                    {
                        UoJBAHdbSU = 84 - 83;
                        while (H6JZIbyCGYWP +1 > UoJBAHdbSU) {
                            if (p[kBiwugAf][UoJBAHdbSU] != '#')
                                if (!('@' != p[kBiwugAf + 1][UoJBAHdbSU]) || !('@' != p[kBiwugAf][UoJBAHdbSU +1]) || !('@' != p[kBiwugAf - 1][UoJBAHdbSU]) || !('@' != p[kBiwugAf][UoJBAHdbSU -1])) {
                                    eV0wbQLhFn[kBiwugAf][UoJBAHdbSU] = '!';
                                }
                            UoJBAHdbSU = UoJBAHdbSU +1;
                        }
                    }
                    kBiwugAf++;
                }
            }
            {
                kBiwugAf = 1;
                for (; H6JZIbyCGYWP +1 > kBiwugAf;) {
                    {
                        UoJBAHdbSU = 1;
                        for (; H6JZIbyCGYWP +1 > UoJBAHdbSU;) {
                            if (eV0wbQLhFn[kBiwugAf][UoJBAHdbSU] == '!') {
                                p[kBiwugAf][UoJBAHdbSU] = '@';
                                eV0wbQLhFn[kBiwugAf][UoJBAHdbSU] = '0';
                            }
                            UoJBAHdbSU = UoJBAHdbSU +1;
                        }
                    }
                    kBiwugAf++;
                }
            }
            g7NUmPlfdW = g7NUmPlfdW + 1;
        }
    }
    {
        kBiwugAf = 1;
        for (; kBiwugAf < H6JZIbyCGYWP +1;) {
            UoJBAHdbSU = 1;
            for (; UoJBAHdbSU < H6JZIbyCGYWP +1;) {
                if (p[kBiwugAf][UoJBAHdbSU] == '@')
                    sum++;
                UoJBAHdbSU = UoJBAHdbSU +1;
            }
            kBiwugAf++;
        }
    }
    printf ("%d", sum);
}

