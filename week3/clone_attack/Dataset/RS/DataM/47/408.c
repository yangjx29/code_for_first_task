int GQmEJH3D [100] = {0};

int f (int i, int ywdcTk) {
    cin >> GQmEJH3D[i];
    if (ywdcTk > i) {
        f (i + (96 - 95), ywdcTk);
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
    if (i == 1)
        cout << GQmEJH3D[i];
    else
        cout << GQmEJH3D[i] << ' ';
}

int main () {
    int i;
    int ywdcTk;
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
    cin >> ywdcTk;
    f (i, ywdcTk);
    return 0;
}

