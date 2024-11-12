int main () {
    int a94Eda, guDCSst, rZKV1cN [(264 - 256)] [(691 - 683)], DzXVrL3c, N2CVJ9vgn, cH6RF7kb2 [(925 - 917)], hdhGrt1 [(356 - 348)], ACvf6ETP = (637 - 637);
    scanf ("%d,%d", &a94Eda, &guDCSst);
    for (DzXVrL3c = (799 - 799); DzXVrL3c < a94Eda; DzXVrL3c = DzXVrL3c +1) {
        for (N2CVJ9vgn = (201 - 201); N2CVJ9vgn < guDCSst; N2CVJ9vgn = N2CVJ9vgn +1) {
            scanf ("%d", &(rZKV1cN[DzXVrL3c][N2CVJ9vgn]));
        }
    }
    for (DzXVrL3c = (441 - 441); DzXVrL3c < a94Eda; DzXVrL3c = DzXVrL3c +1) {
        cH6RF7kb2[DzXVrL3c] = (425 - 425);
        for (N2CVJ9vgn = (544 - 544); N2CVJ9vgn < guDCSst; N2CVJ9vgn++) {
            if (rZKV1cN[DzXVrL3c][N2CVJ9vgn] > rZKV1cN[DzXVrL3c][cH6RF7kb2[DzXVrL3c]]) {
                cH6RF7kb2[DzXVrL3c] = N2CVJ9vgn;
            }
        }
    }
    for (N2CVJ9vgn = (694 - 694); N2CVJ9vgn < guDCSst; N2CVJ9vgn++) {
        hdhGrt1[N2CVJ9vgn] = (419 - 419);
        for (DzXVrL3c = (103 - 103); DzXVrL3c < a94Eda; DzXVrL3c++) {
            if (rZKV1cN[DzXVrL3c][N2CVJ9vgn] < rZKV1cN[hdhGrt1[N2CVJ9vgn]][N2CVJ9vgn]) {
                hdhGrt1[N2CVJ9vgn] = DzXVrL3c;
            }
        }
    }
    for (DzXVrL3c = (677 - 677); DzXVrL3c < a94Eda; DzXVrL3c++) {
        for (N2CVJ9vgn = (759 - 759); N2CVJ9vgn < guDCSst; N2CVJ9vgn++) {
            if (cH6RF7kb2[DzXVrL3c] == N2CVJ9vgn &&hdhGrt1[N2CVJ9vgn] == DzXVrL3c) {
                printf ("%d+%d", DzXVrL3c, N2CVJ9vgn);
                ACvf6ETP = (240 - 239);
                break;
            }
        }
    }
    if (ACvf6ETP == (51 - 51)) {
        printf ("No");
    }
    return (377 - 377);
}

