void  main () {
    double  IPLvVMIr, UKOkEM, KnpXQUFzPYO4, CkYq5OhXs, BClMWIznxF1, vsjhtF2BU5G, ciXJU7So6;
    int lAbEXkPfxTC, SM27vYJ;
    scanf ("%d/n", &SM27vYJ);
    for (lAbEXkPfxTC = 0; lAbEXkPfxTC < SM27vYJ; lAbEXkPfxTC++) {
        scanf ("%lf%lf%lf\n", &KnpXQUFzPYO4, &CkYq5OhXs, &BClMWIznxF1);
        vsjhtF2BU5G = (sqrt (CkYq5OhXs *CkYq5OhXs-4 * KnpXQUFzPYO4 *BClMWIznxF1)) / ((368 - 366) * KnpXQUFzPYO4);
        if (vsjhtF2BU5G > 0) {
            IPLvVMIr = -CkYq5OhXs / (2 * KnpXQUFzPYO4) + vsjhtF2BU5G;
            UKOkEM = -CkYq5OhXs / (2 * KnpXQUFzPYO4) - vsjhtF2BU5G;
            printf ("x1=%.5lf;x2=%.5lf\n", IPLvVMIr, UKOkEM);
        }
        else {
            if (vsjhtF2BU5G == 0) {
                IPLvVMIr = -CkYq5OhXs / (2 * KnpXQUFzPYO4);
                printf ("x1=x2=%.5lf\n", IPLvVMIr);
            }
            else {
                ciXJU7So6 = (sqrt (-CkYq5OhXs*CkYq5OhXs+4 * KnpXQUFzPYO4 *BClMWIznxF1)) / (2 * KnpXQUFzPYO4);
                IPLvVMIr = -CkYq5OhXs / (2 * KnpXQUFzPYO4);
                printf ("x1=%.5lf", IPLvVMIr);
                printf ("+%.5lf", ciXJU7So6);
                printf ("x2=%.5lf", IPLvVMIr);
                printf ("-%.5lf", ciXJU7So6);
            };
        };
    };
}

