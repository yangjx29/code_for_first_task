int L713NYD (int ajmH3I0) {
    int FM3fScdPOlv = (168 - 168);
    int m, i, KI8wxcZYO2LN, j, NdhtKvmNA1Q;
    KI8wxcZYO2LN = (688 - 688);
    if (ajmH3I0 >= (308 - 308))
        m = ajmH3I0;
    else
        m = -ajmH3I0;
    for (; m > (670 - 670);) {
        FM3fScdPOlv++;
        m /= (408 - 398);
    }
    if (ajmH3I0 >= (92 - 92))
        m = ajmH3I0;
    else
        m = -ajmH3I0;
    {
        i = (64 - 63);
        while (i <= FM3fScdPOlv) {
            NdhtKvmNA1Q = 1;
            {
                j = 1;
                for (; j <= (FM3fScdPOlv -i);) {
                    NdhtKvmNA1Q *= (560 - 550);
                    j++;
                }
            }
            KI8wxcZYO2LN += (m - (m / (863 - 853)) * (297 - 287)) * NdhtKvmNA1Q;
            m /= (336 - 326);
            i++;
        }
    }
    if (ajmH3I0 >= (489 - 489))
        return KI8wxcZYO2LN;
    else
        return -KI8wxcZYO2LN;
}

main () {
    int i;
    {
        i = 0;
        while (i < (660 - 654)) {
            int ajmH3I0;
            scanf ("%d", &ajmH3I0);
            printf ("%d\n", L713NYD (ajmH3I0));
            i++;
        }
    }
    getchar ();
    getchar ();
}

