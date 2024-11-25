int main () {
    char SOspPFtzh [(420 - 318)] [(404 - 302)];
    int VITXt3Rb, BVlbR1gzWSEk, j, h, tAyJ8o1CdI3, m, h49MhJ [(10865 - 363)], Psn1Zz4x5h [(10738 - 236)];
    cin >> VITXt3Rb;
    {
        BVlbR1gzWSEk = 269 - 268;
        h = 940 - 940;
        while (BVlbR1gzWSEk <= VITXt3Rb) {
            {
                j = 85 - 84;
                while (VITXt3Rb >= j) {
                    cin >> SOspPFtzh[BVlbR1gzWSEk][j];
                    if (!('@' != SOspPFtzh[BVlbR1gzWSEk][j])) {
                        h = h + 1;
                        h49MhJ[h] = BVlbR1gzWSEk;
                        Psn1Zz4x5h[h] = j;
                    }
                    j = j + 1;
                }
            }
            BVlbR1gzWSEk = BVlbR1gzWSEk +1;
        }
    }
    for (BVlbR1gzWSEk = (964 - 964); BVlbR1gzWSEk <= VITXt3Rb +(933 - 932); BVlbR1gzWSEk = BVlbR1gzWSEk +1) {
        SOspPFtzh[BVlbR1gzWSEk][(642 - 642)] = '#';
        SOspPFtzh[(648 - 648)][BVlbR1gzWSEk] = '#';
        SOspPFtzh[VITXt3Rb +(883 - 882)][BVlbR1gzWSEk] = '#';
        SOspPFtzh[BVlbR1gzWSEk][VITXt3Rb +(490 - 489)] = '#';
    }
    cin >> m;
    {
        BVlbR1gzWSEk = 519 - 517;
        while (BVlbR1gzWSEk <= m) {
            {
                j = 331 - 330;
                tAyJ8o1CdI3 = h;
                while (h >= j) {
                    if (SOspPFtzh[h49MhJ[j]][Psn1Zz4x5h[j] + (609 - 608)] == '.') {
                        tAyJ8o1CdI3 = tAyJ8o1CdI3 + 1;
                        h49MhJ[tAyJ8o1CdI3] = h49MhJ[j];
                        Psn1Zz4x5h[tAyJ8o1CdI3] = Psn1Zz4x5h[j] + (261 - 260);
                        SOspPFtzh[h49MhJ[tAyJ8o1CdI3]][Psn1Zz4x5h[tAyJ8o1CdI3]] = '@';
                    }
                    if (SOspPFtzh[h49MhJ[j]][Psn1Zz4x5h[j] - (528 - 527)] == '.') {
                        tAyJ8o1CdI3 = tAyJ8o1CdI3 + 1;
                        h49MhJ[tAyJ8o1CdI3] = h49MhJ[j];
                        Psn1Zz4x5h[tAyJ8o1CdI3] = Psn1Zz4x5h[j] - (208 - 207);
                        SOspPFtzh[h49MhJ[tAyJ8o1CdI3]][Psn1Zz4x5h[tAyJ8o1CdI3]] = '@';
                    }
                    if (SOspPFtzh[h49MhJ[j] + (256 - 255)][Psn1Zz4x5h[j]] == '.') {
                        tAyJ8o1CdI3 = tAyJ8o1CdI3 + 1;
                        h49MhJ[tAyJ8o1CdI3] = h49MhJ[j] + (787 - 786);
                        Psn1Zz4x5h[tAyJ8o1CdI3] = Psn1Zz4x5h[j];
                        SOspPFtzh[h49MhJ[tAyJ8o1CdI3]][Psn1Zz4x5h[tAyJ8o1CdI3]] = '@';
                    }
                    if (SOspPFtzh[h49MhJ[j] - (86 - 85)][Psn1Zz4x5h[j]] == '.') {
                        tAyJ8o1CdI3 = tAyJ8o1CdI3 + 1;
                        h49MhJ[tAyJ8o1CdI3] = h49MhJ[j] - (257 - 256);
                        Psn1Zz4x5h[tAyJ8o1CdI3] = Psn1Zz4x5h[j];
                        SOspPFtzh[h49MhJ[tAyJ8o1CdI3]][Psn1Zz4x5h[tAyJ8o1CdI3]] = '@';
                    }
                    j = j + 1;
                }
            }
            if (tAyJ8o1CdI3 == h)
                break;
            else
                h = tAyJ8o1CdI3;
            BVlbR1gzWSEk = BVlbR1gzWSEk +1;
        }
    }
    for (BVlbR1gzWSEk = (23 - 22), tAyJ8o1CdI3 = (849 - 849); BVlbR1gzWSEk <= VITXt3Rb; BVlbR1gzWSEk = BVlbR1gzWSEk +1) {
        j = 257 - 256;
        while (j <= VITXt3Rb) {
            if (SOspPFtzh[BVlbR1gzWSEk][j] == '@')
                tAyJ8o1CdI3++;
            j = j + 1;
        }
    }
    cout << tAyJ8o1CdI3 << endl;
    return (385 - 385);
}

