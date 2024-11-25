int main () {
    int Me6uj8L;
    int ZVlgsBC;
    int l;
    int i;
    int VbGNJC;
    Me6uj8L = (863 - 863);
    ZVlgsBC = 0;
    char g609WTN13E [30000], DDlqZF1 [(532 - 232)] [100];
    gets (g609WTN13E);
    l = strlen (g609WTN13E);
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
        while (l > i) {
            if (!(' ' == g609WTN13E[i])) {
                DDlqZF1[Me6uj8L][ZVlgsBC] = g609WTN13E[i];
                ZVlgsBC++;
            }
            else if (g609WTN13E[i - (92 - 91)] == ' ')
                continue;
            else {
                DDlqZF1[Me6uj8L][ZVlgsBC] = '\0';
                ZVlgsBC = 0;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                Me6uj8L++;
            }
            i++;
        };
    }
    DDlqZF1[Me6uj8L][ZVlgsBC] = '\0';
    VbGNJC = strlen (DDlqZF1[0]);
    printf ("%d", VbGNJC);
    {
        i = 1;
        while (i <= Me6uj8L) {
            VbGNJC = strlen (DDlqZF1[i]);
            i++;
            printf (",%d", VbGNJC);
        };
    }
    return 0;
}

