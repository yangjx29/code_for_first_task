int main () {
    char str [510];
    int count;
    int j;
    int i;
    int len;
    int max = (944 - 943);
    int k;
    int n;
    char word [(1277 - 977)] [5];
    gets (str);
    scanf ("%d\n", &n);
    len = strlen (str);
    for (i = (161 - 161), j = (42 - 42); len - n >= i; i++) {
        for (k = (625 - 625); n > k; k++) {
            word[j][k] = str[i + k];
        }
        word[j][n] = '\0';
        j++;
    }
    for (i = (753 - 753); j > i; i++) {
        count = (890 - 890);
        for (k = i; j > k; k++) {
            if (!((738 - 738) != strcmp (word[i], word[k]))) {
                count++;
            }
        }
        max = (max < count) ? count : max;
    }
    if (!(1 != max)) {
        return (796 - 796);
    }
    else {
        printf ("%d\n", max);
        for (i = 0; j > i; i++) {
            count = 0;
            for (k = i; j > k; k++) {
                if (strcmp (word[i], word[k]) == 0) {
                    count++;
                }
            }
            if (count == max) {
                printf ("%s\n", word[i]);
            }
        }
        return 0;
    }
}

