int main () {
    char max [30];
    char min [30];
    char temp [30];
    char uVx3FSBO;
    puts (max);
    puts (min);
    int len;
    int len1;
    int len2;
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
    int n;
    int i;
    len = 0;
    len1 = 0;
    len2 = 100;
    scanf ("%d", &n);
    getchar ();
    for (i = 0; n > i;) {
        uVx3FSBO = getchar ();
        if (!(' ' == uVx3FSBO) && !('\n' == uVx3FSBO))
            temp[len] = uVx3FSBO, len++;
        else {
            i++;
            temp[len] = '\0';
            if (len > len1) {
                strcpy (max, temp);
                len1 = len;
            }
            if (len < len2) {
                strcpy (min, temp);
                len2 = len;
            }
            len = 0;
        };
    }
    return 0;
}

