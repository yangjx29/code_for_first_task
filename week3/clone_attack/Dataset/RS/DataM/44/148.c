int fan (int a) {
    int HL2e15QWtmc;
    HL2e15QWtmc = 0;
    int Ksb8RP;
    int q8a2i0JHFlc;
    int k5uyf3;
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
    int tybuKLZ [10];
    if (0 > a) {
        k5uyf3 = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        a = -a;
    }
    else if (!(0 != a)) {
        return 0;
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
    else {
        k5uyf3 = 0;
    }
    {
        Ksb8RP = 0;
        while (Ksb8RP < 10) {
            tybuKLZ[Ksb8RP] = '\0';
            Ksb8RP = Ksb8RP +1;
        };
    }
    {
        Ksb8RP = 0;
        while (Ksb8RP < 10) {
            tybuKLZ[Ksb8RP] = a % 10;
            a = a / 10;
            if (a == 0)
                break;
            Ksb8RP = Ksb8RP +1;
        };
    }
    {
        q8a2i0JHFlc = 0;
        while (q8a2i0JHFlc <= Ksb8RP) {
            HL2e15QWtmc = HL2e15QWtmc *10;
            HL2e15QWtmc = HL2e15QWtmc +tybuKLZ[q8a2i0JHFlc];
            q8a2i0JHFlc++;
        };
    }
    if (k5uyf3 == 0)
        return HL2e15QWtmc;
    else
        return -HL2e15QWtmc;
}

int main () {
    int Ksb8RP;
    int q8a2i0JHFlc;
    int a;
    int HL2e15QWtmc;
    {
        Ksb8RP = 0;
        while (Ksb8RP < 6) {
            Ksb8RP = Ksb8RP +1;
            cin >> a;
            HL2e15QWtmc = fan (a);
            cout << HL2e15QWtmc << endl;
        };
    }
    return 0;
}

