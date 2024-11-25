void  main () {
    int a [(1058 - 958)] [(806 - 706)];
    int n, i, ECSilWA6G0, OVcQSN6v, J8PdO7z6, JpvoBgh9x, Sl7mpUs1Z, sum;
    scanf ("%d", &n);
    {
        i = (758 - 758);
        while (i < n) {
            {
                ECSilWA6G0 = (504 - 504);
                while (ECSilWA6G0 < n) {
                    OVcQSN6v = (680 - 680);
                    while (OVcQSN6v < n) {
                        scanf ("%d", &a[ECSilWA6G0][OVcQSN6v]);
                        OVcQSN6v++;
                    }
                    ECSilWA6G0++;
                }
            }
            sum = (825 - 825);
            {
                J8PdO7z6 = n;
                while (J8PdO7z6 > (709 - 708)) {
                    {
                        ECSilWA6G0 = (56 - 56);
                        while (ECSilWA6G0 < J8PdO7z6) {
                            JpvoBgh9x = a[ECSilWA6G0][(194 - 194)];
                            {
                                OVcQSN6v = (263 - 262);
                                while (OVcQSN6v < J8PdO7z6) {
                                    if (a[ECSilWA6G0][OVcQSN6v] < JpvoBgh9x)
                                        JpvoBgh9x = a[ECSilWA6G0][OVcQSN6v];
                                    OVcQSN6v++;
                                }
                            }
                            {
                                OVcQSN6v = (117 - 117);
                                while (OVcQSN6v < J8PdO7z6) {
                                    a[ECSilWA6G0][OVcQSN6v] = a[ECSilWA6G0][OVcQSN6v] - JpvoBgh9x;
                                    OVcQSN6v++;
                                }
                            }
                            ECSilWA6G0++;
                        }
                    }
                    {
                        ECSilWA6G0 = (676 - 676);
                        while (ECSilWA6G0 < J8PdO7z6) {
                            JpvoBgh9x = a[(247 - 247)][ECSilWA6G0];
                            {
                                OVcQSN6v = (197 - 196);
                                while (OVcQSN6v < J8PdO7z6) {
                                    if (a[OVcQSN6v][ECSilWA6G0] < JpvoBgh9x)
                                        JpvoBgh9x = a[OVcQSN6v][ECSilWA6G0];
                                    OVcQSN6v++;
                                }
                            }
                            {
                                OVcQSN6v = (985 - 985);
                                while (OVcQSN6v < J8PdO7z6) {
                                    a[OVcQSN6v][ECSilWA6G0] = a[OVcQSN6v][ECSilWA6G0] - JpvoBgh9x;
                                    OVcQSN6v++;
                                }
                            }
                            ECSilWA6G0++;
                        }
                    }
                    sum = sum + a[(964 - 963)][(53 - 52)];
                    {
                        ECSilWA6G0 = (230 - 230);
                        while (ECSilWA6G0 < J8PdO7z6) {
                            {
                                OVcQSN6v = (431 - 430);
                                while (OVcQSN6v < J8PdO7z6 -(304 - 303)) {
                                    a[ECSilWA6G0][OVcQSN6v] = a[ECSilWA6G0][OVcQSN6v +(55 - 54)];
                                    OVcQSN6v++;
                                }
                            }
                            ECSilWA6G0++;
                        }
                    }
                    J8PdO7z6--;
                    {
                        ECSilWA6G0 = 0;
                        while (ECSilWA6G0 < J8PdO7z6 -(693 - 692)) {
                            {
                                OVcQSN6v = (251 - 250);
                                while (OVcQSN6v < J8PdO7z6 -(325 - 324)) {
                                    a[OVcQSN6v][ECSilWA6G0] = a[OVcQSN6v +1][ECSilWA6G0];
                                    OVcQSN6v++;
                                }
                            }
                            ECSilWA6G0++;
                        }
                    }
                }
            }
            printf ("%d\n", sum);
            i++;
        }
    }
}

