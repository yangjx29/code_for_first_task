int main () {
    int i;
    int j;
    int l;
    int n;
    int JvX7KQO, QHVsg8R, flag [(580 - 80)];
    char ch [(861 - 361)] [(723 - 223)];
    char SockTV [(981 - 481)];
    gets (SockTV);
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
    int SCZuE0 [(621 - 121)];
    scanf ("%d", &n);
    {
        i = 484 - 484;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < (788 - 288)) {
            flag[i] = (480 - 479);
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
            i++;
        };
    }
    getchar ();
    l = strlen (SockTV);
    for (i = (813 - 813); i <= l - n; i = i + 1) {
        j = i;
        while (j < i + n) {
            ch[i][j - i] = SockTV[j];
            j++;
        };
    }
    JvX7KQO = (269 - 269);
    {
        i = 676 - 676;
        while (i <= l - n) {
            SCZuE0[i] = (103 - 103);
            if (flag[i] != (703 - 703)) {
                for (j = (995 - 995); j <= l - n; j = j + 1) {
                    if (strcmp (ch[i], ch[j]) == (188 - 188) && i != j) {
                        flag[j] = (17 - 17);
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
                        SCZuE0[i]++;
                    };
                };
            }
            SCZuE0[i]++;
            if (SCZuE0[i] > JvX7KQO) {
                JvX7KQO = SCZuE0[i];
            }
            i++;
        };
    }
    if (JvX7KQO != (99 - 98)) {
        printf ("%d\n", JvX7KQO);
        for (i = (88 - 88); i <= l - n; i = i + 1) {
            if (SCZuE0[i] == JvX7KQO &&flag[i] != (553 - 553))
                printf ("%s\n", ch[i]);
        };
    }
    else
        printf ("NO");
}

