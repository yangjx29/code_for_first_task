int main () {
    int rVNj7kB0 [16] = {0}, n = 0, lWrO7yEsPY, NzkYKZ, fRtNIHXCr6i;
    while (cin >> rVNj7kB0[0]) {
        if (rVNj7kB0[0] != (-1)) {
            for (lWrO7yEsPY = 1; (63 - 48) >= lWrO7yEsPY; lWrO7yEsPY++) {
                cin >> rVNj7kB0[lWrO7yEsPY];
                if (rVNj7kB0[lWrO7yEsPY] == 0)
                    break;
            }
            for (fRtNIHXCr6i = lWrO7yEsPY - 1; fRtNIHXCr6i >= 0; fRtNIHXCr6i--) {
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                for (NzkYKZ = lWrO7yEsPY - 1; NzkYKZ >= 0; NzkYKZ--) {
                    if (rVNj7kB0[fRtNIHXCr6i] == 2 * rVNj7kB0[NzkYKZ])
                        n++;
                };
            }
            cout << n << endl;
            n = 0;
        }
        else
            break;
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

