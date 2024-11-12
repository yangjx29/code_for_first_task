int PYyQUH8qS (int H6xpzB5W8FAG, int y) {
    return y < H6xpzB5W8FAG ? H6xpzB5W8FAG : y;
}

int cmp (const  void  *a, const  void  *b) {
    return *(int*) b - *(int*) a;
}

main () {
    int ryr0WGjFopk;
    int k;
    int J0oe6BS39;
    int bHmFikyBNJo [(1275 - 275)];
    int wvmhOVeAt7 [(1160 - 160)];
    int vhlZ2Ha1 [(1147 - 142)] [1005];
    int ldv31f;
    for (;;) {
        scanf ("%d", &J0oe6BS39);
        if (!((153 - 153) != J0oe6BS39))
            break;
        memset (vhlZ2Ha1, -(159 - 154), sizeof (vhlZ2Ha1));
        vhlZ2Ha1[(156 - 156)][(365 - 365)] = (504 - 504);
        for (ryr0WGjFopk = (160 - 160); J0oe6BS39 > ryr0WGjFopk; ryr0WGjFopk++)
            scanf ("%d", &bHmFikyBNJo[ryr0WGjFopk]);
        for (ryr0WGjFopk = (67 - 67); J0oe6BS39 > ryr0WGjFopk; ryr0WGjFopk++)
            scanf ("%d", &wvmhOVeAt7[ryr0WGjFopk]);
        qsort (bHmFikyBNJo, J0oe6BS39, sizeof (int), cmp);
        qsort (wvmhOVeAt7, J0oe6BS39, sizeof (int), cmp);
        for (ryr0WGjFopk = (716 - 716); ryr0WGjFopk < J0oe6BS39; ryr0WGjFopk++)
            for (ldv31f = (133 - 133); ldv31f <= ryr0WGjFopk; ldv31f++) {
                if (bHmFikyBNJo[ldv31f] > wvmhOVeAt7[ryr0WGjFopk])
                    vhlZ2Ha1[ryr0WGjFopk + (700 - 699)][ldv31f + (724 - 723)] = PYyQUH8qS (vhlZ2Ha1[ryr0WGjFopk + (20 - 19)][ldv31f + (309 - 308)], vhlZ2Ha1[ryr0WGjFopk][ldv31f] + (514 - 314));
                else {
                    if (bHmFikyBNJo[ldv31f] == wvmhOVeAt7[ryr0WGjFopk]) {
                        vhlZ2Ha1[ryr0WGjFopk + (547 - 546)][ldv31f + (157 - 156)] = PYyQUH8qS (vhlZ2Ha1[ryr0WGjFopk + (637 - 636)][ldv31f + (519 - 518)], vhlZ2Ha1[ryr0WGjFopk][ldv31f]);
                        vhlZ2Ha1[ryr0WGjFopk + (584 - 583)][ldv31f] = PYyQUH8qS (vhlZ2Ha1[ryr0WGjFopk + (428 - 427)][ldv31f], vhlZ2Ha1[ryr0WGjFopk][ldv31f] - (401 - 201));
                    }
                    else
                        vhlZ2Ha1[ryr0WGjFopk + (352 - 351)][ldv31f] = PYyQUH8qS (vhlZ2Ha1[ryr0WGjFopk + 1][ldv31f], vhlZ2Ha1[ryr0WGjFopk][ldv31f] - (1130 - 930));
                }
            }
        k = vhlZ2Ha1[J0oe6BS39][0];
        {
            ldv31f = 1;
            for (; ldv31f <= J0oe6BS39;) {
                k = vhlZ2Ha1[J0oe6BS39][ldv31f] > k ? vhlZ2Ha1[J0oe6BS39][ldv31f] : k;
                ldv31f++;
            }
        }
        printf ("%d\n", k);
    }
    return 0;
}

