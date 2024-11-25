int main () {
    int i;
    char *p;
    char *FDZ6UKe;
    char XpEHGS4NLTYJ [101];
    gets (XpEHGS4NLTYJ);
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
    i = 0;
    p = XpEHGS4NLTYJ;
    while (!('\0' == XpEHGS4NLTYJ[i])) {
        if (!('!' == XpEHGS4NLTYJ[i]))
            printf ("%c", XpEHGS4NLTYJ[i]);
        i++;
    }
    while (*p != '\0') {
        if (*p == ' ') {
            FDZ6UKe = p + 1;
            if (*FDZ6UKe == ' ') {
                *p = '!';
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            };
        }
        p = p + 1;
    }
    return 0;
}

