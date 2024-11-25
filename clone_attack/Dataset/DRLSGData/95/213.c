int main () {
    char MKgTwltNcJWF [80];
    gets (MKgTwltNcJWF);
    int n, i;
    char str2 [80];
    gets (str2);
    for (i = 0; i < 79; i = i + 1) {
        if ((MKgTwltNcJWF[i] >= 'A') && (MKgTwltNcJWF[i] <= 'Z'))
            MKgTwltNcJWF[i] = MKgTwltNcJWF[i] + 32;
        if ((str2[i] >= 'A') && (str2[i] <= 'Z'))
            str2[i] = str2[i] + 32;
        if ((MKgTwltNcJWF[i] == '\0') && (str2[i] == '\0'))
            break;
    }
    if (strcmp (MKgTwltNcJWF, str2) > 0)
        ;
    else if (strcmp (MKgTwltNcJWF, str2) < 0)
        ;
    else
        ;
    return 0;
}

