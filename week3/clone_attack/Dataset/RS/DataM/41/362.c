int main () {
    int jFYZigsWP, ZbCJWSUG41q, bVbyX1kUw, TjyXk4xD, e, ch2xcKVB, rxZLXsB1, HJtg0i, IvqO4AR3d, gSTY0uq7M215, ggI0qDVpBt, pRbc0G2K7yVh, gKiJtQ, MNQpmG8, XhbQtC = (755 - 755);
    for (ch2xcKVB = 1; ch2xcKVB <= 5; ch2xcKVB++) {
        jFYZigsWP = ch2xcKVB;
        for (rxZLXsB1 = 1; 5 >= rxZLXsB1; rxZLXsB1 = rxZLXsB1 + 1) {
            ZbCJWSUG41q = rxZLXsB1;
            if (!(jFYZigsWP != ZbCJWSUG41q))
                continue;
            {
                HJtg0i = 1;
                while (HJtg0i <= 5) {
                    bVbyX1kUw = HJtg0i;
                    if (bVbyX1kUw == jFYZigsWP || bVbyX1kUw == ZbCJWSUG41q)
                        continue;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    for (IvqO4AR3d = 1; IvqO4AR3d <= 5; IvqO4AR3d++) {
                        TjyXk4xD = IvqO4AR3d;
                        if (TjyXk4xD == jFYZigsWP || !(bVbyX1kUw != TjyXk4xD) || !(ZbCJWSUG41q != TjyXk4xD))
                            continue;
                        e = 15 - jFYZigsWP - ZbCJWSUG41q -bVbyX1kUw - TjyXk4xD;
                        if (e == 2 || e == 3)
                            continue;
                        gSTY0uq7M215 = (e == 1);
                        ggI0qDVpBt = (!(2 != ZbCJWSUG41q));
                        pRbc0G2K7yVh = (!(5 != jFYZigsWP));
                        gKiJtQ = (bVbyX1kUw != 1);
                        MNQpmG8 = (TjyXk4xD == 1);
                        if (gSTY0uq7M215 + ggI0qDVpBt + pRbc0G2K7yVh + gKiJtQ + MNQpmG8 == 2) {
                            if (gSTY0uq7M215 == 1 && jFYZigsWP < 3)
                                XhbQtC++;
                            if (ggI0qDVpBt == 1 && ZbCJWSUG41q < 3)
                                XhbQtC++;
                            if (pRbc0G2K7yVh == 1 && bVbyX1kUw < 3)
                                XhbQtC++;
                            if (gKiJtQ == 1 && TjyXk4xD < 3)
                                XhbQtC++;
                            if (MNQpmG8 == 1 && e < 3)
                                XhbQtC++;
                            if (XhbQtC == 2)
                                cout << jFYZigsWP << " " << ZbCJWSUG41q << " " << bVbyX1kUw << " " << TjyXk4xD << " " << e;
                            else {
                                if (XhbQtC != 2)
                                    XhbQtC = 0;
                            };
                        };
                    }
                    HJtg0i = HJtg0i +1;
                };
            };
        };
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
    return 0;
}

