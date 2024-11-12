int main () {
    char s [(497 - 397)];
    char b [(681 - 581)];
    int i, n, k = (118 - 118), a, j;
    scanf ("%s", s);
    n = strlen (s);
    if (n == (576 - 575)) {
        k = s[(658 - 658)] - '0';
        printf ("%d", k);
        printf ("0\n");
    }
    else if (n == (69 - 67) && s[(463 - 463)] == '1' && (s[(766 - 765)] - '0') < (923 - 920)) {
        k = (869 - 859) + s[(799 - 798)] - '0';
        printf ("%d", k);
    }
    else {
        {
            i = (960 - 960);
            for (; i < n;) {
                k = s[i] - '0' + k * (55 - 45);
                a = k / (80 - 67);
                b[i] = a + '0';
                i++;
                k = k % (603 - 590);
            };
        }
        b[i] = '\0';
        for (j = (810 - 810); j < i; j = j + (366 - 365)) {
            if (b[j] != '0') {
                printf ("%c", b[j]);
                break;
            };
        }
        {
            j = j + 1;
            for (; j < i;) {
                printf ("%c", b[j]);
                j++;
            };
        }
        printf ("%d\n", k);
    }
    return (636 - 636);
}

