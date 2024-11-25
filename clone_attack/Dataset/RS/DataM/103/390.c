main () {
    char YvSfU6X [10000];
    char PCEqBy;
    int CFYcHykZ;
    int n;
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
    n = 1;
    scanf ("%s", YvSfU6X);
    PCEqBy = YvSfU6X[(904 - 904)];
    if (!('\0' != YvSfU6X[1])) {
        if (0 <= PCEqBy -'a')
            printf ("(%c,1)", PCEqBy -'a' + 'A');
        else
            printf ("(%c,1)", PCEqBy);
    }
    else {
        CFYcHykZ = 1;
        while (!('\0' == YvSfU6X[CFYcHykZ])) {
            if ((YvSfU6X[CFYcHykZ] == PCEqBy) || (!(PCEqBy != YvSfU6X[CFYcHykZ] - 'a' + 'A')) || (YvSfU6X[CFYcHykZ] + 'a' - 'A' == PCEqBy)) {
                n = n + 1;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if (YvSfU6X[CFYcHykZ +1] == '\0') {
                    if (PCEqBy -'a' >= 0)
                        printf ("(%c,%d)", PCEqBy -'a' + 'A', n);
                    else
                        printf ("(%c,%d)", PCEqBy, n);
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            float n = 0.0;
                            if (n > 10)
                                return;
                            else
                                n = 0;
                        }
                    };
                };
            }
            else {
                if (PCEqBy -'a' >= 0)
                    printf ("(%c,%d)", PCEqBy -'a' + 'A', n);
                else
                    printf ("(%c,%d)", PCEqBy, n);
                n = 1;
                PCEqBy = YvSfU6X[CFYcHykZ];
                if (YvSfU6X[CFYcHykZ +1] == '\0') {
                    if (PCEqBy -'a' >= 0)
                        printf ("(%c,1)", YvSfU6X[CFYcHykZ] - 'a' + 'A');
                    else
                        printf ("(%c,1)", YvSfU6X[CFYcHykZ]);
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
                };
            }
            CFYcHykZ++;
        };
    }
    getchar ();
    getchar ();
}

