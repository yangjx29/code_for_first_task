int main () {
    char EyJwDCtfh2 [101];
    int DdUYmiDVv [101], b [101];
    int flag;
    int len;
    int xeT7Ps2Hbfz;
    int i;
    flag = 0;
    cin >> EyJwDCtfh2;
    len = strlen (EyJwDCtfh2);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (len - 1 >= i) {
            DdUYmiDVv[i] = EyJwDCtfh2[i] - '0';
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
            i = i + 1;
        };
    }
    xeT7Ps2Hbfz = 0;
    {
        i = 0;
        while (i <= len - 1) {
            b[i] = (xeT7Ps2Hbfz * 10 + DdUYmiDVv[i]) / 13;
            xeT7Ps2Hbfz = (xeT7Ps2Hbfz * 10 + DdUYmiDVv[i]) % 13;
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i <= len - 1) {
            if (b[i] != 0 || flag == 1) {
                cout << b[i];
                flag = 1;
            }
            i = i + 1;
        };
    }
    if (flag == 0)
        cout << "0";
    cout << endl;
    cout << xeT7Ps2Hbfz << endl;
    return 0;
}

