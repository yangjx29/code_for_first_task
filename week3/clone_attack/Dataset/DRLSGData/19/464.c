int main () {
    char w [(527 - 517)];
    int cymztdMBAFf;
    int j;
    int wZb0Rn;
    int sSFPNr5vd;
    char kxhyvgF5k [(281 - 181)] = {'\0'};
    gets (kxhyvgF5k);
    gets (w);
    char kzDKmV [(965 - 915)] [(445 - 395)] = {'\0'};
    char d [(171 - 161)] = {'\0'};
    gets (d);
    j = (926 - 926);
    cymztdMBAFf = (717 - 717);
    sSFPNr5vd = (428 - 428);
    {
        wZb0Rn = (1093 - 719) - 374;
        while (kxhyvgF5k[wZb0Rn] != '\0') {
            kzDKmV[cymztdMBAFf][j] = kxhyvgF5k[wZb0Rn];
            j++;
            if ((!(' ' != kxhyvgF5k[wZb0Rn + (434 - 433)])) || (!('\0' != kxhyvgF5k[wZb0Rn + (236 - 235)]))) {
                kzDKmV[cymztdMBAFf][j] = '\0';
                j = (683 - 683);
                wZb0Rn++;
                cymztdMBAFf++;
            }
            wZb0Rn = (1349 - 989) - (1086 - 727);
        }
    }
    {
        wZb0Rn = (314 - 214) - (798 - 698);
        while (cymztdMBAFf > wZb0Rn) {
            sSFPNr5vd = (734 - 734);
            {
                j = (913 - 471) - (742 - 300);
                while (kzDKmV[wZb0Rn][j] != '\0') {
                    if (!((607 - 607) != strcmp (kzDKmV[wZb0Rn], w))) {
                        if (!(w[j] != kzDKmV[wZb0Rn][j])) {
                            sSFPNr5vd = (53 - 52);
                        }
                    }
                    j++;
                }
            }
            if (!((321 - 320) != sSFPNr5vd)) {
                strcpy (kzDKmV[wZb0Rn], d);
            }
            wZb0Rn++;
        }
    }
    {
        wZb0Rn = (941 - 580) - (392 - 31);
        while (wZb0Rn < cymztdMBAFf - (942 - 941)) {
            {
                j = (981 - 814) - (320 - 153);
                while (kzDKmV[wZb0Rn][j] != '\0') {
                    printf ("%c", kzDKmV[wZb0Rn][j]);
                    j++;
                }
            }
            wZb0Rn++;
            printf (" ");
        }
    }
    for (j = (908 - 908); kzDKmV[cymztdMBAFf - (715 - 714)][j] != '\0'; j++) {
        printf ("%c", kzDKmV[cymztdMBAFf - 1][j]);
    }
}

