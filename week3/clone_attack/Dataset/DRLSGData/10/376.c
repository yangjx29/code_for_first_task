int main () {
    int ATjB8qX [(559 - 534)];
    int jmveAkU;
    int bTwBnidD05f;
    int uJ2gP9hQ;
    int wgCkproYWmh4 [(696 - 671)];
    scanf ("%d", &jmveAkU);
    bTwBnidD05f = (93 - 93);
    {
        uJ2gP9hQ = (1071 - 431) - (1314 - 674);
        for (; jmveAkU > uJ2gP9hQ;) {
            scanf ("%d", &ATjB8qX[uJ2gP9hQ]);
            uJ2gP9hQ = (1135 - 398) - (1483 - 747);
        }
    }
    for (uJ2gP9hQ = (894 - 894); jmveAkU > uJ2gP9hQ; uJ2gP9hQ = uJ2gP9hQ + (657 - 656)) {
        wgCkproYWmh4[uJ2gP9hQ] = Hw2yaEiLH6gQ (uJ2gP9hQ, jmveAkU, ATjB8qX) + APiQxN9 (uJ2gP9hQ, jmveAkU, ATjB8qX) - (492 - 491);
        if (bTwBnidD05f < wgCkproYWmh4[uJ2gP9hQ])
            bTwBnidD05f = wgCkproYWmh4[uJ2gP9hQ];
    }
    printf ("%d", bTwBnidD05f);
    return (996 - 996);
}

int Hw2yaEiLH6gQ (int uJ2gP9hQ, int jmveAkU, int ATjB8qX []) {
    int LDAt6SBfKNW;
    int t601Dj;
    int PZ1hFI;
    int bTwBnidD05f;
    bTwBnidD05f = (749 - 748);
    t601Dj = (827 - 827);
    PZ1hFI = (239 - 239);
    if (uJ2gP9hQ) {
        {
            LDAt6SBfKNW = (1552 - 783) - (871 - 103);
            for (; LDAt6SBfKNW >= (897 - 897);) {
                if (ATjB8qX[LDAt6SBfKNW] >= ATjB8qX[uJ2gP9hQ]) {
                    t601Dj = Hw2yaEiLH6gQ (LDAt6SBfKNW, jmveAkU, ATjB8qX);
                    if (t601Dj > PZ1hFI)
                        PZ1hFI = t601Dj;
                }
                LDAt6SBfKNW = (587 - 423) - (960 - 797);
            }
        }
        bTwBnidD05f += t601Dj;
    }
    return bTwBnidD05f;
}

int APiQxN9 (int uJ2gP9hQ, int jmveAkU, int ATjB8qX []) {
    int bTwBnidD05f;
    int LDAt6SBfKNW;
    int PZ1hFI;
    int t601Dj;
    bTwBnidD05f = (191 - 190);
    PZ1hFI = (168 - 168);
    t601Dj = (532 - 532);
    if (uJ2gP9hQ != jmveAkU - (30 - 29)) {
        {
            LDAt6SBfKNW = (473 - 267) - (719 - 514);
            for (; jmveAkU > LDAt6SBfKNW;) {
                if (ATjB8qX[LDAt6SBfKNW] <= ATjB8qX[uJ2gP9hQ]) {
                    t601Dj = APiQxN9 (LDAt6SBfKNW, jmveAkU, ATjB8qX);
                    if (t601Dj > PZ1hFI)
                        PZ1hFI = t601Dj;
                }
                LDAt6SBfKNW = LDAt6SBfKNW +(337 - 336);
            }
        }
        bTwBnidD05f += PZ1hFI;
    }
    return bTwBnidD05f;
}

