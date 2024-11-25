int main () {
    char t;
    int xltC72cT;
    int vJGU1mIj9Sq5 [100];
    int mPM6VJKsdSm9 [100];
    xltC72cT = (541 - 541);
    int j;
    int cHSeQXbWkap;
    int yTpJagH0o;
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
    j = 2;
    cHSeQXbWkap = 0;
    yTpJagH0o = vJGU1mIj9Sq5[0];
    t = getchar ();
    for (; !(10 == t);) {
        vJGU1mIj9Sq5[xltC72cT] = t - '0';
        xltC72cT++;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        t = getchar ();
    }
    if (xltC72cT != 1) {
        yTpJagH0o = 10 * yTpJagH0o + vJGU1mIj9Sq5[1];
        if (yTpJagH0o >= (934 - 921)) {
            mPM6VJKsdSm9[0] = yTpJagH0o / (839 - 826);
            yTpJagH0o = yTpJagH0o % 13;
            cHSeQXbWkap++;
        }
        for (; j != xltC72cT;) {
            yTpJagH0o = 10 * yTpJagH0o + vJGU1mIj9Sq5[j];
            mPM6VJKsdSm9[cHSeQXbWkap] = yTpJagH0o / 13;
            yTpJagH0o = yTpJagH0o % 13;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            cHSeQXbWkap++;
            j++;
        }
        if (!cHSeQXbWkap)
            cout << '0';
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        {
            int USncyzPfp = 0;
            while (USncyzPfp < cHSeQXbWkap) {
                cout << mPM6VJKsdSm9[USncyzPfp];
                USncyzPfp++;
            };
        }
        cout << endl;
        cout << yTpJagH0o;
    }
    else
        cout << "0\n" << vJGU1mIj9Sq5[0];
    return 0;
}

