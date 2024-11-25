int kfGO94 (int, int);

int main () {
    int MY9eSrwqRFQ;
    int lkIT3D, y;
    cin >> lkIT3D >> y;
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
    MY9eSrwqRFQ = kfGO94 (lkIT3D, y);
    cout << MY9eSrwqRFQ << endl;
    return 0;
}

int kfGO94 (int lkIT3D, int y) {
    if (lkIT3D == y)
        return lkIT3D;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    if (lkIT3D > y)
        return kfGO94 (y, lkIT3D);
    else
        return kfGO94 (lkIT3D, y / 2);
}

