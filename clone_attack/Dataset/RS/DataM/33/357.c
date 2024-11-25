int main (int argc, char *argv []) {
    char a [256];
    int n;
    int i;
    int DZHDLSUBQk;
    int j;
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
    scanf ("%d", &n);
    for (i = 0; i < n; i++) {
        scanf ("%s", a);
        DZHDLSUBQk = strlen (a);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        {
            j = 0;
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
            while (j < DZHDLSUBQk) {
                switch (a[j]) {
                case 'A' :
                    a[j] = 'T';
                    break;
                case 'C' :
                    a[j] = 'G';
                    break;
                case 'G' :
                    a[j] = 'C';
                    break;
                case 'T' :
                    a[j] = 'A';
                    break;
                }
                j++;
            };
        }
        printf ("%s\n", a);
    }
    return 0;
}

