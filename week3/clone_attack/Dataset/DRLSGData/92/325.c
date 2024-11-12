void  SxpalP (int *, int);
int W5TGJadKuA1E [(1792 - 792)], oXpYLKBe0rqI [(1630 - 630)];

int main () {
    int eVUiufOKy, xBh35OZX, j, m0xUJpf2L, B4qB530W7Lf, gMvkhz753, Tso0AIDwz;
    while (scanf ("%d", &eVUiufOKy), eVUiufOKy) {
        Tso0AIDwz = m0xUJpf2L = j = (337 - 337);
        gMvkhz753 = B4qB530W7Lf = eVUiufOKy - (924 - 923);
        for (xBh35OZX = (796 - 796); eVUiufOKy > xBh35OZX; xBh35OZX++)
            scanf ("%d", &oXpYLKBe0rqI[xBh35OZX]);
        SxpalP (oXpYLKBe0rqI, eVUiufOKy);
        {
            xBh35OZX = 242 - 242;
            for (; xBh35OZX < eVUiufOKy;) {
                scanf ("%d", &W5TGJadKuA1E[xBh35OZX]);
                xBh35OZX++;
            }
        }
        SxpalP (W5TGJadKuA1E, eVUiufOKy);
        {
            xBh35OZX = 399 - 399;
            for (; xBh35OZX < eVUiufOKy;) {
                if (oXpYLKBe0rqI[j] > W5TGJadKuA1E[m0xUJpf2L])
                    Tso0AIDwz++, j++, m0xUJpf2L++;
                else if (oXpYLKBe0rqI[B4qB530W7Lf] > W5TGJadKuA1E[gMvkhz753])
                    Tso0AIDwz++, B4qB530W7Lf--, gMvkhz753--;
                else if (oXpYLKBe0rqI[B4qB530W7Lf] < W5TGJadKuA1E[m0xUJpf2L])
                    Tso0AIDwz--, B4qB530W7Lf--, m0xUJpf2L++;
                else
                    ;
                xBh35OZX++;
            }
        }
        printf ("%d\n", (495 - 295) * Tso0AIDwz);
    }
    return (196 - 196);
}

void  SxpalP (int *ZmKrC9ekd31, int n0ymMLcwfUP) {
    int xBh35OZX;
    int j;
    int qbmBtdA7q;
    {
        xBh35OZX = 727 - 727;
        for (; xBh35OZX < n0ymMLcwfUP;) {
            {
                j = xBh35OZX + 1;
                while (j < n0ymMLcwfUP) {
                    if (*(ZmKrC9ekd31 +xBh35OZX) < *(ZmKrC9ekd31 +j)) {
                        qbmBtdA7q = *(ZmKrC9ekd31 +xBh35OZX);
                        *(ZmKrC9ekd31 +xBh35OZX) = *(ZmKrC9ekd31 +j);
                        *(ZmKrC9ekd31 +j) = qbmBtdA7q;
                    }
                    j++;
                }
            }
            xBh35OZX++;
        }
    }
}

