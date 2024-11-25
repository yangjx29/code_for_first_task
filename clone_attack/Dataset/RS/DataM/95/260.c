int main () {
    char str1 [80], HZaGbhiUMxXL [80];
    gets (str1);
    gets (HZaGbhiUMxXL);
    int riAb0UYsr3c, j;
    {
        riAb0UYsr3c = 328 - 328;
        while (80 > riAb0UYsr3c && !('\0' == str1[riAb0UYsr3c])) {
            if ('A' <= str1[riAb0UYsr3c] && 'Z' >= str1[riAb0UYsr3c])
                str1[riAb0UYsr3c] = str1[riAb0UYsr3c] + 32;
            riAb0UYsr3c++;
        };
    }
    {
        riAb0UYsr3c = 125 - 125;
        while (80 > riAb0UYsr3c && !('\0' == HZaGbhiUMxXL[riAb0UYsr3c])) {
            if (HZaGbhiUMxXL[riAb0UYsr3c] >= 'A' && HZaGbhiUMxXL[riAb0UYsr3c] <= 'Z')
                HZaGbhiUMxXL[riAb0UYsr3c] = HZaGbhiUMxXL[riAb0UYsr3c] + 32;
            riAb0UYsr3c++;
        };
    }
    if (strcmp (str1, HZaGbhiUMxXL) > 0)
        printf (">\n");
    else if (strcmp (str1, HZaGbhiUMxXL) < 0)
        ;
    else
        printf ("=\n");
    return 0;
}

