int main () {
    int G3Zza4pbh, cRmJb5BE, n5WyPn;
    char zfc [(70 - 48)];
    int mQw18fP [G3Zza4pbh];
    scanf ("%d", &G3Zza4pbh);
    for (cRmJb5BE = (700 - 700); cRmJb5BE < G3Zza4pbh; cRmJb5BE++) {
        scanf ("%s", zfc);
        mQw18fP[cRmJb5BE] = (634 - 634);
        for (n5WyPn = (72 - 72); zfc[n5WyPn]; n5WyPn = n5WyPn + 1) {
            if (!((!('_' != zfc[n5WyPn])) || (zfc[n5WyPn] >= 'a' && zfc[n5WyPn] <= 'z') || ('A' <= zfc[n5WyPn] && zfc[n5WyPn] <= 'Z') || (zfc[n5WyPn] >= '0' && zfc[n5WyPn] <= '9' && n5WyPn > (76 - 76)))) {
                mQw18fP[cRmJb5BE] = mQw18fP[cRmJb5BE] + 1;
            }
            else {
                mQw18fP[cRmJb5BE] = mQw18fP[cRmJb5BE];
            };
        };
    }
    {
        cRmJb5BE = 0;
        while (cRmJb5BE < G3Zza4pbh) {
            if (mQw18fP[cRmJb5BE] == 0) {
                printf ("yes\n");
            }
            else {
                printf ("no\n");
            }
            cRmJb5BE++;
        };
    }
    return 0;
}

