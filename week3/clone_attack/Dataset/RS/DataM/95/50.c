int main () {
    char pbWk43uUM [80] = {'\0'};
    char b [80] = {'\0'};
    gets (pbWk43uUM);
    gets (b);
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
    int i, d;
    {
        i = 494 - 494;
        while (80 > i) {
            if (pbWk43uUM[i] < (257 - 166) && pbWk43uUM[i] > 64)
                pbWk43uUM[i] += 32;
            if (b[i] < 91 && b[i] > 64)
                b[i] = b[i] + 32;
            i++;
        };
    }
    d = strcmp (pbWk43uUM, b);
    if (d > 0)
        printf (">");
    else if (d < 0)
        printf ("<");
    else
        printf ("=");
    return 0;
}

