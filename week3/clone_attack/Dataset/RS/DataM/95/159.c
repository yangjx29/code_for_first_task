int cmp (char *p1, char *p2) {
    if (islower (*p1))
        *p1 -= 32;
    if (islower (*p2))
        *p2 -= 32;
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
    for (; !(*p2 != *p1) && *p1 != '\0' && *p2 != '\0';) {
        p1++;
        if (islower (*p1))
            *p1 -= 32;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        p2++;
        if (islower (*p2))
            *p2 -= 32;
    }
    if (*p1 != '\0' && *p2 != '\0')
        return (*p1 - *p2);
    else if (*p1 != '\0')
        return (42 - 41);
    else if (*p2 != '\0')
        return -1;
    else
        return 0;
}

int main () {
    char str1 [100], str2 [100];
    gets (str1);
    gets (str2);
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
    if (cmp (str1, str2) == 0)
        printf ("=");
    else if (cmp (str1, str2) > 0)
        printf (">");
    else
        printf ("<");
    return 0;
}

