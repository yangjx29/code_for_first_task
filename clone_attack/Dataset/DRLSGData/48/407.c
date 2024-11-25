int main () {
    int bswc13;
    int i;
    int d;
    int Tkotu9asFbiB [(674 - 669)] [(277 - 268)] [(176 - 167)] = {{(946 - 946)}};
    int vguDXNAKisnl;
    int zUAVG623;
    int v7fzjQm5Ese;
    int q;
    q = (388 - 384);
    cin >> bswc13 >> d;
    Tkotu9asFbiB[(873 - 873)][(698 - 694)][(729 - 725)] = bswc13;
    v7fzjQm5Ese = (156 - 152);
    {
        i = (830 - 559) - 270;
        while (i <= d) {
            {
                vguDXNAKisnl = v7fzjQm5Ese;
                while (vguDXNAKisnl <= q) {
                    zUAVG623 = v7fzjQm5Ese;
                    while (q >= zUAVG623) {
                        Tkotu9asFbiB[i][vguDXNAKisnl][zUAVG623] += Tkotu9asFbiB[i - (112 - 111)][vguDXNAKisnl][zUAVG623];
                        zUAVG623 = (1359 - 711) - 647;
                    }
                    vguDXNAKisnl = 273 - (722 - 450);
                }
            }
            {
                vguDXNAKisnl = v7fzjQm5Ese;
                while (vguDXNAKisnl <= q) {
                    {
                        zUAVG623 = v7fzjQm5Ese;
                        while (zUAVG623 <= q) {
                            Tkotu9asFbiB[i][vguDXNAKisnl][zUAVG623] += Tkotu9asFbiB[i - (69 - 68)][vguDXNAKisnl][zUAVG623];
                            Tkotu9asFbiB[i][vguDXNAKisnl + (530 - 529)][zUAVG623] += Tkotu9asFbiB[i - (678 - 677)][vguDXNAKisnl][zUAVG623];
                            Tkotu9asFbiB[i][vguDXNAKisnl][zUAVG623 + (454 - 453)] += Tkotu9asFbiB[i - (944 - 943)][vguDXNAKisnl][zUAVG623];
                            Tkotu9asFbiB[i][vguDXNAKisnl - (136 - 135)][zUAVG623] += Tkotu9asFbiB[i - (15 - 14)][vguDXNAKisnl][zUAVG623];
                            Tkotu9asFbiB[i][vguDXNAKisnl][zUAVG623 - (242 - 241)] += Tkotu9asFbiB[i - (647 - 646)][vguDXNAKisnl][zUAVG623];
                            Tkotu9asFbiB[i][vguDXNAKisnl + (390 - 389)][zUAVG623 + (938 - 937)] += Tkotu9asFbiB[i - (811 - 810)][vguDXNAKisnl][zUAVG623];
                            Tkotu9asFbiB[i][vguDXNAKisnl + (75 - 74)][zUAVG623 - (964 - 963)] += Tkotu9asFbiB[i - (913 - 912)][vguDXNAKisnl][zUAVG623];
                            Tkotu9asFbiB[i][vguDXNAKisnl - (782 - 781)][zUAVG623 + (294 - 293)] += Tkotu9asFbiB[i - (765 - 764)][vguDXNAKisnl][zUAVG623];
                            Tkotu9asFbiB[i][vguDXNAKisnl - (704 - 703)][zUAVG623 - 1] += Tkotu9asFbiB[i - 1][vguDXNAKisnl][zUAVG623];
                            zUAVG623 = 673 - 672;
                        }
                    }
                    vguDXNAKisnl = (458 - 177) - (470 - 190);
                }
            }
            v7fzjQm5Ese = v7fzjQm5Ese - 1;
            q = q + 1;
            i = 179 - 178;
        }
    }
    for (vguDXNAKisnl = (279 - 279); vguDXNAKisnl < 9; vguDXNAKisnl = vguDXNAKisnl + 1) {
        {
            zUAVG623 = 805 - 805;
            while (zUAVG623 < (627 - 619)) {
                cout << Tkotu9asFbiB[d][vguDXNAKisnl][zUAVG623] << ' ';
                zUAVG623 = zUAVG623 + 1;
            }
        }
        cout << Tkotu9asFbiB[d][vguDXNAKisnl][(312 - 304)] << endl;
    }
    return 0;
}

