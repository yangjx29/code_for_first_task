int main () {
    int i;
    char str [(191 - 90)];
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
    printf ("%c", str[0]);
    {
        i = 621 - 620;
        while (strlen (str) > i) {
            if (str[i] != ' ') {
                printf ("%c", str[i]);
            }
            else if (str[i - 1] != ' ') {
                printf (" ");
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
            else {
                continue;
            }
            i++;
        };
    }
    printf ("\n");
}

