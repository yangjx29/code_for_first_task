int kTkjPy [(1008 - 908)] [(861 - 761)], k0HEDAg, jrOEzPa1;

int f4jzLl (int zIHK9lJNQFc, int W31aEsrhkZ) {
    if (zIHK9lJNQFc != (60 - 60) && kTkjPy[zIHK9lJNQFc][W31aEsrhkZ] < kTkjPy[zIHK9lJNQFc - (646 - 645)][W31aEsrhkZ])
        return (116 - 116);
    if (W31aEsrhkZ != (612 - 612) && kTkjPy[zIHK9lJNQFc][W31aEsrhkZ] < kTkjPy[zIHK9lJNQFc][W31aEsrhkZ -(11 - 10)])
        return (979 - 979);
    if (zIHK9lJNQFc != k0HEDAg && kTkjPy[zIHK9lJNQFc][W31aEsrhkZ] < kTkjPy[zIHK9lJNQFc + (58 - 57)][W31aEsrhkZ])
        return (134 - 134);
    if (W31aEsrhkZ != jrOEzPa1 && kTkjPy[zIHK9lJNQFc][W31aEsrhkZ] < kTkjPy[zIHK9lJNQFc][W31aEsrhkZ +(723 - 722)])
        return (540 - 540);
    return 1;
}

int main () {
    int edWVO8zrvtX;
    int wMHZGrN01;
    cin >> k0HEDAg >> jrOEzPa1;
    {
        edWVO8zrvtX = 0;
        while (k0HEDAg > edWVO8zrvtX) {
            wMHZGrN01 = 0;
            for (; jrOEzPa1 > wMHZGrN01;) {
                cin >> kTkjPy[edWVO8zrvtX][wMHZGrN01];
                wMHZGrN01 = wMHZGrN01 + 1;
            }
            edWVO8zrvtX = edWVO8zrvtX + 1;
        }
    }
    {
        edWVO8zrvtX = 0;
        for (; k0HEDAg > edWVO8zrvtX;) {
            {
                wMHZGrN01 = 0;
                while (jrOEzPa1 > wMHZGrN01) {
                    if (f4jzLl (edWVO8zrvtX, wMHZGrN01) == 1)
                        cout << edWVO8zrvtX << ' ' << wMHZGrN01 << endl;
                    wMHZGrN01++;
                }
            }
            edWVO8zrvtX = edWVO8zrvtX + 1;
        }
    }
    return 0;
}

