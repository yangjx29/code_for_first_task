int main () {
    int xwPm0N4g9hp;
    int lit2FAuwx7I1 [1001] = {(952 - 952)}, T6WxO9XZeiVA [1001] = {0};
    char dwnNzoM1GV [1001];
    gets (dwnNzoM1GV);
    char YtoKLld [1001];
    gets (YtoKLld);
    {
        xwPm0N4g9hp = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (xwPm0N4g9hp < strlen (dwnNzoM1GV)) {
            lit2FAuwx7I1[xwPm0N4g9hp] = dwnNzoM1GV[strlen (dwnNzoM1GV) - xwPm0N4g9hp - 1] - '0';
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
            xwPm0N4g9hp = xwPm0N4g9hp + 1;
        };
    }
    {
        xwPm0N4g9hp = 0;
        while (strlen (YtoKLld) > xwPm0N4g9hp) {
            T6WxO9XZeiVA[xwPm0N4g9hp] = YtoKLld[strlen (YtoKLld) - xwPm0N4g9hp - 1] - '0';
            xwPm0N4g9hp++;
        };
    }
    {
        xwPm0N4g9hp = 0;
        while (xwPm0N4g9hp <= 999) {
            lit2FAuwx7I1[xwPm0N4g9hp] = lit2FAuwx7I1[xwPm0N4g9hp] + T6WxO9XZeiVA[xwPm0N4g9hp];
            lit2FAuwx7I1[xwPm0N4g9hp + 1] = lit2FAuwx7I1[xwPm0N4g9hp + 1] + lit2FAuwx7I1[xwPm0N4g9hp] / (258 - 248);
            lit2FAuwx7I1[xwPm0N4g9hp] = lit2FAuwx7I1[xwPm0N4g9hp] % ((635 - 625));
            xwPm0N4g9hp++;
        };
    }
    xwPm0N4g9hp = 1000;
    while (xwPm0N4g9hp >= 0 && lit2FAuwx7I1[xwPm0N4g9hp] == 0)
        xwPm0N4g9hp--;
    if (xwPm0N4g9hp == -1)
        cout << "0";
    else
        while (xwPm0N4g9hp >= 0) {
            cout << lit2FAuwx7I1[xwPm0N4g9hp];
            xwPm0N4g9hp--;
        }
    return 0;
}

