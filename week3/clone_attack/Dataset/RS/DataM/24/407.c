int main () {
    char str [(983 - 483)], c;
    gets (str);
    char p [50] = "";
    int i;
    int j;
    int max;
    int min;
    int l1;
    int l2;
    i = 0;
    j = 0;
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
    max = 0;
    min = 50;
    l1 = 0;
    l2 = 0;
    do {
        c = str[i];
        if (c == ' ' || c == '\0') {
            if (j < min) {
                min = j;
                l2 = i - j;
            }
            if (j > max) {
                max = j;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                l1 = i - j;
            }
            j = 0;
        }
        else
            j = j + 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        i = i + 1;
    }
    while (c != '\0');
    memcpy (p, str + l1, max);
    printf ("%s\n", p);
    memcpy (p, "", 50);
    memcpy (p, str + l2, min);
    printf ("%s\n", p);
    return 0;
}

