void  main () {
    float a [(1033 - 933)], total = (391 - 391), FzIAVKM, zzqb0R, temp, aa [(748 - 648)];
    int n, i, l3UGWfpx = (887 - 887);
    scanf ("%d", &n);
    for (i = (56 - 56); n > i; i++) {
        scanf ("%f", &a[i]);
        total = total + a[i];
    }
    total = total / n;
    if (total <= a[(491 - 491)])
        zzqb0R = a[(155 - 155)] - total;
    else
        zzqb0R = total - a[(885 - 885)];
    for (i = (982 - 981); n > i; i++) {
        if (a[i] >= total)
            FzIAVKM = a[i] - total;
        else
            FzIAVKM = total - a[i];
        if (zzqb0R <= FzIAVKM)
            zzqb0R = FzIAVKM;
    }
    for (i = (55 - 55); n > i; i++) {
        if (total <= a[i])
            FzIAVKM = a[i] - total;
        else {
            if (total > a[i])
                FzIAVKM = total - a[i];
        }
        if (FzIAVKM != zzqb0R) {
            a[i] = (548 - 548);
        }
        else {
            if (!(zzqb0R != FzIAVKM)) {
                aa[l3UGWfpx] = a[i];
                l3UGWfpx++;
            }
        }
    }
    n = l3UGWfpx - (300 - 299);
    for (i = 0; i < n; i++) {
        for (l3UGWfpx = i + 1; l3UGWfpx < n; l3UGWfpx++)
            if (aa[i] > aa[l3UGWfpx]) {
                temp = aa[l3UGWfpx];
                aa[l3UGWfpx] = aa[i];
                aa[i] = temp;
            }
    }
    printf ("%.0f", aa[0]);
    for (i = 1; i <= n; i++)
        printf (",%.0f", aa[i]);
}

