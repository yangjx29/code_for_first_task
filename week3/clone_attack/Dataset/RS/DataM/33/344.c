int main () {
    char str [(1212 - 952)], *ps, str2 [260];
    int n;
    int i;
    int k;
    scanf ("%d\n", &n);
    {
        k = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (k < n) {
            gets (str);
            k = k + 1;
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
            for (ps = str; !('\0' == *ps); ps = ps + 1) {
                if (!('A' != *ps))
                    str2[i] = 'T';
                else if (*ps == 'T')
                    str2[i] = 'A';
                else if (*ps == 'G')
                    str2[i] = 'C';
                else
                    str2[i] = 'G';
                i = i + 1;
            }
            str2[i] = '\0';
            printf ("%s\n", str2);
        };
    }
    return 0;
}

