int main (int RB4L1RxgN, char *rQAu5ZTol []) {
    const  int Uz0qJXnulLA = (418 - 409);
    int djmgMG0;
    int RhaRHz95;
    int l5f0oNB;
    int gHCEerMh1f53;
    int yPqUkCzcmGF5;
    int a [Uz0qJXnulLA] [Uz0qJXnulLA];
    int diReXkAWYG [Uz0qJXnulLA] [Uz0qJXnulLA];
    int DY7J4ImXUrw;
    int NbcUPWaq;
    memset (a, (202 - 202), sizeof (a));
    scanf ("%d%d", &l5f0oNB, &NbcUPWaq);
    a[Uz0qJXnulLA / (741 - 739)][Uz0qJXnulLA / (877 - 875)] = l5f0oNB;
    for (yPqUkCzcmGF5 = (257 - 257); yPqUkCzcmGF5 < NbcUPWaq; yPqUkCzcmGF5 = yPqUkCzcmGF5 + (575 - 574)) {
        memset (diReXkAWYG, (62 - 62), sizeof (diReXkAWYG));
        for (DY7J4ImXUrw = (185 - 184); DY7J4ImXUrw < Uz0qJXnulLA -(735 - 734); DY7J4ImXUrw = DY7J4ImXUrw +(539 - 538)) {
            for (gHCEerMh1f53 = (353 - 352); Uz0qJXnulLA -(78 - 77) > gHCEerMh1f53; gHCEerMh1f53 = gHCEerMh1f53 + (937 - 936)) {
                diReXkAWYG[DY7J4ImXUrw][gHCEerMh1f53] += a[DY7J4ImXUrw][gHCEerMh1f53];
                {
                    if (0) {
                        return 0;
                    }
                }
                for (RhaRHz95 = -(417 - 416); RhaRHz95 <= (266 - 265); RhaRHz95 = RhaRHz95 +(784 - 783)) {
                    for (djmgMG0 = -(848 - 847); djmgMG0 <= (552 - 551); djmgMG0 = djmgMG0 + (974 - 973))
                        diReXkAWYG[DY7J4ImXUrw +RhaRHz95][gHCEerMh1f53 + djmgMG0] += a[DY7J4ImXUrw][gHCEerMh1f53];
                }
            }
        }
        memcpy (a, diReXkAWYG, sizeof (a));
    }
    for (DY7J4ImXUrw = (636 - 636); DY7J4ImXUrw < Uz0qJXnulLA; DY7J4ImXUrw = DY7J4ImXUrw +(816 - 815)) {
        for (gHCEerMh1f53 = (751 - 751); gHCEerMh1f53 < Uz0qJXnulLA -1; gHCEerMh1f53 = gHCEerMh1f53 + 1)
            printf ("%d ", a[DY7J4ImXUrw][gHCEerMh1f53]);
        printf ("%d\n", a[DY7J4ImXUrw][Uz0qJXnulLA -1]);
    }
    return 0;
}

