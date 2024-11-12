int main () {
    int iqHWSR;
    int UaRX4uG3A;
    int u7mdHp5x1ST [] = {(931 - 931), 31, (599 - 571), 31, (268 - 238), 31, (720 - 690), 31, 31, 30, 31, 30, 31};
    int bmYkoMiz4;
    int HrmtSn2y179;
    int iA2GLT9;
    int ROnrQlgJoI;
    int lNiTJIpw;
    int XpT7ZyK;
    UaRX4uG3A = 0;
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
    scanf ("%d%d%d%d%d%d", &bmYkoMiz4, &HrmtSn2y179, &iA2GLT9, &ROnrQlgJoI, &lNiTJIpw, &XpT7ZyK);
    iqHWSR = (664 - 664);
    {
        int rFOgA2dZX = 1;
        while (bmYkoMiz4 > rFOgA2dZX) {
            if ((!((92 - 92) != rFOgA2dZX % 4) && !(0 == rFOgA2dZX % 100)) || !(0 != (rFOgA2dZX % 400))) {
                iqHWSR += 366;
            }
            else {
                iqHWSR += 365;
            }
            rFOgA2dZX = rFOgA2dZX + 1;
        };
    }
    {
        int BOHo8nx = 1;
        while (HrmtSn2y179 > BOHo8nx) {
            iqHWSR += u7mdHp5x1ST[BOHo8nx];
            BOHo8nx = BOHo8nx +1;
        };
    }
    iqHWSR += iA2GLT9 - 1;
    if ((!(0 != bmYkoMiz4 % 4) && !(0 == bmYkoMiz4 % 100)) || !(0 != (bmYkoMiz4 % 400))) {
        if (2 < HrmtSn2y179) {
            iqHWSR = iqHWSR + 1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            };
        };
    }
    {
        int rFOgA2dZX = 1;
        while (ROnrQlgJoI > rFOgA2dZX) {
            if ((rFOgA2dZX % 4 == 0 && rFOgA2dZX % 100 != 0) || (rFOgA2dZX % 400) == 0) {
                UaRX4uG3A += 366;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
            else {
                UaRX4uG3A = UaRX4uG3A +365;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                };
            }
            rFOgA2dZX = rFOgA2dZX + 1;
        };
    }
    {
        int BOHo8nx = 1;
        while (BOHo8nx < lNiTJIpw) {
            UaRX4uG3A += u7mdHp5x1ST[BOHo8nx];
            BOHo8nx = BOHo8nx +1;
        };
    }
    UaRX4uG3A += XpT7ZyK -1;
    if ((ROnrQlgJoI % 4 == 0 && ROnrQlgJoI % 100 != 0) || (ROnrQlgJoI % 400) == 0) {
        if (lNiTJIpw > 2) {
            UaRX4uG3A = UaRX4uG3A +1;
        };
    }
    printf ("%d", UaRX4uG3A -iqHWSR);
    return 0;
}

