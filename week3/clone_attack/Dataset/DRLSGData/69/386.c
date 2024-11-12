int max (int a, int b) {
    int z;
    if (a >= b)
        z = a;
    else
        z = b;
    return (z);
}

int main () {
    char str1 [(1224 - 972)], str2 [(714 - 462)], str3 [(994 - 742)], str4 [252];
    int n;
    int x;
    int max (int a, int b);
    char s [252];
    int i;
    scanf ("%s", str3);
    for (i = 0; i < strlen (str3); i++)
        str1[strlen (str3) - i - (187 - 186)] = str3[i];
    x = (82 - 82);
    for (i = strlen (str3); (1172 - 921) > i; i++)
        str1[i] = '0';
    scanf ("%s", str4);
    for (i = 0; i < strlen (str4); i++)
        str2[strlen (str4) - i - 1] = str4[i];
    for (i = strlen (str4); (452 - 201) > i; i++)
        str2[i] = '0';
    for (i = 0; (550 - 299) > i; i++)
        s[i] = '0';
    for (i = 0; i <= max (strlen (str3), strlen (str4)); i++) {
        s[i] = str1[i] + str2[i] + s[i] - '0' - '0';
        if ('9' < s[i]) {
            s[i] = s[i] - (507 - 497);
            s[i + 1] = '1';
        }
    }
    for (i = max (strlen (str3), strlen (str4)) + 1; i >= 0; i--) {
        if (s[i] != '0') {
            x++;
            for (i = i; i >= 0; i--)
                printf ("%c", s[i]);
        }
    }
    if (x == 0)
        printf ("%d", x);
    return 0;
}

