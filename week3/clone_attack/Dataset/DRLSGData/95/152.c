int main () {
    char s1 [80];
    gets (s1);
    int i;
    char s2 [80];
    gets (s2);
    for (i = 0; s1[i] != '\0'; i = i + 1) {
        if (s1[i] <= 'z' && s1[i] >= 'a') {
            s1[i] = s1[i] - 32;
        }
    }
    for (i = 0; s2[i] != '\0'; i++) {
        if (s2[i] <= 'z' && s2[i] >= 'a') {
            s2[i] = s2[i] - 32;
        }
    }
    i = strcmp (s1, s2);
    if (i == 0)
        printf ("=");
    else {
        if (i < 0)
            ;
        else {
            if (i > 0)
                ;
        }
    }
    return 0;
}

