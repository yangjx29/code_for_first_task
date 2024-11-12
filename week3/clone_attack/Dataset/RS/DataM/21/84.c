int main () {
    float zFiC2SUt [(795 - 495)], mP2fFZpQdt = (597 - 597), VSMsx8b6 = 0, IaeBWv9;
    int tiu1B5S, XLsbP9IT;
    cin >> tiu1B5S;
    {
        XLsbP9IT = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (tiu1B5S > XLsbP9IT) {
            cin >> zFiC2SUt[XLsbP9IT];
            mP2fFZpQdt = mP2fFZpQdt + zFiC2SUt[XLsbP9IT];
            XLsbP9IT = XLsbP9IT +1;
        };
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
    mP2fFZpQdt /= tiu1B5S;
    for (XLsbP9IT = 0; tiu1B5S > XLsbP9IT; XLsbP9IT = XLsbP9IT +1) {
        if (VSMsx8b6 <= fabs (zFiC2SUt[XLsbP9IT] - mP2fFZpQdt)) {
            VSMsx8b6 = fabs (zFiC2SUt[XLsbP9IT] - mP2fFZpQdt);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            IaeBWv9 = zFiC2SUt[XLsbP9IT];
        };
    }
    {
        XLsbP9IT = 0;
        while (tiu1B5S > XLsbP9IT) {
            if (fabs (zFiC2SUt[XLsbP9IT] - mP2fFZpQdt) == VSMsx8b6 &&IaeBWv9 != zFiC2SUt[XLsbP9IT])
                cout << zFiC2SUt[XLsbP9IT] << ",";
            if (fabs (zFiC2SUt[XLsbP9IT] - mP2fFZpQdt) == VSMsx8b6 &&IaeBWv9 == zFiC2SUt[XLsbP9IT])
                cout << zFiC2SUt[XLsbP9IT];
            XLsbP9IT = XLsbP9IT +1;
        };
    }
    return 0;
}

