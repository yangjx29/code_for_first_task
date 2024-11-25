int main () {
    int LJNArhBKq0tY;
    int wTCf8Y7BRr;
    int H4xpFOmH [LJNArhBKq0tY];
    int *g3dGPl9Usm = H4xpFOmH +LJNArhBKq0tY-wTCf8Y7BRr;
    int *q = H4xpFOmH;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    cin >> LJNArhBKq0tY >> wTCf8Y7BRr;
    {
        int oog2qbpv5W = 0;
        while (LJNArhBKq0tY > oog2qbpv5W) {
            cin >> H4xpFOmH[oog2qbpv5W];
            oog2qbpv5W = oog2qbpv5W + 1;
        };
    }
    for (; g3dGPl9Usm < H4xpFOmH +LJNArhBKq0tY; g3dGPl9Usm++) {
        cout << *g3dGPl9Usm << ' ';
    }
    for (; q < H4xpFOmH +LJNArhBKq0tY-wTCf8Y7BRr; q = q + 1) {
        if (q != H4xpFOmH +LJNArhBKq0tY-wTCf8Y7BRr - 1)
            cout << *q << ' ';
        else
            cout << *q << endl;
    }
    return 0;
}

