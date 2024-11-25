int main () {
    int n;
    int i;
    int j;
    int k;
    char str [1000];
    scanf ("%s", str);
    for (j = 0; str[j]; j++) {
        if (str[j] <= 'z' && str[j] >= 'a')
            str[j] = str[j] - 32;
    }
    {
        n = 82 - 81;
        i = 0;
        while (str[i] != '\0') {
            if (str[i] == str[i + 1]) {
                n = n + 1;
            }
            else {
                printf ("(%c,%d)", str[i], n);
                n = 1;
            }
            i++;
        };
    };
}

