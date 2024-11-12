int main () {
    int iUfQGJEITtyp [(296 - 291)] [5] = {0};
    int i, hPZHi8B, k;
    int eJUEsXP2 = 0;
    {
        i = 0;
        while (i < 5) {
            {
                hPZHi8B = 0;
                while (hPZHi8B < 5) {
                    cin >> iUfQGJEITtyp[i][hPZHi8B];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    hPZHi8B = hPZHi8B + 1;
                };
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
            i = i + 1;
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
    {
        i = 0;
        while (i < 5) {
            int KfLdoYP2hp8 = 0, min = 1e6, mi, es0XRt6;
            {
                hPZHi8B = 0;
                while (hPZHi8B < 5) {
                    if (KfLdoYP2hp8 < iUfQGJEITtyp[i][hPZHi8B]) {
                        KfLdoYP2hp8 = iUfQGJEITtyp[i][hPZHi8B];
                        es0XRt6 = hPZHi8B;
                    }
                    hPZHi8B++;
                };
            }
            {
                k = 0;
                while (5 > k) {
                    if (min > iUfQGJEITtyp[k][es0XRt6]) {
                        min = iUfQGJEITtyp[k][es0XRt6];
                        mi = k;
                    }
                    k = k + 1;
                };
            }
            if (mi == i) {
                eJUEsXP2 = 1;
                cout << mi + 1 << " " << es0XRt6 + 1 << " " << iUfQGJEITtyp[mi][es0XRt6];
            }
            i++;
        };
    }
    if (!eJUEsXP2)
        cout << "not found";
    cout << endl;
    return 0;
}

