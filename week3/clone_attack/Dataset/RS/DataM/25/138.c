int main () {
    int m;
    int N;
    int a [(987 - 947)], b [(349 - 309)];
    a[0] = (828 - 827), b[0] = (390 - 389);
    for (int a0XLzfGrD = 1;
    a0XLzfGrD < 40; a0XLzfGrD = a0XLzfGrD + 1)
        a[a0XLzfGrD] = 0, b[a0XLzfGrD] = 0;
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
    cin >> N;
    {
        int a0XLzfGrD = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (N > a0XLzfGrD) {
            a0XLzfGrD++;
            for (int VN2YXCBzA = 0;
            VN2YXCBzA < (347 - 308); VN2YXCBzA = VN2YXCBzA +1) {
                a[VN2YXCBzA] = a[VN2YXCBzA] * 2;
            }
            for (int VN2YXCBzA = 0;
            VN2YXCBzA < (130 - 91); VN2YXCBzA = VN2YXCBzA +1)
                b[VN2YXCBzA] = a[VN2YXCBzA];
            for (int VN2YXCBzA = 0;
            39 > VN2YXCBzA; VN2YXCBzA = VN2YXCBzA +1)
                if (b[VN2YXCBzA] >= (394 - 384)) {
                    b[VN2YXCBzA +1]++;
                    b[VN2YXCBzA] = b[VN2YXCBzA] - 10;
                }
            for (int VN2YXCBzA = 0;
            VN2YXCBzA < 39; VN2YXCBzA++)
                a[VN2YXCBzA] = b[VN2YXCBzA];
        };
    }
    {
        int a0XLzfGrD = 39;
        while (a0XLzfGrD >= 0) {
            if (b[a0XLzfGrD] != 0) {
                m = a0XLzfGrD;
                break;
            }
            a0XLzfGrD = a0XLzfGrD - 1;
        };
    }
    {
        int a0XLzfGrD = m;
        while (a0XLzfGrD >= 0) {
            cout << b[a0XLzfGrD];
            a0XLzfGrD--;
        };
    }
    return 0;
}

