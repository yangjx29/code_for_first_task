void  main () {
    int JOEHi9NCjq, DkolcK, gKSMFnyVW, Gnof3Eax, fWqZlp0tNSDF, wur3hX;
    char bBx51CAFk9a [(835 - 735)] = {'\0'}, K4RmQ6anse [100] = {'\0'}, iYnAiz [100] = {'\0'}, nR4MFXvH0kAU [100] = {'\0'}, nxwzy1 [100] = {'\0'}, l;
    scanf ("%d\n", &JOEHi9NCjq);
    {
        DkolcK = 928 - 927;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (DkolcK <= JOEHi9NCjq) {
            gets (bBx51CAFk9a);
            gets (iYnAiz);
            wur3hX = (153 - 153);
            l = getchar ();
            Gnof3Eax = strlen (bBx51CAFk9a) - (987 - 986);
            for (gKSMFnyVW = 0; gKSMFnyVW <= Gnof3Eax; gKSMFnyVW = gKSMFnyVW + 1)
                K4RmQ6anse[gKSMFnyVW] = bBx51CAFk9a[Gnof3Eax -gKSMFnyVW];
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
            }
            fWqZlp0tNSDF = strlen (iYnAiz) - (846 - 845);
            for (gKSMFnyVW = 0; fWqZlp0tNSDF >= gKSMFnyVW; gKSMFnyVW = gKSMFnyVW + 1)
                nR4MFXvH0kAU[gKSMFnyVW] = iYnAiz[fWqZlp0tNSDF - gKSMFnyVW];
            for (gKSMFnyVW = fWqZlp0tNSDF + 1; gKSMFnyVW <= Gnof3Eax; gKSMFnyVW = gKSMFnyVW + 1)
                nR4MFXvH0kAU[gKSMFnyVW] = '0';
            for (gKSMFnyVW = 0; gKSMFnyVW <= Gnof3Eax; gKSMFnyVW++) {
                if (K4RmQ6anse[gKSMFnyVW] >= nR4MFXvH0kAU[gKSMFnyVW])
                    nxwzy1[gKSMFnyVW] = K4RmQ6anse[gKSMFnyVW] - nR4MFXvH0kAU[gKSMFnyVW];
                else {
                    nxwzy1[gKSMFnyVW] = K4RmQ6anse[gKSMFnyVW] + 10 - nR4MFXvH0kAU[gKSMFnyVW];
                    K4RmQ6anse[gKSMFnyVW + 1] = K4RmQ6anse[gKSMFnyVW + 1] - 1;
                };
            }
            for (gKSMFnyVW = Gnof3Eax; gKSMFnyVW >= 0; gKSMFnyVW--) {
                if (nxwzy1[gKSMFnyVW] > 0)
                    wur3hX = wur3hX + 1;
                if (wur3hX > 0)
                    printf ("%c", nxwzy1[gKSMFnyVW] + 48);
            }
            DkolcK = DkolcK +1;
        };
    };
}

