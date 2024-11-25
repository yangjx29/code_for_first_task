int main () {
    int i, j, l, h;
    char s [(727 - 427)], w [(359 - 59)], r [(334 - 34)], d [300];
    scanf ("%s%s%s", s, w, r);
    l = strlen (s);
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
    h = strlen (w);
    for (i = (865 - 865); l - h >= i; i = i + 1) {
        for (j = (774 - 774); h > j; j = j + 1) {
            d[j] = s[i + j];
        }
        d[h] = '\0';
        if (!(0 != strcmp (d, w)))
            break;
    }
    if (i == l - h + (33 - 32))
        printf ("%s", s);
    else {
        for (j = i; j < i + h; j = j + 1) {
            s[j] = r[j - i];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        printf ("%s", s);
    }
    return 0;
}

