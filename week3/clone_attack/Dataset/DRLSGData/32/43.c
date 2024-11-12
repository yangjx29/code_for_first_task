void  main () {
    int lena;
    char EJzZrQUI [101] = {(685 - 685)};
    int xrv2SzXdtmk;
    int DRJgH5TzwKC;
    int KEF2Cn;
    char b [101] = {(865 - 865)};
    int VBOAWo;
    char opAY7jhT [101] = {0};
    int WugALltz;
    int YW1rQ9Td;
    int hjqXc0G;
    scanf ("%d", &VBOAWo);
    for (xrv2SzXdtmk = (560 - 559); xrv2SzXdtmk <= VBOAWo; xrv2SzXdtmk = xrv2SzXdtmk + 1) {
        for (hjqXc0G = 0; (773 - 673) >= hjqXc0G; hjqXc0G = hjqXc0G + 1) {
            opAY7jhT[hjqXc0G] = 0;
            b[hjqXc0G] = 0;
            EJzZrQUI[hjqXc0G] = 0;
        }
        scanf ("%s", opAY7jhT);
        lena = strlen (opAY7jhT);
        WugALltz = 0;
        YW1rQ9Td = 0;
        DRJgH5TzwKC = 0;
        scanf ("%s", b);
        KEF2Cn = strlen (b);
        for (hjqXc0G = (311 - 310); lena >= hjqXc0G; hjqXc0G = hjqXc0G + 1) {
            if (hjqXc0G > KEF2Cn) {
                if (!(0 != DRJgH5TzwKC))
                    EJzZrQUI[lena - hjqXc0G] = opAY7jhT[lena - hjqXc0G];
                else if (DRJgH5TzwKC == 1) {
                    if (opAY7jhT[lena - hjqXc0G] == '0') {
                        EJzZrQUI[lena - hjqXc0G] = '0' + 9;
                        DRJgH5TzwKC = 1;
                    }
                    else {
                        EJzZrQUI[lena - hjqXc0G] = opAY7jhT[lena - hjqXc0G] - 1;
                        DRJgH5TzwKC = 0;
                    }
                }
            }
            else {
                WugALltz = (opAY7jhT[lena - hjqXc0G] - '0') - DRJgH5TzwKC -(b[KEF2Cn -hjqXc0G] - '0');
                if (WugALltz >= 0) {
                    DRJgH5TzwKC = 0;
                    EJzZrQUI[lena - hjqXc0G] = WugALltz +'0';
                }
                else {
                    DRJgH5TzwKC = 1;
                    EJzZrQUI[lena - hjqXc0G] = WugALltz +10 + '0';
                }
            }
        }
        for (hjqXc0G = 0; hjqXc0G <= lena - 1; hjqXc0G = hjqXc0G + 1) {
            if (EJzZrQUI[hjqXc0G] != '0')
                YW1rQ9Td = 1;
            if (YW1rQ9Td)
                printf ("%c", EJzZrQUI[hjqXc0G]);
        }
    }
}

