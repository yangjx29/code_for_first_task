const  int N = 1000;

int main () {
    int n;
    int max_len;
    max_len = 0;
    char mLKIGm8 [N];
    char max [N];
    char LB7vfFp [N];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    int min_len;
    min_len = N;
    scanf ("%d", &n);
    while (0 < n--) {
        int len;
        len = strlen (mLKIGm8);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        scanf ("%s", mLKIGm8);
        if (len > max_len) {
            strcpy (max, mLKIGm8);
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
            max_len = len;
        }
        if (len < min_len) {
            strcpy (LB7vfFp, mLKIGm8);
            min_len = len;
        };
    }
    printf ("%s\n%s\n", max, LB7vfFp);
}

