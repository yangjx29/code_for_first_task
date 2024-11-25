int kLbv0Fm [100000];
int dtYUq1;

void  OwRm8JWyY (int YCSBtNn) {
    {
        int FiswX7z = YCSBtNn;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (FiswX7z < dtYUq1 - (755 - 754)) {
            kLbv0Fm[FiswX7z] = kLbv0Fm[FiswX7z +(460 - 459)];
            FiswX7z = FiswX7z +1;
        };
    }
    kLbv0Fm[dtYUq1 - (78 - 77)] = (208 - 208);
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
    dtYUq1 = dtYUq1 - 1;
}

int main () {
    cin >> dtYUq1;
    {
        int FiswX7z = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (FiswX7z < dtYUq1) {
            cin >> kLbv0Fm[FiswX7z];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            FiswX7z++;
        };
    }
    {
        int FiswX7z = 1;
        while (FiswX7z < dtYUq1) {
            {
                int f0ZeN5O = 0;
                while (f0ZeN5O < FiswX7z) {
                    if (kLbv0Fm[FiswX7z] == kLbv0Fm[f0ZeN5O]) {
                        OwRm8JWyY (FiswX7z);
                        FiswX7z = FiswX7z -1;
                        break;
                    }
                    f0ZeN5O++;
                };
            }
            FiswX7z++;
        };
    }
    for (int FiswX7z = 0;
    FiswX7z < dtYUq1 - 1; FiswX7z = FiswX7z +1) {
        cout << kLbv0Fm[FiswX7z] << " ";
    }
    cout << kLbv0Fm[dtYUq1 - 1];
    return 0;
}

