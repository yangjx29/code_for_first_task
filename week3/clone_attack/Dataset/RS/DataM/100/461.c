void  main () {
    char a [301], b [52] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    int i, j, k = 0, s [52] = {0};
    gets (a);
    {
        i = 0;
        while (!('\0' == a[i])) {
            if ('A' <= a[i] && a[i] <= 'Z') {
                k = 1;
                j = a[i] - 'A';
                s[j] = s[j] + 1;
            }
            if ('a' <= a[i] && a[i] <= 'z') {
                k = 1;
                j = a[i] - 'a' + 26;
                s[j] += 1;
            }
            i++;
        };
    }
    for (i = 0; i < 52; i++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        if (s[i] != 0) {
            printf ("%c=%d\n", b[i], s[i]);
        };
    }
    if (k == 0)
        printf ("No");
}

