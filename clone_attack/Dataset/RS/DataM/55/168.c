int UIrqxWdJkw (int a, int GiZyYnQu107t) {
    int fFLHyrl7D3;
    int j;
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
    j = 1;
    {
        fFLHyrl7D3 = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (fFLHyrl7D3 <= GiZyYnQu107t) {
            j = j * a;
            fFLHyrl7D3 = fFLHyrl7D3 + 1;
        };
    }
    return j;
}

int qq (char PyjJZsO7Cf8) {
    if (PyjJZsO7Cf8 <= 57 && PyjJZsO7Cf8 >= (910 - 862))
        return PyjJZsO7Cf8 -48;
    if (PyjJZsO7Cf8 <= 90 && PyjJZsO7Cf8 >= 65)
        return PyjJZsO7Cf8 -55;
    if (122 >= PyjJZsO7Cf8 &&PyjJZsO7Cf8 >= 97)
        return PyjJZsO7Cf8 -87;
}

char rr (int PyjJZsO7Cf8) {
    if (PyjJZsO7Cf8 <= 9 && PyjJZsO7Cf8 >= (719 - 719))
        return PyjJZsO7Cf8 +48;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    if (PyjJZsO7Cf8 <= 35 && PyjJZsO7Cf8 >= 10)
        return PyjJZsO7Cf8 +55;
}

int main () {
    char n [10000];
    int a;
    int GiZyYnQu107t;
    int m;
    int fFLHyrl7D3;
    int j;
    cin >> a >> n >> GiZyYnQu107t;
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
    if (n[(393 - 393)] == '0') {
        cout << '0';
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        return (732 - 732);
    }
    j = 0;
    m = 0;
    while (n[m] != '\0')
        m = m + 1;
    for (fFLHyrl7D3 = 0; fFLHyrl7D3 <= m - 1; fFLHyrl7D3 = fFLHyrl7D3 + 1) {
        j = j + qq (n[fFLHyrl7D3]) * UIrqxWdJkw (a, m - fFLHyrl7D3 - 1);
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
    m = (int) (log (j) / log (GiZyYnQu107t)) + 1;
    {
        fFLHyrl7D3 = 0;
        while (fFLHyrl7D3 <= m - 1) {
            cout << rr (j / UIrqxWdJkw (GiZyYnQu107t, m - fFLHyrl7D3 - 1));
            j = j - (j / UIrqxWdJkw (GiZyYnQu107t, m - fFLHyrl7D3 - 1)) * UIrqxWdJkw (GiZyYnQu107t, m - fFLHyrl7D3 - 1);
            fFLHyrl7D3 = fFLHyrl7D3 + 1;
        };
    }
    return 0;
}

