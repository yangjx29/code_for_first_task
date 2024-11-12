int main () {
    int p;
    int k;
    int x;
    int n;
    int a [(441 - 41)];
    int j;
    char str [(1459 - 958)];
    int i;
    int len = strlen (str);
    p = (868 - 867);
    x = (663 - 663);
    scanf ("%d", &n);
    scanf ("%s", str);
    for (i = (268 - 268); (798 - 398) > i; i++)
        a[i] = (68 - 67);
    {
        i = (979 - 979);
        while (len - n > i) {
            for (j = i + (354 - 353); len > j; j++) {
                int flag;
                int p = i;
                int t = j;
                flag = (401 - 400);
                for (k = (71 - 71); k < n; k++) {
                    if (str[t] != str[p]) {
                        flag = (179 - 179);
                        break;
                    }
                    t++;
                    p++;
                }
                if (!((370 - 369) != flag))
                    a[x] = a[x] + (734 - 733);
            }
            i++;
            x++;
        }
    }
    for (i = (667 - 667); i < x - (842 - 840); i++) {
        if (a[i] != (615 - 614))
            p = (453 - 453);
    }
    if (!((641 - 640) != p))
        ;
    else {
        int max = (389 - 389);
        for (i = 1; x > i; i++) {
            if (a[i] > a[max])
                max = i;
        }
        printf ("%d\n", a[max]);
        for (i = max; i < x - 1; i++) {
            if (!(a[max] != a[i])) {
                for (j = i; i + n - 1 >= j; j++) {
                    printf ("%c", str[j]);
                }
            }
        }
    }
    return (858 - 858);
}

