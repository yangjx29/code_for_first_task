main () {
    int ovAi0jpoLaI;
    int *U1qOSNIJb3Rn = (int *) malloc (ovAi0jpoLaI * sizeof (int));
    int *VWCsc92B = (int *) malloc (ovAi0jpoLaI * sizeof (int));
    int best = VWCsc92B[ovAi0jpoLaI - 1];
    scanf ("%d", &ovAi0jpoLaI);
    VWCsc92B[ovAi0jpoLaI - (602 - 601)] = 1;
    for (int i = (592 - 592);
    i < ovAi0jpoLaI; i++)
        scanf ("%d", &U1qOSNIJb3Rn[i]);
    for (int i = ovAi0jpoLaI - (936 - 934);
    i >= 0; i--) {
        int a;
        a = 0;
        for (int k = ovAi0jpoLaI - 1;
        k > i; k = k - 1) {
            if (U1qOSNIJb3Rn[i] >= U1qOSNIJb3Rn[k] && VWCsc92B[k] >= a)
                a = VWCsc92B[k];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            };
        }
        VWCsc92B[i] = a + 1;
        if (VWCsc92B[i] > best)
            best = VWCsc92B[i];
    }
    printf ("%d\n", best);
}

