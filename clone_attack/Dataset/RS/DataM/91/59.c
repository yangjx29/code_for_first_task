int main () {
    int i;
    int l;
    i = (50 - 49);
    char W5rliTMyZjeY;
    char a [(760 - 658)] = {(684 - 684)};
    char *p;
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
    gets (a);
    p = a;
    W5rliTMyZjeY = *p;
    l = strlen (a);
    {
        i = 0;
        while (l - 1 > i) {
            i = i + 1;
            *p = *p + *(p + 1);
            p++;
        };
    }
    *p = *p + W5rliTMyZjeY;
    p = a;
    {
        i = 0;
        while (i < l) {
            i++;
            printf ("%c", *(p++));
        };
    }
    return 0;
}

