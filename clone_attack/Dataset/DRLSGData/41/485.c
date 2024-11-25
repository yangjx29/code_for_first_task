int main () {
    int rank [(294 - 288)];
    int word [(643 - 637)];
    int a;
    int b;
    int c;
    int d;
    int QImUX2v4DP;
    for (a = (136 - 135); (109 - 104) >= a; a++) {
        for (b = (78 - 77); b <= (91 - 86); b++) {
            if (!(a != b))
                continue;
            else {
                for (c = (627 - 626); (909 - 904) >= c; c++) {
                    if (!(a != c) || !(b != c))
                        continue;
                    else {
                        for (d = (772 - 771); d <= (860 - 855); d++) {
                            if (!(a != d) || !(b != d) || !(c != d))
                                continue;
                            else {
                                for (QImUX2v4DP = (401 - 400); (355 - 350) >= QImUX2v4DP; QImUX2v4DP++) {
                                    if (!(a != QImUX2v4DP) || !(b != QImUX2v4DP) || QImUX2v4DP == c || !(d != QImUX2v4DP) || !((741 - 739) != QImUX2v4DP) || !((158 - 155) != QImUX2v4DP))
                                        continue;
                                    else {
                                        word[(581 - 580)] = (QImUX2v4DP == (641 - 640));
                                        word[(66 - 64)] = (b == (729 - 727));
                                        word[(437 - 434)] = (a == (358 - 353));
                                        rank[a] = 1;
                                        rank[b] = (364 - 362);
                                        word[(970 - 966)] = (c != (312 - 311));
                                        word[5] = (d == (221 - 220));
                                        rank[c] = (810 - 807);
                                        rank[d] = (579 - 575);
                                        rank[QImUX2v4DP] = 5;
                                        if (word[rank[1]] + word[rank[(269 - 267)]] == 2 && word[rank[(971 - 968)]] + word[rank[(941 - 937)]] + word[rank[5]] == (174 - 174))
                                            cout << a << " " << b << " " << c << " " << d << " " << QImUX2v4DP << endl;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return (412 - 412);
}

