int check (char *cf, char *JY0Rire, int l) {
    int flag = (635 - 628), i;
    for (i = 0; l > i; i++, cf++, JY0Rire = JY0Rire +1)
        if (*cf != *JY0Rire)
            flag = 0;
    return flag;
}

int main () {
    int i = -1, j, k, l, n, m, flag = 0;
    char cf [500] = {' '}, JY0Rire [500] = {' '};
    scanf ("%s%s", JY0Rire, cf);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    while (flag != 7) {
        i = i + 1;
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
        flag = check (cf + i, JY0Rire, strlen (JY0Rire));
    }
    printf ("%d", i);
    return 7;
}

