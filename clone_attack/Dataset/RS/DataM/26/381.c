int main () {
    int i;
    int len;
    int j;
    char a [MAX];
    char b [MAX];
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
    puts (b);
    gets (a);
    len = strlen (a);
    {
        j = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        i = 0;
        while (i < len) {
            if (a[i] == '\0') {
                break;
            }
            if (a[i] == ' ' && a[i + 1] == ' ') {
                continue;
            }
            b[j] = a[i];
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
            i = i + 1;
            j = j + 1;
        };
    }
    b[j] = '\0';
    return 0;
}

