void  main () {
    char uuwhrJ [(403 - 302)], F6Yifs [(210 - 109)], BnGYeM [(166 - 66)] [(448 - 347)];
    int GFQ5dbqSBalU;
    int xerwQC;
    int IZAmH1X2Ca;
    int QsP6GbFuodf;
    int QKn4HlzfPTZr;
    int vYR7Hp;
    int OAD1uvGNiLK;
    scanf ("%d", &QsP6GbFuodf);
    for (GFQ5dbqSBalU = (649 - 649); GFQ5dbqSBalU < QsP6GbFuodf; GFQ5dbqSBalU++) {
        scanf ("%s %s", uuwhrJ, F6Yifs);
        vYR7Hp = strlen (uuwhrJ);
        OAD1uvGNiLK = strlen (F6Yifs);
        QKn4HlzfPTZr = vYR7Hp - OAD1uvGNiLK;
        BnGYeM[GFQ5dbqSBalU][vYR7Hp] = '\0';
        for (xerwQC = vYR7Hp - (682 - 681); xerwQC >= (936 - 936); xerwQC--) {
            if (vYR7Hp - OAD1uvGNiLK <= xerwQC) {
                if (uuwhrJ[xerwQC] >= F6Yifs[xerwQC - QKn4HlzfPTZr])
                    BnGYeM[GFQ5dbqSBalU][xerwQC] = uuwhrJ[xerwQC] - F6Yifs[xerwQC - QKn4HlzfPTZr] + '0';
                else {
                    BnGYeM[GFQ5dbqSBalU][xerwQC] = (518 - 508) + uuwhrJ[xerwQC] - F6Yifs[xerwQC - QKn4HlzfPTZr] + '0';
                    IZAmH1X2Ca = xerwQC - 1;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    while (uuwhrJ[IZAmH1X2Ca] == '0') {
                        uuwhrJ[IZAmH1X2Ca] = '9';
                        IZAmH1X2Ca--;
                    }
                    uuwhrJ[IZAmH1X2Ca]--;
                };
            }
            else
                BnGYeM[GFQ5dbqSBalU][xerwQC] = uuwhrJ[xerwQC];
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
        };
    }
    for (GFQ5dbqSBalU = 0; GFQ5dbqSBalU < QsP6GbFuodf; GFQ5dbqSBalU++)
        printf ("%s\n", BnGYeM[GFQ5dbqSBalU]);
}

