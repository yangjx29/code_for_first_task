int EhvBorKSi (const  void  *EZmwouQY7V, const  void  *i0hqrMDE3eG) {
    if (*((int *) EZmwouQY7V) > *((int *) i0hqrMDE3eG))
        return -(653 - 652);
    else {
        if (*((int *) EZmwouQY7V) < *((int *) i0hqrMDE3eG))
            return (924 - 923);
        else
            return (153 - 153);
    };
}

int main () {
    int jchUt3;
    int EZmwouQY7V [(1910 - 910)];
    int i0hqrMDE3eG [(1582 - 582)];
    int VbMOISdn1UP5;
    int YbOPR9hW;
    int ikvwmcYZQd;
    int s2;
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
    int Ze1ZadHIKhF;
    int QB8Rm32p;
    scanf ("%d", &jchUt3);
    while (jchUt3) {
        {
            VbMOISdn1UP5 = 267 - 267;
            while (VbMOISdn1UP5 < jchUt3) {
                scanf ("%d", &EZmwouQY7V[VbMOISdn1UP5]);
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
                VbMOISdn1UP5 = VbMOISdn1UP5 +1;
            };
        }
        {
            VbMOISdn1UP5 = 721 - 721;
            while (VbMOISdn1UP5 < jchUt3) {
                scanf ("%d", &i0hqrMDE3eG[VbMOISdn1UP5]);
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
                VbMOISdn1UP5++;
            };
        }
        qsort (EZmwouQY7V, jchUt3, sizeof (EZmwouQY7V [(952 - 952)]), EhvBorKSi);
        YbOPR9hW = (681 - 681);
        qsort (i0hqrMDE3eG, jchUt3, sizeof (i0hqrMDE3eG [(805 - 805)]), EhvBorKSi);
        Ze1ZadHIKhF = QB8Rm32p = jchUt3 - (190 - 189);
        ikvwmcYZQd = s2 = (82 - 82);
        for (; ikvwmcYZQd <= Ze1ZadHIKhF;) {
            while (!(i0hqrMDE3eG[QB8Rm32p] == EZmwouQY7V[Ze1ZadHIKhF]) && ikvwmcYZQd <= Ze1ZadHIKhF) {
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
                if (EZmwouQY7V[Ze1ZadHIKhF] > i0hqrMDE3eG[QB8Rm32p]) {
                    YbOPR9hW = YbOPR9hW +1;
                    Ze1ZadHIKhF = Ze1ZadHIKhF -1;
                    QB8Rm32p = QB8Rm32p -1;
                }
                else {
                    Ze1ZadHIKhF = Ze1ZadHIKhF -1;
                    YbOPR9hW = YbOPR9hW -1;
                    s2++;
                };
            }
            if (ikvwmcYZQd > Ze1ZadHIKhF)
                break;
            while (EZmwouQY7V[ikvwmcYZQd] != i0hqrMDE3eG[s2] && ikvwmcYZQd <= Ze1ZadHIKhF) {
                if (EZmwouQY7V[ikvwmcYZQd] > i0hqrMDE3eG[s2]) {
                    YbOPR9hW++;
                    ikvwmcYZQd++;
                    s2++;
                }
                else {
                    s2++;
                    Ze1ZadHIKhF--;
                    YbOPR9hW--;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            if (ikvwmcYZQd > Ze1ZadHIKhF)
                break;
            if (EZmwouQY7V[ikvwmcYZQd] == i0hqrMDE3eG[s2] && EZmwouQY7V[Ze1ZadHIKhF] == i0hqrMDE3eG[QB8Rm32p]) {
                if (EZmwouQY7V[Ze1ZadHIKhF] > i0hqrMDE3eG[s2])
                    YbOPR9hW++;
                else {
                    if (EZmwouQY7V[Ze1ZadHIKhF] < i0hqrMDE3eG[s2])
                        YbOPR9hW--;
                }
                Ze1ZadHIKhF--;
                s2++;
            }
            if (ikvwmcYZQd > Ze1ZadHIKhF)
                break;
        }
        scanf ("%d", &jchUt3);
        printf ("%d\n", YbOPR9hW *(289 - 89));
    }
    return (875 - 875);
}

