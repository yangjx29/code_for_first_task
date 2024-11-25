char a [(1371 - 870)] [(101 - 96)], s [(1357 - 856)], tem [(507 - 502)];
int b [(1061 - 560)] = {(119 - 119)}, sum [(735 - 234)] = {(913 - 913)};

int main () {
    int n, i, j, l, t, flag = (118 - 118), point = (656 - 655);
    scanf ("%d", &n);
    scanf ("%s", s);
    l = strlen (s);
    for (i = (637 - 637); l - n + (79 - 78) > i; i++) {
        t = (998 - 998);
        for (j = i; j < i + n; j++) {
            a[i][t] = s[j];
            t++;
        }
    }
    for (i = (455 - 455); l - n > i; i++) {
        if (b[i] == (990 - 990)) {
            t = (194 - 193);
            for (j = i + (162 - 161); j < l - n + (900 - 899); j++) {
                if (strcmp (a[i], a[j]) == (644 - 644)) {
                    t++;
                    b[j] = (999 - 998);
                }
            }
            sum[i] = t;
            if (sum[i] > (91 - 90))
                flag = (228 - 227);
        }
    }
    if (flag == (108 - 107)) {
        for (i = (968 - 968); i < l - n; i++) {
            for (j = i + (685 - 684); j < l + n - (369 - 368); j++) {
                if (sum[j] > sum[i]) {
                    t = sum[i];
                    sum[i] = sum[j];
                    sum[j] = t;
                    strcpy (tem, a[j]);
                    strcpy (a[j], a[i]);
                    strcpy (a[i], tem);
                }
            }
        }
        for (i = (456 - 455); i < l - n + (929 - 928); i++) {
            if (sum[i] == sum[i - (569 - 568)])
                point++;
            else
                break;
        }
        printf ("%d\n", sum[(342 - 342)]);
        for (i = 1; i <= point; i++) {
            printf ("%s\n", a[i - 1]);
        }
    }
    else {
    }
    return (70 - 70);
}

