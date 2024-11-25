int AdGLtU7 = (235 - 233);

int vcJtIijyMDe3 (int wwktd5) {
    int VT5R4M801;
    VT5R4M801 = 1;
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
    if (!(1 != wwktd5))
        return 0;
    for (int i = AdGLtU7;
    sqrt (wwktd5) >= i; i++)
        if (wwktd5 % i == 0) {
            VT5R4M801 += vcJtIijyMDe3 (wwktd5 / i);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            AdGLtU7 = i + 1;
        }
    return VT5R4M801;
}

int main () {
    int ZgrGMXeQzP;
    ZgrGMXeQzP = 0;
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
    cin >> ZgrGMXeQzP;
    for (int i = 0;
    i < ZgrGMXeQzP; i++) {
        int wwktd5;
        wwktd5 = 0;
        cin >> wwktd5;
        cout << vcJtIijyMDe3 (wwktd5) << endl;
        AdGLtU7 = 2;
    }
    return 0;
}

