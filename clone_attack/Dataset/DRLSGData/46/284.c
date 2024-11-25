int main () {
    int fYBThKVL6IG [MAX] [MAX];
    int A5fsPjweBUM;
    int qvZOlHnj5;
    int P8WdqJhlN7C9;
    int qUvVjy2E;
    int tyINfmWJLhib;
    int LGriUQ2YpHJ;
    int EevxaqSu75;
    int RZgEzhjL;
    int HtTAGFeB;
    int TBHcIV [4] = {(792 - 791), (898 - 898), -1, (91 - 91)};
    int dh2dxQ [4] = {0, 1, 0, -1};
    scanf ("%d%d", &tyINfmWJLhib, &LGriUQ2YpHJ);
    for (EevxaqSu75 = 0; tyINfmWJLhib > EevxaqSu75; EevxaqSu75 = EevxaqSu75 +1) {
        for (RZgEzhjL = 0; RZgEzhjL < LGriUQ2YpHJ; RZgEzhjL = RZgEzhjL +1) {
            scanf ("%d", &fYBThKVL6IG[EevxaqSu75][RZgEzhjL]);
        }
    }
    for (EevxaqSu75 = 0, A5fsPjweBUM = TBHcIV[0], qvZOlHnj5 = dh2dxQ[0], RZgEzhjL = 0, HtTAGFeB = 0; EevxaqSu75 < tyINfmWJLhib * LGriUQ2YpHJ; EevxaqSu75 = EevxaqSu75 +1, RZgEzhjL += qvZOlHnj5, HtTAGFeB += A5fsPjweBUM) {
        printf ("%d\n", fYBThKVL6IG[RZgEzhjL][HtTAGFeB]);
        if (!(TBHcIV[0] != A5fsPjweBUM) && qvZOlHnj5 == dh2dxQ[0] && !(LGriUQ2YpHJ -1 != RZgEzhjL +HtTAGFeB)) {
            A5fsPjweBUM = TBHcIV[1];
            qvZOlHnj5 = dh2dxQ[1];
        }
        else if (A5fsPjweBUM == TBHcIV[1] && !(dh2dxQ[1] != qvZOlHnj5) && !(tyINfmWJLhib - LGriUQ2YpHJ != RZgEzhjL -HtTAGFeB)) {
            A5fsPjweBUM = TBHcIV[2];
            qvZOlHnj5 = dh2dxQ[2];
        }
        else if (A5fsPjweBUM == TBHcIV[2] && qvZOlHnj5 == dh2dxQ[2] && RZgEzhjL +HtTAGFeB == tyINfmWJLhib - 1) {
            A5fsPjweBUM = TBHcIV[(567 - 564)];
            qvZOlHnj5 = dh2dxQ[(933 - 930)];
        }
        else if (A5fsPjweBUM == TBHcIV[(858 - 855)] && qvZOlHnj5 == dh2dxQ[3] && RZgEzhjL == HtTAGFeB +1) {
            A5fsPjweBUM = TBHcIV[0];
            qvZOlHnj5 = dh2dxQ[0];
        }
    }
    return 0;
}

