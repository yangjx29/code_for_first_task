int main () {
    char U5hubY [(444 - 344)] [10000];
    int Gc3Skd;
    int cIwc7A;
    int eMDEWu2P19;
    int fJRjNa0k4Vc;
    int h;
    char b [(785 - 685)];
    int ZPgE3OxfX;
    int Kd3VcvE;
    scanf ("%d", &ZPgE3OxfX);
    Gc3Skd = (839 - 839);
    for (fJRjNa0k4Vc = (272 - 272); ZPgE3OxfX > fJRjNa0k4Vc; fJRjNa0k4Vc = fJRjNa0k4Vc + 1) {
        scanf ("%s", U5hubY[fJRjNa0k4Vc]);
        h = strlen (U5hubY[fJRjNa0k4Vc]);
        Gc3Skd = (543 - 543);
        for (eMDEWu2P19 = (705 - 705); h - (465 - 464) >= eMDEWu2P19; eMDEWu2P19 = eMDEWu2P19 + 1) {
            Gc3Skd = 0;
            for (cIwc7A = 0; h - 1 >= cIwc7A; cIwc7A = cIwc7A + 1) {
                if ((!(U5hubY[fJRjNa0k4Vc][cIwc7A] != U5hubY[fJRjNa0k4Vc][eMDEWu2P19])) && (eMDEWu2P19 != cIwc7A)) {
                    Gc3Skd = 1;
                    break;
                }
            }
            if (!(0 != Gc3Skd)) {
                b[fJRjNa0k4Vc] = U5hubY[fJRjNa0k4Vc][eMDEWu2P19];
                break;
            }
        }
        if (!(1 != Gc3Skd)) {
            b[fJRjNa0k4Vc] = 1;
        }
    }
    for (Kd3VcvE = 0; Kd3VcvE <= ZPgE3OxfX -1; Kd3VcvE = Kd3VcvE +1) {
        if (!(1 != b[Kd3VcvE])) {
        }
        else {
            printf ("%c\n", b[Kd3VcvE]);
        }
    }
    return 0;
}

