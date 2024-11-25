int main () {
    char WMf8nIsLa [(431 - 331)];
    char fqLXgeFR [100];
    char x [100];
    char FyCseJImaEg [50] [100];
    int qF9eqIYz;
    int KYgkIZopF;
    int n;
    int FLPWqrKOIsBw;
    int k;
    int dnNeywME;
    int Cyw0vk;
    int URG3uSWUMfzP [100];
    qF9eqIYz = (719 - 719);
    KYgkIZopF = 0;
    gets (WMf8nIsLa);
    int chrHwIBpfyza;
    scanf ("%s", fqLXgeFR);
    scanf ("%s", x);
    {
        FLPWqrKOIsBw = 0;
        while (WMf8nIsLa[FLPWqrKOIsBw] != '\0') {
            if (WMf8nIsLa[FLPWqrKOIsBw] != ' ') {
                FyCseJImaEg[qF9eqIYz][KYgkIZopF] = WMf8nIsLa[FLPWqrKOIsBw];
                KYgkIZopF = KYgkIZopF +1;
            }
            if (WMf8nIsLa[FLPWqrKOIsBw] == ' ' && WMf8nIsLa[FLPWqrKOIsBw +1] != ' ') {
                URG3uSWUMfzP[qF9eqIYz] = FLPWqrKOIsBw;
                FyCseJImaEg[qF9eqIYz][KYgkIZopF] = '\0';
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                KYgkIZopF = 0;
                qF9eqIYz = qF9eqIYz + 1;
            }
            FLPWqrKOIsBw = FLPWqrKOIsBw +1;
        };
    }
    Cyw0vk = strlen (WMf8nIsLa) - URG3uSWUMfzP[qF9eqIYz - 1];
    FyCseJImaEg[qF9eqIYz][Cyw0vk -1] = '\0';
    {
        FLPWqrKOIsBw = 0;
        while (FLPWqrKOIsBw <= qF9eqIYz) {
            if (strcmp (fqLXgeFR, FyCseJImaEg[FLPWqrKOIsBw]) == 0) {
                strcpy (FyCseJImaEg[FLPWqrKOIsBw], x);
            }
            FLPWqrKOIsBw++;
        };
    }
    for (FLPWqrKOIsBw = 0; FLPWqrKOIsBw < qF9eqIYz; FLPWqrKOIsBw++) {
        printf ("%s ", FyCseJImaEg[FLPWqrKOIsBw]);
    }
    printf ("%s", FyCseJImaEg[qF9eqIYz]);
    scanf ("%d", &chrHwIBpfyza);
    return 0;
}

