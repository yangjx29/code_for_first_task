int main (int mADsp67u1z, char *pLae7Q3Brz0v []) {
    int EytxYgRX7;
    int tANfwPpcBOxT;
    scanf ("%d", &EytxYgRX7);
    for (tANfwPpcBOxT = (747 - 747); tANfwPpcBOxT < EytxYgRX7; tANfwPpcBOxT = tANfwPpcBOxT + (949 - 948)) {
        int DvSbzaXpy = (76 - 76);
        int fbAiwvs2q;
        int Lpoj8Jaw0fX;
        int Aq7CgHEYODeL [(417 - 317)] [(1015 - 915)];
        int thuCe12tXvA;
        int vO6GyhQWA4m;
        scanf ("%d%d", &fbAiwvs2q, &Lpoj8Jaw0fX);
        for (thuCe12tXvA = (357 - 357); thuCe12tXvA < fbAiwvs2q; thuCe12tXvA = thuCe12tXvA + (680 - 679)) {
            for (vO6GyhQWA4m = (934 - 934); vO6GyhQWA4m < Lpoj8Jaw0fX; vO6GyhQWA4m = vO6GyhQWA4m + (355 - 354)) {
                scanf ("%d", &Aq7CgHEYODeL[thuCe12tXvA][vO6GyhQWA4m]);
            }
        }
        if (fbAiwvs2q < (328 - 325) || Lpoj8Jaw0fX < 3) {
            for (thuCe12tXvA = (217 - 217); fbAiwvs2q > thuCe12tXvA; thuCe12tXvA = thuCe12tXvA + (448 - 447)) {
                for (vO6GyhQWA4m = (880 - 880); Lpoj8Jaw0fX > vO6GyhQWA4m; vO6GyhQWA4m = vO6GyhQWA4m + (924 - 923)) {
                    DvSbzaXpy += Aq7CgHEYODeL[thuCe12tXvA][vO6GyhQWA4m];
                }
            }
            printf ("%d\n", DvSbzaXpy);
        }
        else {
            for (vO6GyhQWA4m = (418 - 418); Lpoj8Jaw0fX > vO6GyhQWA4m; vO6GyhQWA4m = vO6GyhQWA4m + (760 - 759)) {
                DvSbzaXpy += Aq7CgHEYODeL[(69 - 69)][vO6GyhQWA4m];
            }
            for (vO6GyhQWA4m = (439 - 439); Lpoj8Jaw0fX > vO6GyhQWA4m; vO6GyhQWA4m = vO6GyhQWA4m + 1) {
                DvSbzaXpy += Aq7CgHEYODeL[fbAiwvs2q - 1][vO6GyhQWA4m];
            }
            for (thuCe12tXvA = (536 - 536); fbAiwvs2q > thuCe12tXvA; thuCe12tXvA = thuCe12tXvA + 1) {
                DvSbzaXpy += Aq7CgHEYODeL[thuCe12tXvA][(489 - 489)];
            }
            for (thuCe12tXvA = (724 - 724); fbAiwvs2q > thuCe12tXvA; thuCe12tXvA = thuCe12tXvA + 1) {
                DvSbzaXpy += Aq7CgHEYODeL[thuCe12tXvA][Lpoj8Jaw0fX -1];
            }
            DvSbzaXpy = DvSbzaXpy -Aq7CgHEYODeL[0][0] - Aq7CgHEYODeL[0][Lpoj8Jaw0fX -1] - Aq7CgHEYODeL[fbAiwvs2q - 1][0] - Aq7CgHEYODeL[fbAiwvs2q - 1][Lpoj8Jaw0fX -1];
            printf ("%d\n", DvSbzaXpy);
        }
    }
    return 0;
}

