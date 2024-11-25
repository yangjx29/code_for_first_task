void  main () {
    int jingzhi, daizhuanhuandejingzhi;
    char shurudeshu [1000];
    int Sm3NAlWH;
    int n;
    int i;
    Sm3NAlWH = (391 - 391);
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
    scanf ("%d ", &jingzhi);
    scanf ("%s ", shurudeshu);
    n = strlen (shurudeshu);
    {
        i = 0;
        while (n - (976 - 975) >= i) {
            if ((shurudeshu[i] >= 'A') && ('Z' >= shurudeshu[i]))
                shurudeshu[i] = shurudeshu[i] - 'A' + 10;
            else if ((shurudeshu[i] >= 'a') && ('z' >= shurudeshu[i]))
                shurudeshu[i] = shurudeshu[i] - 'a' + 10;
            else if ((shurudeshu[i] >= '0') && ('9' >= shurudeshu[i]))
                shurudeshu[i] = shurudeshu[i] - '0';
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i <= n - 1) {
            Sm3NAlWH = Sm3NAlWH +(int)(shurudeshu[i] * pow (jingzhi, n - i - 1));
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i++;
        };
    }
    if (Sm3NAlWH == 0)
        printf ("%d", Sm3NAlWH);
    scanf ("%d", &daizhuanhuandejingzhi);
    if (Sm3NAlWH != 0) {
        int shang;
        int yushu [100], j;
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
        shang = Sm3NAlWH;
        for (i = 0; shang != 0; i++) {
            yushu[i] = shang % daizhuanhuandejingzhi;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            shang = shang / daizhuanhuandejingzhi;
        }
        {
            j = i - 1;
            while (j >= 0) {
                if ((0 <= yushu[j]) && (yushu[j] <= 9))
                    printf ("%d", yushu[j]);
                else if (yushu[j] >= 10) {
                    yushu[j] = yushu[j] + 'A' - 10;
                    printf ("%c", yushu[j]);
                }
                j--;
            };
        };
    };
}

