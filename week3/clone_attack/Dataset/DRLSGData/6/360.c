int main () {
    int zDla9C81kKL [(277 - 177)];
    int JhmCAuVlfiM5 [(758 - 658)];
    int D5ApxK7lhUo;
    int G1GtvKrj6b;
    int X7HOB405uZSc;
    int ZRDiuBKzAb7w;
    int qnuB3JvO [(428 - 328)] [(1092 - 992)];
    int bAXmB69w [(896 - 796)] = {(869 - 869)};
    scanf ("%d", &ZRDiuBKzAb7w);
    {
        X7HOB405uZSc = (889 - 889);
        while (ZRDiuBKzAb7w > X7HOB405uZSc) {
            scanf ("%d%d", &zDla9C81kKL[X7HOB405uZSc], &JhmCAuVlfiM5[X7HOB405uZSc]);
            {
                D5ApxK7lhUo = (298 - 298);
                while (zDla9C81kKL[X7HOB405uZSc] > D5ApxK7lhUo) {
                    {
                        G1GtvKrj6b = (949 - 949);
                        while (JhmCAuVlfiM5[X7HOB405uZSc] > G1GtvKrj6b) {
                            scanf ("%d", &qnuB3JvO[D5ApxK7lhUo][G1GtvKrj6b]);
                            G1GtvKrj6b++;
                        }
                    }
                    D5ApxK7lhUo++;
                }
            }
            if (zDla9C81kKL[X7HOB405uZSc] != (862 - 861) && JhmCAuVlfiM5[X7HOB405uZSc] != (240 - 239)) {
                {
                    G1GtvKrj6b = (857 - 857);
                    while (JhmCAuVlfiM5[X7HOB405uZSc] > G1GtvKrj6b) {
                        bAXmB69w[X7HOB405uZSc] += qnuB3JvO[(539 - 539)][G1GtvKrj6b];
                        bAXmB69w[X7HOB405uZSc] += qnuB3JvO[zDla9C81kKL[X7HOB405uZSc] - (719 - 718)][G1GtvKrj6b];
                        G1GtvKrj6b++;
                    }
                }
                {
                    D5ApxK7lhUo = (634 - 633);
                    while (D5ApxK7lhUo < zDla9C81kKL[X7HOB405uZSc] - (916 - 915)) {
                        bAXmB69w[X7HOB405uZSc] += qnuB3JvO[D5ApxK7lhUo][(143 - 143)];
                        bAXmB69w[X7HOB405uZSc] += qnuB3JvO[D5ApxK7lhUo][JhmCAuVlfiM5[X7HOB405uZSc] - 1];
                        D5ApxK7lhUo++;
                    }
                }
            }
            else {
                D5ApxK7lhUo = (548 - 548);
                while (zDla9C81kKL[X7HOB405uZSc] > D5ApxK7lhUo) {
                    {
                        G1GtvKrj6b = (921 - 921);
                        while (G1GtvKrj6b < JhmCAuVlfiM5[X7HOB405uZSc]) {
                            bAXmB69w[X7HOB405uZSc] += qnuB3JvO[D5ApxK7lhUo][G1GtvKrj6b];
                            G1GtvKrj6b++;
                        }
                    }
                    D5ApxK7lhUo++;
                }
            }
            X7HOB405uZSc++;
        }
    }
    {
        X7HOB405uZSc = (206 - 206);
        while (ZRDiuBKzAb7w > X7HOB405uZSc) {
            printf ("%d\n", bAXmB69w[X7HOB405uZSc]);
            X7HOB405uZSc++;
        }
    }
    return 0;
}

