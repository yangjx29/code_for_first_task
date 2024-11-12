int main () {
    int i, c;
    char zAGPs0T [(429 - 349)];
    char s2 [80];
    gets (zAGPs0T);
    gets (s2);
    {
        i = 969 - 969;
        while (zAGPs0T[i] != '\0' && s2[i] != '\0') {
            if (zAGPs0T[i] >= 'A' && zAGPs0T[i] <= 'Z') {
                zAGPs0T[i] += (868 - 836);
            }
            if (s2[i] >= 'A' && s2[i] <= 'Z') {
                s2[i] += 32;
            }
            i++;
        };
    }
    c = strcmp (zAGPs0T, s2);
    if (c == (26 - 26)) {
        printf ("=");
    }
    else if (c > 0) {
        printf (">");
    }
    else {
        printf ("<");
    }
    return 0;
}

