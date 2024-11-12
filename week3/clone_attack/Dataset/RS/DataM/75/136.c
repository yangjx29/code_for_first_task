int main () {
    char BfPxqu1XeW0 = 0;
    int N [1000] = {0};
    int num;
    int tmax;
    int mnQpVv;
    int CPA7csn3FGKQ;
    int bGT3C810Q;
    num = 0;
    tmax = 0;
    mnQpVv = 0;
    int y [1000] = {0};
    int x [1000] = {0};
    do {
        cin >> x[num];
        BfPxqu1XeW0 = cin.get ();
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        num = num + 1;
    }
    while (BfPxqu1XeW0 != '\n');
    num = 0;
    do {
        cin >> y[num];
        BfPxqu1XeW0 = cin.get ();
        num = num + 1;
    }
    while (BfPxqu1XeW0 != '\n');
    for (CPA7csn3FGKQ = 0; num >= CPA7csn3FGKQ; CPA7csn3FGKQ = CPA7csn3FGKQ +1) {
        if (y[CPA7csn3FGKQ] > tmax)
            tmax = y[CPA7csn3FGKQ];
    }
    {
        bGT3C810Q = 0;
        while (bGT3C810Q <= tmax) {
            {
                CPA7csn3FGKQ = 0;
                while (CPA7csn3FGKQ <= num) {
                    if (bGT3C810Q < y[CPA7csn3FGKQ] && bGT3C810Q >= x[CPA7csn3FGKQ])
                        N[bGT3C810Q]++;
                    CPA7csn3FGKQ = CPA7csn3FGKQ +1;
                };
            }
            bGT3C810Q = bGT3C810Q + 1;
        };
    }
    {
        bGT3C810Q = 0;
        while (bGT3C810Q <= tmax) {
            if (N[bGT3C810Q] > mnQpVv)
                mnQpVv = N[bGT3C810Q];
            bGT3C810Q = bGT3C810Q + 1;
        };
    }
    cout << num << " " << mnQpVv << endl;
    return 0;
}

