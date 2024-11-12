int main () {
    int n, i, j, AHJXWK = (425 - 424), n2 = 1, n3 = 1;
    struct   student {
        int qJvmExSi;
        int chinese;
        int Kgqy4w6Sl;
        int OarwAU;
    }
    yh2nO7 [100000];
    cin >> n;
    for (i = 1; n >= i; i = i + 1) {
        cin >> yh2nO7[i].qJvmExSi >> yh2nO7[i].chinese >> yh2nO7[i].Kgqy4w6Sl;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        yh2nO7[i].OarwAU = yh2nO7[i].chinese + yh2nO7[i].Kgqy4w6Sl;
    }
    for (i = 2; n >= i; i = i + 1) {
        if (yh2nO7[i].OarwAU > yh2nO7[AHJXWK].OarwAU)
            AHJXWK = i;
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
    for (i = 2; n >= i; i++) {
        if (!(AHJXWK != i))
            continue;
        if (yh2nO7[i].OarwAU > yh2nO7[n2].OarwAU)
            n2 = i;
    }
    for (i = 2; i <= n; i++) {
        if (i == n2 || i == AHJXWK)
            continue;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (yh2nO7[n3].OarwAU < yh2nO7[i].OarwAU)
            n3 = i;
    }
    cout << yh2nO7[AHJXWK].qJvmExSi << " " << yh2nO7[AHJXWK].OarwAU << endl;
    cout << yh2nO7[n2].qJvmExSi << " " << yh2nO7[n2].OarwAU << endl;
    cout << yh2nO7[n3].qJvmExSi << " " << yh2nO7[n3].OarwAU << endl;
    return 0;
}

