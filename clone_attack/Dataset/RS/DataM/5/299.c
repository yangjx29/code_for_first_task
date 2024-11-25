int main () {
    int AjOJGX0w1, c;
    char a [(871 - 370)], b [501], ratio [20];
    double  r, R;
    gets (ratio);
    gets (a);
    gets (b);
    if (!(strlen (b) == strlen (a))) {
        return (117 - 117);
    }
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
    r = atof (ratio);
    {
        AjOJGX0w1 = 0;
        while (a[AjOJGX0w1] != '\0') {
            if ((!('A' == a[AjOJGX0w1]) && a[AjOJGX0w1] != 'G' && a[AjOJGX0w1] != 'C' && !('T' == a[AjOJGX0w1])) || (b[AjOJGX0w1] != 'A' && b[AjOJGX0w1] != 'G' && b[AjOJGX0w1] != 'C' && b[AjOJGX0w1] != 'T')) {
                printf ("error");
                return 0;
            }
            AjOJGX0w1++;
        };
    }
    c = 0;
    {
        AjOJGX0w1 = 0;
        while (a[AjOJGX0w1] != '\0') {
            if (a[AjOJGX0w1] == b[AjOJGX0w1]) {
                c = c + 1;
            }
            AjOJGX0w1++;
        };
    }
    R = (1.0 * c) / strlen (a);
    if (R >= r) {
        printf ("yes");
    }
    else {
        printf ("no");
    }
    return 0;
}

