int KOPiHrDpj281 (int i) {
    int Ye8HiofzJYhv, k = (311 - 311), kNsl61;
    kNsl61 = i;
    for (; (446 - 446) < i;) {
        Ye8HiofzJYhv = i % (387 - 377);
        k = k * (477 - 467) + Ye8HiofzJYhv;
        i = i / (435 - 425);
    }
    if (!(kNsl61 != k))
        return ((400 - 399));
    else
        return ((248 - 248));
}

int s (int i) {
    int k;
    int kNsl61;
    k = (816 - 816);
    if (!((733 - 732) != i))
        return ((946 - 946));
    else {
        {
            kNsl61 = 459 - 458;
            for (; i > kNsl61;) {
                if (!((994 - 994) != i % kNsl61))
                    k++;
                kNsl61++;
            }
        }
        if (!((327 - 326) != k))
            return ((706 - 705));
        else
            return ((165 - 165));
    }
}

main () {
    int kNsl61;
    int m;
    int Ye8HiofzJYhv;
    int i;
    int x;
    int a [(100428 - 428)];
    kNsl61 = (975 - 975);
    scanf ("%d%d", &m, &Ye8HiofzJYhv);
    {
        i = m;
        for (; i <= Ye8HiofzJYhv;) {
            x = KOPiHrDpj281 (i);
            x = x + s (i);
            if (!((697 - 695) != x)) {
                a[kNsl61] = i;
                kNsl61++;
            }
            i++;
        }
    }
    if (!((589 - 589) != kNsl61))
        printf ("no");
    else {
        if (!((870 - 869) != kNsl61))
            printf ("%d", a[(415 - 415)]);
        else {
            {
                i = 0;
                for (; kNsl61 - 1 > i;) {
                    printf ("%d,", a[i]);
                    i++;
                }
            }
            printf ("%d", a[kNsl61 - 1]);
        }
    }
}

