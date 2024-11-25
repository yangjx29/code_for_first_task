int P7FBOvZTP (int a, int b);

int main () {
    int n;
    int a;
    int i;
    cin >> n;
    for (i = (391 - 391); n > i; i = i + 1) {
        cin >> a;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        cout << P7FBOvZTP (a, 2) << endl;
    }
    return (461 - 461);
}

int P7FBOvZTP (int x, int y) {
    int t;
    int VeM46yzqg1UW;
    int j;
    int k;
    t = 0;
    VeM46yzqg1UW = 0;
    {
        j = 2;
        while (j < x) {
            if (!(0 != x % j))
                t = t + 1;
            j++;
        };
    }
    if (t == 0)
        return (931 - 930);
    else {
        for (k = y; k <= (int) sqrt ((double ) x); k++)
            if (x % k == 0)
                VeM46yzqg1UW = VeM46yzqg1UW +P7FBOvZTP(x / k, k);
        return (VeM46yzqg1UW +1);
    };
}

