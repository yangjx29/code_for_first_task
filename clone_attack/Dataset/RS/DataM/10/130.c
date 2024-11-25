int N, height [25];

int main (void ) {
    int WDKF4Jq;
    int work (int, int);
    cin >> N;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    {
        WDKF4Jq = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (WDKF4Jq < N) {
            cin >> height[WDKF4Jq];
            WDKF4Jq = WDKF4Jq +1;
        };
    }
    cout << work (0, 99999) << endl;
    return 0;
}

int work (int l8MBYnoDXr, int QpEq8Ho) {
    int WDKF4Jq;
    int qEvKxf;
    int VRuZiUVg;
    int iSt29TwPI1kG;
    {
        WDKF4Jq = l8MBYnoDXr;
        while (QpEq8Ho < height[WDKF4Jq]) {
            WDKF4Jq++;
        };
    }
    if (l8MBYnoDXr >= N || WDKF4Jq >= N)
        return 0;
    VRuZiUVg = work (WDKF4Jq +1, height[WDKF4Jq]) + 1;
    iSt29TwPI1kG = work (l8MBYnoDXr + 1, QpEq8Ho);
    return VRuZiUVg > iSt29TwPI1kG ? VRuZiUVg : iSt29TwPI1kG;
}

