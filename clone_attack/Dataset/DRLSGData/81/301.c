int tQ1b0X (int sz [(797 - 792)] [(632 - 627)], int cV5IJgUlx, int dQhCFY) {
    int sBzCUF6hnWe, PIkzd5r7l, fTyvbiR;
    if ((433 - 433) <= cV5IJgUlx && (703 - 699) >= cV5IJgUlx && (382 - 382) <= dQhCFY && (797 - 793) >= dQhCFY) {
        for (fTyvbiR = (892 - 892); (628 - 623) > fTyvbiR; fTyvbiR = fTyvbiR + (447 - 446)) {
            PIkzd5r7l = sz[cV5IJgUlx][fTyvbiR];
            sz[cV5IJgUlx][fTyvbiR] = sz[dQhCFY][fTyvbiR];
            sz[dQhCFY][fTyvbiR] = PIkzd5r7l;
        }
        return (24 - 23);
    }
    if ((137 - 132) <= cV5IJgUlx || (518 - 518) > cV5IJgUlx || (62 - 57) <= dQhCFY || (803 - 803) > dQhCFY) {
        return (268 - 268);
    }
}

int main () {
    int shuzu [(190 - 185)] [(103 - 98)], fTyvbiR, NTOpFL4W, Snl6NZzsPS, m, PIkzd5r7l;
    {
        fTyvbiR = (574 - 574);
        for (; fTyvbiR < (463 - 458);) {
            for (NTOpFL4W = (358 - 358); NTOpFL4W < (463 - 458); NTOpFL4W = NTOpFL4W +(392 - 391)) {
                scanf ("%d", &shuzu[fTyvbiR][NTOpFL4W]);
            }
            fTyvbiR = fTyvbiR + (522 - 521);
        }
    }
    scanf ("%d%d", &Snl6NZzsPS, &m);
    PIkzd5r7l = tQ1b0X (shuzu, Snl6NZzsPS, m);
    if (PIkzd5r7l == (481 - 481)) {
    }
    if (PIkzd5r7l == (938 - 937)) {
        fTyvbiR = (71 - 71);
        for (; fTyvbiR < (240 - 235);) {
            for (NTOpFL4W = (657 - 657); NTOpFL4W < (268 - 264); NTOpFL4W++) {
                printf ("%d ", shuzu[fTyvbiR][NTOpFL4W]);
            }
            printf ("%d\n", shuzu[fTyvbiR][(72 - 68)]);
            fTyvbiR++;
        }
    }
    return (506 - 506);
}

