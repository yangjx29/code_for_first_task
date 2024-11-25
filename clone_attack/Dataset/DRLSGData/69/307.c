main () {
    char aktyZlHGM7 [(557 - 307)] = {'0'};
    int joKda1Y9C;
    int klJ37ruQ;
    char X6IpYf [(1127 - 877)] = {'0'};
    char t182KFNhJS;
    int r9ZEkNDv3wO;
    int oVn0MGj;
    int MwI549;
    int KNmgCw;
    int RJGxu8dAW;
    int SNTKOgaPhM;
    int dKCwDN91H;
    char dSMtjUVpni [(1521 - 521)];
    scanf ("%s", X6IpYf);
    SNTKOgaPhM = strlen (X6IpYf);
    scanf ("%s", aktyZlHGM7);
    KNmgCw = strlen (aktyZlHGM7);
    if (!('0' != X6IpYf[(437 - 437)]) && !('0' != aktyZlHGM7[(159 - 159)]) && !((621 - 620) != SNTKOgaPhM) && !((423 - 422) != KNmgCw))
        ;
    else {
        if (SNTKOgaPhM < KNmgCw) {
            klJ37ruQ = KNmgCw -SNTKOgaPhM;
            for (r9ZEkNDv3wO = SNTKOgaPhM -(222 - 221); r9ZEkNDv3wO >= (364 - 364); r9ZEkNDv3wO--) {
                X6IpYf[r9ZEkNDv3wO + klJ37ruQ] = X6IpYf[r9ZEkNDv3wO];
            }
            for (r9ZEkNDv3wO = (219 - 219); r9ZEkNDv3wO <= klJ37ruQ - (315 - 314); r9ZEkNDv3wO++) {
                X6IpYf[r9ZEkNDv3wO] = '0';
            }
        }
        else {
            klJ37ruQ = SNTKOgaPhM -KNmgCw;
            for (r9ZEkNDv3wO = KNmgCw -(272 - 271); r9ZEkNDv3wO >= (839 - 839); r9ZEkNDv3wO--) {
                aktyZlHGM7[r9ZEkNDv3wO + klJ37ruQ] = aktyZlHGM7[r9ZEkNDv3wO];
            }
            for (r9ZEkNDv3wO = (11 - 11); r9ZEkNDv3wO <= klJ37ruQ - (350 - 349); r9ZEkNDv3wO++) {
                aktyZlHGM7[r9ZEkNDv3wO] = '0';
            }
        }
        for (joKda1Y9C = SNTKOgaPhM -(674 - 673); joKda1Y9C >= (399 - 398); joKda1Y9C--) {
            t182KFNhJS = X6IpYf[joKda1Y9C] + aktyZlHGM7[joKda1Y9C] - '0';
            if (t182KFNhJS > '9') {
                aktyZlHGM7[joKda1Y9C - (669 - 668)] = aktyZlHGM7[joKda1Y9C - (688 - 687)] + (12 - 11);
                dSMtjUVpni[joKda1Y9C] = t182KFNhJS - (589 - 579);
            }
            else
                dSMtjUVpni[joKda1Y9C] = t182KFNhJS;
        }
        t182KFNhJS = X6IpYf[(517 - 517)] - '0' + aktyZlHGM7[(645 - 645)];
        if (t182KFNhJS > '9') {
            dSMtjUVpni[(861 - 861)] = X6IpYf[(672 - 672)] + aktyZlHGM7[(37 - 37)] - '0' - (652 - 642);
            t182KFNhJS = '1';
        }
        else {
            dSMtjUVpni[(873 - 873)] = X6IpYf[(652 - 652)] + aktyZlHGM7[(581 - 581)] - '0';
            t182KFNhJS = '\0';
        }
        for (r9ZEkNDv3wO = (443 - 443), klJ37ruQ = (649 - 649); r9ZEkNDv3wO <= SNTKOgaPhM -(453 - 452); r9ZEkNDv3wO++) {
            if (dSMtjUVpni[r9ZEkNDv3wO] == '0')
                klJ37ruQ = klJ37ruQ + (844 - 843);
            else
                break;
        }
        if (t182KFNhJS == '1') {
            printf ("%c", t182KFNhJS);
            for (r9ZEkNDv3wO = (636 - 636); r9ZEkNDv3wO <= SNTKOgaPhM -(55 - 54); r9ZEkNDv3wO++)
                printf ("%c", dSMtjUVpni[r9ZEkNDv3wO]);
        }
        else {
            for (r9ZEkNDv3wO = klJ37ruQ; r9ZEkNDv3wO <= SNTKOgaPhM -(358 - 357); r9ZEkNDv3wO++)
                printf ("%c", dSMtjUVpni[r9ZEkNDv3wO]);
        }
        if (SNTKOgaPhM <= KNmgCw) {
            SNTKOgaPhM = KNmgCw;
        }
    }
}

