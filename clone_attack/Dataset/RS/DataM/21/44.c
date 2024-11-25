void  main () {
    float HzekjqGr;
    float frapY0b;
    float d;
    HzekjqGr = 0;
    int UmCXaUne;
    int mQMmPnWiedE;
    int lW0L4E2P;
    int heSicNsfgko2;
    int Dyfg1ku [3];
    int nx5nDK [300];
    UmCXaUne = 0;
    mQMmPnWiedE = 0;
    scanf ("%d", &lW0L4E2P);
    {
        heSicNsfgko2 = 1;
        while (heSicNsfgko2 <= lW0L4E2P) {
            scanf ("%d", &nx5nDK[heSicNsfgko2]);
            mQMmPnWiedE = mQMmPnWiedE + nx5nDK[heSicNsfgko2];
            heSicNsfgko2++;
        };
    }
    frapY0b = (float) (mQMmPnWiedE) / (float) (lW0L4E2P);
    {
        heSicNsfgko2 = 1;
        while (heSicNsfgko2 <= lW0L4E2P) {
            d = (float) (nx5nDK [heSicNsfgko2]) -frapY0b;
            if (d < 0)
                d = 0 - d;
            if (d > HzekjqGr) {
                UmCXaUne = 1;
                Dyfg1ku[0] = nx5nDK[heSicNsfgko2];
                Dyfg1ku[1] = 0;
                HzekjqGr = d;
                Dyfg1ku[2] = 0;
            }
            else {
                if (d == HzekjqGr) {
                    Dyfg1ku[UmCXaUne] = nx5nDK[heSicNsfgko2];
                    UmCXaUne++;
                }
                else
                    UmCXaUne = UmCXaUne;
            }
            heSicNsfgko2++;
        };
    }
    printf ("%d", Dyfg1ku[0]);
    if (Dyfg1ku[1] != 0)
        printf (",%d", Dyfg1ku[1]);
}

