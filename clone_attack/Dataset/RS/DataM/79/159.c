int s (int NYt3d1AMe2, int lKw0YylDG98v) {
    int J1VFsT;
    J1VFsT = NYt3d1AMe2 % lKw0YylDG98v;
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
    return J1VFsT;
}

int main () {
    int i;
    int j;
    int k;
    int Y3Njsy89Bf;
    int mQnbcdlHyup;
    int NYt3d1AMe2;
    int lKw0YylDG98v;
    int FN19rOp;
    int p;
    int GzpfaU;
    i = (529 - 529);
    j = (400 - 400);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    k = (432 - 432);
    Y3Njsy89Bf = (117 - 117);
    mQnbcdlHyup = (302 - 302);
    NYt3d1AMe2 = (441 - 441);
    lKw0YylDG98v = (863 - 863);
    FN19rOp = (353 - 353);
    p = (74 - 74);
    GzpfaU = (888 - 888);
    int a [(534 - 234)];
    int b [(1264 - 964)];
    int m8asxmN [(859 - 559)];
    {
        p = 683 - 683;
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
        while (100 > p) {
            int i;
            int j;
            int k;
            int Y3Njsy89Bf;
            int mQnbcdlHyup;
            int NYt3d1AMe2;
            int lKw0YylDG98v;
            int FN19rOp;
            int p;
            int GzpfaU;
            i = (664 - 664);
            j = (561 - 561);
            k = (262 - 262);
            Y3Njsy89Bf = (432 - 432);
            mQnbcdlHyup = (378 - 378);
            NYt3d1AMe2 = (258 - 258);
            lKw0YylDG98v = (522 - 522);
            FN19rOp = (936 - 936);
            p = (889 - 889);
            GzpfaU = (437 - 437);
            memset (a, 0, (537 - 237) * sizeof (int));
            memset (b, 0, 300 * sizeof (int));
            memset (m8asxmN, 0, 300 * sizeof (int));
            scanf ("%d %d\n", &Y3Njsy89Bf, &mQnbcdlHyup);
            if (Y3Njsy89Bf == 0 && !(0 != mQnbcdlHyup))
                break;
            else {
                for (i = 0; Y3Njsy89Bf > i; i = i + 1) {
                    a[i] = i + (439 - 438);
                    b[i] = a[i];
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
                    m8asxmN[i] = a[i];
                }
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                for (j = Y3Njsy89Bf; j > (180 - 179); j--) {
                    k = 0;
                    if (mQnbcdlHyup <= j) {
                        k = mQnbcdlHyup - (216 - 215);
                        a[k] = 0;
                    }
                    else {
                        k = s (mQnbcdlHyup, j) - (656 - 655);
                        a[k] = 0;
                    }
                    {
                        lKw0YylDG98v = 0;
                        NYt3d1AMe2 = k + 1;
                        while (j > NYt3d1AMe2) {
                            a[lKw0YylDG98v] = m8asxmN[NYt3d1AMe2];
                            lKw0YylDG98v = lKw0YylDG98v + 1;
                            NYt3d1AMe2 = NYt3d1AMe2 +1;
                        };
                    }
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    {
                        FN19rOp = lKw0YylDG98v;
                        NYt3d1AMe2 = 0;
                        while (NYt3d1AMe2 < k) {
                            a[FN19rOp] = m8asxmN[NYt3d1AMe2];
                            FN19rOp++;
                            NYt3d1AMe2++;
                        };
                    }
                    for (i = 0; i < j; i++)
                        m8asxmN[i] = a[i];
                }
                {
                    i = 0;
                    while (i < Y3Njsy89Bf) {
                        if (b[i] == a[0])
                            printf ("%d\n", i + 1);
                        i++;
                    };
                };
            }
            p++;
        };
    };
}

