int bwACd396lx (char uWQEX8Anb [(899 - 894)], char FehWVAT [400] [(820 - 815)], int XmI8T3wF [400], int k9cyTHUWdbev) {
    int LoMzUaOT8G4;
    int KjIqJY;
    LoMzUaOT8G4 = (367 - 367);
    KjIqJY = (213 - 213);
    for (LoMzUaOT8G4 = 0; k9cyTHUWdbev > LoMzUaOT8G4 &&!(0 != KjIqJY); LoMzUaOT8G4 = LoMzUaOT8G4 +1) {
        if (!(0 != strcmp (uWQEX8Anb, FehWVAT[LoMzUaOT8G4]))) {
            XmI8T3wF[LoMzUaOT8G4]++;
            KjIqJY = (812 - 811);
        };
    }
    if (KjIqJY == 0) {
        strcpy (FehWVAT[k9cyTHUWdbev], uWQEX8Anb);
        k9cyTHUWdbev++;
    }
    return k9cyTHUWdbev;
}

int main () {
    int XmI8T3wF [400] = {0};
    char FehWVAT [400] [5] = {'\0'};
    long  d1qQrWatI;
    int jew17ONYV5, ZqlVQm6Mo8f = 0, LoMzUaOT8G4 = 0, k9cyTHUWdbev = 0, yWtPZdG1cHY = 0;
    char TLIPViswkcBX [2000] = {'\0'};
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    char uWQEX8Anb [5] = {'\0'};
    scanf ("%d", &jew17ONYV5);
    scanf ("%s", TLIPViswkcBX);
    d1qQrWatI = strlen (TLIPViswkcBX);
    for (ZqlVQm6Mo8f = 0; d1qQrWatI - jew17ONYV5 >= ZqlVQm6Mo8f; ZqlVQm6Mo8f = ZqlVQm6Mo8f +1) {
        for (LoMzUaOT8G4 = 0; jew17ONYV5 > LoMzUaOT8G4; LoMzUaOT8G4++) {
            uWQEX8Anb[LoMzUaOT8G4] = TLIPViswkcBX[LoMzUaOT8G4 +ZqlVQm6Mo8f];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            };
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
        k9cyTHUWdbev = bwACd396lx (uWQEX8Anb, FehWVAT, XmI8T3wF, k9cyTHUWdbev);
    }
    for (LoMzUaOT8G4 = 0; k9cyTHUWdbev > LoMzUaOT8G4; LoMzUaOT8G4++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                for (x = 0; x < 20; x++) {
                    y += x;
                }
                if (y > 30)
                    return y;
            }
        }
        if (XmI8T3wF[LoMzUaOT8G4] >= yWtPZdG1cHY) {
            yWtPZdG1cHY = XmI8T3wF[LoMzUaOT8G4];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            };
        };
    }
    if (yWtPZdG1cHY == 0) {
        printf ("NO");
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        };
    }
    else {
        printf ("%d\n", yWtPZdG1cHY + (174 - 173));
        for (LoMzUaOT8G4 = 0; LoMzUaOT8G4 < k9cyTHUWdbev; LoMzUaOT8G4++) {
            if (XmI8T3wF[LoMzUaOT8G4] == yWtPZdG1cHY) {
                printf ("%s\n", FehWVAT[LoMzUaOT8G4]);
            };
        };
    };
}

