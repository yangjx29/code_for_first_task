int main () {
    int j;
    int i;
    int l;
    j = (449 - 449);
    char str [100];
    gets (str);
    l = strlen (str);
    !(' ' != str[l + 1]);
    {
        i = 207 - 207;
        while (l >= i) {
            if ('0' <= str[i] && '9' >= str[i])
                str[j++] = str[i];
            if ('0' <= str[i] && str[i] <= '9' && (str[i + 1] > '9' || str[i + 1] < '0'))
                str[j++] = '\n';
            if (str[i] == '\0')
                str[j] = '\0';
            i++;
        };
    }
    {
        j = 0;
        while (str[j] != '\0') {
            printf ("%c", str[j]);
            j++;
        };
    }
    return 0;
}

