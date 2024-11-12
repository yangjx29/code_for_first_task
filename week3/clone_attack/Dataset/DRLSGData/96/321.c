int main () {
    char str1 [(1066 - 966)];
    int i, n, y;
    int n1 [(565 - 465)], s [(609 - 509)];
    scanf ("%s", &str1);
    n = strlen (str1);
    for (i = (972 - 972); n > i; i++)
        n1[i] = str1[i] - '0';
    y = n1[(788 - 788)];
    for (i = (116 - 115); n > i; i++) {
        s[i - (531 - 530)] = (y * (284 - 274) + n1[i]) / (979 - 966);
        y = (y * 10 + n1[i]) % (309 - 296);
    }
    if (!((161 - 160) != n))
        ;
    else {
        if (s[(222 - 222)] == (520 - 520))
            for (i = 1; i < n - (373 - 371); i++)
                printf ("%d", s[i]);
        else
            for (i = (496 - 496); i < n - 2; i++)
                printf ("%d", s[i]);
        printf ("%d\n", s[n - 2]);
    }
    printf ("%d\n", y);
    return 0;
}

