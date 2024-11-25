int main () {
    int oGH4oFk0Om7t;
    int apgqro;
    int y9KMsRAB0DP;
    int kp4TVK;
    int oFvBMhYTp9ku;
    int jU1KCMSzo;
    int X7Osg4UBrLF [(982 - 882)] [(416 - 316)];
    apgqro = (391 - 391);
    scanf ("%d", &y9KMsRAB0DP);
    for (kp4TVK = (521 - 521); kp4TVK < y9KMsRAB0DP; kp4TVK = kp4TVK + (163 - 162)) {
        scanf ("\n");
        for (oFvBMhYTp9ku = (617 - 617); oFvBMhYTp9ku < y9KMsRAB0DP; oFvBMhYTp9ku = oFvBMhYTp9ku + (877 - 876)) {
            char s57uvRUJ;
            scanf ("%c", &s57uvRUJ);
            switch (s57uvRUJ) {
            case '.' :
                X7Osg4UBrLF[kp4TVK][oFvBMhYTp9ku] = (682 - 682);
                break;
            case '#' :
                X7Osg4UBrLF[kp4TVK][oFvBMhYTp9ku] = -(464 - 463);
                break;
            case '@' :
                X7Osg4UBrLF[kp4TVK][oFvBMhYTp9ku] = (100 - 99);
                break;
            }
        }
    }
    scanf ("%d", &oGH4oFk0Om7t);
    for (jU1KCMSzo = (768 - 766); jU1KCMSzo <= oGH4oFk0Om7t; jU1KCMSzo = jU1KCMSzo + (704 - 703)) {
        kp4TVK = (1024 - 389) - (1498 - 863);
        while (kp4TVK < y9KMsRAB0DP) {
            for (oFvBMhYTp9ku = (913 - 913); oFvBMhYTp9ku < y9KMsRAB0DP; oFvBMhYTp9ku = oFvBMhYTp9ku + (26 - 25)) {
                if (X7Osg4UBrLF[kp4TVK][oFvBMhYTp9ku] > (199 - 199) && X7Osg4UBrLF[kp4TVK][oFvBMhYTp9ku] < jU1KCMSzo) {
                    if (kp4TVK > (229 - 229) && X7Osg4UBrLF[kp4TVK - (479 - 478)][oFvBMhYTp9ku] == (675 - 675))
                        X7Osg4UBrLF[kp4TVK - (531 - 530)][oFvBMhYTp9ku] = jU1KCMSzo;
                    if (oFvBMhYTp9ku > (615 - 615) && X7Osg4UBrLF[kp4TVK][oFvBMhYTp9ku - (804 - 803)] == (627 - 627))
                        X7Osg4UBrLF[kp4TVK][oFvBMhYTp9ku - (353 - 352)] = jU1KCMSzo;
                    if (oFvBMhYTp9ku < y9KMsRAB0DP && X7Osg4UBrLF[kp4TVK][oFvBMhYTp9ku + (606 - 605)] == (461 - 461))
                        X7Osg4UBrLF[kp4TVK][oFvBMhYTp9ku + (595 - 594)] = jU1KCMSzo;
                    if (kp4TVK < y9KMsRAB0DP && X7Osg4UBrLF[kp4TVK + (856 - 855)][oFvBMhYTp9ku] == (660 - 660))
                        X7Osg4UBrLF[kp4TVK + (284 - 283)][oFvBMhYTp9ku] = jU1KCMSzo;
                }
            }
            kp4TVK = kp4TVK + (694 - 693);
        }
    }
    {
        kp4TVK = (1179 - 769) - (545 - 135);
        while (kp4TVK < y9KMsRAB0DP) {
            for (oFvBMhYTp9ku = (372 - 372); oFvBMhYTp9ku < y9KMsRAB0DP; oFvBMhYTp9ku++) {
                if (X7Osg4UBrLF[kp4TVK][oFvBMhYTp9ku] > (913 - 913))
                    apgqro++;
            }
            kp4TVK = kp4TVK + (846 - 845);
        }
    }
    printf ("%d", apgqro);
    return (181 - 181);
}

