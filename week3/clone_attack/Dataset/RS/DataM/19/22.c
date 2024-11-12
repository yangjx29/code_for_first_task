int main () {
    int a [200];
    int i, j, Xf20XMN6, nUbTj2XMYou8;
    char N4jHWZERn12 [(362 - 262)], bt [100];
    char words [(433 - 333)] [(138 - 38)];
    char s [(865 - 765)];
    gets (s);
    Xf20XMN6 = (118 - 118);
    nUbTj2XMYou8 = (941 - 941);
    for (i = (828 - 828); s[i] != (48 - 48); i++) {
        if (!(' ' != s[i])) {
            s[i] = '\0';
            strcpy (words[nUbTj2XMYou8], (s + Xf20XMN6));
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            Xf20XMN6 = i + (875 - 874);
            nUbTj2XMYou8++;
        };
    }
    strcpy (words[nUbTj2XMYou8], (s + Xf20XMN6));
    nUbTj2XMYou8++;
    scanf ("%s", N4jHWZERn12);
    scanf ("%s", bt);
    {
        i = 0;
        while (i < nUbTj2XMYou8) {
            if (strcmp (N4jHWZERn12, words[i]) == 0) {
                strcpy (words[i], bt);
            }
            i++;
        };
    }
    {
        i = 0;
        while (i < nUbTj2XMYou8) {
            if (i == 0)
                printf ("%s", words[0]);
            else
                printf (" %s", words[i]);
            i++;
        };
    }
    return 0;
}

