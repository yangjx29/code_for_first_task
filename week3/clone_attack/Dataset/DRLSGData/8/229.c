int jAzsUQ9updvO (int JA6RcnZO [], int PL51ynKI) {
    int jT4PbDShYUp, VYUejo;
    {
        jT4PbDShYUp = 1;
        for (; jT4PbDShYUp <= PL51ynKI;) {
            cin >> JA6RcnZO[jT4PbDShYUp];
            jT4PbDShYUp = jT4PbDShYUp + 1;
        }
    }
    return 1;
}

int cyfX6gtU (int JA6RcnZO [], int PL51ynKI) {
    int jT4PbDShYUp, VYUejo, LjBmVy0kSgZ;
    {
        jT4PbDShYUp = 1;
        for (; jT4PbDShYUp <= PL51ynKI -1;) {
            {
                VYUejo = 1;
                for (; VYUejo <= PL51ynKI -jT4PbDShYUp;) {
                    if (JA6RcnZO[VYUejo] > JA6RcnZO[VYUejo +1]) {
                        LjBmVy0kSgZ = JA6RcnZO[VYUejo];
                        JA6RcnZO[VYUejo] = JA6RcnZO[VYUejo +1];
                        JA6RcnZO[VYUejo +1] = LjBmVy0kSgZ;
                    }
                    VYUejo++;
                }
            }
            jT4PbDShYUp = jT4PbDShYUp + 1;
        }
    }
    return 1;
}

int M8kbfU5s4lZD (int JA6RcnZO [], int iVlY0ZJe5HD [], int bDc8Yij9tsqx, int Uzv7YfelM3LN) {
    int jT4PbDShYUp;
    {
        jT4PbDShYUp = bDc8Yij9tsqx + 1;
        for (; jT4PbDShYUp <= bDc8Yij9tsqx + Uzv7YfelM3LN;) {
            JA6RcnZO[jT4PbDShYUp] = iVlY0ZJe5HD[jT4PbDShYUp - bDc8Yij9tsqx];
            jT4PbDShYUp++;
        }
    }
    return bDc8Yij9tsqx + Uzv7YfelM3LN;
}

int ngH7ifkJpxyV (int JA6RcnZO [], int PL51ynKI) {
    {
        int jT4PbDShYUp = 1;
        for (; jT4PbDShYUp < PL51ynKI;) {
            cout << JA6RcnZO[jT4PbDShYUp] << " ";
            jT4PbDShYUp++;
        }
    }
    cout << JA6RcnZO[PL51ynKI] << endl;
    return 1;
}

int main () {
    int JA6RcnZO [100], iVlY0ZJe5HD [100], bDc8Yij9tsqx, Uzv7YfelM3LN;
    cin >> bDc8Yij9tsqx >> Uzv7YfelM3LN;
    jAzsUQ9updvO (iVlY0ZJe5HD, Uzv7YfelM3LN);
    cyfX6gtU (iVlY0ZJe5HD, Uzv7YfelM3LN);
    jAzsUQ9updvO (JA6RcnZO, bDc8Yij9tsqx);
    cyfX6gtU (JA6RcnZO, bDc8Yij9tsqx);
    bDc8Yij9tsqx = M8kbfU5s4lZD (JA6RcnZO, iVlY0ZJe5HD, bDc8Yij9tsqx, Uzv7YfelM3LN);
    ngH7ifkJpxyV (JA6RcnZO, bDc8Yij9tsqx);
    return 0;
}

