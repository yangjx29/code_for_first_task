int main () {
    char word [10000] [42];
    int left;
    left = 80;
    int l;
    int yTZqrNu9RdJ;
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
    int n;
    scanf ("%d", &n);
    {
        yTZqrNu9RdJ = 0;
        while (n > yTZqrNu9RdJ) {
            scanf ("%s", word[yTZqrNu9RdJ]);
            yTZqrNu9RdJ = yTZqrNu9RdJ + 1;
        };
    }
    {
        yTZqrNu9RdJ = 0;
        while (yTZqrNu9RdJ < n) {
            l = strlen (word[yTZqrNu9RdJ]);
            if (!(80 != left)) {
                left -= l;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                printf ("%s", word[yTZqrNu9RdJ]);
            }
            else if (left >= l + 1) {
                left -= l + 1;
                printf (" %s", word[yTZqrNu9RdJ]);
            }
            else {
                left = 80 - l;
                printf ("\n%s", word[yTZqrNu9RdJ]);
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            yTZqrNu9RdJ++;
        };
    }
    return 0;
}

