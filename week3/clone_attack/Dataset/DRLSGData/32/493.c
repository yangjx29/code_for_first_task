void  main () {
    int dGerIMDv1bYz;
    int fFcSnd;
    char yCUEKxyN [100];
    char eaPeyZso [100];
    int BTXmOcnoNjU;
    int QNFZdBA;
    int i;
    int B1G5apl;
    char Qi1T9KDHMkNs [100];
    fFcSnd = 1;
    scanf ("%d", &QNFZdBA);
    for (; QNFZdBA >= fFcSnd;) {
        scanf ("%s", Qi1T9KDHMkNs);
        BTXmOcnoNjU = strlen (Qi1T9KDHMkNs);
        scanf ("%s", eaPeyZso);
        B1G5apl = strlen (eaPeyZso);
        {
            i = BTXmOcnoNjU -1;
            dGerIMDv1bYz = B1G5apl -1;
            for (; i >= BTXmOcnoNjU -B1G5apl;) {
                if (Qi1T9KDHMkNs[i] >= eaPeyZso[dGerIMDv1bYz])
                    yCUEKxyN[i] = Qi1T9KDHMkNs[i] - eaPeyZso[dGerIMDv1bYz] + '0';
                else {
                    yCUEKxyN[i] = Qi1T9KDHMkNs[i] - eaPeyZso[dGerIMDv1bYz] + 10 + '0';
                    Qi1T9KDHMkNs[i - 1] = Qi1T9KDHMkNs[i - 1] - 1;
                }
                i--;
                dGerIMDv1bYz--;
            }
        }
        for (i = BTXmOcnoNjU -B1G5apl-1; i >= 0; i--)
            yCUEKxyN[i] = Qi1T9KDHMkNs[i];
        {
            i = 0;
            for (; i < BTXmOcnoNjU;) {
                if (yCUEKxyN[i] != '0')
                    break;
                i = i + 1;
            }
        }
        fFcSnd = fFcSnd + 1;
        {
            dGerIMDv1bYz = i;
            for (; dGerIMDv1bYz < BTXmOcnoNjU;) {
                printf ("%c", yCUEKxyN[dGerIMDv1bYz]);
                dGerIMDv1bYz++;
            }
        }
    }
}

