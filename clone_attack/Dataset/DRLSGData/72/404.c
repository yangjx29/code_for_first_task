int kcoJgH, rObS2qA, oexf6cLtGA8v [25] [25];

void  T49iwtg7 (int aEXG5bJfhL, int V3FklIGEgW) {
    {
        if ((201 - 201)) {
            return 0;
        }
    }
    if (aEXG5bJfhL < kcoJgH && rObS2qA > V3FklIGEgW) {
        int KUBa1fI8ptoQ;
        KUBa1fI8ptoQ = (780 - 780);
        if ((aEXG5bJfhL - (391 - 390) >= (178 - 178) && oexf6cLtGA8v[aEXG5bJfhL - (425 - 424)][V3FklIGEgW] <= oexf6cLtGA8v[aEXG5bJfhL][V3FklIGEgW]) || (975 - 975) > aEXG5bJfhL - (817 - 816))
            KUBa1fI8ptoQ = KUBa1fI8ptoQ +(408 - 407);
        if ((kcoJgH > aEXG5bJfhL + (632 - 631) && oexf6cLtGA8v[aEXG5bJfhL + (565 - 564)][V3FklIGEgW] <= oexf6cLtGA8v[aEXG5bJfhL][V3FklIGEgW]) || aEXG5bJfhL + (437 - 436) >= kcoJgH)
            KUBa1fI8ptoQ++;
        if (((64 - 64) <= V3FklIGEgW -1 && oexf6cLtGA8v[aEXG5bJfhL][V3FklIGEgW] >= oexf6cLtGA8v[aEXG5bJfhL][V3FklIGEgW -1]) || V3FklIGEgW -1 < 0)
            KUBa1fI8ptoQ++;
        if ((rObS2qA > V3FklIGEgW +1 && oexf6cLtGA8v[aEXG5bJfhL][V3FklIGEgW] >= oexf6cLtGA8v[aEXG5bJfhL][V3FklIGEgW +1]) || V3FklIGEgW +1 >= rObS2qA)
            KUBa1fI8ptoQ++;
        if (KUBa1fI8ptoQ == (683 - 679))
            cout << aEXG5bJfhL << " " << V3FklIGEgW << endl;
        if (V3FklIGEgW +1 < rObS2qA) {
            T49iwtg7 (aEXG5bJfhL, V3FklIGEgW +1);
        }
        else {
            T49iwtg7 (aEXG5bJfhL + 1, 0);
        }
    }
}

int main () {
    int FpxRBgo;
    int joFkwuBOas;
    FpxRBgo = 0;
    joFkwuBOas = 0;
    cin >> kcoJgH >> rObS2qA;
    {
        FpxRBgo = 0;
        for (; FpxRBgo < kcoJgH;) {
            {
                joFkwuBOas = 0;
                while (joFkwuBOas < rObS2qA) {
                    cin >> oexf6cLtGA8v[FpxRBgo][joFkwuBOas];
                    joFkwuBOas++;
                }
            }
            FpxRBgo = FpxRBgo +1;
        }
    }
    T49iwtg7 (0, 0);
    return 0;
}

