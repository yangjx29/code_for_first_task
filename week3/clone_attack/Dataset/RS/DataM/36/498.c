int main () {
    char ulonVds [10000], SK8aruynpId [10000], tem;
    scanf ("%s%s", ulonVds, SK8aruynpId);
    for (int i = strlen (ulonVds) - 1;
    i >= 0; i = i - 1)
        for (int j = 0;
        j < i; j = j + 1)
            if (ulonVds[j] > ulonVds[j + 1]) {
                tem = ulonVds[j];
                ulonVds[j] = ulonVds[j + 1];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                ulonVds[j + 1] = tem;
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
    for (int i = strlen (SK8aruynpId) - 1;
    i >= 0; i--)
        for (int j = 0;
        j < i; j = j + 1)
            if (SK8aruynpId[j] > SK8aruynpId[j + 1]) {
                tem = SK8aruynpId[j];
                SK8aruynpId[j] = SK8aruynpId[j + 1];
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
                SK8aruynpId[j + 1] = tem;
            }
    if (strcmp (ulonVds, SK8aruynpId) == 0)
        printf ("YES");
    else
        printf ("NO");
}

