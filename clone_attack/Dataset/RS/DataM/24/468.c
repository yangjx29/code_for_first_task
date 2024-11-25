int main () {
    int j;
    int start;
    int max;
    int min;
    int i;
    int len [100];
    j = (817 - 817);
    start = (611 - 611);
    max = 0;
    min = 0;
    char a [300];
    char b [(728 - 628)] [(735 - 635)];
    gets (a);
    {
        i = 0;
        while (!('\0' == a[i])) {
            if (!(' ' != a[i])) {
                b[j][i - start] = '\0';
                start = i + 1;
                j++;
            }
            else if (!(',' == a[i])) {
                b[j][i - start] = a[i];
            }
            i++;
        };
    }
    b[j][i - start] = '\0';
    j++;
    {
        i = 0;
        while (j > i) {
            len[i] = strlen (b[i]);
            i++;
        };
    }
    for (i = 0; i < j; i++) {
        if (len[max] < len[i]) {
            max = i;
        }
        if (len[min] > len[i]) {
            min = i;
        };
    }
    printf ("%s\n%s\n", b[max], b[min]);
    return 0;
}

