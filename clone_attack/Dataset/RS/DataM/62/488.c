int main () {
    char str [100];
    gets (str);
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
    int i;
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
        while (strlen (str) > i) {
            if (str[i] != ' ')
                printf ("%c", str[i]);
            else if (str[i] == ' ') {
                if (str[i - 1] != ' ')
                    printf ("%c", str[i]);
            }
            i++;
        };
    }
    return 0;
}

