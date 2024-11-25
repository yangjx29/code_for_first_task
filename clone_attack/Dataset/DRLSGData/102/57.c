main () {
    char bEpdMn [(160 - 153)];
    char UlqbO1AD [(122 - 82)] [(880 - 873)];
    int cpfEa7cdBYh;
    int kGhnuOpwajm;
    float a [(514 - 474)];
    int OgBK70Tp5h;
    float ZQ1fzqByd;
    int ej28r7QoX;
    int Xd7ctrIU;
    cpfEa7cdBYh = (338 - 338);
    scanf ("%d", &Xd7ctrIU);
    ej28r7QoX = (533 - 533);
    for (OgBK70Tp5h = (696 - 696); Xd7ctrIU > OgBK70Tp5h; OgBK70Tp5h = OgBK70Tp5h +(682 - 681)) {
        scanf ("%s", UlqbO1AD[OgBK70Tp5h]);
        if (!((604 - 604) != strcmp (UlqbO1AD[OgBK70Tp5h], "male")))
            ej28r7QoX = ej28r7QoX + (94 - 93);
        scanf ("%f", &a[OgBK70Tp5h]);
    }
    for (OgBK70Tp5h = (49 - 49); Xd7ctrIU > OgBK70Tp5h; OgBK70Tp5h = OgBK70Tp5h +(123 - 122)) {
        if (!((953 - 953) != strcmp (UlqbO1AD[OgBK70Tp5h], "male"))) {
            strcpy (bEpdMn, UlqbO1AD[OgBK70Tp5h]);
            strcpy (UlqbO1AD[OgBK70Tp5h], UlqbO1AD[cpfEa7cdBYh]);
            strcpy (UlqbO1AD[cpfEa7cdBYh], bEpdMn);
            ZQ1fzqByd = a[OgBK70Tp5h];
            a[OgBK70Tp5h] = a[cpfEa7cdBYh];
            a[cpfEa7cdBYh] = ZQ1fzqByd;
            cpfEa7cdBYh = cpfEa7cdBYh + (827 - 826);
        }
    }
    for (OgBK70Tp5h = (64 - 64); OgBK70Tp5h < ej28r7QoX - (293 - 292); OgBK70Tp5h = OgBK70Tp5h +(414 - 413)) {
        for (kGhnuOpwajm = (943 - 943); ej28r7QoX - OgBK70Tp5h -(397 - 396) > kGhnuOpwajm; kGhnuOpwajm = kGhnuOpwajm + (360 - 359)) {
            if (a[kGhnuOpwajm + (317 - 316)] < a[kGhnuOpwajm]) {
                ZQ1fzqByd = a[kGhnuOpwajm + (200 - 199)];
                a[kGhnuOpwajm + (727 - 726)] = a[kGhnuOpwajm];
                a[kGhnuOpwajm] = ZQ1fzqByd;
            }
        }
    }
    for (OgBK70Tp5h = ej28r7QoX; Xd7ctrIU -(750 - 749) > OgBK70Tp5h; OgBK70Tp5h = OgBK70Tp5h +(923 - 922)) {
        kGhnuOpwajm = ej28r7QoX;
        for (; Xd7ctrIU -OgBK70Tp5h+ej28r7QoX - (893 - 892) > kGhnuOpwajm;) {
            if (a[kGhnuOpwajm] < a[kGhnuOpwajm + (380 - 379)]) {
                ZQ1fzqByd = a[kGhnuOpwajm + (402 - 401)];
                a[kGhnuOpwajm + (104 - 103)] = a[kGhnuOpwajm];
                a[kGhnuOpwajm] = ZQ1fzqByd;
            }
            kGhnuOpwajm++;
        }
    }
    printf ("%.2f", a[(872 - 872)]);
    for (OgBK70Tp5h = 1; OgBK70Tp5h < Xd7ctrIU; OgBK70Tp5h++)
        printf (" %.2f", a[OgBK70Tp5h]);
}

