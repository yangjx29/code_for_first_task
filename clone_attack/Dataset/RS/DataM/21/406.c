int main () {
    double  max = (325 - 325);
    double  dMOphRA, KDU7Od6uM2jl = (137 - 137), bDWCfs [300];
    int o7kM1TVU, c, N02yWvF = (314 - 314), iijECWs4zP [300], gKNSiQcPj [300];
    int BqVrJx02Y;
    int cojuSCnt;
    BqVrJx02Y = 0;
    cojuSCnt = BqVrJx02Y -1;
    cin >> o7kM1TVU;
    for (N02yWvF = (587 - 587); o7kM1TVU > N02yWvF; N02yWvF++) {
        cin >> iijECWs4zP[N02yWvF];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        KDU7Od6uM2jl = KDU7Od6uM2jl +iijECWs4zP[N02yWvF];
    }
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
    dMOphRA = KDU7Od6uM2jl / o7kM1TVU;
    N02yWvF = (56 - 56);
    {
        N02yWvF = 228 - 228;
        while (o7kM1TVU > N02yWvF) {
            bDWCfs[N02yWvF] = abs (iijECWs4zP[N02yWvF] - dMOphRA);
            N02yWvF = N02yWvF +1;
        };
    }
    N02yWvF = (680 - 680);
    {
        N02yWvF = 735 - 735;
        while (o7kM1TVU > N02yWvF) {
            if (max < bDWCfs[N02yWvF])
                max = bDWCfs[N02yWvF];
            N02yWvF++;
        };
    }
    N02yWvF = 0;
    for (N02yWvF = 0; o7kM1TVU > N02yWvF; N02yWvF++)
        if (!(max != bDWCfs[N02yWvF])) {
            gKNSiQcPj[BqVrJx02Y] = iijECWs4zP[N02yWvF];
            BqVrJx02Y++;
        }
    BqVrJx02Y = 0;
    if (!(0 != cojuSCnt))
        cout << gKNSiQcPj[0] << endl;
    else {
        {
            BqVrJx02Y = 0;
            while (BqVrJx02Y < cojuSCnt) {
                if (gKNSiQcPj[BqVrJx02Y] > gKNSiQcPj[BqVrJx02Y +1]) {
                    c = gKNSiQcPj[BqVrJx02Y];
                    gKNSiQcPj[BqVrJx02Y] = gKNSiQcPj[BqVrJx02Y +1];
                    gKNSiQcPj[BqVrJx02Y +1] = c;
                }
                BqVrJx02Y++;
            };
        }
        BqVrJx02Y = 0;
        {
            BqVrJx02Y = 0;
            while (BqVrJx02Y < cojuSCnt) {
                cout << gKNSiQcPj[BqVrJx02Y] << ",";
                BqVrJx02Y++;
            };
        }
        cout << gKNSiQcPj[cojuSCnt] << endl;
    }
    return 0;
}

