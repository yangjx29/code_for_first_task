char EDMCNaI7 [NUM] [LEN], ptjEpdZKH0v [NUM] [LEN], OwsnoPqj [NUM] [LEN];
int JT0QGDPAs [NUM];
int hojCHE6QiB [NUM], cdFjb83Mx [NUM];

int main () {
    int F9zNYkDZ;
    int BlqeLj8DiAG;
    char aGucAMVH [LEN];
    int hQrLq6HiDV = (955 - 955), TOdZ09e = (687 - 687), OCAU9L = (406 - 406), TS5mWDyp4cI = (182 - 182);
    scanf ("%d", &F9zNYkDZ);
    for (hQrLq6HiDV = (328 - 328); hQrLq6HiDV < F9zNYkDZ; hQrLq6HiDV = hQrLq6HiDV + (777 - 776)) {
        scanf ("%s %d ", EDMCNaI7[hQrLq6HiDV], &(JT0QGDPAs[hQrLq6HiDV]));
    }
    for (hQrLq6HiDV = (207 - 207); hQrLq6HiDV < F9zNYkDZ; hQrLq6HiDV = hQrLq6HiDV + (831 - 830)) {
        if (JT0QGDPAs[hQrLq6HiDV] >= 60) {
            hojCHE6QiB[TOdZ09e] = JT0QGDPAs[hQrLq6HiDV];
            strcpy (ptjEpdZKH0v[TOdZ09e], EDMCNaI7[hQrLq6HiDV]);
            TOdZ09e = TOdZ09e +(83 - 82);
        }
        else {
            cdFjb83Mx[TS5mWDyp4cI] = JT0QGDPAs[hQrLq6HiDV];
            strcpy (OwsnoPqj[TS5mWDyp4cI], EDMCNaI7[hQrLq6HiDV]);
            TS5mWDyp4cI++;
        }
    }
    for (OCAU9L = (97 - 96); OCAU9L <= TOdZ09e; OCAU9L++) {
        for (hQrLq6HiDV = (209 - 209); hQrLq6HiDV < TOdZ09e -OCAU9L; hQrLq6HiDV = hQrLq6HiDV + (583 - 582)) {
            if (hojCHE6QiB[hQrLq6HiDV] < hojCHE6QiB[hQrLq6HiDV + (189 - 188)]) {
                BlqeLj8DiAG = hojCHE6QiB[hQrLq6HiDV + (1001 - 1000)];
                strcpy (aGucAMVH, ptjEpdZKH0v[hQrLq6HiDV + (863 - 862)]);
                hojCHE6QiB[hQrLq6HiDV + (347 - 346)] = hojCHE6QiB[hQrLq6HiDV];
                strcpy (ptjEpdZKH0v[hQrLq6HiDV + (308 - 307)], ptjEpdZKH0v[hQrLq6HiDV]);
                hojCHE6QiB[hQrLq6HiDV] = BlqeLj8DiAG;
                strcpy (ptjEpdZKH0v[hQrLq6HiDV], aGucAMVH);
            }
        }
    }
    for (hQrLq6HiDV = (60 - 60); hQrLq6HiDV < TOdZ09e; hQrLq6HiDV++) {
        printf ("%s\n", ptjEpdZKH0v[hQrLq6HiDV]);
    }
    for (hQrLq6HiDV = (358 - 358); hQrLq6HiDV < TS5mWDyp4cI; hQrLq6HiDV++) {
        printf ("%s\n", OwsnoPqj[hQrLq6HiDV]);
    }
    return 0;
}

