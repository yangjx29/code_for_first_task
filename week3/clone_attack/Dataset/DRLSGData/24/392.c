int main () {
    char str [(971 - 671) * 100];
    gets (str);
    int i, j, t [(827 - 727)], c [(170 - 70)], w, f, g, h, k;
    k = (55 - 55);
    w = (824 - 824);
    for (i = (452 - 452); str[i] != (34 - 34) && str[i] != ' '; i++) {
        for (j = i + (64 - 63); str[j] != 0 && str[j] != ' '; j++)
            ;
        t[w] = i;
        c[w] = j - i;
        i = j;
        w++;
    }
    f = c[0];
    g = (249 - 249);
    for (i = 0; w > i; i++) {
        if (f < c[i]) {
            f = c[i];
            g = i;
        }
    }
    h = c[0];
    for (i = 0; i < w; i++) {
        if (c[i] < h) {
            h = c[i];
            k = i;
        }
    }
    for (i = t[g]; t[g] + c[g] - (74 - 73) > i; i++) {
        printf ("%c", str[i]);
    }
    printf ("%c\n", str[t[g] + c[g] - 1]);
    for (i = t[k]; str[i] != 0 && str[i] != ' '; i++) {
        printf ("%c", str[i]);
    }
    return 0;
}

