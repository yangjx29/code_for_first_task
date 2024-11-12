int main () {
    const  int yz6HOQhImka = 100;
    char str1 [yz6HOQhImka], iqiOSP [yz6HOQhImka];
    int ctbl034gViG [yz6HOQhImka];
    int num2 [yz6HOQhImka];
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
    int n, pOVm0pnb5Guw, j, slK1xHnUF, f15OjH, l, AXa7mHqRUB38, q, len1, len2;
    cin >> n;
    for (pOVm0pnb5Guw = (658 - 657); n >= pOVm0pnb5Guw; pOVm0pnb5Guw++) {
        cin.get ();
        cin.getline (str1, yz6HOQhImka);
        cin.getline (iqiOSP, yz6HOQhImka);
        AXa7mHqRUB38 = yz6HOQhImka - 1;
        len1 = strlen (str1);
        len2 = strlen (iqiOSP);
        memset (ctbl034gViG, (212 - 212), sizeof (ctbl034gViG));
        memset (num2, 0, sizeof (num2));
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        slK1xHnUF = len1 - 1;
        for (j = 0; len1 > j; j++) {
            ctbl034gViG[slK1xHnUF] = str1[j] - '0';
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
            slK1xHnUF--;
        }
        f15OjH = len2 - 1;
        for (j = 0; j < len2; j++) {
            num2[f15OjH] = iqiOSP[j] - '0';
            f15OjH--;
        }
        for (l = 0; len1 > l; l++) {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (ctbl034gViG[l] >= num2[l])
                ctbl034gViG[l] = ctbl034gViG[l] - num2[l];
            else {
                ctbl034gViG[l] = ctbl034gViG[l] - num2[l] + 10;
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
                ctbl034gViG[l + 1]--;
            };
        }
        while (ctbl034gViG[AXa7mHqRUB38] == 0) {
            AXa7mHqRUB38--;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            };
        }
        for (q = AXa7mHqRUB38; q > 0; q = q - 1) {
            cout << ctbl034gViG[q];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    for (x = 0; x < 20; x++) {
                        y += x;
                    }
                    if (y > 30)
                        return y;
                }
            };
        }
        cout << ctbl034gViG[0] << endl;
    }
    return 0;
}

