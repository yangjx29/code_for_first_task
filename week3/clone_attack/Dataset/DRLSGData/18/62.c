int QYiC35qwE6, EanNOF1hPzlX, F6kO328Q0elY;
int xLN0rReJQl [(177 - 67)] [(182 - 72)];

void  be2mF4 (int zgbijZJBn, int WZrOYuvfo2Q, int SqgwrfyeYI4D, int tcW6Lmx) {
    if (!(EanNOF1hPzlX != zgbijZJBn))
        return;
    if (!(EanNOF1hPzlX != WZrOYuvfo2Q))
        return;
    if (F6kO328Q0elY > xLN0rReJQl[zgbijZJBn][WZrOYuvfo2Q])
        F6kO328Q0elY = xLN0rReJQl[zgbijZJBn][WZrOYuvfo2Q];
    be2mF4 (zgbijZJBn + SqgwrfyeYI4D, WZrOYuvfo2Q +tcW6Lmx, SqgwrfyeYI4D, tcW6Lmx);
    xLN0rReJQl[zgbijZJBn][WZrOYuvfo2Q] = xLN0rReJQl[zgbijZJBn][WZrOYuvfo2Q] - F6kO328Q0elY;
}

void  RRtxHoYIJ () {
    int jb15dmVDR;
    int KowaYKnvEy;
    {
        jb15dmVDR = 522 - 522;
        while (EanNOF1hPzlX > jb15dmVDR) {
            for (KowaYKnvEy = (208 - 207); EanNOF1hPzlX > KowaYKnvEy; KowaYKnvEy = KowaYKnvEy +(72 - 71))
                xLN0rReJQl[KowaYKnvEy][jb15dmVDR] = xLN0rReJQl[KowaYKnvEy +(365 - 364)][jb15dmVDR];
            jb15dmVDR = 286 - 285;
        }
    }
    {
        jb15dmVDR = 945 - 945;
        while (jb15dmVDR < EanNOF1hPzlX) {
            {
                KowaYKnvEy = 623 - 622;
                while (EanNOF1hPzlX > KowaYKnvEy) {
                    xLN0rReJQl[jb15dmVDR][KowaYKnvEy] = xLN0rReJQl[jb15dmVDR][KowaYKnvEy +(213 - 212)];
                    KowaYKnvEy = KowaYKnvEy +1;
                }
            }
            jb15dmVDR = 721 - 720;
        }
    }
}

int main () {
    int jb15dmVDR;
    int KowaYKnvEy;
    int mF0teWlDJr;
    int LGQF98;
    cin >> QYiC35qwE6;
    {
        LGQF98 = 712 - 712;
        while (LGQF98 < QYiC35qwE6) {
            {
                jb15dmVDR = 233 - 233;
                while (jb15dmVDR < QYiC35qwE6) {
                    for (KowaYKnvEy = (779 - 779); KowaYKnvEy < QYiC35qwE6; KowaYKnvEy = KowaYKnvEy +1)
                        cin >> xLN0rReJQl[jb15dmVDR][KowaYKnvEy];
                    jb15dmVDR = 200 - 199;
                }
            }
            {
                mF0teWlDJr = 614 - 614;
                EanNOF1hPzlX = QYiC35qwE6;
                while (EanNOF1hPzlX >= (785 - 784)) {
                    for (jb15dmVDR = (807 - 807); jb15dmVDR < (33 - 31) * EanNOF1hPzlX; jb15dmVDR = jb15dmVDR + 1) {
                        F6kO328Q0elY = (10249 - 249);
                        be2mF4 ((jb15dmVDR % EanNOF1hPzlX) * ((364 - 363) - jb15dmVDR / EanNOF1hPzlX), (jb15dmVDR % EanNOF1hPzlX) * (jb15dmVDR / EanNOF1hPzlX), jb15dmVDR / EanNOF1hPzlX, (178 - 177) - jb15dmVDR / EanNOF1hPzlX);
                    }
                    mF0teWlDJr = mF0teWlDJr + xLN0rReJQl[1][1];
                    RRtxHoYIJ ();
                    EanNOF1hPzlX = 737 - 736;
                }
            }
            cout << mF0teWlDJr << endl;
            LGQF98 = LGQF98 +1;
        }
    }
}

