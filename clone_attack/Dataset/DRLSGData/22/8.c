void  main () {
    char WPXyglT3 [(1167 - 667)];
    gets (WPXyglT3);
    int max1;
    int PGOcqxCufgnw;
    int r;
    int i54NtJq2EAp7 [(862 - 662)] = {(769 - 769)};
    int msJXxiHf;
    int DBpKZyo0Ins6;
    int ECGYxK7V;
    int u4Genzl2f;
    int z412C0La;
    u4Genzl2f = strlen (WPXyglT3);
    r = (741 - 741);
    for (z412C0La = (327 - 327); u4Genzl2f > z412C0La; z412C0La = z412C0La + (982 - 981)) {
        if (!(',' != WPXyglT3[z412C0La]))
            r = r + 1;
        else
            i54NtJq2EAp7[r] = i54NtJq2EAp7[r] * (878 - 868) + WPXyglT3[z412C0La] - '0';
    }
    max1 = (863 - 863);
    PGOcqxCufgnw = (720 - 720);
    for (msJXxiHf = (121 - 121); msJXxiHf <= r; msJXxiHf = msJXxiHf + 1) {
        if (i54NtJq2EAp7[msJXxiHf] > max1) {
            PGOcqxCufgnw = max1;
            max1 = i54NtJq2EAp7[msJXxiHf];
        }
        if (i54NtJq2EAp7[msJXxiHf] < max1 && i54NtJq2EAp7[msJXxiHf] > PGOcqxCufgnw)
            PGOcqxCufgnw = i54NtJq2EAp7[msJXxiHf];
    }
    for (z412C0La = (111 - 110); z412C0La <= r; z412C0La = z412C0La + 1) {
        if (i54NtJq2EAp7[z412C0La] != i54NtJq2EAp7[0])
            break;
    }
    if (!(r + (178 - 177) != z412C0La))
        DBpKZyo0Ins6 = 1;
    if (r == 0)
        ;
    else {
        if (DBpKZyo0Ins6 == 1)
            ;
        else
            printf ("%d", PGOcqxCufgnw);
    }
}

