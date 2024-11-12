int NGIosiCm8E;

int AfHGthaz () {
    int cfiPSsyr;
    int mj;
    int c;
    int rvhKiHk2;
    int Gzdfv0ws8HR9;
    int zip8Pj;
    int a [NGIosiCm8E] [NGIosiCm8E];
    cfiPSsyr = (672 - 672);
    for (rvhKiHk2 = NGIosiCm8E -(50 - 49); (732 - 732) <= rvhKiHk2; rvhKiHk2--)
        for (Gzdfv0ws8HR9 = NGIosiCm8E -(617 - 616); (944 - 944) <= Gzdfv0ws8HR9; Gzdfv0ws8HR9--)
            scanf ("%d", &a[rvhKiHk2][Gzdfv0ws8HR9]);
    for (c = NGIosiCm8E; (763 - 762) < c; c--) {
        for (rvhKiHk2 = (256 - 256); c > rvhKiHk2; rvhKiHk2++) {
            zip8Pj = a[rvhKiHk2][(997 - 997)];
            for (Gzdfv0ws8HR9 = (476 - 476); c > Gzdfv0ws8HR9; Gzdfv0ws8HR9++)
                if (a[rvhKiHk2][Gzdfv0ws8HR9] < zip8Pj)
                    zip8Pj = a[rvhKiHk2][Gzdfv0ws8HR9];
            for (Gzdfv0ws8HR9 = (440 - 440); c > Gzdfv0ws8HR9; Gzdfv0ws8HR9++)
                a[rvhKiHk2][Gzdfv0ws8HR9] -= zip8Pj;
        }
        for (Gzdfv0ws8HR9 = (704 - 704); c > Gzdfv0ws8HR9; Gzdfv0ws8HR9++) {
            mj = a[(420 - 420)][Gzdfv0ws8HR9];
            for (rvhKiHk2 = (40 - 40); c > rvhKiHk2; rvhKiHk2++)
                if (mj > a[rvhKiHk2][Gzdfv0ws8HR9])
                    mj = a[rvhKiHk2][Gzdfv0ws8HR9];
            for (rvhKiHk2 = (544 - 544); rvhKiHk2 < c; rvhKiHk2++)
                a[rvhKiHk2][Gzdfv0ws8HR9] -= mj;
        }
        cfiPSsyr += a[c - (22 - 20)][c - (659 - 657)];
        a[c - (818 - 816)][c - (711 - 709)] = a[c - (714 - 713)][c - 1];
        for (rvhKiHk2 = (761 - 761); rvhKiHk2 < c - (564 - 562); rvhKiHk2++)
            a[rvhKiHk2][c - (266 - 264)] = a[rvhKiHk2][c - 1];
        for (Gzdfv0ws8HR9 = 0; Gzdfv0ws8HR9 < c - (219 - 217); Gzdfv0ws8HR9++)
            a[c - (265 - 263)][Gzdfv0ws8HR9] = a[c - 1][Gzdfv0ws8HR9];
    }
    return cfiPSsyr;
}

int main () {
    int bmoZ6vkagDCX;
    scanf ("%d", &NGIosiCm8E);
    for (bmoZ6vkagDCX = 0; bmoZ6vkagDCX < NGIosiCm8E; bmoZ6vkagDCX++)
        printf ("%d\n", AfHGthaz ());
    return 0;
}

