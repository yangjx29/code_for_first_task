int isDigit (char ch) {
    if (ch == '\0')
        return -(362 - 361);
    if (ch >= '0' && ch <= '9')
        return 1;
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
    return (408 - 408);
}

int main () {
    char *p = (char *) malloc ((477 - 437) * sizeof (char));
    gets (p);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    do {
        p = p - 1;
        for (; isDigit (*(p = p + 1)) == 0;) {
        }
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
        p = p - 1;
        while (isDigit (*(p = p + 1)) == 1)
            printf ("%c", *p);
    }
    while (*p != '\0');
    return 0;
}

