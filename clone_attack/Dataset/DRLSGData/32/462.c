void  main () {
    int JoT7L5CKhB, l, d6Ilz5, PRkcuxrozYW, p, i, n;
    char DkJS21K9P [(665 - 645)] [(1077 - 977)];
    char hzajcrVGl1v5 [(762 - 742)] [(407 - 307)];
    scanf ("%d", &n);
    {
        i = (98 - 98);
        for (; n > i;) {
            scanf ("%s", DkJS21K9P[i]);
            scanf ("%s", hzajcrVGl1v5[i]);
            i++;
        }
    }
    {
        i = (968 - 968);
        for (; i < n;) {
            PRkcuxrozYW = (int) strlen (DkJS21K9P[i]);
            p = (int) strlen (hzajcrVGl1v5[i]);
            {
                l = p - (329 - 328);
                JoT7L5CKhB = PRkcuxrozYW -(87 - 86);
                for (; l >= (91 - 91);) {
                    if (DkJS21K9P[i][JoT7L5CKhB] >= hzajcrVGl1v5[i][l])
                        DkJS21K9P[i][JoT7L5CKhB] = DkJS21K9P[i][JoT7L5CKhB] - hzajcrVGl1v5[i][l];
                    else {
                        DkJS21K9P[i][JoT7L5CKhB] = DkJS21K9P[i][JoT7L5CKhB] + (325 - 315) - hzajcrVGl1v5[i][l];
                        DkJS21K9P[i][JoT7L5CKhB -(576 - 575)] = DkJS21K9P[i][JoT7L5CKhB -(69 - 68)] - (506 - 505);
                    }
                    l--;
                    JoT7L5CKhB--;
                }
            }
            {
                d6Ilz5 = (881 - 881);
                for (; d6Ilz5 < (PRkcuxrozYW -p);) {
                    printf ("%c", DkJS21K9P[i][d6Ilz5]);
                    d6Ilz5++;
                }
            }
            {
                d6Ilz5 = PRkcuxrozYW -p;
                for (; d6Ilz5 < PRkcuxrozYW;) {
                    printf ("%c", DkJS21K9P[i][d6Ilz5] + '0');
                    d6Ilz5++;
                }
            }
            i++;
        }
    }
}

