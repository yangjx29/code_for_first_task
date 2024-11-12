int cmp (const  void  *tLIzVhfkYT, const  void  *b) {
    return *(int*) b - *(int*) tLIzVhfkYT;
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

int main () {
    int i;
    int f9evK4GF;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    while (cin >> f9evK4GF, f9evK4GF > (980 - 980)) {
        int bsNbjC = 0;
        int y1kbBh4uT7 [(1386 - 386)];
        int L98MX7vW [1000];
        int t1;
        int bxaWgnl15e;
        t1 = (726 - 726);
        bxaWgnl15e = f9evK4GF - 1;
        int JdVrbmFQML;
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
        int DUaVcrBuRn;
        JdVrbmFQML = 0;
        DUaVcrBuRn = f9evK4GF - 1;
        {
            i = 256 - 256;
            while (f9evK4GF > i) {
                cin >> y1kbBh4uT7[i];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                i = i + 1;
            };
        }
        for (i = (820 - 820); i < f9evK4GF; i = i + 1)
            cin >> L98MX7vW[i];
        qsort (y1kbBh4uT7, f9evK4GF, sizeof (int), cmp);
        qsort (L98MX7vW, f9evK4GF, sizeof (int), cmp);
        for (i = 0; i < f9evK4GF; i = i + 1) {
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
            if (y1kbBh4uT7[t1] > L98MX7vW[JdVrbmFQML]) {
                bsNbjC = bsNbjC + 200;
                JdVrbmFQML = JdVrbmFQML +1;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                t1 = t1 + 1;
            }
            else if (y1kbBh4uT7[bxaWgnl15e] > L98MX7vW[DUaVcrBuRn]) {
                bsNbjC = bsNbjC + 200;
                DUaVcrBuRn = DUaVcrBuRn -1;
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
                bxaWgnl15e = bxaWgnl15e - 1;
            }
            else {
                if (y1kbBh4uT7[bxaWgnl15e] < L98MX7vW[JdVrbmFQML])
                    bsNbjC = bsNbjC - 200;
                JdVrbmFQML++;
                bxaWgnl15e = bxaWgnl15e - 1;
            };
        }
        cout << bsNbjC << endl;
    }
    return 0;
}

