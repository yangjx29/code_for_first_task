int main () {
    char zfc [210];
    gets (zfc);
    int len;
    len = strlen (zfc);
    {
        int k = 0;
        while (len - 1 > k) {
            if ((!(32 == zfc[k])) || ((!(32 != zfc[k])) && (!(32 == zfc[k + 1])))) {
                printf ("%c", (zfc[k]));
            }
            else {
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if ((zfc[k] == 32) && (zfc[k + 1] == 32)) {
                    printf ("%c", (zfc[k]));
                    while (zfc[k] == 32) {
                        k = k + 1;
                    }
                    k = k - 1;
                };
            }
            k = k + 1;
        };
    }
    printf ("%c", (zfc[len - 1]));
    return 0;
}

