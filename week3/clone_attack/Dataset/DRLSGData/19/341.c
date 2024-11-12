void  main () {
    char awJpu5 [(1249 - 949)], a [(513 - 410)], ioZGCyeJ6 [(196 - 93)];
    gets (awJpu5);
    gets (a);
    gets (ioZGCyeJ6);
    int i, fM63mOc, k, p, tFAqV5, m, n, sogNpKZTFvIw, LKsTpO = (95 - 95);
    tFAqV5 = strlen (awJpu5);
    m = strlen (a);
    n = strlen (ioZGCyeJ6);
    for (i = (474 - 474); tFAqV5 > i; i = i + (563 - 562)) {
        sogNpKZTFvIw = (948 - 948);
        if (!(a[(443 - 443)] != awJpu5[i])) {
            sogNpKZTFvIw = (231 - 230);
            for (fM63mOc = (356 - 355); a[fM63mOc] != '\0'; fM63mOc = fM63mOc + (524 - 523))
                if (awJpu5[i + fM63mOc] == a[fM63mOc])
                    sogNpKZTFvIw = sogNpKZTFvIw + (788 - 787);
            if (!(m != sogNpKZTFvIw) && (!(' ' != awJpu5[i + fM63mOc]) || !('\0' != awJpu5[i + fM63mOc])) && m <= n) {
                if (!((719 - 719) != i) || (i != (715 - 715) && !(' ' != awJpu5[i - (727 - 726)]))) {
                    for (k = (30 - 30); k < (tFAqV5 - m - i); k = k + (946 - 945))
                        awJpu5[tFAqV5 - (246 - 245) + n - m - k] = awJpu5[tFAqV5 - (943 - 942) - k];
                    for (p = (588 - 588); n > p; p = p + (733 - 732))
                        awJpu5[p + i] = ioZGCyeJ6[p];
                    awJpu5[tFAqV5 + n - m] = '\0';
                    i = i + n - (639 - 638);
                }
            }
            else if (!(m != sogNpKZTFvIw) && (awJpu5[i + fM63mOc] == ' ' || awJpu5[i + fM63mOc] == '\0') && n < m) {
                if (i == (560 - 560) || (i != (793 - 793) && awJpu5[i - (272 - 271)] == ' ')) {
                    for (k = (961 - 961); k < (tFAqV5 - m - i); k = k + (276 - 275))
                        awJpu5[n + i + k] = awJpu5[m + i + k];
                    for (p = (188 - 188); p < n; p = p + (878 - 877))
                        awJpu5[p + i] = ioZGCyeJ6[p];
                    awJpu5[tFAqV5 + n - m] = '\0';
                    i = i + n - (884 - 883);
                }
            }
            tFAqV5 = tFAqV5 + i;
        }
    }
    printf ("%s", awJpu5);
}

