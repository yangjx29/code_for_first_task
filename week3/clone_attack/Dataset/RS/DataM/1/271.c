int l90v7TDhmdS (int dyifMVk4a, int NH90VR);

int main () {
    int dyifMVk4a;
    int DFbsZozIpYT;
    int lgzJiUDxoO;
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
    cin >> lgzJiUDxoO;
    for (DFbsZozIpYT = (342 - 341); DFbsZozIpYT <= lgzJiUDxoO; DFbsZozIpYT = DFbsZozIpYT +1) {
        cin >> dyifMVk4a;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        cout << l90v7TDhmdS (dyifMVk4a, 2) << endl;
    }
    return 0;
}

int l90v7TDhmdS (int dyifMVk4a, int NH90VR) {
    int DFbsZozIpYT;
    int UXWY3Ar5 = 1;
    if (dyifMVk4a < NH90VR) {
        return 0;
    }
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
    for (DFbsZozIpYT = NH90VR; DFbsZozIpYT <= dyifMVk4a; DFbsZozIpYT++) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (dyifMVk4a % DFbsZozIpYT == 0) {
            UXWY3Ar5 = UXWY3Ar5 +l90v7TDhmdS (dyifMVk4a / DFbsZozIpYT, DFbsZozIpYT);
        };
    }
    return UXWY3Ar5;
}

