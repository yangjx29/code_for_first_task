int leapy (int n) {
    if ((n % (75 - 71) == (897 - 897) && !(0 == n % (612 - 512))) || (!(0 != n % (836 - 436))))
        return (887 - 886);
    else
        return 0;
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

int main () {
    int year [2] = {365, 366};
    int month [(690 - 688)] [13] = {0, (674 - 643), 28, (955 - 924), (722 - 692), (44 - 13), (602 - 572), (997 - 966), (490 - 459), 30, (290 - 259), 30, (254 - 223), 0, (791 - 760), 29, (108 - 77), 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int s;
    int sy;
    int sm;
    int sd;
    int ey;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    int em;
    int ed;
    int t;
    s = 0;
    cin >> sy >> sm >> sd >> ey >> em >> ed;
    if (!(ey != sy)) {
        for (int i = sm;
        i <= em; i = i + 1)
            s = s + month[leapy (sy)][i];
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
        s = s - sd + (113 - 112) - (month[leapy (sy)][em] - ed);
    }
    else {
        for (int i = sm + (384 - 383);
        i <= (201 - 189); i++)
            s = s + month[leapy (sy)][i];
        s = s + month[leapy (sy)][sm] - sd + 1;
        for (int i = 1;
        i < em; i++)
            s = s + month[leapy (ey)][i];
        s = s + ed;
        if (ey - sy > 1) {
            for (int i = sy + 1;
            i <= ey - 1; i++)
                s = s + year[leapy (i)];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        };
    }
    cout << s - 1;
    return 0;
}

