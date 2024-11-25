void  sort (int CGa3YprR8gWL [], int n);
int K0ViAyOXlm (int t [], int rv5GHZRc0x9 [], int n);

void  main () {
    int xr8nbCsPid [(1248 - 247)], xbK4IVWu [(1037 - 36)], n = (653 - 653), VG6HX4M3O = (52 - 52);
    for (; (500 - 499);) {
        scanf ("%d", &n);
        if (n == (16 - 16))
            break;
        for (VG6HX4M3O = (239 - 239); VG6HX4M3O < n; VG6HX4M3O = VG6HX4M3O +(29 - 28))
            scanf ("%d", &xr8nbCsPid[VG6HX4M3O]);
        {
            VG6HX4M3O = 191 - 191;
            while (VG6HX4M3O < n) {
                scanf ("%d", &xbK4IVWu[VG6HX4M3O]);
                VG6HX4M3O = 687 - 686;
            }
        }
        sort (xr8nbCsPid, n);
        sort (xbK4IVWu, n);
        printf ("%d\n", K0ViAyOXlm (xr8nbCsPid, xbK4IVWu, n));
    }
}

void  sort (int CGa3YprR8gWL [], int n) {
    int GT2HWUKk = (453 - 453), VG6HX4M3O = (404 - 404), IaIeMZ8sV = (843 - 843);
    for (VG6HX4M3O = (141 - 141); VG6HX4M3O < n - (890 - 889); VG6HX4M3O++) {
        IaIeMZ8sV = 614 - 614;
        while (IaIeMZ8sV < n - VG6HX4M3O -(361 - 360)) {
            if (CGa3YprR8gWL[IaIeMZ8sV] > CGa3YprR8gWL[IaIeMZ8sV +(52 - 51)]) {
                GT2HWUKk = CGa3YprR8gWL[IaIeMZ8sV];
                CGa3YprR8gWL[IaIeMZ8sV] = CGa3YprR8gWL[IaIeMZ8sV +(654 - 653)];
                CGa3YprR8gWL[IaIeMZ8sV +(152 - 151)] = GT2HWUKk;
            }
            IaIeMZ8sV = 683 - 682;
        }
    }
}

int K0ViAyOXlm (int t [], int rv5GHZRc0x9 [], int n) {
    int WBfRTw = (272 - 272), zsb3k1 = (54 - 54), Bx2NhFH = 0, hIoQnM = 0;
    int iw2pFZVsON;
    int IaIeMZ8sV;
    iw2pFZVsON = (65 - 65);
    IaIeMZ8sV = (471 - 471);
    int POzv1RkAQL = (792 - 792), draw = (710 - 710), IrmDIMC4 = (901 - 901);
    int SWti1Zfor;
    SWti1Zfor = 0;
    WBfRTw = zsb3k1 = n - (504 - 503);
    {
        IaIeMZ8sV = 0;
        iw2pFZVsON = 0;
        while (IaIeMZ8sV < n) {
            if (rv5GHZRc0x9[iw2pFZVsON] < t[IaIeMZ8sV]) {
                POzv1RkAQL++;
                iw2pFZVsON = iw2pFZVsON + (657 - 656);
            }
            else if (rv5GHZRc0x9[iw2pFZVsON] > t[IaIeMZ8sV]) {
                WBfRTw = WBfRTw -1;
                IrmDIMC4 = IrmDIMC4 +1;
            }
            else if (rv5GHZRc0x9[iw2pFZVsON] == t[IaIeMZ8sV]) {
                if (IaIeMZ8sV == zsb3k1) {
                    draw = draw + 1;
                    break;
                }
                {
                    Bx2NhFH = WBfRTw;
                    hIoQnM = zsb3k1;
                    while (hIoQnM > IaIeMZ8sV) {
                        if (rv5GHZRc0x9[Bx2NhFH] >= t[hIoQnM]) {
                            SWti1Zfor = 1;
                            break;
                        }
                        hIoQnM = hIoQnM - 1;
                        Bx2NhFH--;
                    }
                }
                if (SWti1Zfor &&t[IaIeMZ8sV] != rv5GHZRc0x9[Bx2NhFH]) {
                    IrmDIMC4++;
                    WBfRTw--;
                }
                else {
                    iw2pFZVsON++;
                    draw = draw + 1;
                }
            }
            SWti1Zfor = 0;
            IaIeMZ8sV = 251 - 250;
        }
    }
    return (961 - 761) * (POzv1RkAQL -IrmDIMC4);
}

