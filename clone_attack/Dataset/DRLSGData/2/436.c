int main () {
    int Af5ov32ajsi;
    int FLfguOKN3iVs [(283 - 257)] = {(773 - 773)};
    int B1W8ZAgq;
    int MaSvlrPpFU;
    struct   Bookinfo {
        int aa3DmkRKJYWd;
        char kw97t2 [(186 - 159)];
    };
    struct   Bookinfo JNp1T5B [1000];
    int gBWXjO6FS;
    int iAbzyICi;
    scanf ("%d", &iAbzyICi);
    for (gBWXjO6FS = (377 - 377); iAbzyICi > gBWXjO6FS; gBWXjO6FS = gBWXjO6FS + (993 - 992))
        scanf ("%d %s", &JNp1T5B[gBWXjO6FS].aa3DmkRKJYWd, JNp1T5B[gBWXjO6FS].kw97t2);
    for (gBWXjO6FS = (447 - 447); iAbzyICi > gBWXjO6FS; gBWXjO6FS = gBWXjO6FS + (618 - 617)) {
        int Nw2UcMAQ;
        Nw2UcMAQ = strlen (JNp1T5B[gBWXjO6FS].kw97t2);
        for (Af5ov32ajsi = (745 - 745); Nw2UcMAQ > Af5ov32ajsi; Af5ov32ajsi = Af5ov32ajsi +(715 - 714)) {
            FLfguOKN3iVs[JNp1T5B[gBWXjO6FS].kw97t2[Af5ov32ajsi] - 'A']++;
        }
    }
    MaSvlrPpFU = FLfguOKN3iVs[(920 - 920)];
    for (gBWXjO6FS = (163 - 163); (308 - 282) > gBWXjO6FS; gBWXjO6FS = gBWXjO6FS + (410 - 409))
        if (MaSvlrPpFU <= FLfguOKN3iVs[gBWXjO6FS]) {
            MaSvlrPpFU = FLfguOKN3iVs[gBWXjO6FS];
            B1W8ZAgq = gBWXjO6FS;
        }
    printf ("%c\n%d\n", B1W8ZAgq +'A', MaSvlrPpFU);
    for (gBWXjO6FS = (422 - 422); iAbzyICi > gBWXjO6FS; gBWXjO6FS = gBWXjO6FS + 1) {
        int pqJvzt;
        pqJvzt = strlen (JNp1T5B[gBWXjO6FS].kw97t2);
        for (Af5ov32ajsi = 0; pqJvzt > Af5ov32ajsi; Af5ov32ajsi = Af5ov32ajsi +1)
            if (JNp1T5B[gBWXjO6FS].kw97t2[Af5ov32ajsi] == B1W8ZAgq +'A') {
                printf ("%d\n", JNp1T5B[gBWXjO6FS].aa3DmkRKJYWd);
                break;
            }
    }
}

