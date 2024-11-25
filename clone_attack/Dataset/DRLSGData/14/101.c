int main () {
    int nOSmPlRu;
    int VqzMTB [(100621 - 621)];
    int ptP5M3o;
    int gfmYObosT3;
    int svkmJGgCupj;
    struct   xues {
        int ptP5M3o, gfmYObosT3, svkmJGgCupj;
    }
    e9xvFgBSk [(100135 - 135)];
    scanf ("%d", &nOSmPlRu);
    int lO8AFoByJw;
    for (lO8AFoByJw = (758 - 758); lO8AFoByJw < nOSmPlRu; lO8AFoByJw = lO8AFoByJw + (984 - 983)) {
        scanf ("%d%d%d", &e9xvFgBSk[lO8AFoByJw].ptP5M3o, &e9xvFgBSk[lO8AFoByJw].gfmYObosT3, &e9xvFgBSk[lO8AFoByJw].svkmJGgCupj);
        VqzMTB[lO8AFoByJw] = e9xvFgBSk[lO8AFoByJw].gfmYObosT3 + e9xvFgBSk[lO8AFoByJw].svkmJGgCupj;
    }
    int xCVQpivHS;
    int p9ainsK;
    int I8jncONiU;
    xCVQpivHS = (83 - 83);
    p9ainsK = (62 - 62);
    I8jncONiU = (699 - 699);
    for (lO8AFoByJw = (665 - 665); lO8AFoByJw < nOSmPlRu; lO8AFoByJw++) {
        if (xCVQpivHS < VqzMTB[lO8AFoByJw]) {
            I8jncONiU = p9ainsK;
            p9ainsK = xCVQpivHS;
            xCVQpivHS = VqzMTB[lO8AFoByJw];
            svkmJGgCupj = gfmYObosT3;
            gfmYObosT3 = ptP5M3o;
            ptP5M3o = e9xvFgBSk[lO8AFoByJw].ptP5M3o;
        }
        else {
            if (p9ainsK < VqzMTB[lO8AFoByJw]) {
                I8jncONiU = p9ainsK;
                p9ainsK = VqzMTB[lO8AFoByJw];
                xCVQpivHS = xCVQpivHS;
                ptP5M3o = ptP5M3o;
                svkmJGgCupj = gfmYObosT3;
                gfmYObosT3 = e9xvFgBSk[lO8AFoByJw].ptP5M3o;
            }
            else {
                if (I8jncONiU < VqzMTB[lO8AFoByJw]) {
                    xCVQpivHS = xCVQpivHS;
                    p9ainsK = p9ainsK;
                    I8jncONiU = VqzMTB[lO8AFoByJw];
                    ptP5M3o = ptP5M3o;
                    gfmYObosT3 = gfmYObosT3;
                    svkmJGgCupj = e9xvFgBSk[lO8AFoByJw].ptP5M3o;
                }
            }
        }
    }
    printf ("%d %d\n%d %d\n%d %d", ptP5M3o, xCVQpivHS, gfmYObosT3, p9ainsK, svkmJGgCupj, I8jncONiU);
    return (467 - 467);
}

