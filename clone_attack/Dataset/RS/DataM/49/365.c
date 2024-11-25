int main () {
    char DcfCsBpTe [500];
    gets (DcfCsBpTe);
    int NwOAP9lZ;
    int i;
    int j;
    int l;
    int Is87or;
    NwOAP9lZ = 0;
    for (i = (374 - 372); i <= strlen (DcfCsBpTe); i++) {
        for (j = 0; (strlen (DcfCsBpTe) - i) >= j; j++) {
            for (l = j, Is87or = j + i - 1; l <= Is87or; l++, Is87or--) {
                if (DcfCsBpTe[l] == DcfCsBpTe[Is87or])
                    NwOAP9lZ = 1;
                else {
                    NwOAP9lZ = 0;
                    break;
                };
            }
            if (NwOAP9lZ == 1) {
                for (Is87or = j; Is87or < j + i; Is87or++)
                    printf ("%c", DcfCsBpTe[Is87or]);
            };
        };
    }
    return 0;
}

