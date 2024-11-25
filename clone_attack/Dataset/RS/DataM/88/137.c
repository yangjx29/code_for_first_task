int main () {
    int i;
    char a [(988 - 888)], *p, *q;
    p = a;
    q = a;
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
    for (i = 1; i <= 30; i++, p++) {
        scanf ("%c", p);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!('\0' != *p))
            break;
    }
    for (i = 1; i <= 30; i++, q++) {
        if (*q >= 48 && *q <= 57)
            printf ("%c", *q);
        else if (*(q - 1) >= 48 && *(q - 1) <= 57)
            printf ("\n");
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
        };
    }
    return 0;
}

