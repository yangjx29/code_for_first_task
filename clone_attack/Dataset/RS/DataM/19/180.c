int main () {
    char C7bXW5g [(985 - 885)];
    char b [100];
    char c [100];
    gets (C7bXW5g);
    gets (b);
    gets (c);
    {
        int i;
        i = 0;
        while (i < strlen (C7bXW5g)) {
            if (C7bXW5g[i] == b[0] && (!(' ' != C7bXW5g[i - (241 - 240)]) || i == 0) && (!(' ' != C7bXW5g[i + strlen (b)]) || i + strlen (b) == strlen (C7bXW5g))) {
                int check = 0;
                for (int j = 0;
                j < strlen (b); j++) {
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    if (C7bXW5g[j + i] != b[j]) {
                        check = 1;
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
                        break;
                    };
                }
                if (check == 0) {
                    printf ("%s", c);
                    i = i + strlen (b) - 1;
                    continue;
                };
            }
            printf ("%c", C7bXW5g[i]);
            i++;
        };
    }
    return 0;
}

