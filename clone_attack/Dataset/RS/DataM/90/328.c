int num = (329 - 329);

int B2KngHoCf (int m, int DvEaeQ2) {
    if (DvEaeQ2 == (761 - 760) || m == (590 - 590)) {
        return (599 - 598);
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
    if (m < DvEaeQ2) {
        return B2KngHoCf (m, m);
    }
    else {
        return B2KngHoCf (m, DvEaeQ2 -1) + B2KngHoCf (m - DvEaeQ2, DvEaeQ2);
    };
}

int main () {
    int sUk85qJfA64l;
    int cbnl9Bj;
    int m;
    int DvEaeQ2;
    cin >> sUk85qJfA64l;
    {
        cbnl9Bj = 440 - 440;
        while (cbnl9Bj < sUk85qJfA64l) {
            cbnl9Bj = cbnl9Bj + 1;
            cin >> m >> DvEaeQ2;
            cout << B2KngHoCf (m, DvEaeQ2) << endl;
        };
    }
    return 0;
}

