int main () {
    int n, i = 0;
    float a [n], mGEx0AThX [n];
    float NKfTSqRp3lA;
    cin >> n;
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
    for (i = 0; n - 1 >= i; i = i + 1) {
        cin >> a[i] >> mGEx0AThX[i];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    NKfTSqRp3lA = mGEx0AThX[0] / a[0];
    {
        i = 1;
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
        while (i <= n - 1) {
            if (mGEx0AThX[i] / a[i] - NKfTSqRp3lA > 0.05)
                cout << "better" << endl;
            else {
                if (NKfTSqRp3lA -mGEx0AThX[i] / a[i] > 0.05)
                    cout << "worse" << endl;
                else
                    cout << "same" << endl;
            }
            i++;
        };
    }
    return 0;
}

