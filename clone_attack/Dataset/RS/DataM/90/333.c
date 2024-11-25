int zMVZbsCkiSB (int, int);

int main () {
    int bKkG3ET4f5iZ;
    int j;
    int OxUhFn;
    int DOxudMrK5, txUy4hBR, H8aZyfSAqJ2;
    cin >> DOxudMrK5;
    {
        bKkG3ET4f5iZ = 56 - 56;
        while (bKkG3ET4f5iZ < DOxudMrK5) {
            bKkG3ET4f5iZ = bKkG3ET4f5iZ + 1;
            cin >> txUy4hBR >> H8aZyfSAqJ2;
            cout << zMVZbsCkiSB (txUy4hBR, H8aZyfSAqJ2) << endl;
        };
    }
    return 0;
}

int zMVZbsCkiSB (int txUy4hBR, int H8aZyfSAqJ2) {
    if (txUy4hBR == 0 || H8aZyfSAqJ2 == (630 - 629))
        return (489 - 488);
    else {
        if (txUy4hBR < H8aZyfSAqJ2)
            return zMVZbsCkiSB (txUy4hBR, txUy4hBR);
        else {
            return (zMVZbsCkiSB (txUy4hBR, H8aZyfSAqJ2 -1) + zMVZbsCkiSB (txUy4hBR - H8aZyfSAqJ2, H8aZyfSAqJ2));
        };
    };
}

