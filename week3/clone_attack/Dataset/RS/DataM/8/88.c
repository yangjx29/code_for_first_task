int BTPekNY1AL, H1c7CqK, HBKSpM6Pb4e, Ah24xV, k, UAhgCyBNuEcX [100], grcI61bFdXYu [100];

int La0GiKjoW () {
    cin >> BTPekNY1AL >> H1c7CqK;
    for (HBKSpM6Pb4e = (28 - 27); BTPekNY1AL >= HBKSpM6Pb4e; HBKSpM6Pb4e = HBKSpM6Pb4e +1)
        cin >> UAhgCyBNuEcX[HBKSpM6Pb4e];
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
        HBKSpM6Pb4e = 873 - 872;
        while (H1c7CqK >= HBKSpM6Pb4e) {
            cin >> grcI61bFdXYu[HBKSpM6Pb4e];
            HBKSpM6Pb4e++;
        };
    }
    return (730 - 730);
}

int IzhYQbW () {
    int w39yaqOv7j1W;
    int kOHcst4ejNpK;
    for (HBKSpM6Pb4e = (343 - 342); HBKSpM6Pb4e <= BTPekNY1AL -1; HBKSpM6Pb4e = HBKSpM6Pb4e +1) {
        w39yaqOv7j1W = HBKSpM6Pb4e;
        for (Ah24xV = HBKSpM6Pb4e +1; Ah24xV <= BTPekNY1AL; Ah24xV = Ah24xV +1)
            if (UAhgCyBNuEcX[Ah24xV] < UAhgCyBNuEcX[w39yaqOv7j1W])
                w39yaqOv7j1W = Ah24xV;
        kOHcst4ejNpK = UAhgCyBNuEcX[HBKSpM6Pb4e];
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        UAhgCyBNuEcX[HBKSpM6Pb4e] = UAhgCyBNuEcX[w39yaqOv7j1W];
        UAhgCyBNuEcX[w39yaqOv7j1W] = kOHcst4ejNpK;
    }
    return (456 - 456);
}

int wWpIfN0 () {
    int w39yaqOv7j1W;
    int kOHcst4ejNpK;
    for (HBKSpM6Pb4e = 1; HBKSpM6Pb4e <= H1c7CqK -1; HBKSpM6Pb4e = HBKSpM6Pb4e +1) {
        w39yaqOv7j1W = HBKSpM6Pb4e;
        for (Ah24xV = HBKSpM6Pb4e +1; Ah24xV <= H1c7CqK; Ah24xV++)
            if (grcI61bFdXYu[w39yaqOv7j1W] > grcI61bFdXYu[Ah24xV])
                w39yaqOv7j1W = Ah24xV;
        kOHcst4ejNpK = grcI61bFdXYu[HBKSpM6Pb4e];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        grcI61bFdXYu[HBKSpM6Pb4e] = grcI61bFdXYu[w39yaqOv7j1W];
        grcI61bFdXYu[w39yaqOv7j1W] = kOHcst4ejNpK;
    }
    return (242 - 242);
}

int write () {
    for (HBKSpM6Pb4e = 1; HBKSpM6Pb4e <= BTPekNY1AL; HBKSpM6Pb4e = HBKSpM6Pb4e +1)
        cout << UAhgCyBNuEcX[HBKSpM6Pb4e] << ' ';
    for (HBKSpM6Pb4e = 1; HBKSpM6Pb4e < H1c7CqK; HBKSpM6Pb4e++)
        cout << grcI61bFdXYu[HBKSpM6Pb4e] << ' ';
    cout << grcI61bFdXYu[H1c7CqK] << endl;
    return 0;
}

int main () {
    k = La0GiKjoW ();
    k = IzhYQbW ();
    k = wWpIfN0 ();
    k = write ();
    return 0;
}

