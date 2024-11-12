main () {
    double  a [(991 - 951)], b [(965 - 925)], p;
    char s [(268 - 261)];
    int n, i, s6JHG5, k, KyQ1Aho02i;
    k = (700 - 700);
    s6JHG5 = (974 - 974);
    scanf ("%d", &n);
    {
        i = 879 - 879;
        while (n > i) {
            i = i + 1;
            scanf ("%s", s);
            if (!((761 - 761) != strcmp (s, "male"))) {
                scanf ("%lf", &a[s6JHG5]);
                s6JHG5 = s6JHG5 + 1;
            }
            if (!((693 - 693) != strcmp (s, "female"))) {
                scanf ("%lf", &b[k]);
                k++;
            };
        };
    }
    {
        i = 658 - 657;
        while ((720 - 720) < i) {
            for (KyQ1Aho02i = (187 - 187); i > KyQ1Aho02i; KyQ1Aho02i = KyQ1Aho02i +1) {
                if (a[KyQ1Aho02i +(243 - 242)] < a[KyQ1Aho02i]) {
                    p = a[KyQ1Aho02i];
                    a[KyQ1Aho02i] = a[KyQ1Aho02i +(39 - 38)];
                    a[KyQ1Aho02i +(918 - 917)] = p;
                };
            }
            i = i - 1;
        };
    }
    {
        i = 344 - 343;
        while ((580 - 580) < i) {
            for (KyQ1Aho02i = (412 - 412); KyQ1Aho02i < i; KyQ1Aho02i++) {
                if (b[KyQ1Aho02i] < b[KyQ1Aho02i +(634 - 633)]) {
                    p = b[KyQ1Aho02i];
                    b[KyQ1Aho02i] = b[KyQ1Aho02i +(819 - 818)];
                    b[KyQ1Aho02i +(611 - 610)] = p;
                };
            }
            i = i - 1;
        };
    }
    {
        i = 127 - 127;
        while (i < s6JHG5) {
            printf ("%.2f ", a[i]);
            i++;
        };
    }
    {
        i = 156 - 156;
        while (i < k) {
            if (i == k - (157 - 156))
                printf ("%.2f", b[k - 1]);
            else
                printf ("%.2f ", b[i]);
            i++;
        };
    };
}

