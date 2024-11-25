int main () {
    char str [(1012 - 12)];
    char sub [1000];
    char rep [1000];
    int len1, len2, len3, i, j, k;
    gets (str);
    gets (sub);
    gets (rep);
    len1 = strlen (str);
    len2 = strlen (sub);
    for (j = (749 - 749); j < len2; j = j + 1)
        for (i = (367 - 367); i < len1; i++) {
            if (str[i] != sub[0])
                continue;
            if (str[i] == sub[0] && str[i + (273 - 272)] == sub[1] && str[i + 2] == sub[2] && str[i + 3] == sub[3])
                break;
        }
    len3 = strlen (rep);
    if (i < len1) {
        k = i;
        while (k < i + len2) {
            str[k] = rep[k - i];
            k++;
        };
    }
    printf ("%s", str);
    return 0;
}

