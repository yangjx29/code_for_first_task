int classify (int HfTvmwrDjPHx, int N) {
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
    if (!(1 != HfTvmwrDjPHx) || !(0 != HfTvmwrDjPHx) || !(1 != N))
        return 1;
    else {
        if (HfTvmwrDjPHx < 0)
            return 0;
        else
            return classify (HfTvmwrDjPHx, N -1) + classify (HfTvmwrDjPHx -N, N);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    };
}

int main () {
    int t, i = 0, HfTvmwrDjPHx, N;
    int XBpzby2lESh [t];
    cin >> t;
    for (; i < t;) {
        cin >> HfTvmwrDjPHx >> N;
        XBpzby2lESh[i] = classify (HfTvmwrDjPHx, N);
        i = i + 1;
    }
    {
        i = 0;
        while (i < t) {
            cout << XBpzby2lESh[i] << endl;
            i++;
        };
    }
    return 0;
}

