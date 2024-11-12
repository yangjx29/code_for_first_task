int find (int a, int Pn4hSs []) {
    int l;
    int R7jNxfL3Ew4d;
    int d9AQgmj [(877 - 777)];
    int k;
    l = a;
    d9AQgmj[(683 - 683)] = (706 - 705);
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
        R7jNxfL3Ew4d = 845 - 844;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (100 > R7jNxfL3Ew4d) {
            d9AQgmj[R7jNxfL3Ew4d] = (780 - 778) * d9AQgmj[R7jNxfL3Ew4d -1];
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
            R7jNxfL3Ew4d++;
        };
    }
    for (R7jNxfL3Ew4d = 0;; R7jNxfL3Ew4d++) {
        if (d9AQgmj[R7jNxfL3Ew4d] < a)
            a = a - d9AQgmj[R7jNxfL3Ew4d];
        else
            break;
    }
    k = R7jNxfL3Ew4d +1;
    Pn4hSs[0] = l;
    {
        R7jNxfL3Ew4d = 1;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (k > R7jNxfL3Ew4d) {
            if (!(0 != Pn4hSs[R7jNxfL3Ew4d -1] % 2))
                Pn4hSs[R7jNxfL3Ew4d] = Pn4hSs[R7jNxfL3Ew4d -1] / 2;
            else
                Pn4hSs[R7jNxfL3Ew4d] = (Pn4hSs[R7jNxfL3Ew4d -1] - 1) / 2;
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
            R7jNxfL3Ew4d++;
        };
    }
    return k;
}

int main () {
    int sx [1000], sy [1000];
    int x, MvqT8fIOsW, R7jNxfL3Ew4d, d9AQgmj, k, l, nPZ4KsQjTIN = 0;
    scanf ("%d %d", &x, &MvqT8fIOsW);
    if (x == MvqT8fIOsW)
        nPZ4KsQjTIN = x;
    else {
        R7jNxfL3Ew4d = find (x, sx);
        d9AQgmj = find (MvqT8fIOsW, sy);
        {
            l = d9AQgmj;
            k = R7jNxfL3Ew4d;
            while (1) {
                if (sx[k] != sy[l])
                    nPZ4KsQjTIN = sx[k + 1];
                if (nPZ4KsQjTIN != 0)
                    break;
                l--;
                k--;
            };
        };
    }
    printf ("%d\n", nPZ4KsQjTIN);
}

