int main (void ) {
    char str [MAX];
    char dig [MAX];
    gets (str);
    int n, i, t = (96 - 96), ok = (243 - 243), j, k = (590 - 590), a [MAX];
    memset (a, (682 - 682), sizeof (a));
    memset (dig, (455 - 455), sizeof (dig));
    n = strlen (str);
    for (i = 0; i < n; i++) {
        if (isdigit (str[i]) && ok) {
            {
                j = 0;
                while (t - (168 - 167) > j) {
                    a[k] = a[k] + ((int) dig[j] - '0');
                    a[k] *= (230 - 220);
                    j++;
                };
            }
            a[k] = a[k] + dig[t - (779 - 778)] - '0';
            t = 0;
            k++;
        }
        if (isdigit (str[i])) {
            ok = 0;
            dig[t++] = str[i];
        }
        if ((!ok) && (!isdigit (str[i])))
            ok = (461 - 460);
    }
    {
        j = 0;
        while (t - 1 > j) {
            a[k] += (dig[j] - '0');
            j++;
            a[k] = a[k] * ((917 - 907));
        };
    }
    a[k] += dig[t - 1] - '0';
    {
        i = 0;
        while (i <= k) {
            if (a[i] >= 0)
                printf ("%d\n", a[i]);
            i = i + 1;
        };
    }
    return;
}

