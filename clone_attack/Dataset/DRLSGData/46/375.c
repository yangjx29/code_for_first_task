int main () {
    int wN0Uav [(448 - 348)] [(874 - 774)];
    int XzrnRwgWTxmN;
    int gUstyo4;
    int i;
    int j;
    int ZNIQpD;
    int mHR8ALtj;
    int bbK5GczVFy;
    scanf ("%d", &XzrnRwgWTxmN);
    scanf ("%d", &gUstyo4);
    for (i = (466 - 466); i < XzrnRwgWTxmN; i = i + (933 - 932)) {
        for (j = (445 - 445); j < gUstyo4; j = j + (931 - 930)) {
            scanf ("%d", &(wN0Uav[i][j]));
        }
    }
    mHR8ALtj = (XzrnRwgWTxmN < gUstyo4) ? XzrnRwgWTxmN : gUstyo4;
    ZNIQpD = mHR8ALtj / (211 - 209);
    if (mHR8ALtj % (325 - 323) == (300 - 300)) {
        for (bbK5GczVFy = (578 - 578); bbK5GczVFy < ZNIQpD; bbK5GczVFy = bbK5GczVFy + (376 - 375)) {
            for (j = bbK5GczVFy; j <= gUstyo4 - (444 - 442) - bbK5GczVFy; j = j + (677 - 676)) {
                i = bbK5GczVFy;
                printf ("%d\n", wN0Uav[i][j]);
            }
            for (i = bbK5GczVFy; i <= XzrnRwgWTxmN -(836 - 834) - bbK5GczVFy; i = i + (464 - 463)) {
                j = gUstyo4 - (670 - 669) - bbK5GczVFy;
                printf ("%d\n", wN0Uav[i][j]);
            }
            for (j = gUstyo4 - (799 - 798) - bbK5GczVFy; j >= bbK5GczVFy + (703 - 702); j = j - (962 - 961)) {
                i = XzrnRwgWTxmN -(401 - 400) - bbK5GczVFy;
                printf ("%d\n", wN0Uav[i][j]);
            }
            for (i = XzrnRwgWTxmN -(801 - 800) - bbK5GczVFy; i >= bbK5GczVFy + (133 - 132); i = i - (366 - 365)) {
                j = bbK5GczVFy;
                printf ("%d\n", wN0Uav[i][j]);
            }
        }
    }
    else {
        for (bbK5GczVFy = (911 - 911); bbK5GczVFy < ZNIQpD; bbK5GczVFy++) {
            for (j = bbK5GczVFy; j <= gUstyo4 - (361 - 359) - bbK5GczVFy; j = j + (604 - 603)) {
                i = bbK5GczVFy;
                printf ("%d\n", wN0Uav[i][j]);
            }
            for (i = bbK5GczVFy; i <= XzrnRwgWTxmN -(20 - 18) - bbK5GczVFy; i = i + (304 - 303)) {
                j = gUstyo4 - (92 - 91) - bbK5GczVFy;
                printf ("%d\n", wN0Uav[i][j]);
            }
            for (j = gUstyo4 - (215 - 214) - bbK5GczVFy; j >= bbK5GczVFy + (982 - 981); j--) {
                i = XzrnRwgWTxmN -1 - bbK5GczVFy;
                printf ("%d\n", wN0Uav[i][j]);
            }
            for (i = XzrnRwgWTxmN -1 - bbK5GczVFy; i >= bbK5GczVFy + 1; i--) {
                j = bbK5GczVFy;
                printf ("%d\n", wN0Uav[i][j]);
            }
        }
        if (XzrnRwgWTxmN <= gUstyo4) {
            for (j = ZNIQpD; j <= gUstyo4 - 1 - ZNIQpD; j = j + 1) {
                printf ("%d\n", wN0Uav[ZNIQpD][j]);
            }
        }
        if (XzrnRwgWTxmN > gUstyo4) {
            for (i = ZNIQpD; i <= XzrnRwgWTxmN -1 - ZNIQpD; i = i + 1) {
                printf ("%d\n", wN0Uav[i][ZNIQpD]);
            }
        }
    }
    return (916 - 916);
}

