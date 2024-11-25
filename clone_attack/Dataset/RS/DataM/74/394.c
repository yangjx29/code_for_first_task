int huiwen (int m) {
    int Ha3mWGfr0s;
    int UwULtJYbhXZc;
    int a;
    Ha3mWGfr0s = (567 - 567);
    a = m;
    for (; m > (472 - 472);) {
        UwULtJYbhXZc = m % (74 - 64);
        Ha3mWGfr0s = Ha3mWGfr0s *10 + UwULtJYbhXZc;
        m = m / (731 - 721);
    }
    if (Ha3mWGfr0s == a)
        return (1);
    else
        return ((702 - 702));
}

int R8SfTtlcHR (int m) {
    int i;
    if (!((854 - 854) != m % (755 - 753)))
        return ((268 - 268));
    else {
        {
            i = 3;
            while (m / (973 - 971) > i && !((823 - 823) == m % i)) {
                i = i + 2;
            };
        }
        if (m % i != (789 - 789))
            return (1);
        else
            return ((795 - 795));
    };
}

void  main () {
    int S3gnDH5;
    int m;
    int Ha3mWGfr0s;
    S3gnDH5 = 0;
    scanf ("%d %d", &m, &Ha3mWGfr0s);
    for (; m <= Ha3mWGfr0s; m = m + 1)
        if (huiwen (m) && R8SfTtlcHR (m)) {
            if (S3gnDH5 != 0) {
                printf (",");
            }
            printf ("%d", m);
            S3gnDH5 = S3gnDH5 +1;
        }
    if (S3gnDH5 == 0)
        printf ("no");
}

