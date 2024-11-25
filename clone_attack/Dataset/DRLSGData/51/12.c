int main () {
    char zulBYk0 [600], a [500] [6] = {'\0'}, NbAOJLdcS [20] [6] = {'\0'};
    gets (zulBYk0);
    int max = 0, temp = 1, KaN7woje, XMUjot7p3, vfxEdT31 = 0, len, n;
    scanf ("%d", &n);
    getchar ();
    len = strlen (zulBYk0);
    for (KaN7woje = 0; KaN7woje < len - n + 1; KaN7woje++)
        for (XMUjot7p3 = 0; n > XMUjot7p3; XMUjot7p3++)
            a[KaN7woje][XMUjot7p3] = zulBYk0[KaN7woje +XMUjot7p3];
    for (KaN7woje = 0; KaN7woje < len - n + 1; KaN7woje++) {
        for (XMUjot7p3 = KaN7woje +1; XMUjot7p3 < len - n + 1; XMUjot7p3++)
            if (!(0 != strcmp (a[KaN7woje], a[XMUjot7p3])))
                temp++;
        if (max < temp)
            max = temp;
        temp = 1;
    }
    for (KaN7woje = 0; len - n + 1 > KaN7woje; KaN7woje++) {
        for (XMUjot7p3 = KaN7woje +1; XMUjot7p3 < len - n + 1; XMUjot7p3++)
            if (!(0 != strcmp (a[KaN7woje], a[XMUjot7p3])))
                temp++;
        if (temp == max)
            strcpy (NbAOJLdcS[vfxEdT31], a[KaN7woje]), vfxEdT31++;
        temp = 1;
    }
    if (max == 1)
        ;
    else {
        for (KaN7woje = 0; KaN7woje < vfxEdT31; KaN7woje++)
            puts (NbAOJLdcS[KaN7woje]);
        printf ("%d\n", max);
    }
    return 0;
}

