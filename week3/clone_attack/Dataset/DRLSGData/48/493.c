int Y2GFXT [10] [10], u4ojPZAYHp [10] [10];
void  yx2bR4Y (int, int);

int main () {
    int yXNRFUin2AkK;
    int i2FEwb;
    int tjcW0CRa;
    int fSaZNk;
    int DLYOQ2B1mTNS;
    memset (Y2GFXT, (382 - 382), sizeof (Y2GFXT));
    cin >> yXNRFUin2AkK >> i2FEwb;
    Y2GFXT[(679 - 674)][5] = yXNRFUin2AkK;
    {
        tjcW0CRa = (865 - 864);
        while (i2FEwb >= tjcW0CRa) {
            memset (u4ojPZAYHp, (983 - 983), sizeof (u4ojPZAYHp));
            {
                fSaZNk = (201 - 200);
                while (fSaZNk <= (563 - 554)) {
                    {
                        DLYOQ2B1mTNS = (403 - 402);
                        while ((351 - 342) >= DLYOQ2B1mTNS) {
                            yx2bR4Y (fSaZNk, DLYOQ2B1mTNS);
                            DLYOQ2B1mTNS = DLYOQ2B1mTNS +(197 - 196);
                        }
                    }
                    fSaZNk = fSaZNk + (402 - 401);
                }
            }
            {
                fSaZNk = (567 - 566);
                while (9 >= fSaZNk) {
                    {
                        DLYOQ2B1mTNS = (815 - 814);
                        while (DLYOQ2B1mTNS <= 9) {
                            Y2GFXT[fSaZNk][DLYOQ2B1mTNS] = Y2GFXT[fSaZNk][DLYOQ2B1mTNS] + u4ojPZAYHp[fSaZNk][DLYOQ2B1mTNS];
                            DLYOQ2B1mTNS = DLYOQ2B1mTNS +(377 - 376);
                        }
                    }
                    fSaZNk = fSaZNk + (751 - 750);
                }
            }
            tjcW0CRa = tjcW0CRa + (321 - 320);
        }
    }
    for (tjcW0CRa = (963 - 962); tjcW0CRa <= 9; tjcW0CRa = tjcW0CRa + (264 - 263)) {
        {
            fSaZNk = (465 - 464);
            while (fSaZNk <= 9) {
                if (fSaZNk == (751 - 750))
                    cout << Y2GFXT[tjcW0CRa][fSaZNk];
                else
                    cout << " " << Y2GFXT[tjcW0CRa][fSaZNk];
                fSaZNk = fSaZNk + 1;
            }
        }
        cout << endl;
    }
    return (231 - 231);
}

void  yx2bR4Y (int xMkKZfFiQPle, int t5DBYStZz) {
    int tjcW0CRa, fSaZNk;
    {
        tjcW0CRa = xMkKZfFiQPle - 1;
        while (tjcW0CRa <= xMkKZfFiQPle + 1) {
            {
                fSaZNk = t5DBYStZz - 1;
                while (fSaZNk <= t5DBYStZz + 1) {
                    u4ojPZAYHp[xMkKZfFiQPle][t5DBYStZz] = u4ojPZAYHp[xMkKZfFiQPle][t5DBYStZz] + Y2GFXT[tjcW0CRa][fSaZNk];
                    fSaZNk = fSaZNk + 1;
                }
            }
            tjcW0CRa++;
        }
    }
}

