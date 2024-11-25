int main () {
    int k;
    int i;
    int m;
    k = 0;
    char sz [101];
    char sz2 [101];
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
    gets (sz);
    puts (sz2);
    m = strlen (sz);
    for (i = 0; i <= m; i = i + 1) {
        if (!(sz[i] == ' ' && sz[i + 1] == ' ')) {
            sz2[k++] = sz[i];
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
            };
        };
    }
    sz2[k] = '\0';
    return 0;
}

