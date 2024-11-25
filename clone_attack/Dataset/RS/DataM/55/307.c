int main () {
    char LDW0TXLflN [100] = " ";
    double  ZE8LUTIdrD = 0.0;
    int b1Oy8ki = 0, jIpcNM = 0, PpUe2dSImfXx = 0, LW8ZS7i = 0, D3R8rva4Y = 0, LvE6La = 0;
    cin >> ZE8LUTIdrD >> LDW0TXLflN >> b1Oy8ki;
    jIpcNM = strlen (LDW0TXLflN);
    for (PpUe2dSImfXx = 0; PpUe2dSImfXx < jIpcNM; PpUe2dSImfXx = PpUe2dSImfXx +1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if ('A' <= LDW0TXLflN[PpUe2dSImfXx] && LDW0TXLflN[PpUe2dSImfXx] <= 'Z')
            LDW0TXLflN[PpUe2dSImfXx] = LDW0TXLflN[PpUe2dSImfXx] - 55;
        else {
            if ('a' <= LDW0TXLflN[PpUe2dSImfXx] && LDW0TXLflN[PpUe2dSImfXx] <= 'z')
                LDW0TXLflN[PpUe2dSImfXx] = LDW0TXLflN[PpUe2dSImfXx] - 87;
            else if ('0' <= LDW0TXLflN[PpUe2dSImfXx] && LDW0TXLflN[PpUe2dSImfXx] <= '9')
                LDW0TXLflN[PpUe2dSImfXx] = LDW0TXLflN[PpUe2dSImfXx] - 48;
        };
    }
    {
        PpUe2dSImfXx = 0;
        while (PpUe2dSImfXx < jIpcNM) {
            LvE6La = LvE6La +LDW0TXLflN[PpUe2dSImfXx] * pow (ZE8LUTIdrD, jIpcNM - PpUe2dSImfXx -1);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            PpUe2dSImfXx = PpUe2dSImfXx +1;
        };
    }
    if (LvE6La > 0) {
        for (PpUe2dSImfXx = 0; LvE6La > 0; PpUe2dSImfXx++) {
            LDW0TXLflN[PpUe2dSImfXx] = LvE6La % b1Oy8ki;
            LvE6La = (LvE6La -LDW0TXLflN[PpUe2dSImfXx]) / b1Oy8ki;
        }
        for (LW8ZS7i = 0; LW8ZS7i <= PpUe2dSImfXx / 2; LW8ZS7i = LW8ZS7i +1) {
            D3R8rva4Y = LDW0TXLflN[LW8ZS7i];
            LDW0TXLflN[LW8ZS7i] = LDW0TXLflN[PpUe2dSImfXx -LW8ZS7i];
            LDW0TXLflN[PpUe2dSImfXx -LW8ZS7i] = D3R8rva4Y;
        }
        for (LW8ZS7i = 0; LW8ZS7i <= PpUe2dSImfXx; LW8ZS7i++) {
            if (0 <= LDW0TXLflN[LW8ZS7i] && LDW0TXLflN[LW8ZS7i] <= 9)
                LDW0TXLflN[LW8ZS7i] = LDW0TXLflN[LW8ZS7i] + 48;
            else if (LDW0TXLflN[LW8ZS7i] > 9)
                LDW0TXLflN[LW8ZS7i] = LDW0TXLflN[LW8ZS7i] + 55;
        }
        for (LW8ZS7i = 1; LW8ZS7i <= PpUe2dSImfXx; LW8ZS7i++)
            cout << LDW0TXLflN[LW8ZS7i];
    }
    else {
        if (LvE6La == 0)
            cout << "0" << endl;
    }
    return 0;
}

