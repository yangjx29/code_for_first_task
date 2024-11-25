int main () {
    int XmQDYr, mZU0YVe7Si8, sumc;
    int WCsSlZ3U;
    int ycGsjqC;
    int jqrbWDT6w7KR;
    {
        WCsSlZ3U = 0;
        while (2 >= WCsSlZ3U) {
            for (ycGsjqC = 0; ycGsjqC <= 2; ycGsjqC = ycGsjqC + 1) {
                jqrbWDT6w7KR = 0;
                while (jqrbWDT6w7KR <= 2) {
                    XmQDYr = (ycGsjqC > WCsSlZ3U) + (jqrbWDT6w7KR == WCsSlZ3U);
                    mZU0YVe7Si8 = (WCsSlZ3U > ycGsjqC) + (WCsSlZ3U > jqrbWDT6w7KR);
                    sumc = (ycGsjqC < jqrbWDT6w7KR) + (ycGsjqC > WCsSlZ3U);
                    if (!(WCsSlZ3U <= ycGsjqC && XmQDYr <= mZU0YVe7Si8 || WCsSlZ3U <= jqrbWDT6w7KR && XmQDYr <= sumc || ycGsjqC <= jqrbWDT6w7KR && mZU0YVe7Si8 <= sumc || WCsSlZ3U >= ycGsjqC && XmQDYr >= mZU0YVe7Si8 || WCsSlZ3U >= jqrbWDT6w7KR && XmQDYr >= sumc || ycGsjqC >= jqrbWDT6w7KR && mZU0YVe7Si8 >= sumc)) {
                        if (XmQDYr == mZU0YVe7Si8) {
                            if (sumc >= XmQDYr)
                                cout << "BAC" << endl;
                            else
                                cout << "CBA" << endl;
                        }
                        if (XmQDYr > mZU0YVe7Si8) {
                            if (sumc >= XmQDYr)
                                cout << "CAB" << endl;
                            if (sumc <= mZU0YVe7Si8)
                                cout << "ABC" << endl;
                            else
                                cout << "ACB" << endl;
                        }
                        if (XmQDYr < mZU0YVe7Si8) {
                            if (sumc >= mZU0YVe7Si8)
                                cout << "CBA" << endl;
                            if (sumc <= XmQDYr)
                                cout << "BAC" << endl;
                            else
                                cout << "BCA" << endl;
                        };
                    }
                    jqrbWDT6w7KR = jqrbWDT6w7KR + 1;
                };
            }
            WCsSlZ3U = WCsSlZ3U +1;
        };
    }
    return 0;
}

