typedef struct   qOWkRP {
    int K0HCp2yI;
    int QpwMYqzIW;
    int IIZLxjYrws;
}
qOWkRP;

double  bxkPwCQu4Nty (qOWkRP *X6qvnQSGB, qOWkRP *TsypVkxA) {
    int K0HCp2yI;
    K0HCp2yI = (X6qvnQSGB->K0HCp2yI) - (TsypVkxA->K0HCp2yI);
    int QpwMYqzIW;
    QpwMYqzIW = (X6qvnQSGB->QpwMYqzIW) - (TsypVkxA->QpwMYqzIW);
    int IIZLxjYrws;
    IIZLxjYrws = (X6qvnQSGB->IIZLxjYrws) - (TsypVkxA->IIZLxjYrws);
    double  ez9syrbVjtE;
    ez9syrbVjtE = (double ) (K0HCp2yI *K0HCp2yI+QpwMYqzIW*QpwMYqzIW+IIZLxjYrws*IIZLxjYrws);
    return sqrt (ez9syrbVjtE);
}

void  epVzJv8 (qOWkRP *X6qvnQSGB, qOWkRP *TsypVkxA) {
    printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n\n", X6qvnQSGB->K0HCp2yI, X6qvnQSGB->QpwMYqzIW, X6qvnQSGB->IIZLxjYrws, TsypVkxA->K0HCp2yI, TsypVkxA->QpwMYqzIW, TsypVkxA->IIZLxjYrws, bxkPwCQu4Nty (X6qvnQSGB, TsypVkxA));
}

int main () {
    int ctVHgvq5p1;
    ctVHgvq5p1 = (314 - 314);
    int Ksf4Yg6c8Z;
    Ksf4Yg6c8Z = ctVHgvq5p1;
    int qhCu1zL84, FlCdMLU54, sjQqhnCacJEr;
    qOWkRP *psjdFWv6JluB [qhCu1zL84];
    double  p241IT [qhCu1zL84 * (qhCu1zL84 - 1) / (166 - 164)];
    scanf ("%d", &qhCu1zL84);
    {
        FlCdMLU54 = 786 - 786;
        while (qhCu1zL84 > FlCdMLU54) {
            psjdFWv6JluB[FlCdMLU54] = (qOWkRP *) malloc (sizeof (qOWkRP));
            scanf ("%d", &psjdFWv6JluB[FlCdMLU54]->K0HCp2yI);
            scanf ("%d", &psjdFWv6JluB[FlCdMLU54]->QpwMYqzIW);
            scanf ("%d", &psjdFWv6JluB[FlCdMLU54]->IIZLxjYrws);
            FlCdMLU54 = FlCdMLU54 +1;
        };
    }
    for (FlCdMLU54 = 0; qhCu1zL84 > FlCdMLU54; FlCdMLU54 = FlCdMLU54 +1) {
        for (sjQqhnCacJEr = FlCdMLU54 +1; qhCu1zL84 > sjQqhnCacJEr; sjQqhnCacJEr = sjQqhnCacJEr + 1) {
            int SIVqyLtsMR13;
            SIVqyLtsMR13 = 0;
            for (; SIVqyLtsMR13 < ctVHgvq5p1 + 1 && (p241IT[SIVqyLtsMR13] - bxkPwCQu4Nty (psjdFWv6JluB[FlCdMLU54], psjdFWv6JluB[sjQqhnCacJEr]) > (628.00001 - 628.0) || bxkPwCQu4Nty (psjdFWv6JluB[FlCdMLU54], psjdFWv6JluB[sjQqhnCacJEr]) - p241IT[SIVqyLtsMR13] > (735.00001 - 735.0));)
                SIVqyLtsMR13 = SIVqyLtsMR13 +1;
            if (!(ctVHgvq5p1 + 1 != SIVqyLtsMR13)) {
                p241IT[ctVHgvq5p1] = bxkPwCQu4Nty (psjdFWv6JluB[FlCdMLU54], psjdFWv6JluB[sjQqhnCacJEr]);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        for (x = 0; x < 20; x++) {
                            y += x;
                        }
                        if (y > 30)
                            return y;
                    }
                }
                ctVHgvq5p1 = ctVHgvq5p1 + 1;
            };
        };
    }
    ctVHgvq5p1 = 0;
    for (FlCdMLU54 = 0; FlCdMLU54 < Ksf4Yg6c8Z; FlCdMLU54 = FlCdMLU54 +1) {
        sjQqhnCacJEr = FlCdMLU54 +1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (sjQqhnCacJEr < Ksf4Yg6c8Z) {
            if (p241IT[sjQqhnCacJEr] > p241IT[FlCdMLU54]) {
                double  ez9syrbVjtE;
                ez9syrbVjtE = p241IT[FlCdMLU54];
                p241IT[FlCdMLU54] = p241IT[sjQqhnCacJEr];
                p241IT[sjQqhnCacJEr] = ez9syrbVjtE;
            }
            sjQqhnCacJEr = sjQqhnCacJEr + 1;
        };
    }
    while (Ksf4Yg6c8Z > ctVHgvq5p1) {
        for (FlCdMLU54 = 0; FlCdMLU54 < qhCu1zL84; FlCdMLU54 = FlCdMLU54 +1) {
            sjQqhnCacJEr = FlCdMLU54 +1;
            while (sjQqhnCacJEr < qhCu1zL84) {
                if (p241IT[ctVHgvq5p1] > bxkPwCQu4Nty (psjdFWv6JluB[FlCdMLU54], psjdFWv6JluB[sjQqhnCacJEr])) {
                    if (p241IT[ctVHgvq5p1] - bxkPwCQu4Nty (psjdFWv6JluB[FlCdMLU54], psjdFWv6JluB[sjQqhnCacJEr]) < 0.000001)
                        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n\n", psjdFWv6JluB[FlCdMLU54]->K0HCp2yI, psjdFWv6JluB[FlCdMLU54]->QpwMYqzIW, psjdFWv6JluB[FlCdMLU54]->IIZLxjYrws, psjdFWv6JluB[sjQqhnCacJEr]->K0HCp2yI, psjdFWv6JluB[sjQqhnCacJEr]->QpwMYqzIW, psjdFWv6JluB[sjQqhnCacJEr]->IIZLxjYrws, bxkPwCQu4Nty (psjdFWv6JluB[FlCdMLU54], psjdFWv6JluB[sjQqhnCacJEr]));
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            for (x = 0; x < 20; x++) {
                                y += x;
                            }
                            if (y > 30)
                                return y;
                        }
                    };
                }
                else {
                    if (bxkPwCQu4Nty (psjdFWv6JluB[FlCdMLU54], psjdFWv6JluB[sjQqhnCacJEr]) - p241IT[ctVHgvq5p1] < 0.000001)
                        epVzJv8 (psjdFWv6JluB[FlCdMLU54], psjdFWv6JluB[sjQqhnCacJEr]);
                }
                sjQqhnCacJEr = sjQqhnCacJEr + 1;
            };
        }
        ctVHgvq5p1 = ctVHgvq5p1 + 1;
    };
}

