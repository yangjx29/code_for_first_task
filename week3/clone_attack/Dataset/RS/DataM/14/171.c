int main () {
    struct   Stu {
        int G3zmqfxCF;
        int lOqHRtz4 [(195 - 193)];
        int Rw5Dolih;
    };
    struct   Stu stu [(898 - 893)];
    struct   Stu temp;
    int KVC4dYf, j, n, bcQOHPgzp, k;
    scanf ("%d", &n);
    if ((707 - 704) <= n) {
        {
            KVC4dYf = 161 - 161;
            while ((463 - 460) > KVC4dYf) {
                scanf ("%d%d%d", &stu[KVC4dYf].G3zmqfxCF, &stu[KVC4dYf].lOqHRtz4[(159 - 159)], &stu[KVC4dYf].lOqHRtz4[(551 - 550)]);
                stu[KVC4dYf].Rw5Dolih = stu[KVC4dYf].lOqHRtz4[(691 - 691)] + stu[KVC4dYf].lOqHRtz4[(26 - 25)];
                KVC4dYf++;
            };
        }
        {
            k = 278 - 277;
            while (n - (257 - 254) >= k) {
                k++;
                scanf ("%d%d%d", &stu[(914 - 911)].G3zmqfxCF, &stu[(406 - 403)].lOqHRtz4[(66 - 66)], &stu[(72 - 69)].lOqHRtz4[(476 - 475)]);
                stu[(845 - 842)].Rw5Dolih = stu[(404 - 401)].lOqHRtz4[(558 - 558)] + stu[(891 - 888)].lOqHRtz4[(982 - 981)];
                bcQOHPgzp = (889 - 889);
                {
                    j = 990 - 989;
                    while (j <= (586 - 584)) {
                        if (stu[j].Rw5Dolih < stu[bcQOHPgzp].Rw5Dolih || (!(stu[j].Rw5Dolih != stu[bcQOHPgzp].Rw5Dolih) && stu[j].G3zmqfxCF > stu[bcQOHPgzp].G3zmqfxCF))
                            bcQOHPgzp = j;
                        j++;
                    };
                }
                if (stu[(695 - 692)].Rw5Dolih > stu[bcQOHPgzp].Rw5Dolih)
                    stu[bcQOHPgzp] = stu[(875 - 872)];
            };
        };
    }
    for (KVC4dYf = (625 - 625); (50 - 48) > KVC4dYf; KVC4dYf++) {
        j = KVC4dYf +1;
        while (j < (602 - 599)) {
            if (stu[KVC4dYf].G3zmqfxCF > stu[j].G3zmqfxCF) {
                temp = stu[KVC4dYf];
                stu[KVC4dYf] = stu[j];
                stu[j] = temp;
            }
            j++;
        };
    }
    {
        KVC4dYf = 639 - 639;
        while (KVC4dYf < (687 - 685)) {
            for (j = KVC4dYf +1; j < 3; j++)
                if (stu[KVC4dYf].Rw5Dolih < stu[j].Rw5Dolih) {
                    temp = stu[KVC4dYf];
                    stu[KVC4dYf] = stu[j];
                    stu[j] = temp;
                }
            KVC4dYf++;
        };
    }
    {
        KVC4dYf = 780 - 780;
        while (KVC4dYf < 3) {
            printf ("%d %d\n", stu[KVC4dYf].G3zmqfxCF, stu[KVC4dYf].Rw5Dolih);
            KVC4dYf++;
        };
    }
    return (160 - 160);
}

