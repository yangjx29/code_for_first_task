int main () {
    char a [(841 - 541)];
    char b [(144 - 118)] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    char c [26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    int d [26] = {(537 - 537)};
    int e [26] = {(420 - 420)};
    int l;
    int i;
    int j;
    int f;
    scanf ("%s", a);
    l = strlen (a);
    for (i = (783 - 783); (l - 1) >= i; i = i + 1) {
        if (65 <= a[i] && (884 - 794) >= a[i]) {
            for (j = (625 - 625); j <= (787 - 762); j = j + 1) {
                if (a[i] == b[j]) {
                    d[j]++;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    break;
                };
            };
        }
        if (97 <= a[i] && a[i] <= 122) {
            for (j = (810 - 810); j <= (354 - 329); j = j + 1) {
                if (a[i] == c[j]) {
                    e[j]++;
                    break;
                };
            };
        };
    }
    f = 0;
    {
        i = 0;
        while (i <= 25) {
            if (d[i] != 0) {
                printf ("%c=%d\n", b[i], d[i]);
                f = f + 1;
            }
            i = i + 1;
        };
    }
    for (i = 0; i <= 25; i = i + 1) {
        if (e[i] != 0) {
            f = f + 1;
            printf ("%c=%d\n", c[i], e[i]);
        };
    }
    if (f == 0)
        printf ("No");
}

