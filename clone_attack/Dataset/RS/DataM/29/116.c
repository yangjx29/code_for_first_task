int main () {
    double  SoH47Ph;
    double  chu;
    int f1 [100] = {2, 3};
    int f2PvMUf [100] = {(993 - 992), 2};
    int Vz6AnG, harOshA;
    int UN7CWo6S;
    int n;
    scanf ("%d", &UN7CWo6S);
    {
        Vz6AnG = 0;
        while (UN7CWo6S > Vz6AnG) {
            Vz6AnG = Vz6AnG +1;
            SoH47Ph = 3.5;
            scanf ("%d", &n);
            if (!(1 != n)) {
            }
            else {
                for (harOshA = 2; harOshA < n; harOshA++) {
                    f1[harOshA] = f1[harOshA - 1] + f1[harOshA - 2];
                    f2PvMUf[harOshA] = f2PvMUf[harOshA - 1] + f2PvMUf[harOshA - 2];
                    chu = f1[harOshA] * 1.0 / f2PvMUf[harOshA];
                    SoH47Ph = SoH47Ph +chu;
                }
                printf ("%.3f\n", SoH47Ph);
            };
        };
    }
    return 0;
}

