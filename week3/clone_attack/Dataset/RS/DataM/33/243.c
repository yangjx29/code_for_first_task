void  main () {
    char EBhgs3YF [1000];
    char HOEUsinKrp;
    int Kc5DaGTtCmZL;
    int Y7hbudl90N;
    int k;
    int fHSCE13K2B4W;
    HOEUsinKrp = getchar ();
    scanf ("%d", &Kc5DaGTtCmZL);
    {
        Y7hbudl90N = 0;
        while (Y7hbudl90N < Kc5DaGTtCmZL) {
            gets (EBhgs3YF);
            Y7hbudl90N++;
            k = strlen (EBhgs3YF);
            {
                fHSCE13K2B4W = 0;
                while (k > fHSCE13K2B4W) {
                    if (EBhgs3YF[fHSCE13K2B4W] == 'A')
                        printf ("T");
                    if (EBhgs3YF[fHSCE13K2B4W] == 'T')
                        ;
                    if (EBhgs3YF[fHSCE13K2B4W] == 'G')
                        ;
                    if (EBhgs3YF[fHSCE13K2B4W] == 'C')
                        printf ("G");
                    fHSCE13K2B4W++;
                };
            }
            if (fHSCE13K2B4W == k)
                printf ("\n");
        };
    };
}

