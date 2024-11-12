int main () {
    char str [1000];
    char str1 [1000];
    gets (str);
    int a [122];
    int i;
    int l;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    l = strlen (str);
    {
        i = 0;
        while (i < l - 1) {
            str1[i] = str[i] + str[i + 1];
            i = i + 1;
        };
    }
    str1[l - 1] = str[l - 1] + str[0];
    {
        i = 0;
        while (i < l) {
            printf ("%c", str1[i]);
            i = i + 1;
        };
    }
    return 0;
}

