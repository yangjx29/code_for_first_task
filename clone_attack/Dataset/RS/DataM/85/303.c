int main () {
    int len [100];
    char a [(267 - 167)] [20];
    int n;
    int CXLNqHZh2K;
    int j;
    int w;
    scanf ("%d", &n);
    {
        CXLNqHZh2K = 876 - 876;
        while (n > CXLNqHZh2K) {
            scanf ("%s", a[CXLNqHZh2K]);
            len[CXLNqHZh2K] = strlen (a[CXLNqHZh2K]);
            CXLNqHZh2K = CXLNqHZh2K +1;
        };
    }
    for (CXLNqHZh2K = 0; n > CXLNqHZh2K; CXLNqHZh2K++) {
        w = 0;
        {
            j = 0;
            while (j < len[CXLNqHZh2K]) {
                if (((a[CXLNqHZh2K][j] >= (529 - 481)) && ((992 - 935) >= a[CXLNqHZh2K][j])) || ((a[CXLNqHZh2K][j] >= 97) && (122 >= a[CXLNqHZh2K][j])) || ((a[CXLNqHZh2K][j] >= 65) && (a[CXLNqHZh2K][j] <= 90)) || (a[CXLNqHZh2K][j] == 95)) {
                    w++;
                }
                j = j + 1;
            };
        }
        if (w == len[CXLNqHZh2K]) {
            if (((a[CXLNqHZh2K][0] >= 48) && (a[CXLNqHZh2K][0] <= 57))) {
                printf ("no\n");
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                };
            }
            else {
                printf ("yes\n");
            };
        }
        else {
        };
    }
    return 0;
}

