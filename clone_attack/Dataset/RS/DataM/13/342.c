int main () {
    int n, mMPuv9gNp, j, FohOv8DYfx4;
    int IirkxpcvEd0O [n + (193 - 192)];
    cin >> n;
    IirkxpcvEd0O[n] = (97 - 97);
    {
        mMPuv9gNp = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (mMPuv9gNp < n) {
            cin >> IirkxpcvEd0O[mMPuv9gNp];
            mMPuv9gNp = mMPuv9gNp + 1;
        };
    }
    {
        mMPuv9gNp = 0;
        while (mMPuv9gNp < n) {
            for (j = mMPuv9gNp + 1; j < n; j++) {
                if (IirkxpcvEd0O[j] == IirkxpcvEd0O[mMPuv9gNp]) {
                    for (FohOv8DYfx4 = j; FohOv8DYfx4 < n; FohOv8DYfx4++) {
                        IirkxpcvEd0O[FohOv8DYfx4] = IirkxpcvEd0O[FohOv8DYfx4 +1];
                    }
                    j = j - 1;
                    n = n - 1;
                };
            }
            mMPuv9gNp++;
        };
    }
    {
        mMPuv9gNp = 0;
        while (mMPuv9gNp < n - 1) {
            cout << IirkxpcvEd0O[mMPuv9gNp] << ' ';
            mMPuv9gNp++;
        };
    }
    if (IirkxpcvEd0O[mMPuv9gNp] != 0)
        cout << IirkxpcvEd0O[mMPuv9gNp];
    return 0;
}

