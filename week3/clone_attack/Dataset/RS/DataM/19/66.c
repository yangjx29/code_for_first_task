int main () {
    int i = 0;
    char word [100] [100], a [100], b [100];
    char gBPzDULHTk5M;
    int G6Rsdp = 0;
    for (; !(EOF == scanf ("%s", word[i]));) {
        scanf ("%c", &gBPzDULHTk5M);
        if (!('\n' != gBPzDULHTk5M))
            break;
        i = i + 1;
    }
    scanf ("%s%s", a, b);
    if (strcmp (word[0], a) != 0) {
        printf ("%s", word[0]);
    }
    else {
        printf ("%s", b);
    }
    {
        G6Rsdp = 1;
        while (G6Rsdp < i) {
            if (strcmp (word[G6Rsdp], a) != 0) {
                printf (" %s", word[G6Rsdp]);
            }
            else {
                printf (" %s", b);
            }
            G6Rsdp = G6Rsdp +1;
        };
    }
    return 0;
}

