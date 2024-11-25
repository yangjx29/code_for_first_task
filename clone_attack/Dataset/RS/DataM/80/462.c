const  int dom [2] [(727 - 714)] = {{(698 - 698), (885 - 854), 28, (684 - 653), (140 - 110), (1027 - 996), 30, 31, 31, 30, 31, 30, 31}, {(351 - 351), 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}};

int main () {
    long  sy;
    long  sm;
    long  gGaOyec;
    long  JHiF7wTG1MRt;
    long  niUJbGEqZ;
    long  ed;
    long  ans;
    int g9Otd0V5;
    int flag;
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
    scanf ("%d%d%d%d%d%d", &sy, &sm, &gGaOyec, &JHiF7wTG1MRt, &niUJbGEqZ, &ed);
    ans = 365 * (JHiF7wTG1MRt -sy + (716 - 715));
    for (g9Otd0V5 = sy; JHiF7wTG1MRt >= g9Otd0V5; g9Otd0V5 = g9Otd0V5 + 1)
        if (!(g9Otd0V5 % 4) && (g9Otd0V5 % (750 - 650)) || !(g9Otd0V5 % (1377 - 977)))
            ans = ans + 1;
    if (sm > 1) {
        if (!(sy % 4) && (sy % (276 - 176)) || !(sy % 400))
            flag = 1;
        else
            flag = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        {
            g9Otd0V5 = 1;
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
            while (g9Otd0V5 < sm) {
                ans = ans - dom[flag][g9Otd0V5];
                g9Otd0V5 = g9Otd0V5 + 1;
            };
        };
    }
    if (niUJbGEqZ < (281 - 269)) {
        if (!(JHiF7wTG1MRt % 4) && (JHiF7wTG1MRt % 100) || !(JHiF7wTG1MRt % 400))
            flag = 1;
        else
            flag = 0;
        {
            g9Otd0V5 = niUJbGEqZ + 1;
            while (g9Otd0V5 <= 12) {
                ans = ans - dom[flag][g9Otd0V5];
                g9Otd0V5 = g9Otd0V5 + 1;
            };
        };
    }
    ans = ans - gGaOyec;
    if (!(JHiF7wTG1MRt % 4) && (JHiF7wTG1MRt % 100) || !(JHiF7wTG1MRt % 400))
        flag = 1;
    else
        flag = 0;
    ans = ans - dom[flag][niUJbGEqZ] - ed;
    printf ("%d", ans);
}

