int main () {
    int e;
    int s;
    int ls;
    int lans1;
    int l;
    int i;
    int lans2;
    char lz9m0MI [100];
    char ans1 [(664 - 614)] [(594 - 574)];
    char ans2 [50] [20];
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
    gets (lz9m0MI);
    lans2 = 0;
    lans1 = (606 - 606);
    s = (476 - 476);
    ls = strlen (lz9m0MI);
    e = -1;
    for (; s < ls && e < ls;) {
        l = 0;
        for (s = e + 1; lz9m0MI[s] == ' ' && s < ls; s++)
            ;
        for (e = s; lz9m0MI[e] != ' ' && e < ls; e = e + 1)
            ;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (i = s; i < e; i++)
            ans1[lans1][l++] = lz9m0MI[i];
        ans1[lans1][l] = 0;
        lans1++;
    }
    s = 0;
    e = -1;
    for (; s < ls && e < ls;) {
        l = 0;
        {
            s = e + 1;
            while (lz9m0MI[s] != ' ' && s < ls) {
                s++;
            };
        }
        {
            e = s;
            while (lz9m0MI[e] == ' ' && e < ls) {
                e++;
            };
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
        {
            i = s;
            while (i < e) {
                ans2[lans2][l++] = lz9m0MI[i];
                i++;
            };
        }
        ans2[lans2][l] = 0;
        lans2++;
    }
    for (i = lans1 - 1; i >= 0; i--) {
        printf ("%s", ans1[i]);
        if (i != 0)
            printf ("%s", ans2[i - 1]);
    }
    return 0;
}

