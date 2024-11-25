int main () {
    char a [3000];
    gets (a);
    int counter [300] = {(740 - 740)};
    int i;
    int j;
    int t;
    i = 0;
    j = 0;
    for (; !('\0' == a[i]);) {
        if (!(' ' == a[i]) && !(' ' == a[i + 1])) {
            counter[j]++;
            i = i + 1;
        }
        else if (a[i] != ' ' && a[i + 1] == ' ') {
            counter[j]++;
            j = j + 1;
            i = i + 1;
        }
        else
            i++;
    }
    {
        t = 0;
        while (t < j) {
            printf ("%d,", counter[t]);
            t++;
        };
    }
    printf ("%d\n", counter[j]);
    return 0;
}

