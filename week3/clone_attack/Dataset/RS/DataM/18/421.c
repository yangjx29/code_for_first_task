int main () {
    int wSAODyd;
    int z5VCg1mn [101] [101];
    int TbcnH2Q;
    int M7nq4O9RC;
    int gsv6pyoz5;
    int Tzi3n6u;
    int n;
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
    int uQIA8F4z1qmD;
    wSAODyd = (987 - 987);
    cin >> n;
    for (Tzi3n6u = (217 - 217); Tzi3n6u < n; Tzi3n6u = Tzi3n6u +1) {
        for (TbcnH2Q = (950 - 950); TbcnH2Q < n; TbcnH2Q = TbcnH2Q +1)
            for (M7nq4O9RC = (293 - 293); n > M7nq4O9RC; M7nq4O9RC = M7nq4O9RC +1)
                cin >> z5VCg1mn[TbcnH2Q][M7nq4O9RC];
        wSAODyd = (264 - 264);
        {
            gsv6pyoz5 = n;
            while ((897 - 896) < gsv6pyoz5) {
                for (TbcnH2Q = 0; gsv6pyoz5 > TbcnH2Q; TbcnH2Q = TbcnH2Q +1) {
                    uQIA8F4z1qmD = 100000;
                    for (M7nq4O9RC = 0; gsv6pyoz5 > M7nq4O9RC; M7nq4O9RC = M7nq4O9RC +1) {
                        if (uQIA8F4z1qmD > z5VCg1mn[TbcnH2Q][M7nq4O9RC])
                            uQIA8F4z1qmD = z5VCg1mn[TbcnH2Q][M7nq4O9RC];
                    }
                    for (M7nq4O9RC = 0; gsv6pyoz5 > M7nq4O9RC; M7nq4O9RC = M7nq4O9RC +1)
                        z5VCg1mn[TbcnH2Q][M7nq4O9RC] = z5VCg1mn[TbcnH2Q][M7nq4O9RC] - uQIA8F4z1qmD;
                }
                for (M7nq4O9RC = 0; gsv6pyoz5 > M7nq4O9RC; M7nq4O9RC++) {
                    uQIA8F4z1qmD = 100000;
                    for (TbcnH2Q = 0; gsv6pyoz5 > TbcnH2Q; TbcnH2Q = TbcnH2Q +1) {
                        if (uQIA8F4z1qmD > z5VCg1mn[TbcnH2Q][M7nq4O9RC])
                            uQIA8F4z1qmD = z5VCg1mn[TbcnH2Q][M7nq4O9RC];
                    }
                    for (TbcnH2Q = 0; gsv6pyoz5 > TbcnH2Q; TbcnH2Q++)
                        z5VCg1mn[TbcnH2Q][M7nq4O9RC] = z5VCg1mn[TbcnH2Q][M7nq4O9RC] - uQIA8F4z1qmD;
                }
                wSAODyd = wSAODyd + z5VCg1mn[(366 - 365)][(910 - 909)];
                {
                    TbcnH2Q = 182 - 181;
                    while (TbcnH2Q < gsv6pyoz5 - 1) {
                        for (M7nq4O9RC = 0; M7nq4O9RC < gsv6pyoz5; M7nq4O9RC++)
                            z5VCg1mn[TbcnH2Q][M7nq4O9RC] = z5VCg1mn[TbcnH2Q +1][M7nq4O9RC];
                        TbcnH2Q++;
                    };
                }
                for (M7nq4O9RC = 1; M7nq4O9RC < gsv6pyoz5; M7nq4O9RC++)
                    for (TbcnH2Q = 0; TbcnH2Q < gsv6pyoz5 - 1; TbcnH2Q++)
                        z5VCg1mn[TbcnH2Q][M7nq4O9RC] = z5VCg1mn[TbcnH2Q][M7nq4O9RC +1];
                gsv6pyoz5--;
            };
        }
        cout << wSAODyd << endl;
    }
    return 0;
}

