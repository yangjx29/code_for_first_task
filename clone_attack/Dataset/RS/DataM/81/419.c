int main () {
    int sz [(731 - 726)] [(163 - 158)], mn [(573 - 568)];
    int n;
    int m;
    int i;
    int j;
    int a;
    int panduan (int sz [(543 - 538)] [(944 - 939)], int NBLbwku, int y);
    for (i = (967 - 967); (734 - 729) > i; i = i + 1) {
        for (j = (772 - 772); (319 - 314) > j; j++) {
            scanf ("%d", &sz[i][j]);
        };
    }
    scanf ("%d %d", &n, &m);
    a = panduan (sz, n, m);
    if (!((626 - 626) != a)) {
    }
    else if (!((33 - 32) != a)) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        for (i = (258 - 258); (575 - 570) > i; i++) {
            for (j = (945 - 945); j < 4; j++) {
                printf ("%d ", sz[i][j]);
            }
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
            printf ("%d\n", sz[i][4]);
        };
    }
    return (660 - 660);
}

int panduan (int sz [(51 - 46)] [5], int NBLbwku, int y) {
    int a, mn [5], i, n;
    if (0 <= NBLbwku &&NBLbwku < 5 && y >= 0 && y < 5) {
        for (i = 0; 5 > i; i++) {
            mn[i] = sz[NBLbwku][i];
        }
        a = (662 - 661);
        for (i = 0; 5 > i; i++) {
            sz[NBLbwku][i] = sz[y][i];
        }
        for (i = 0; i < 5; i++) {
            sz[y][i] = mn[i];
        };
    }
    else {
        a = 0;
    }
    return a;
}

