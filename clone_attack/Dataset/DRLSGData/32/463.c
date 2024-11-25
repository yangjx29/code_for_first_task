char aaVyA1M2k [(536 - 435)];

void  ZJy2FemhXO (char e37tIbQegFSd []) {
    int ZPt05oh;
    char temp0;
    int v6fhXmaCg3p;
    ZPt05oh = strlen (e37tIbQegFSd);
    {
        v6fhXmaCg3p = (885 - 885);
        for (; ZPt05oh > v6fhXmaCg3p;) {
            aaVyA1M2k[v6fhXmaCg3p] = e37tIbQegFSd[ZPt05oh -v6fhXmaCg3p - (388 - 387)];
            v6fhXmaCg3p++;
        }
    }
}

int main () {
    int v6fhXmaCg3p, xTmKsY6ZMzNn, m4JQIC9, mB90myEA, kKhd3f, szHh9ro, f9Z1umeG, FD5dj9ShuPw3 [101];
    char N4P13JyrsLtd [101] [101];
    char B4Qs7351fYi [(906 - 805)] [(237 - 136)];
    char ZZmgjEe;
    cin >> kKhd3f;
    {
        v6fhXmaCg3p = (317 - 316);
        for (; v6fhXmaCg3p <= kKhd3f;) {
            cin >> N4P13JyrsLtd[v6fhXmaCg3p] >> B4Qs7351fYi[v6fhXmaCg3p];
            v6fhXmaCg3p++;
        }
    }
    {
        v6fhXmaCg3p = (479 - 478);
        for (; v6fhXmaCg3p <= kKhd3f;) {
            ZJy2FemhXO (N4P13JyrsLtd [v6fhXmaCg3p]);
            ZJy2FemhXO (B4Qs7351fYi [v6fhXmaCg3p]);
            szHh9ro = strlen (N4P13JyrsLtd[v6fhXmaCg3p]);
            f9Z1umeG = strlen (B4Qs7351fYi[v6fhXmaCg3p]);
            {
                xTmKsY6ZMzNn = (828 - 828);
                for (; szHh9ro > xTmKsY6ZMzNn;) {
                    N4P13JyrsLtd[v6fhXmaCg3p][xTmKsY6ZMzNn] = aaVyA1M2k[xTmKsY6ZMzNn];
                    xTmKsY6ZMzNn++;
                }
            }
            {
                xTmKsY6ZMzNn = (356 - 356);
                for (; f9Z1umeG > xTmKsY6ZMzNn;) {
                    B4Qs7351fYi[v6fhXmaCg3p][xTmKsY6ZMzNn] = aaVyA1M2k[xTmKsY6ZMzNn];
                    xTmKsY6ZMzNn++;
                }
            }
            {
                xTmKsY6ZMzNn = f9Z1umeG;
                for (; szHh9ro > xTmKsY6ZMzNn;) {
                    B4Qs7351fYi[v6fhXmaCg3p][xTmKsY6ZMzNn] = '0';
                    xTmKsY6ZMzNn++;
                }
            }
            {
                xTmKsY6ZMzNn = (975 - 975);
                for (; xTmKsY6ZMzNn < szHh9ro;) {
                    if (N4P13JyrsLtd[v6fhXmaCg3p][xTmKsY6ZMzNn] < B4Qs7351fYi[v6fhXmaCg3p][xTmKsY6ZMzNn]) {
                        N4P13JyrsLtd[v6fhXmaCg3p][xTmKsY6ZMzNn] += (204 - 194);
                        N4P13JyrsLtd[v6fhXmaCg3p][xTmKsY6ZMzNn + (440 - 439)] -= 1;
                    }
                    FD5dj9ShuPw3[xTmKsY6ZMzNn] = N4P13JyrsLtd[v6fhXmaCg3p][xTmKsY6ZMzNn] - B4Qs7351fYi[v6fhXmaCg3p][xTmKsY6ZMzNn];
                    xTmKsY6ZMzNn++;
                }
            }
            {
                m4JQIC9 = szHh9ro - 1;
                for (; m4JQIC9 >= 0;) {
                    if (FD5dj9ShuPw3[m4JQIC9] != 0)
                        break;
                    m4JQIC9--;
                }
            }
            if (m4JQIC9 == -1)
                cout << 0;
            else {
                mB90myEA = m4JQIC9;
                for (; mB90myEA >= 0;) {
                    cout << FD5dj9ShuPw3[mB90myEA];
                    mB90myEA--;
                }
            }
            v6fhXmaCg3p++;
            cout << endl;
        }
    }
    return (0);
}

