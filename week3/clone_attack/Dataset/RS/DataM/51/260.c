int main () {
    int LicukyCe, ZREgduIPc, DdbiZPIX05Y, VnFtazk, zb8XOusa, IpfU6ihS0o, PSOlbagvz8, z;
    int c [LicukyCe -ZREgduIPc+(914 - 913)];
    char oxM3N0 [LicukyCe -ZREgduIPc+1] [ZREgduIPc];
    char vBAsMkoarl [500];
    {
        VnFtazk = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (VnFtazk < LicukyCe -ZREgduIPc+1) {
            c[VnFtazk] = 0;
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
            VnFtazk++;
        };
    }
    scanf ("%d", &ZREgduIPc);
    scanf ("%s", vBAsMkoarl);
    LicukyCe = strlen (vBAsMkoarl);
    for (VnFtazk = 0; VnFtazk < LicukyCe -ZREgduIPc+1; VnFtazk++) {
        for (zb8XOusa = 0; zb8XOusa < ZREgduIPc; zb8XOusa = zb8XOusa + 1) {
            oxM3N0[VnFtazk][zb8XOusa] = vBAsMkoarl[zb8XOusa + VnFtazk];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        };
    }
    for (VnFtazk = 0; VnFtazk < LicukyCe -ZREgduIPc+1; VnFtazk++) {
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
        for (zb8XOusa = VnFtazk; zb8XOusa < LicukyCe -ZREgduIPc+1; zb8XOusa++) {
            IpfU6ihS0o = 0;
            for (DdbiZPIX05Y = 0; DdbiZPIX05Y < ZREgduIPc; DdbiZPIX05Y = DdbiZPIX05Y +1) {
                if (oxM3N0[VnFtazk][DdbiZPIX05Y] == oxM3N0[zb8XOusa][DdbiZPIX05Y])
                    IpfU6ihS0o = IpfU6ihS0o +1;
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
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            if (IpfU6ihS0o == ZREgduIPc)
                c[VnFtazk]++;
        };
    }
    z = 0;
    for (VnFtazk = 0; VnFtazk < LicukyCe -ZREgduIPc+1; VnFtazk++) {
        PSOlbagvz8 = 0;
        for (zb8XOusa = 0; zb8XOusa < LicukyCe -ZREgduIPc+1; zb8XOusa++) {
            if (c[VnFtazk] >= c[zb8XOusa])
                PSOlbagvz8++;
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
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (PSOlbagvz8 == (LicukyCe -ZREgduIPc+1) && c[VnFtazk] != 1 && z == 0) {
            z = 1;
            printf ("%d\n", c[VnFtazk]);
        }
        if (PSOlbagvz8 == (LicukyCe -ZREgduIPc+1) && c[VnFtazk] != 1) {
            for (zb8XOusa = 0; zb8XOusa < ZREgduIPc -1; zb8XOusa++)
                printf ("%c", oxM3N0[VnFtazk][zb8XOusa]);
            printf ("%c\n", oxM3N0[VnFtazk][ZREgduIPc -1]);
        }
        if (PSOlbagvz8 == (LicukyCe -ZREgduIPc+1) && c[VnFtazk] == 1) {
            break;
        };
    }
    scanf ("%d", &VnFtazk);
    return 0;
}

