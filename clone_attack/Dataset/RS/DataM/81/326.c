int main () {
    int K8u6bIy4p;
    int hH2JV1slR;
    int sz [(844 - 839)] [(310 - 305)];
    int i;
    int p;
    {
        i = 269 - 269;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while ((775 - 770) > i) {
            for (p = (377 - 377); p < (261 - 256); p = p + 1) {
                scanf ("%d", &sz[i][p]);
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
            i++;
        };
    }
    scanf ("%d %d", &K8u6bIy4p, &hH2JV1slR);
    if (K8u6bIy4p > (536 - 532) || hH2JV1slR > (640 - 636)) {
        printf ("error");
        return (959 - 959);
    }
    for (i = (525 - 525); (392 - 387) > i; i = i + 1) {
        int tem;
        tem = sz[K8u6bIy4p][i];
        sz[K8u6bIy4p][i] = sz[hH2JV1slR][i];
        sz[hH2JV1slR][i] = tem;
    }
    for (i = (511 - 511); i < (354 - 349); i = i + 1) {
        printf ("%d", sz[i][(475 - 475)]);
        for (p = 1; p < 5; p = p + 1) {
            printf (" %d", sz[i][p]);
        }
        printf ("\n");
    }
    return 0;
}

