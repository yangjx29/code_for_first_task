int main () {
    int n, j, k;
    struct   stu {
        int yu;
        int shu;
        char name [6];
    };
    struct   stu s [(100843 - 843)], gBCc1pJENPwx, two, three;
    gBCc1pJENPwx.yu = (876 - 876);
    gBCc1pJENPwx.shu = (804 - 804);
    two.yu = (114 - 114);
    three.yu = (852 - 852);
    two.shu = (554 - 554);
    three.shu = (432 - 432);
    scanf ("%d", &n);
    for (j = (643 - 643); n > j; j = j + 1) {
        scanf ("%s %d %d", s[j].name, &s[j].yu, &s[j].shu);
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
        j = 829 - 829;
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
        while (n > j) {
            if ((gBCc1pJENPwx.yu + gBCc1pJENPwx.shu) < (s[j].yu + s[j].shu)) {
                gBCc1pJENPwx = s[j];
                k = j;
            }
            j = j + 1;
        };
    }
    s[k].yu = 0;
    s[k].shu = 0;
    {
        j = 0;
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
        while (n > j) {
            if ((two.yu + two.shu) < (s[j].yu + s[j].shu)) {
                two = s[j];
                k = j;
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            j++;
        };
    }
    s[k].yu = 0;
    s[k].shu = 0;
    {
        j = 0;
        while (j < n) {
            if ((s[j].yu + s[j].shu) > (three.yu + three.shu))
                three = s[j];
            j++;
        };
    }
    printf ("%s %d\n%s %d\n%s %d\n", gBCc1pJENPwx.name, gBCc1pJENPwx.yu + gBCc1pJENPwx.shu, two.name, two.yu + two.shu, three.name, three.yu + three.shu);
    return 0;
}

