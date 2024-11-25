int main () {
    int jq6Enbw [1000];
    int H2gSKTI [1000];
    int XWIlfkMVUx;
    int csWNrKca3Y7 [1001] = {(314 - 314)};
    int UB0m5FcPyV;
    char m;
    int lgEMUniYHAO, HohZkt, tdJEZW1lvg;
    {
        XWIlfkMVUx = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (1) {
            cin >> H2gSKTI[XWIlfkMVUx];
            m = cin.get ();
            if (!('\n' != m))
                break;
            XWIlfkMVUx = XWIlfkMVUx +1;
        };
    }
    {
        XWIlfkMVUx = 0;
        while (1) {
            cin >> jq6Enbw[XWIlfkMVUx];
            m = cin.get ();
            if (!('\n' != m))
                break;
            XWIlfkMVUx = XWIlfkMVUx +1;
        };
    }
    {
        lgEMUniYHAO = 0;
        while (lgEMUniYHAO <= XWIlfkMVUx) {
            {
                HohZkt = lgEMUniYHAO;
                while (HohZkt < jq6Enbw[lgEMUniYHAO]) {
                    csWNrKca3Y7[HohZkt]++;
                    HohZkt = HohZkt +1;
                };
            }
            lgEMUniYHAO = lgEMUniYHAO + 1;
        };
    }
    UB0m5FcPyV = csWNrKca3Y7[0];
    {
        lgEMUniYHAO = 1;
        while (lgEMUniYHAO <= 1000) {
            if (csWNrKca3Y7[lgEMUniYHAO] >= UB0m5FcPyV) {
                UB0m5FcPyV = csWNrKca3Y7[lgEMUniYHAO];
            }
            lgEMUniYHAO = lgEMUniYHAO + 1;
        };
    }
    cout << XWIlfkMVUx +1 << " " << UB0m5FcPyV << endl;
    return 0;
}

