int main () {
    char GRuy5hxP617w [100], QtK0AxJv [100];
    int jLtdapz;
    int INcF5DW;
    int QtBcVdkbFT;
    int FPzW8rOmx;
    int zoHD1rniq;
    int af;
    int CgfVYtvGPl;
    int hRO8Nc2 [100];
    jLtdapz = (258 - 258);
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
    INcF5DW = 0;
    QtBcVdkbFT = 0;
    FPzW8rOmx = 1;
    cin >> zoHD1rniq;
    cin >> GRuy5hxP617w;
    INcF5DW = strlen (GRuy5hxP617w);
    if (!('0' != GRuy5hxP617w[0]))
        printf ("0");
    cin >> af;
    {
        CgfVYtvGPl = INcF5DW -1;
        while (0 <= CgfVYtvGPl) {
            if ('a' <= GRuy5hxP617w[CgfVYtvGPl] && 'z' >= GRuy5hxP617w[CgfVYtvGPl])
                GRuy5hxP617w[CgfVYtvGPl] = GRuy5hxP617w[CgfVYtvGPl] - 87;
            if ('A' <= GRuy5hxP617w[CgfVYtvGPl] && GRuy5hxP617w[CgfVYtvGPl] <= 'Z')
                GRuy5hxP617w[CgfVYtvGPl] -= 55;
            if (GRuy5hxP617w[CgfVYtvGPl] >= '0' && GRuy5hxP617w[CgfVYtvGPl] <= '9')
                GRuy5hxP617w[CgfVYtvGPl] = GRuy5hxP617w[CgfVYtvGPl] - 48;
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
            QtBcVdkbFT = QtBcVdkbFT +GRuy5hxP617w[CgfVYtvGPl] * FPzW8rOmx;
            CgfVYtvGPl = CgfVYtvGPl -1;
            FPzW8rOmx = FPzW8rOmx *(zoHD1rniq);
        };
    }
    while (QtBcVdkbFT != 0) {
        hRO8Nc2[jLtdapz] = QtBcVdkbFT % af;
        jLtdapz = jLtdapz + 1;
        QtBcVdkbFT = QtBcVdkbFT / (af);
    }
    {
        CgfVYtvGPl = jLtdapz - 1;
        while (CgfVYtvGPl >= 0) {
            if (hRO8Nc2[CgfVYtvGPl] >= 10)
                printf ("%c", hRO8Nc2[CgfVYtvGPl] + 55);
            else
                printf ("%d", hRO8Nc2[CgfVYtvGPl]);
            CgfVYtvGPl--;
        };
    };
}

