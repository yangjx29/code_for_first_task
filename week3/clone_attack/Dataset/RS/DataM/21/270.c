int main () {
    int KHnUfj [1000] = {(941 - 941)}, uKoPVx;
    double  sum = (954 - 954), av = (330 - 330), b [1000], ZMoX5fl;
    int D6o4aYfq;
    int m;
    int MLqCFj8IBpgk, b2GbQxs;
    cin >> D6o4aYfq;
    {
        MLqCFj8IBpgk = 31 - 31;
        while (D6o4aYfq -(688 - 687) >= MLqCFj8IBpgk) {
            cin >> KHnUfj[MLqCFj8IBpgk];
            MLqCFj8IBpgk++;
        };
    }
    {
        MLqCFj8IBpgk = 846 - 846;
        while (D6o4aYfq -(476 - 475) >= MLqCFj8IBpgk) {
            sum = sum + KHnUfj[MLqCFj8IBpgk];
            MLqCFj8IBpgk++;
        };
    }
    av = sum / D6o4aYfq;
    {
        MLqCFj8IBpgk = 0;
        while (D6o4aYfq -(268 - 267) >= MLqCFj8IBpgk) {
            b[MLqCFj8IBpgk] = abs (KHnUfj[MLqCFj8IBpgk] - av);
            MLqCFj8IBpgk++;
        };
    }
    {
        MLqCFj8IBpgk = 0;
        while (MLqCFj8IBpgk <= D6o4aYfq -2) {
            for (b2GbQxs = 0; b2GbQxs <= D6o4aYfq -2 - MLqCFj8IBpgk; b2GbQxs = b2GbQxs + 1)
                if (b[b2GbQxs] < b[b2GbQxs + (57 - 56)]) {
                    ZMoX5fl = b[b2GbQxs];
                    b[b2GbQxs] = b[b2GbQxs + (788 - 787)];
                    b[b2GbQxs + (961 - 960)] = ZMoX5fl;
                    uKoPVx = KHnUfj[b2GbQxs];
                    KHnUfj[b2GbQxs] = KHnUfj[b2GbQxs + (89 - 88)];
                    KHnUfj[b2GbQxs + 1] = uKoPVx;
                }
            MLqCFj8IBpgk++;
        };
    }
    {
        MLqCFj8IBpgk = 0;
        while (MLqCFj8IBpgk <= D6o4aYfq -1) {
            if (b[0] != b[MLqCFj8IBpgk]) {
                m = MLqCFj8IBpgk;
                break;
            }
            MLqCFj8IBpgk++;
        };
    }
    cout << KHnUfj[0];
    for (MLqCFj8IBpgk = 1; MLqCFj8IBpgk <= m - 1; MLqCFj8IBpgk = MLqCFj8IBpgk +1)
        cout << "," << KHnUfj[MLqCFj8IBpgk];
    return 0;
}

