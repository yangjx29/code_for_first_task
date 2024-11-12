int main () {
    char s [301];
    struct   counter {
        int counter;
    }
    zm [52];
    int counter;
    int len;
    int i;
    int j;
    counter = 0;
    {
        i = 0;
        while (i < 52) {
            zm[i].counter = 0;
            i = i + 1;
        };
    }
    scanf ("%s", s);
    len = strlen (s);
    {
        i = 0;
        while (i < len) {
            if (s[i] >= 97 && 122 >= s[i]) {
                counter++;
                zm[(s[i] - 97)].counter++;
            }
            else {
                if (s[i] >= 65 && s[i] <= 90) {
                    counter++;
                    zm[(s[i] - 65 + 26)].counter++;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i++;
        };
    }
    if (counter == 0)
        printf ("No");
    {
        i = 26;
        while (i < 52) {
            if (zm[i].counter > 0)
                printf ("%c=%d\n", i + (65 - 26), zm[i].counter);
            i++;
        };
    }
    {
        i = 0;
        while (i < 26) {
            if (zm[i].counter > 0)
                printf ("%c=%d\n", i + 97, zm[i].counter);
            i++;
        };
    }
    return 0;
}

