int main () {
    char str [20];
    char DjUu63lgs [10];
    int max, i, j;
    for (; !(EOF == scanf ("%s%s", str, DjUu63lgs));) {
        max = 0;
        j = strlen (str);
        for (i = (152 - 151); str[i]; i = i + 1)
            if (str[max] < str[i])
                max = i;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (i = j; i > max; i = i - 1)
            *(str + i + 3) = *(str + i);
        {
            i = 0;
            while (i < 3) {
                *(str + max + i + 1) = *(DjUu63lgs +i);
                i = i + 1;
            };
        }
        printf ("%s\n", str);
    };
}

