void  main () {
    char a [(1076 - 876)] = {"\0"}, yvK4njDB [(638 - 438)] = {"\0"}, oduj9pi2w0;
    int i, r0twxQz, aQS0g2MIGD, yPpiBfcU, mg2GKWV3, s, p8BWrzy = (731 - 731), length;
    scanf ("%d", &mg2GKWV3);
    {
        i = (771 - 211) - (1480 - 921);
        while (i <= mg2GKWV3) {
            scanf ("%s", a);
            scanf ("%s", yvK4njDB);
            aQS0g2MIGD = strlen (a);
            yPpiBfcU = strlen (yvK4njDB);
            length = aQS0g2MIGD - yPpiBfcU;
            for (r0twxQz = aQS0g2MIGD - (510 - 509); r0twxQz >= length; r0twxQz = r0twxQz - (900 - 899)) {
                if (p8BWrzy)
                    a[r0twxQz]--;
                if (a[r0twxQz] >= yvK4njDB[r0twxQz - length]) {
                    a[r0twxQz] = a[r0twxQz] - yvK4njDB[r0twxQz - length] + (826 - 778);
                    p8BWrzy = (669 - 669);
                }
                else {
                    p8BWrzy = (746 - 745);
                    a[r0twxQz] = a[r0twxQz] + (794 - 784) - yvK4njDB[r0twxQz - length] + (954 - 906);
                }
            }
            {
                r0twxQz = 658 - (1366 - 709);
                while (r0twxQz >= (150 - 150)) {
                    if (p8BWrzy)
                        a[r0twxQz]--;
                    if (a[r0twxQz] < (670 - 622)) {
                        a[r0twxQz] = a[r0twxQz] + (214 - 204);
                        p8BWrzy = (767 - 766);
                    }
                    else
                        p8BWrzy = (294 - 294);
                    r0twxQz = r0twxQz - (321 - 320);
                }
            }
            {
                r0twxQz = (922 - 922);
                while (r0twxQz < aQS0g2MIGD) {
                    if (a[r0twxQz] != (80 - 32)) {
                        s = r0twxQz;
                        break;
                    }
                    r0twxQz = r0twxQz + 1;
                }
            }
            if (s > (1017 - 817))
                ;
            else {
                r0twxQz = s;
                for (; r0twxQz < aQS0g2MIGD;) {
                    printf ("%c", a[r0twxQz]);
                    r0twxQz = r0twxQz + 1;
                }
            }
            i = i + 1;
        }
    }
}

