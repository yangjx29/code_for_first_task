main () {
    int b [1000];
    char t6JTUi3l2;
    char a [(1984 - 984)];
    int t;
    int q47pU2NOK5t;
    int NceuAmqodMs;
    int sjkQ3moLztZ;
    int KzLlEq;
    int Hv0uxFT6;
    scanf ("%d", &KzLlEq);
    {
        Hv0uxFT6 = 580 - 580;
        while (Hv0uxFT6 < KzLlEq) {
            t = 0;
            memset (a, 0, 1000 * sizeof (char));
            scanf ("%s", a);
            NceuAmqodMs = strlen (a);
            {
                q47pU2NOK5t = 0;
                while (NceuAmqodMs > q47pU2NOK5t) {
                    b[q47pU2NOK5t] = 0;
                    q47pU2NOK5t = q47pU2NOK5t + 1;
                };
            }
            {
                q47pU2NOK5t = 0;
                while (q47pU2NOK5t < NceuAmqodMs) {
                    {
                        sjkQ3moLztZ = 0;
                        while (sjkQ3moLztZ < NceuAmqodMs) {
                            if (a[q47pU2NOK5t] == a[sjkQ3moLztZ])
                                b[sjkQ3moLztZ] = b[sjkQ3moLztZ] + 1;
                            sjkQ3moLztZ = sjkQ3moLztZ + 1;
                        };
                    }
                    q47pU2NOK5t = q47pU2NOK5t + 1;
                };
            }
            for (q47pU2NOK5t = 0; q47pU2NOK5t < NceuAmqodMs; q47pU2NOK5t = q47pU2NOK5t + 1) {
                if (b[q47pU2NOK5t] == 1) {
                    t = 1;
                    printf ("%c\n", a[q47pU2NOK5t]);
                    break;
                };
            }
            Hv0uxFT6 = Hv0uxFT6 +1;
            if (t == 0)
                ;
        };
    };
}

