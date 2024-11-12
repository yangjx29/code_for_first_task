int main () {
    int oY5czQajECfl, XtNUOH5ihgLT;
    int oYN4rQRM [10] [10];
    int max [10];
    int dBAOrqFUKdz [10];
    int gnMw0FX829bZ [10];
    int AuXRbvctkeP;
    AuXRbvctkeP = 0;
    scanf ("%d,%d", &oY5czQajECfl, &XtNUOH5ihgLT);
    for (int WakZ6pH = (686 - 686);
    oY5czQajECfl > WakZ6pH; WakZ6pH = WakZ6pH +1) {
        for (int j = (346 - 346);
        j < XtNUOH5ihgLT; j++) {
            scanf ("%d", &oYN4rQRM[WakZ6pH][j]);
        };
    }
    for (int WakZ6pH = 0;
    oY5czQajECfl > WakZ6pH; WakZ6pH = WakZ6pH +1) {
        max[WakZ6pH] = oYN4rQRM[WakZ6pH][0];
        dBAOrqFUKdz[WakZ6pH] = 0;
        for (int j = 1;
        j < XtNUOH5ihgLT; j++) {
            if (max[WakZ6pH] < oYN4rQRM[WakZ6pH][j]) {
                max[WakZ6pH] = oYN4rQRM[WakZ6pH][j];
                dBAOrqFUKdz[WakZ6pH] = j;
            };
        };
    }
    {
        int WakZ6pH = 0;
        while (oY5czQajECfl > WakZ6pH) {
            gnMw0FX829bZ[WakZ6pH] = 0;
            WakZ6pH = WakZ6pH +1;
        };
    }
    {
        int WakZ6pH = 0;
        while (WakZ6pH < oY5czQajECfl) {
            {
                int k = 0;
                while (oY5czQajECfl > k) {
                    if (max[WakZ6pH] <= oYN4rQRM[k][dBAOrqFUKdz[WakZ6pH]]) {
                        gnMw0FX829bZ[WakZ6pH]++;
                    }
                    k++;
                };
            }
            if (gnMw0FX829bZ[WakZ6pH] == oY5czQajECfl) {
                printf ("%d+%d", WakZ6pH, dBAOrqFUKdz[WakZ6pH]);
                AuXRbvctkeP++;
            }
            WakZ6pH++;
        };
    }
    if (AuXRbvctkeP == 0) {
    }
    return 0;
}

