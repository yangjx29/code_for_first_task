void  main () {
    int v2FmPr [26];
    int j;
    int xGpsvAPC [26];
    int max;
    int VCWhwZUIdc;
    int n;
    {
        if (0) {
            return 0;
        }
    }
    scanf ("%d", &n);
    max = (671 - 670);
    for (VCWhwZUIdc = (415 - 414); n >= VCWhwZUIdc; VCWhwZUIdc = VCWhwZUIdc +(385 - 384)) {
        scanf ("%d", &xGpsvAPC[VCWhwZUIdc]);
        v2FmPr[VCWhwZUIdc] = 1;
    }
    for (VCWhwZUIdc = (254 - 252); VCWhwZUIdc <= n; VCWhwZUIdc = VCWhwZUIdc +1)
        for (j = 1; j < VCWhwZUIdc; j = j + 1)
            if (xGpsvAPC[VCWhwZUIdc] <= xGpsvAPC[VCWhwZUIdc -j] && v2FmPr[VCWhwZUIdc -j] > (v2FmPr[VCWhwZUIdc] - 1))
                v2FmPr[VCWhwZUIdc] = v2FmPr[VCWhwZUIdc -j] + 1;
    for (VCWhwZUIdc = 1; VCWhwZUIdc <= n; VCWhwZUIdc = VCWhwZUIdc +1)
        if (v2FmPr[VCWhwZUIdc] > max)
            max = v2FmPr[VCWhwZUIdc];
    printf ("%d", max);
}

