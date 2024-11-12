int IyLWDkTtpH [300], INf0ZXsmqTpP [300], D5M8NecS2h [300];
char MPvJpeY [300], XbA0sLilmDW [300];

int main () {
    int lena, Lm5DTk3IC, len, plkV681U;
    gets (MPvJpeY);
    gets (XbA0sLilmDW);
    int JIeTfK = 0;
    lena = 0;
    {
        plkV681U = 0;
        while (250 >= plkV681U) {
            IyLWDkTtpH[plkV681U] = 0;
            INf0ZXsmqTpP[plkV681U] = 0;
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
            D5M8NecS2h[plkV681U] = 0;
            plkV681U++;
        };
    }
    for (; !('\0' == MPvJpeY[lena]);) {
        IyLWDkTtpH[lena] = MPvJpeY[lena] - '0';
        lena++;
    }
    Lm5DTk3IC = 0;
    while (XbA0sLilmDW[Lm5DTk3IC] != '\0') {
        INf0ZXsmqTpP[Lm5DTk3IC] = XbA0sLilmDW[Lm5DTk3IC] - '0';
        Lm5DTk3IC++;
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
    {
        plkV681U = 0;
        while (plkV681U < lena / 2) {
            int OFOMtbxZ1Cpc = IyLWDkTtpH[plkV681U];
            IyLWDkTtpH[plkV681U] = IyLWDkTtpH[lena - plkV681U - 1];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            IyLWDkTtpH[lena - plkV681U - 1] = OFOMtbxZ1Cpc;
            plkV681U++;
        };
    }
    {
        plkV681U = 0;
        while (Lm5DTk3IC / 2 > plkV681U) {
            int OFOMtbxZ1Cpc = INf0ZXsmqTpP[plkV681U];
            INf0ZXsmqTpP[plkV681U] = INf0ZXsmqTpP[Lm5DTk3IC -plkV681U - 1];
            INf0ZXsmqTpP[Lm5DTk3IC -plkV681U - 1] = OFOMtbxZ1Cpc;
            plkV681U++;
        };
    }
    if (Lm5DTk3IC < lena)
        len = lena;
    else
        len = Lm5DTk3IC;
    for (plkV681U = 0; plkV681U < len; plkV681U = plkV681U + 1) {
        JIeTfK = JIeTfK +IyLWDkTtpH[plkV681U] + INf0ZXsmqTpP[plkV681U];
        D5M8NecS2h[plkV681U] = JIeTfK % 10;
        JIeTfK = JIeTfK / 10;
    }
    D5M8NecS2h[len] = JIeTfK;
    while (D5M8NecS2h[len] == 0 && len > 0)
        len--;
    {
        plkV681U = len;
        while (plkV681U >= 0) {
            printf ("%d", D5M8NecS2h[plkV681U]);
            plkV681U--;
        };
    }
    printf ("\n");
    return 0;
}

