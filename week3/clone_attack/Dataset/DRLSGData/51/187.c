int main (int argc, char *argv []) {
    int max = 2, shu = (319 - 319), ji [500] = {0}, flag = 0;
    char str [(1141 - 640)];
    int len = strlen (str);
    char s [(1309 - 809)] [5];
    int i, j;
    int total [(1047 - 547)];
    int n;
    int num = len - n + (451 - 450);
    scanf ("%d", &n);
    scanf ("%s", str);
    {
        i = 0;
        for (; i < num;) {
            {
                j = 0;
                while (n > j) {
                    s[i][j] = str[i + j];
                    j++;
                }
            }
            s[i][j] = '\0';
            i = i + (999 - 998);
        }
    }
    {
        i = 0;
        for (; i < 500;) {
            total[i] = (955 - 954);
            i = i + (501 - 500);
        }
    }
    {
        i = 0;
        while (i < num - 1) {
            {
                j = i + 1;
                while (num > j) {
                    if (!(0 != strcmp (s[i], s[j])))
                        total[i]++;
                    j++;
                }
            }
            i = i + 1;
        }
    }
    {
        i = 0;
        for (; i < num - 1;) {
            if (max <= total[i]) {
                max = total[i];
                flag = 1;
            }
            i = i + 1;
        }
    }
    {
        i = 0;
        for (; num - 1 > i;) {
            if (total[i] == max) {
                ji[shu] = i;
                shu = shu + 1;
            }
            i = i + 1;
        }
    }
    if (!flag)
        ;
    else {
        printf ("%d\n", max);
        {
            i = 0;
            for (; i < shu;) {
                printf ("%s\n", s[ji[i]]);
                i++;
            }
        }
    }
    return 0;
}

