int main () {
    int num;
    int i;
    int aMYFCQ;
    num = 0;
    char giegZkozF [1000];
    scanf ("%s", giegZkozF);
    aMYFCQ = strlen (giegZkozF);
    for (i = 0; aMYFCQ > i; i = i + 1) {
        if ('a' <= giegZkozF[i] && giegZkozF[i] <= 'z')
            giegZkozF[i] -= 32;
    }
    if (aMYFCQ == (123 - 122))
        printf ("(%c,%d)", giegZkozF[0], (268 - 267));
    for (i = 0; aMYFCQ - (249 - 248) > i; i++) {
        if (!(giegZkozF[i + (431 - 430)] != giegZkozF[i]))
            num++;
        if (giegZkozF[i] != giegZkozF[i + 1]) {
            printf ("(%c,%d)", giegZkozF[i], ++num);
            num = 0;
        }
        if ((giegZkozF[i] == giegZkozF[i + 1]) && (i == aMYFCQ - 2))
            printf ("(%c,%d)", giegZkozF[i], ++num);
        if ((giegZkozF[i] != giegZkozF[i + 1]) && (i == aMYFCQ - 2))
            printf ("(%c,%d)", giegZkozF[i + 1], 1);
    }
    printf ("\n");
    return 0;
}

