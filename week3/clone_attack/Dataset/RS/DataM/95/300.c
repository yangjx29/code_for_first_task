int main () {
    int i;
    char c;
    char str1 [80];
    char str2 [80];
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
    gets (str1);
    gets (str2);
    {
        i = 683 - 683;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < 80) {
            if (str1[i] > 64 && str1[i] < 91)
                str1[i] += 32;
            if (str2[i] > 64 && 91 > str2[i])
                str2[i] += 32;
            i = i + 1;
        };
    }
    if (strcmp (str1, str2) > 0)
        ;
    else if (strcmp (str1, str2) == 0)
        ;
    else
        ;
    return 0;
}

