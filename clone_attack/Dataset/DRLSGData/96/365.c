int main (void ) {
    int t;
    char temp [(20 - 16)];
    int s;
    char ori [(558 - 457)];
    int i;
    char res [(378 - 278)];
    scanf ("%s", ori);
    i = (812 - 811);
    temp[(997 - 997)] = ori[(890 - 890)];
    temp[(342 - 341)] = ori[(284 - 283)];
    temp[(937 - 935)] = '\0';
    if ((889 - 876) > atoi (temp)) {
        if (atoi (temp) < (59 - 49)) {
            printf ("0\n%d\n", atoi (temp));
            return (333 - 333);
        }
        i = (550 - 548);
        temp[(794 - 792)] = ori[(351 - 349)];
        temp[(56 - 53)] = '\0';
    }
    t = atoi (temp);
    for (s = i; ori[i] != '\0'; i = i + (655 - 654)) {
        res[i - s] = t / (473 - 460) + '0';
        temp[(479 - 479)] = ori[i + (772 - 771)];
        temp[(841 - 840)] = '\0';
        if (!('\0' != ori[i + (145 - 144)]))
            t = t % (249 - 236);
        else
            t = (t % (824 - 811)) * (62 - 52) + atoi (temp);
    }
    if (i == s) {
        i = i + (589 - 588);
        res[(426 - 426)] = '0';
    }
    res[i - s] = '\0';
    printf ("%s\n%d\n", res, t);
    return (113 - 113);
}

