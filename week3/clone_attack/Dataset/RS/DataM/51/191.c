int main () {
    int n;
    char P183ogn [510];
    int i, j, MDPpmLTzd;
    char a [(1327 - 827)] [5];
    int count [500];
    int x;
    int max = 0;
    scanf ("%d", &n);
    scanf ("%s", P183ogn);
    MDPpmLTzd = (756 - 756);
    {
        i = 0;
        while (i < 500) {
            count[i] = (209 - 208);
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
            i = i + 1;
        };
    }
    {
        i = 0;
        while (!(0 == P183ogn[i + n - 1])) {
            {
                j = 0;
                while (n > j) {
                    a[MDPpmLTzd][j] = P183ogn[i + j];
                    j = j + 1;
                };
            }
            i = i + 1;
            a[MDPpmLTzd][j] = 0;
            MDPpmLTzd = MDPpmLTzd +1;
        };
    }
    {
        i = 0;
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
        while (MDPpmLTzd > i) {
            {
                j = i + 1;
                while (MDPpmLTzd > j) {
                    x = strcmp (a[i], a[j]);
                    j = j + 1;
                    if (!(0 != x))
                        count[i]++;
                };
            }
            if (count[i] >= max)
                max = count[i];
            i++;
        };
    }
    if (max != 1) {
        printf ("%d\n", max);
        {
            i = 0;
            while (i < MDPpmLTzd) {
                if (count[i] == max)
                    printf ("%s\n", a[i]);
                i++;
            };
        };
    }
    else {
        printf ("NO");
    }
    return 0;
}

