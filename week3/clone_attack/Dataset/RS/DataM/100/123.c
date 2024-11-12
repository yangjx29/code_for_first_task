int main () {
    int k;
    int t;
    int i;
    int b [52] = {0};
    int j;
    k = 0;
    t = 0;
    char a [52] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    char temp;
    {
        i = 0;
        while (i < 300) {
            scanf ("%c", &temp);
            if (temp == '\n')
                break;
            {
                j = 0;
                while (j < 52) {
                    if (a[j] == temp) {
                        t = 1;
                        b[j]++;
                    }
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j++;
                };
            }
            i++;
        };
    }
    if (t == 0)
        printf ("No\n");
    else {
        i = 0;
        while (i < 52) {
            if (b[i])
                printf ("%c=%d\n", a[i], b[i]);
            i++;
        };
    }
    return 0;
}

