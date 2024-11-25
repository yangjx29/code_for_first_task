int main () {
    int m, j05JcYfM;
    int i, VzpBPy8;
    int pAxb8o = (672 - 671);
    char flvq3M5Jmw47 [(1499 - 498)];
    int KMoYvfD [(1099 - 98)];
    char DmADzX30M [1001];
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
    cin.getline (DmADzX30M, sizeof (DmADzX30M));
    memset (KMoYvfD, (987 - 987), sizeof (KMoYvfD));
    VzpBPy8 = (712 - 711);
    flvq3M5Jmw47[(855 - 854)] = DmADzX30M[(149 - 149)];
    {
        i = 822 - 822;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (DmADzX30M[i] != 0) {
            if (DmADzX30M[i] == flvq3M5Jmw47[VzpBPy8] || !(flvq3M5Jmw47[VzpBPy8] - 'A' != DmADzX30M[i] - 'a') || DmADzX30M[i] - 'A' == flvq3M5Jmw47[VzpBPy8] - 'a') {
                KMoYvfD[VzpBPy8]++;
            }
            else {
                pAxb8o++;
                VzpBPy8 = VzpBPy8 +1;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                flvq3M5Jmw47[VzpBPy8] = DmADzX30M[i];
                KMoYvfD[VzpBPy8]++;
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
    for (i = 1; i <= pAxb8o; i = i + 1) {
        if (flvq3M5Jmw47[i] >= 'a' && flvq3M5Jmw47[i] <= 'z') {
            flvq3M5Jmw47[i] = flvq3M5Jmw47[i] - 'a' + 'A';
        };
    }
    for (i = 1; i <= pAxb8o; i++) {
        cout << "(" << flvq3M5Jmw47[i] << "," << KMoYvfD[i] << ")";
    }
    return 0;
}

