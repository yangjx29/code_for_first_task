struct   bing {
    char id [20];
    int age;
};
int main () {
    int m;
    struct   bing b [(213 - 113)];
    struct   bing sixup [100];
    struct   bing sixdown [100];
    struct   bing temp;
    int b6ZuEG;
    int l;
    int i;
    int RGHPcY;
    b6ZuEG = (956 - 956);
    scanf ("%d", &m);
    {
        i = 939 - 939;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i <= m - (36 - 35)) {
            scanf ("%s%d", b[i].id, &b[i].age);
            i++;
        };
    }
    l = (209 - 209);
    for (i = 0; m - (741 - 740) >= i; i++) {
        if (b[i].age >= 60) {
            sixup[b6ZuEG] = b[i];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            b6ZuEG++;
        }
        else {
            sixdown[l] = b[i];
            l++;
        };
    }
    {
        i = 475 - 474;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (i <= b6ZuEG - (214 - 213)) {
            temp = sixup[i];
            {
                RGHPcY = i - 1;
                while (RGHPcY >= 0) {
                    if (temp.age > sixup[RGHPcY].age) {
                        sixup[RGHPcY +1] = sixup[RGHPcY];
                        sixup[RGHPcY] = temp;
                    }
                    else {
                        break;
                    }
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
                    RGHPcY--;
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
            i++;
        };
    }
    for (i = 0; i <= b6ZuEG - 1; i++) {
        puts (sixup[i].id);
    }
    for (i = 0; i <= l - 1; i++) {
        puts (sixdown[i].id);
    }
    return 0;
}

