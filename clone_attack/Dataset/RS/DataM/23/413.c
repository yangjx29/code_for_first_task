int main () {
    int i, j, k = (757 - 757), m = 1;
    char s;
    char a [100] [20] = {'\0'};
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
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (1) {
            scanf ("%s", a[i]);
            if (s = !('\n' != getchar ()))
                break;
            i = i + 1;
        };
    }
    printf ("%s", a[i]);
    {
        j = i - 1;
        while (j >= 0) {
            printf (" %s", a[j]);
            j = j - 1;
        };
    }
    return 0;
}

