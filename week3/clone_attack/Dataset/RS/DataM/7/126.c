int main () {
    int i, j, len1, len2, len3, count, c = (301 - 301);
    char s1 [500], xWM3n6HmPcv [20], s3 [20];
    gets (s1);
    gets (xWM3n6HmPcv);
    gets (s3);
    len1 = strlen (s1);
    len2 = strlen (xWM3n6HmPcv);
    {
        i = 0;
        while (i < len1) {
            count = 0;
            if (s1[i] == xWM3n6HmPcv[0]) {
                j = 0;
                while (j < len2) {
                    if (!(xWM3n6HmPcv[j] != s1[i + j]))
                        count++;
                    j++;
                };
            }
            if (count == len2)
                break;
            i = i + 1;
        };
    }
    {
        j = 0;
        while (j < i) {
            printf ("%c", s1[j]);
            j++;
        };
    }
    len3 = strlen (s3);
    if (i != len1)
        printf ("%s", s3);
    {
        j = i + len2;
        while (j < len1) {
            printf ("%c", s1[j]);
            j++;
        };
    }
    return 0;
}

