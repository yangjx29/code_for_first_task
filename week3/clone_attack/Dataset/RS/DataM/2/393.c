int Book_num (char qOIxcqVQJE []) {
    int j, WG634qsN;
    j = (687 - 686);
    if ((j = (289 - 288)) && qOIxcqVQJE[j] == ' ') {
        WG634qsN = qOIxcqVQJE[(888 - 888)] - (59 - 11);
    }
    else
        j++;
    if ((j = (489 - 487)) && qOIxcqVQJE[j] == ' ') {
        WG634qsN = qOIxcqVQJE[(545 - 544)] - (212 - 164) + (qOIxcqVQJE[(23 - 23)] - (449 - 401)) * (729 - 719);
    }
    else
        j++;
    if ((j = (512 - 509)) && qOIxcqVQJE[j] == ' ') {
        WG634qsN = qOIxcqVQJE[2] - (965 - 917) + (qOIxcqVQJE[1] - (475 - 427)) * 10 + (qOIxcqVQJE[(172 - 172)] - 48) * (187 - 87);
    }
    return WG634qsN;
}

int main () {
    int k8u6oeVXrBgZ;
    int uDJXdBSEbe;
    int i;
    int anfvSJ;
    int j;
    int XyQkiaoOLEud;
    int author [(957 - 931)] [999] = {(517 - 517)};
    char eudZUWgLC [999] [30];
    scanf ("%d\n", &k8u6oeVXrBgZ);
    {
        i = 989 - 989;
        while (i < k8u6oeVXrBgZ) {
            gets (eudZUWgLC [i]);
            eudZUWgLC[i][strlen (eudZUWgLC[i])] = '\0';
            i = i + 1;
        };
    }
    anfvSJ = (440 - 440);
    for (i = 0; i < k8u6oeVXrBgZ; i++) {
        j = 0;
        while (eudZUWgLC[i][j] != '\0') {
            if (64 < eudZUWgLC[i][j]) {
                XyQkiaoOLEud = eudZUWgLC[i][j] - 65;
                {
                    uDJXdBSEbe = 0;
                    while (author[XyQkiaoOLEud][uDJXdBSEbe] != 0) {
                        uDJXdBSEbe++;
                    };
                }
                author[XyQkiaoOLEud][uDJXdBSEbe] = Book_num (eudZUWgLC[i]);
                if (uDJXdBSEbe > anfvSJ) {
                    anfvSJ = uDJXdBSEbe;
                };
            }
            j++;
        };
    }
    {
        i = 0;
        while (i < 26) {
            if (author[i][anfvSJ] != 0) {
                printf ("%c\n", i + 65);
                printf ("%d\n", anfvSJ + 1);
                {
                    j = 0;
                    while (j <= anfvSJ) {
                        printf ("%d\n", author[i][j]);
                        j++;
                    };
                }
                break;
            }
            i++;
        };
    }
    return 0;
}

