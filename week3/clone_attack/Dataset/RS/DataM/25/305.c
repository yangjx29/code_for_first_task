int main () {
    int jsjq4e0Flk;
    int Wr3G8nYZ;
    int wg21TsXv;
    int IufxEQFm;
    int a [50] = {1};
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
    int Cko7eZF [50] = {0};
    cin >> jsjq4e0Flk;
    {
        wg21TsXv = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (jsjq4e0Flk >= wg21TsXv) {
            wg21TsXv = wg21TsXv + 1;
            for (Wr3G8nYZ = 0; 31 >= Wr3G8nYZ; Wr3G8nYZ++) {
                if (10 > a[Wr3G8nYZ] * 2) {
                    a[Wr3G8nYZ] = a[Wr3G8nYZ] * 2 + Cko7eZF[Wr3G8nYZ];
                    Cko7eZF[Wr3G8nYZ +1] = 0;
                }
                else {
                    a[Wr3G8nYZ] = a[Wr3G8nYZ] * 2 - 10 + Cko7eZF[Wr3G8nYZ];
                    Cko7eZF[Wr3G8nYZ +1] = 1;
                };
            };
        };
    }
    {
        Wr3G8nYZ = 31;
        while (Wr3G8nYZ >= 0) {
            if (a[Wr3G8nYZ] != 0) {
                IufxEQFm = Wr3G8nYZ;
                break;
            }
            Wr3G8nYZ--;
        };
    }
    for (Wr3G8nYZ = IufxEQFm; Wr3G8nYZ >= 0; Wr3G8nYZ--)
        cout << a[Wr3G8nYZ];
}

