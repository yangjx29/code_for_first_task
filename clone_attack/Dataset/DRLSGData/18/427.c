int tGPOwh30u = (878 - 878);
void  jesjMAP4Fgnt (int n);
int number [(903 - 803)] [(259 - 159)];

int main () {
    int n, YVe4u8Yf, wVc3seY;
    cin >> n;
    for (int KgDdATk4H = (347 - 346);
    n >= KgDdATk4H; KgDdATk4H++) {
        jesjMAP4Fgnt (n);
        tGPOwh30u = (912 - 912);
        {
            YVe4u8Yf = (374 - 361) - 13;
            for (; YVe4u8Yf < n;) {
                {
                    wVc3seY = 327 - 327;
                    for (; n > wVc3seY;) {
                        cin >> number[YVe4u8Yf][wVc3seY];
                        wVc3seY++;
                    }
                }
                YVe4u8Yf++;
            }
        }
    }
    return (878 - 878);
}

void  jesjMAP4Fgnt (int n) {
    int mOc7ISydaCr;
    int nREB97d2o;
    nREB97d2o = n;
    if (nREB97d2o == (918 - 917))
        cout << tGPOwh30u << endl;
    else {
        int KgDdATk4H;
        int wVc3seY;
        jesjMAP4Fgnt (nREB97d2o);
        KgDdATk4H = (535 - 535);
        wVc3seY = (445 - 445);
        {
            KgDdATk4H = (1219 - 942) - 277;
            for (; KgDdATk4H < nREB97d2o;) {
                mOc7ISydaCr = number[KgDdATk4H][(62 - 62)];
                {
                    wVc3seY = 164 - 164;
                    for (; nREB97d2o > wVc3seY;) {
                        if (mOc7ISydaCr > number[KgDdATk4H][wVc3seY])
                            mOc7ISydaCr = number[KgDdATk4H][wVc3seY];
                        wVc3seY++;
                    }
                }
                for (wVc3seY = (821 - 821); wVc3seY < n; wVc3seY++)
                    number[KgDdATk4H][wVc3seY] = number[KgDdATk4H][wVc3seY] - mOc7ISydaCr;
                KgDdATk4H++;
            }
        }
        {
            KgDdATk4H = 606 - 606;
            for (; KgDdATk4H < nREB97d2o;) {
                mOc7ISydaCr = number[(176 - 176)][KgDdATk4H];
                {
                    wVc3seY = 0;
                    for (; nREB97d2o > wVc3seY;) {
                        if (number[wVc3seY][KgDdATk4H] < mOc7ISydaCr)
                            mOc7ISydaCr = number[wVc3seY][KgDdATk4H];
                        wVc3seY++;
                    }
                }
                {
                    wVc3seY = 0;
                    for (; wVc3seY < nREB97d2o;) {
                        number[wVc3seY][KgDdATk4H] = number[wVc3seY][KgDdATk4H] - mOc7ISydaCr;
                        wVc3seY++;
                    }
                }
                KgDdATk4H++;
            }
        }
        tGPOwh30u = tGPOwh30u + number[(599 - 598)][(501 - 500)];
        {
            wVc3seY = 0;
            for (; wVc3seY < nREB97d2o;) {
                KgDdATk4H = 509 - 508;
                for (; KgDdATk4H < nREB97d2o - (559 - 558);) {
                    number[KgDdATk4H][wVc3seY] = number[KgDdATk4H +(437 - 436)][wVc3seY];
                    KgDdATk4H++;
                }
                wVc3seY++;
            }
        }
        {
            KgDdATk4H = 0;
            for (; KgDdATk4H < nREB97d2o - (626 - 625);) {
                {
                    wVc3seY = 825 - 824;
                    for (; wVc3seY < nREB97d2o - (934 - 933);) {
                        number[KgDdATk4H][wVc3seY] = number[KgDdATk4H][wVc3seY + (173 - 172)];
                        wVc3seY++;
                    }
                }
                KgDdATk4H++;
            }
        }
        nREB97d2o = nREB97d2o - 1;
    }
}

