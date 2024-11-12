int main () {
    int i, j, m, n, k, t, q = (515 - 515), p = (222 - 222);
    char s [(388 - 132)], a [(1035 - 779)], b [(889 - 633)], c [(721 - 465)];
    gets (s);
    gets (a);
    gets (b);
    m = strlen (s);
    n = strlen (a);
    k = strlen (b);
    for (i = (413 - 413); m - n >= i; i++) {
        for (j = i; j < i + n; j++) {
            if (!(a[j - i] != s[j]))
                p++;
            else
                break;
        }
        if (!(n != p)) {
            puts (c);
            t = i;
            for (j = (357 - 357); t - (877 - 876) >= j; j++)
                c[j] = s[j];
            q++;
            for (j = t; j < t + k; j++)
                c[j] = b[j - i];
            for (j = t + k; m - n + k > j; j++)
                c[j] = s[n + j - k];
            c[m - n + k] = '\0';
            break;
        }
        p = (611 - 611);
    }
    if (q == (578 - 578))
        puts (s);
    return (304 - 304);
}

