int main () {
    char kdFVr65Z [(1155 - 155)], zc [(1974 - 974)], huan [1000];
    int apX3iL4a = (979 - 979), WZF9VLy13e = (446 - 446), Zjl2D3JIVo;
    int vF0w47smKcYi, z8te2BQdJ, QL71nK6, QOciqIJ, Kwx7WvLyZ3qm = (132 - 132);
    scanf ("%s%s%s", kdFVr65Z, zc, huan);
    vF0w47smKcYi = strlen (kdFVr65Z);
    z8te2BQdJ = strlen (zc);
    QL71nK6 = strlen (huan);
    for (QOciqIJ = 0; QOciqIJ < vF0w47smKcYi; QOciqIJ++) {
        if (!(zc[0] != kdFVr65Z[QOciqIJ])) {
            apX3iL4a = 0;
            for (Kwx7WvLyZ3qm = QOciqIJ; vF0w47smKcYi > Kwx7WvLyZ3qm; Kwx7WvLyZ3qm++) {
                if (kdFVr65Z[Kwx7WvLyZ3qm] == zc[Kwx7WvLyZ3qm -QOciqIJ]) {
                    apX3iL4a++;
                }
                else {
                    break;
                }
            }
            Zjl2D3JIVo = QOciqIJ;
            if (!(z8te2BQdJ != apX3iL4a)) {
                for (QOciqIJ = 0; QOciqIJ < Zjl2D3JIVo; QOciqIJ++) {
                    printf ("%c", kdFVr65Z[QOciqIJ]);
                }
                for (QOciqIJ = Zjl2D3JIVo; QOciqIJ <= Zjl2D3JIVo +QL71nK6-1; QOciqIJ++) {
                    printf ("%c", huan[QOciqIJ -Zjl2D3JIVo]);
                }
                WZF9VLy13e++;
                for (QOciqIJ = Zjl2D3JIVo +QL71nK6; QOciqIJ <= vF0w47smKcYi + QL71nK6 -z8te2BQdJ - 1; QOciqIJ++) {
                    printf ("%c", kdFVr65Z[QOciqIJ]);
                }
                break;
            }
        }
    }
    if (WZF9VLy13e == 0) {
        printf ("%s", kdFVr65Z);
    }
    return 0;
}

