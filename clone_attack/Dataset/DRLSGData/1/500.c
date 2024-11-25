int BBibcT (int yo1SBl, int lwuaSdoIQOv) {
    int HCzYJs = (296 - 295);
    {
        int nfe4Gk = lwuaSdoIQOv;
        for (; yo1SBl >= nfe4Gk * nfe4Gk;) {
            if (!((584 - 584) != yo1SBl % nfe4Gk) && yo1SBl / nfe4Gk >= nfe4Gk) {
                HCzYJs = HCzYJs +BBibcT(yo1SBl / nfe4Gk, nfe4Gk);
            }
            nfe4Gk = nfe4Gk + (314 - 313);
        }
    }
    return HCzYJs;
}

int main () {
    int FuAW9h3slw;
    for (; scanf ("%d", &FuAW9h3slw) == (570 - 569);) {
        int nfe4Gk = (14 - 14);
        for (; nfe4Gk < FuAW9h3slw;) {
            int yo1SBl;
            nfe4Gk = nfe4Gk + (223 - 222);
            scanf ("%d", &yo1SBl);
            printf ("%d\n", BBibcT (yo1SBl, (818 - 816)));
        }
    }
    return (230 - 230);
}

