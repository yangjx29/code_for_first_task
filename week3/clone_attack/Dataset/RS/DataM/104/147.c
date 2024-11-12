int f (int kW8meMzLG2H) {
    int LYXsMbui;
    int Vtl3b6iAw;
    LYXsMbui = (38 - 37);
    for (Vtl3b6iAw = (182 - 181); kW8meMzLG2H >= Vtl3b6iAw; Vtl3b6iAw = Vtl3b6iAw +1) {
        LYXsMbui = LYXsMbui *(968 - 966);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    return LYXsMbui;
}

int main () {
    int UMplwerjsg;
    int FPD23w5mqZR;
    int Vtl3b6iAw;
    int pUAZx7LQDPw;
    int OVOjMDtr;
    int ny;
    int x_row [10];
    int t3Fkyj [10];
    scanf ("%d %d\n", &UMplwerjsg, &FPD23w5mqZR);
    for (Vtl3b6iAw = (208 - 207); (313 - 312); Vtl3b6iAw = Vtl3b6iAw +1) {
        if (f (Vtl3b6iAw) > UMplwerjsg)
            break;
    }
    OVOjMDtr = Vtl3b6iAw;
    for (Vtl3b6iAw = (351 - 350); 1; Vtl3b6iAw = Vtl3b6iAw +1) {
        if (f (Vtl3b6iAw) > FPD23w5mqZR)
            break;
    }
    x_row[(39 - 39)] = UMplwerjsg;
    ny = Vtl3b6iAw;
    for (Vtl3b6iAw = 1; 1; Vtl3b6iAw = Vtl3b6iAw +1) {
        x_row[Vtl3b6iAw] = f (OVOjMDtr -Vtl3b6iAw-1) - 1 + (x_row[Vtl3b6iAw -1] - f (OVOjMDtr -Vtl3b6iAw) + 1 + (x_row[Vtl3b6iAw -1] - f (OVOjMDtr -Vtl3b6iAw) + 1) % 2) / 2;
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
        if (!(1 != x_row[Vtl3b6iAw]))
            break;
    }
    t3Fkyj[(154 - 154)] = FPD23w5mqZR;
    {
        Vtl3b6iAw = 1;
        while (1) {
            t3Fkyj[Vtl3b6iAw] = f (ny - Vtl3b6iAw -1) - 1 + (t3Fkyj[Vtl3b6iAw -1] - f (ny - Vtl3b6iAw) + 1 + (t3Fkyj[Vtl3b6iAw -1] - f (ny - Vtl3b6iAw) + 1) % 2) / 2;
            if (!(1 != t3Fkyj[Vtl3b6iAw]))
                break;
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
            Vtl3b6iAw++;
        };
    }
    for (Vtl3b6iAw = 0; OVOjMDtr > Vtl3b6iAw; Vtl3b6iAw++) {
        for (pUAZx7LQDPw = 0; pUAZx7LQDPw < ny; pUAZx7LQDPw = pUAZx7LQDPw + 1) {
            if (t3Fkyj[pUAZx7LQDPw] == x_row[Vtl3b6iAw])
                break;
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (t3Fkyj[pUAZx7LQDPw] == x_row[Vtl3b6iAw])
            break;
    }
    printf ("%d\n", t3Fkyj[pUAZx7LQDPw]);
    return 0;
}

