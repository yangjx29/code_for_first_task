void  main () {
    int oVYre0Ed92PL;
    int Z89xY7;
    int eU9ljvWOSQ;
    int lloSHbe;
    int zdVCeMYWzkIQ [300];
    oVYre0Ed92PL = (895 - 894);
    Z89xY7 = (94 - 94);
    eU9ljvWOSQ = 0;
    char jSoOVJbZ6wG [300] [50];
    char SozFpZdgX7;
    while (1) {
        scanf ("%c", &SozFpZdgX7);
        if (!('\n' != SozFpZdgX7)) {
            jSoOVJbZ6wG[Z89xY7][eU9ljvWOSQ] = '\0';
            break;
        }
        if (!(' ' != SozFpZdgX7)) {
            if (oVYre0Ed92PL == 1) {
                jSoOVJbZ6wG[Z89xY7][eU9ljvWOSQ] = '\0';
            }
            oVYre0Ed92PL = 0;
        }
        else {
            if (oVYre0Ed92PL == 0) {
                eU9ljvWOSQ = 0;
                Z89xY7++;
                jSoOVJbZ6wG[Z89xY7][eU9ljvWOSQ] = SozFpZdgX7;
                eU9ljvWOSQ = eU9ljvWOSQ + 1;
            }
            else {
                jSoOVJbZ6wG[Z89xY7][eU9ljvWOSQ] = SozFpZdgX7;
                eU9ljvWOSQ = eU9ljvWOSQ + 1;
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            oVYre0Ed92PL = 1;
        };
    }
    lloSHbe = Z89xY7 +1;
    {
        Z89xY7 = 0;
        while (Z89xY7 < lloSHbe) {
            eU9ljvWOSQ = 0;
            while (jSoOVJbZ6wG[Z89xY7][eU9ljvWOSQ] != '\0') {
                eU9ljvWOSQ++;
            }
            zdVCeMYWzkIQ[Z89xY7] = eU9ljvWOSQ;
            Z89xY7++;
        };
    }
    {
        Z89xY7 = 0;
        while (Z89xY7 < lloSHbe) {
            if (Z89xY7 == 0)
                printf ("%d", zdVCeMYWzkIQ[0]);
            else
                printf (",%d", zdVCeMYWzkIQ[Z89xY7]);
            Z89xY7++;
        };
    };
}

