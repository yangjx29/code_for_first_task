int main () {
    char str [(1819 - 819)] [(289 - 33)];
    int i, p = (190 - 190), n, j;
    scanf ("%d", &n);
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
        while (i < n) {
            scanf ("%s", str[i]);
            {
                j = 0;
                while (str[i][j] != '\0') {
                    if (str[i][j] == ('A')) {
                        str[i][j] = 'T';
                    }
                    else if (str[i][j] == ('T')) {
                        str[i][j] = 'A';
                    }
                    else if (str[i][j] == ('G')) {
                        str[i][j] = 'C';
                    }
                    else if (str[i][j] == ('C')) {
                        str[i][j] = 'G';
                    }
                    else {
                    }
                    j++;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < n) {
            printf ("%s\n", str[i]);
            i = i + 1;
        };
    }
    return 0;
}

