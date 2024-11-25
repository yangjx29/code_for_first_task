int main () {
    int qLg8wWMmGK, EgmN4WDLCX, Zkf5S2D0qC7o, kUytGrSf;
    cin >> qLg8wWMmGK;
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
    for (EgmN4WDLCX = 3; qLg8wWMmGK / 2 >= EgmN4WDLCX; EgmN4WDLCX += 2) {
        int BzGqmPTBN = sqrt (EgmN4WDLCX);
        int NF3Ir9kJE;
        NF3Ir9kJE = sqrt (qLg8wWMmGK - EgmN4WDLCX);
        for (Zkf5S2D0qC7o = 3; BzGqmPTBN >= Zkf5S2D0qC7o; Zkf5S2D0qC7o += 2) {
            if (!(0 != EgmN4WDLCX % Zkf5S2D0qC7o))
                break;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            };
        }
        if (Zkf5S2D0qC7o <= BzGqmPTBN)
            continue;
        for (kUytGrSf = 3; kUytGrSf <= NF3Ir9kJE; kUytGrSf += 2) {
            if ((qLg8wWMmGK - EgmN4WDLCX) % kUytGrSf == 0)
                break;
        }
        if (kUytGrSf > NF3Ir9kJE)
            cout << EgmN4WDLCX << " " << qLg8wWMmGK - EgmN4WDLCX << endl;
    }
    return 0;
}

