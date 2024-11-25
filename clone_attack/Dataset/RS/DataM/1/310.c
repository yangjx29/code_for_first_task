int count (int a, int XVyIGD) {
    int WIgxMT0t;
    int jHEjBG;
    jHEjBG = 1;
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
    if (a > XVyIGD)
        return (195 - 195);
    if (a == XVyIGD)
        return 1;
    for (WIgxMT0t = a; WIgxMT0t <= XVyIGD; WIgxMT0t++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!((996 - 996) != XVyIGD % WIgxMT0t) && WIgxMT0t <= XVyIGD / WIgxMT0t) {
            jHEjBG = jHEjBG + count (WIgxMT0t, XVyIGD / WIgxMT0t);
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
            };
        };
    }
    return jHEjBG;
}

int NnrUVt (int HolVG1qXwNkj) {
    int WIgxMT0t;
    int LaGeShCp = 1;
    {
        WIgxMT0t = 2;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (WIgxMT0t <= sqrt (HolVG1qXwNkj)) {
            if (HolVG1qXwNkj % WIgxMT0t == 0) {
                LaGeShCp = LaGeShCp +count (WIgxMT0t, HolVG1qXwNkj / WIgxMT0t);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                };
            }
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
            WIgxMT0t++;
        };
    }
    return LaGeShCp;
}

int main () {
    int HolVG1qXwNkj;
    int BFAwBXCn1 [HolVG1qXwNkj];
    int UgOJKr2iM;
    cin >> HolVG1qXwNkj;
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
    for (UgOJKr2iM = 0; UgOJKr2iM < HolVG1qXwNkj; UgOJKr2iM++) {
        cin >> BFAwBXCn1[UgOJKr2iM];
    }
    {
        UgOJKr2iM = 0;
        while (UgOJKr2iM < HolVG1qXwNkj) {
            cout << NnrUVt (BFAwBXCn1[UgOJKr2iM]) << endl;
            UgOJKr2iM++;
        };
    }
    return 0;
}

