int main () {
    char a [1000] [256];
    int n;
    int yjYJblmN [1000];
    int i;
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
    scanf ("%d", &n);
    for (i = 0; i < n; i = i + 1) {
        scanf ("%s", a[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        yjYJblmN[i] = strlen (a[i]);
    }
    {
        i = 0;
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
        while (i < n) {
            for (int j = 0;
            j < yjYJblmN[i]; j++) {
                if (!('T' != a[i][j]))
                    a[i][j] = 'A';
                else if (!('A' != a[i][j]))
                    a[i][j] = 'T';
                else if (a[i][j] == 'C')
                    a[i][j] = 'G';
                else if (a[i][j] == 'G')
                    a[i][j] = 'C';
            }
            printf ("%s\n", a[i]);
            i++;
        };
    }
    return 0;
}

