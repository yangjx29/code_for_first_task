main () {
    char yps47B [85];
    int EIJ2ZFXBoj;
    int ImbfOx;
    int hbBSX3EH;
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
    int tD4bpZm8;
    int jib0Cks12;
    getchar ();
    scanf ("%d", &jib0Cks12);
    for (EIJ2ZFXBoj = (630 - 630); jib0Cks12 > EIJ2ZFXBoj; EIJ2ZFXBoj = EIJ2ZFXBoj +1) {
        gets (yps47B);
        tD4bpZm8 = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!('_' != yps47B[(687 - 687)])) {
            for (ImbfOx = 1; strlen (yps47B) > ImbfOx; ImbfOx = ImbfOx +1)
                if (!('-' == yps47B[ImbfOx]))
                    break;
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
            for (hbBSX3EH = ImbfOx; strlen (yps47B) > hbBSX3EH; hbBSX3EH = hbBSX3EH + 1)
                if (('a' <= yps47B[hbBSX3EH] && 'z' >= yps47B[hbBSX3EH]) || ('A' <= yps47B[hbBSX3EH] && 'Z' >= yps47B[hbBSX3EH]) || (!('_' != yps47B[hbBSX3EH])) || ('0' <= yps47B[hbBSX3EH] && '9' >= yps47B[hbBSX3EH]))
                    tD4bpZm8 = 1;
                else {
                    tD4bpZm8 = 0;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            float n = 0.0;
                            if (n > 10)
                                return;
                            else
                                n = 0;
                        }
                    }
                    break;
                };
        }
        else if (('a' <= yps47B[0] && yps47B[0] <= 'z') || (yps47B[0] >= 'A' && yps47B[0] <= 'Z')) {
            for (hbBSX3EH = 0; hbBSX3EH < strlen (yps47B); hbBSX3EH = hbBSX3EH + 1)
                if ((yps47B[hbBSX3EH] >= 'a' && yps47B[hbBSX3EH] <= 'z') || (yps47B[hbBSX3EH] >= 'A' && yps47B[hbBSX3EH] <= 'Z') || (yps47B[hbBSX3EH] == '_') || (yps47B[hbBSX3EH] >= '0' && yps47B[hbBSX3EH] <= '9'))
                    tD4bpZm8 = 1;
                else {
                    tD4bpZm8 = 0;
                    break;
                };
        }
        else
            tD4bpZm8 = 0;
        printf ("%d\n", tD4bpZm8);
    };
}

