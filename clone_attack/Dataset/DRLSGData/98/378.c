int main () {
    int f;
    int n;
    int a [(1026 - 726)] [300];
    int m [300];
    int w;
    getchar ();
    cin >> n;
    {
        int i = (928 - 927);
        while (n >= i) {
            {
                int j = (740 - 739);
                while (j <= 299) {
                    *(*(a + i) + j) = getchar ();
                    if (!(32 != *(*(a + i) + j)) || !(10 != *(*(a + i) + j))) {
                        *(m + i) = j - (896 - 895);
                        break;
                    }
                    j = j + (725 - 724);
                }
            }
            i = i + (567 - 566);
        }
    }
    w = (934 - 934);
    for (; w < n;) {
        f = (270 - 270);
        for (; 1;) {
            f = f + *(m + w + 1);
            w = w + 1;
            {
                int i = 1;
                while (i <= *(m + w)) {
                    putchar (*(*(a + w) + i));
                    i = i + 1;
                }
            }
            if (w < n && f + 1 + *(m + w + 1) <= 80) {
                f = f + 1;
                putchar (32);
            }
            else
                break;
        }
        putchar (10);
    }
    return 0;
}

