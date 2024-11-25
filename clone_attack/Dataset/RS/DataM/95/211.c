void  main () {
    char cUdYKJjORIlN [80];
    char s1 [80];
    gets (s1);
    gets (cUdYKJjORIlN);
    int i;
    for (i = 0; !(cUdYKJjORIlN[i] % 32 != s1[i] % 32) && !('\0' == s1[i]) && cUdYKJjORIlN[i] != '\0'; i = i + 1)
        if (96 < s1[i]) {
            s1[i] -= 32;
        }
    if (cUdYKJjORIlN[i] > 96) {
        cUdYKJjORIlN[i] -= 32;
    }
    if (s1[i] < cUdYKJjORIlN[i])
        printf ("<\n");
    if (s1[i] > cUdYKJjORIlN[i])
        printf (">\n");
    if (s1[i] == cUdYKJjORIlN[i])
        ;
}

