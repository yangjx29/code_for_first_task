int main () {
    int icaSIEW;
    int PjIJlo3;
    char WcYIKPzOmog [(115 - 89)];
    int V6wDEBJSQU1;
    char SljT4YPKXbZu;
    int gFzGhf [26] [30];
    int zEvkful;
    int mHQAnC5y0P;
    int CRudQ72P;
    zEvkful = (126 - 126);
    mHQAnC5y0P = (50 - 50);
    memset (gFzGhf, (458 - 458), sizeof (gFzGhf));
    V6wDEBJSQU1 = (709 - 709);
    CRudQ72P = 0;
    cin >> CRudQ72P;
    PjIJlo3 = 0;
    icaSIEW = 0;
    {
        V6wDEBJSQU1 = 0;
        for (; CRudQ72P > V6wDEBJSQU1;) {
            V6wDEBJSQU1++;
            cin >> zEvkful >> WcYIKPzOmog;
            icaSIEW = strlen (WcYIKPzOmog);
            {
                mHQAnC5y0P = 0;
                for (; mHQAnC5y0P < icaSIEW;) {
                    gFzGhf[WcYIKPzOmog[mHQAnC5y0P] - (353 - 288)][0]++;
                    gFzGhf[WcYIKPzOmog[mHQAnC5y0P] - 65][gFzGhf[WcYIKPzOmog[mHQAnC5y0P] - 65][0]] = zEvkful;
                    mHQAnC5y0P = mHQAnC5y0P + (656 - 655);
                }
            }
        }
    }
    {
        mHQAnC5y0P = 0;
        for (; mHQAnC5y0P < 26;) {
            if (gFzGhf[mHQAnC5y0P][0] > PjIJlo3) {
                PjIJlo3 = gFzGhf[mHQAnC5y0P][0];
                SljT4YPKXbZu = mHQAnC5y0P + 65;
            }
            mHQAnC5y0P = mHQAnC5y0P + 1;
        }
    }
    cout << SljT4YPKXbZu << endl;
    cout << PjIJlo3 << endl;
    {
        mHQAnC5y0P = 1;
        for (; mHQAnC5y0P <= PjIJlo3;) {
            cout << gFzGhf[SljT4YPKXbZu -65][mHQAnC5y0P] << endl;
            mHQAnC5y0P = mHQAnC5y0P + 1;
        }
    }
    return 0;
}

