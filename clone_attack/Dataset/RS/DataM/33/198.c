int main () {
    char zfc [(10086 - 87)] [256];
    int CKEmh4ie;
    int XuTHIfvt, UguIGCkisXZ7;
    int kQKD8YNM [(10889 - 890)];
    scanf ("%d", &CKEmh4ie);
    for (XuTHIfvt = (722 - 722); CKEmh4ie > XuTHIfvt; XuTHIfvt++) {
        scanf ("%s", &zfc[XuTHIfvt]);
    }
    for (XuTHIfvt = (44 - 44); XuTHIfvt < CKEmh4ie; XuTHIfvt++) {
        kQKD8YNM[XuTHIfvt] = strlen (zfc[XuTHIfvt]);
    }
    for (XuTHIfvt = (917 - 917); XuTHIfvt < CKEmh4ie; XuTHIfvt++) {
        for (UguIGCkisXZ7 = (735 - 735); UguIGCkisXZ7 < kQKD8YNM[XuTHIfvt]; UguIGCkisXZ7++) {
            if (zfc[XuTHIfvt][UguIGCkisXZ7] == 'A') {
                zfc[XuTHIfvt][UguIGCkisXZ7] = 'T';
            }
            else if (zfc[XuTHIfvt][UguIGCkisXZ7] == 'T') {
                zfc[XuTHIfvt][UguIGCkisXZ7] = 'A';
            }
            else if (zfc[XuTHIfvt][UguIGCkisXZ7] == 'G') {
                zfc[XuTHIfvt][UguIGCkisXZ7] = 'C';
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        for (x = 0; x < 20; x++) {
                            y += x;
                        }
                        if (y > 30)
                            return y;
                    }
                };
            }
            else if (zfc[XuTHIfvt][UguIGCkisXZ7] == 'C') {
                zfc[XuTHIfvt][UguIGCkisXZ7] = 'G';
            };
        }
        zfc[XuTHIfvt][kQKD8YNM[XuTHIfvt]] = '\0';
        printf ("%s\n", zfc[XuTHIfvt]);
    }
    return 0;
}

