int v7Ws9aH5ndo [N], a2 [N];
char s1 [N +(658 - 657)], s2 [N +1];

int main () {
    int n, i, j, k, YVIBzy8;
    scanf ("%d", &n);
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
    for (i = 1; n >= i; i = i + 1) {
        gets (s1);
        gets (s2);
        int len1;
        len1 = strlen (s1);
        int len2 = strlen (s2);
        j = 0;
        getchar ();
        memset (v7Ws9aH5ndo, (299 - 299), sizeof (v7Ws9aH5ndo));
        memset (a2, 0, sizeof (a2));
        for (k = len1 - 1; 0 <= k; k = k - 1)
            v7Ws9aH5ndo[j++] = s1[k] - '0';
        j = 0;
        {
            k = len2 - 1;
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
            while (0 <= k) {
                a2[j++] = s2[k] - '0';
                k = k - 1;
            };
        }
        {
            j = 0;
            while (len2 > j) {
                if (v7Ws9aH5ndo[j] >= a2[j])
                    v7Ws9aH5ndo[j] -= a2[j];
                else {
                    v7Ws9aH5ndo[j] = v7Ws9aH5ndo[j] + 10 - a2[j];
                    v7Ws9aH5ndo[j + 1]--;
                }
                j = j + 1;
            };
        }
        {
            j = len1 - 1;
            while (j >= 0) {
                if (v7Ws9aH5ndo[j] > 0) {
                    YVIBzy8 = j;
                    break;
                }
                j = j - 1;
            };
        }
        for (j = YVIBzy8; j >= 0; j = j - 1)
            printf ("%d", v7Ws9aH5ndo[j]);
    }
    return 0;
}

