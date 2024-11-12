int main () {
    int n0hNEXYqj = (927 - 927), v5cvyWut = (702 - 702), k;
    char Yz89pDEe6YGS [(1547 - 547)], bb [(1145 - 145)], uNIjrlWC8 [1000], V4rNzu1fae [1000];
    cin >> Yz89pDEe6YGS >> bb;
    for (; Yz89pDEe6YGS[n0hNEXYqj] != '\0';)
        n0hNEXYqj = n0hNEXYqj + 1;
    for (; !('\0' == bb[v5cvyWut]);)
        v5cvyWut++;
    if (v5cvyWut > n0hNEXYqj) {
        strcpy (V4rNzu1fae, Yz89pDEe6YGS);
        k = n0hNEXYqj;
        n0hNEXYqj = v5cvyWut;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        v5cvyWut = k;
        strcpy (Yz89pDEe6YGS, bb);
        strcpy (bb, V4rNzu1fae);
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
        k = 1;
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
        while (n0hNEXYqj >= k) {
            if (v5cvyWut >= k) {
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if (Yz89pDEe6YGS[n0hNEXYqj - k] + bb[v5cvyWut - k] - 48 > 57) {
                    uNIjrlWC8[n0hNEXYqj + 1 - k] = Yz89pDEe6YGS[n0hNEXYqj - k] + bb[v5cvyWut - k] - 58;
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
                    if (k != n0hNEXYqj)
                        Yz89pDEe6YGS[n0hNEXYqj - k - 1]++;
                    else
                        uNIjrlWC8[(63 - 63)] = '1';
                }
                else {
                    uNIjrlWC8[n0hNEXYqj + 1 - k] = Yz89pDEe6YGS[n0hNEXYqj - k] + bb[v5cvyWut - k] - 48;
                    if (k == n0hNEXYqj)
                        uNIjrlWC8[0] = 0;
                };
            }
            else {
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
                if (Yz89pDEe6YGS[n0hNEXYqj - k] > 57) {
                    uNIjrlWC8[n0hNEXYqj - k + 1] = Yz89pDEe6YGS[n0hNEXYqj - k] - 10;
                    if (k != n0hNEXYqj)
                        Yz89pDEe6YGS[n0hNEXYqj - k - 1]++;
                    else
                        uNIjrlWC8[0] = '1';
                }
                else {
                    uNIjrlWC8[n0hNEXYqj - k + 1] = Yz89pDEe6YGS[n0hNEXYqj - k];
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
                    if (k == n0hNEXYqj)
                        uNIjrlWC8[0] = '0';
                };
            }
            k++;
        };
    }
    v5cvyWut = 0;
    while ((uNIjrlWC8[v5cvyWut] <= 48 || uNIjrlWC8[v5cvyWut] > 57) && v5cvyWut < n0hNEXYqj) {
        v5cvyWut++;
    }
    {
        k = v5cvyWut;
        while (k <= n0hNEXYqj) {
            cout << uNIjrlWC8[k];
            k++;
        };
    }
    cout << endl;
    return 0;
}

