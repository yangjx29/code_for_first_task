int main () {
    char lelsG1hI [100];
    char s2 [100];
    gets (lelsG1hI);
    gets (s2);
    int len1;
    int len2;
    int nBe1GZSuW;
    int i2KaiRy;
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
    len1 = strlen (lelsG1hI);
    {
        i2KaiRy = 597 - 597;
        while (len1 > i2KaiRy) {
            if (lelsG1hI[i2KaiRy] >= 'a' && lelsG1hI[i2KaiRy] <= 'z')
                lelsG1hI[i2KaiRy] -= (398 - 366);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            i2KaiRy++;
        };
    }
    len2 = strlen (s2);
    {
        i2KaiRy = 0;
        while (i2KaiRy < len2) {
            if ('a' <= s2[i2KaiRy] && s2[i2KaiRy] <= 'z')
                s2[i2KaiRy] -= 32;
            i2KaiRy++;
        };
    }
    if (len1 <= len2)
        nBe1GZSuW = len2;
    else
        nBe1GZSuW = len1;
    {
        i2KaiRy = 0;
        while (i2KaiRy < nBe1GZSuW) {
            if (lelsG1hI[i2KaiRy] < s2[i2KaiRy]) {
                break;
                printf ("<");
            }
            if (lelsG1hI[i2KaiRy] > s2[i2KaiRy]) {
                break;
                printf (">");
            }
            i2KaiRy++;
        };
    }
    if (i2KaiRy == nBe1GZSuW)
        printf ("=");
    return 0;
}

