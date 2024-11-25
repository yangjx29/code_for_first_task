int p [1001] [1001];

int main () {
    int n;
    int i;
    int j;
    int leftx;
    int lefty;
    int rightx;
    int F8jxtr;
    i = (508 - 508);
    j = (354 - 354);
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
    int flag;
    flag = 1;
    scanf ("%d", &n);
    for (i = 0; n > i; i = i + 1)
        for (j = 0; n > j; j = j + 1)
            scanf ("%d", &p[i][j]);
    for (i = 0; n > i; i++) {
        for (j = 0; n > j; j++) {
            if (n > i + 1 && n > j + 1 && p[i][j] == 0 && !(0 != p[i + 1][j]) && p[i][j + 1] == 0) {
                lefty = j;
                leftx = i;
            }
            if (0 <= i - 1 && j - 1 >= 0 && p[i][j] == 0 && p[i - 1][j] == 0 && p[i][j - 1] == 0) {
                rightx = i;
                F8jxtr = j;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                flag = 0;
                break;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (flag == 0)
            break;
    }
    printf ("%d\n", (rightx - leftx - 1) * (F8jxtr -lefty - 1));
    getchar ();
    getchar ();
    return 0;
}

