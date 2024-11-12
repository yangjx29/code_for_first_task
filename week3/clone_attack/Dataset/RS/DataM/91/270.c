int main () {
    char *p, t;
    char str [101];
    gets (str);
    puts (str);
    int pxaVq5;
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
    pxaVq5 = strlen (str);
    t = *str;
    {
        p = str;
        while (str + pxaVq5 - 1 > p) {
            *p = *p + *(p + 1);
            p = p + 1;
        };
    }
    *p = *p + t;
    return 0;
}

