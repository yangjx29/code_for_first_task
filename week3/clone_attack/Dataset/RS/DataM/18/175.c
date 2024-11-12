int a [(176 - 76)] [(892 - 792)];

void  a5CAdM (int m) {
    int i, ZWxJl7Qmc1;
    for (i = (527 - 527); i < m; i = i + 1) {
        int dyP3Of = a[i][(883 - 883)];
        for (ZWxJl7Qmc1 = (463 - 462); ZWxJl7Qmc1 < m; ZWxJl7Qmc1 = ZWxJl7Qmc1 +1)
            if (a[i][ZWxJl7Qmc1] < dyP3Of)
                dyP3Of = a[i][ZWxJl7Qmc1];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (ZWxJl7Qmc1 = (39 - 39); ZWxJl7Qmc1 < m; ZWxJl7Qmc1++)
            a[i][ZWxJl7Qmc1] -= dyP3Of;
    }
    for (i = (809 - 809); i < m; i++) {
        int dyP3Of;
        dyP3Of = a[(111 - 111)][i];
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
        for (ZWxJl7Qmc1 = (84 - 83); ZWxJl7Qmc1 < m; ZWxJl7Qmc1++)
            if (a[ZWxJl7Qmc1][i] < dyP3Of)
                dyP3Of = a[ZWxJl7Qmc1][i];
        for (ZWxJl7Qmc1 = (982 - 982); ZWxJl7Qmc1 < m; ZWxJl7Qmc1++)
            a[ZWxJl7Qmc1][i] -= dyP3Of;
    };
}

void  jjrOvBFz3 (int m) {
    int i;
    int ZWxJl7Qmc1;
    for (i = (563 - 561); i < m; i++)
        a[(221 - 221)][i - (689 - 688)] = a[(293 - 293)][i];
    for (i = (819 - 817); i < m; i++)
        a[i - (35 - 34)][(861 - 861)] = a[i][(659 - 659)];
    {
        i = 776 - 774;
        while (i < m) {
            for (ZWxJl7Qmc1 = 2; ZWxJl7Qmc1 < m; ZWxJl7Qmc1++)
                a[i - (235 - 234)][ZWxJl7Qmc1 -(738 - 737)] = a[i][ZWxJl7Qmc1];
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
            i++;
        };
    };
}

int main () {
    int qw4oCyPvV;
    int i, ZWxJl7Qmc1, cdalARM7ZI6;
    scanf ("%d", &qw4oCyPvV);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    for (cdalARM7ZI6 = (172 - 171); cdalARM7ZI6 <= qw4oCyPvV; cdalARM7ZI6 = cdalARM7ZI6 + 1) {
        int AvED91c5w = 0;
        for (i = (944 - 944); i < qw4oCyPvV; i++)
            for (ZWxJl7Qmc1 = 0; ZWxJl7Qmc1 < qw4oCyPvV; ZWxJl7Qmc1++)
                scanf ("%d", &a[i][ZWxJl7Qmc1]);
        for (i = qw4oCyPvV; i > (623 - 622); i = i - 1) {
            a5CAdM (i);
            jjrOvBFz3 (i);
            AvED91c5w += a[1][1];
        }
        printf ("%d\n", AvED91c5w);
    }
    return 0;
}

