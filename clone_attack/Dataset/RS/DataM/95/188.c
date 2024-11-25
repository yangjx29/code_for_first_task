int main () {
    int fa5iSFQIT;
    char c1 [80], c2 [80];
    gets (c1);
    gets (c2);
    for (fa5iSFQIT = (718 - 718); !('\0' == c1[fa5iSFQIT]); fa5iSFQIT++) {
        if (c1[fa5iSFQIT] >= 97 && c1[fa5iSFQIT] <= 122)
            c1[fa5iSFQIT] = c1[fa5iSFQIT] - 32;
        if (c2[fa5iSFQIT] >= 97 && c2[fa5iSFQIT] <= 122)
            c2[fa5iSFQIT] = c2[fa5iSFQIT] - 32;
    }
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
    if (strcmp (c1, c2) == 0)
        printf ("=");
    if (strcmp (c1, c2) < 0)
        printf ("<");
    if (strcmp (c1, c2) > 0)
        printf (">");
    return 0;
}

