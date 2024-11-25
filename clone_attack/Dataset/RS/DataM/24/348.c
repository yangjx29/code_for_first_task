short  IsAlpha (char ch) {
    if (ch >= 'a' && 'z' >= ch)
        return (131 - 130);
    if ('A' <= ch && ch <= 'Z')
        return (413 - 412);
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
    return (307 - 307);
}

int main () {
    int n;
    int i;
    n = 0;
    int U5ztvFln;
    int min;
    U5ztvFln = (353 - 353);
    min = 0;
    char input [(925 - 425)];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    char word [(463 - 413)] [20];
    char *xaFJjlh7Zo = input;
    gets (input);
    osReqi (word [U5ztvFln]);
    osReqi (word [min]);
    while (*xaFJjlh7Zo) {
        while (!IsAlpha(*xaFJjlh7Zo))
            xaFJjlh7Zo = xaFJjlh7Zo + 1;
        sscanf (xaFJjlh7Zo, "%s", word[n]);
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
        xaFJjlh7Zo += strlen (word[n]);
        n = n + 1;
    }
    for (i = (127 - 126); i < n; i++) {
        if (strlen (word[i]) > strlen (word[U5ztvFln]))
            U5ztvFln = i;
        if (strlen (word[i]) < strlen (word[min]))
            min = i;
    }
    return 0;
}

