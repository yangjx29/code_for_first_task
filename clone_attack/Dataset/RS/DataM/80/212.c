int main () {
    int TBdxFeWTbVn;
    int mCOizmM2S;
    int XONdRbjQ6r;
    int uEU90xWV;
    int Zg5KNfkw;
    int day2;
    int total;
    total = 0;
    scanf ("%d%d%d%d%d%d", &TBdxFeWTbVn, &mCOizmM2S, &XONdRbjQ6r, &uEU90xWV, &Zg5KNfkw, &day2);
    for (;;) {
        if (TBdxFeWTbVn == uEU90xWV && mCOizmM2S == Zg5KNfkw &&XONdRbjQ6r == day2) {
            break;
        }
        else {
            if (XONdRbjQ6r == 31) {
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if (mCOizmM2S == 1 || !(3 != mCOizmM2S) || mCOizmM2S == 5 || mCOizmM2S == 7 || !(8 != mCOizmM2S) || mCOizmM2S == 10) {
                    mCOizmM2S = mCOizmM2S + 1;
                    XONdRbjQ6r = 0;
                }
                else if (mCOizmM2S == 12) {
                    TBdxFeWTbVn = TBdxFeWTbVn +1;
                    mCOizmM2S = 1;
                    XONdRbjQ6r = 0;
                };
            }
            else {
                if (XONdRbjQ6r == 30) {
                    if (mCOizmM2S == 4 || mCOizmM2S == 6 || mCOizmM2S == 9 || mCOizmM2S == 11) {
                        mCOizmM2S = mCOizmM2S + 1;
                        XONdRbjQ6r = 0;
                    };
                }
                else if (XONdRbjQ6r == 28) {
                    if (mCOizmM2S == 2) {
                        if ((TBdxFeWTbVn % 4 == 0 && TBdxFeWTbVn % 100 != 0) || (TBdxFeWTbVn % 400 == 0)) {
                            total = total + 1;
                            mCOizmM2S++;
                            XONdRbjQ6r = 0;
                        }
                        else {
                            mCOizmM2S++;
                            XONdRbjQ6r = 0;
                        };
                    };
                };
            };
        }
        XONdRbjQ6r++;
        total = total + 1;
    }
    printf ("%d", total);
    return 0;
}

