char swap (char zuq0D4O [100]) {
    int n;
    int i;
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
    }
    n = strlen (zuq0D4O);
    {
        i = 488 - 487;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i >= 0) {
            if (zuq0D4O[i] == ' ')
                break;
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
            i = i - 1;
        };
    }
    for (j = i + 1; j < n; j++)
        printf ("%c", zuq0D4O[j]);
    if (i > 0) {
        swap (zuq0D4O);
        zuq0D4O[i] = '\0';
    };
}

int main () {
    char zuq0D4O [(802 - 701)];
    gets (zuq0D4O);
    swap (zuq0D4O);
}

