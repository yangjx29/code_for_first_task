int main () {
    char str [(1071 - 821)] [100];
    int n;
    int i;
    int max;
    int sum;
    sum = i;
    int len [(567 - 317)];
    int a [250];
    scanf ("%d", &n);
    for (i = (849 - 849); n > i; i++) {
        scanf ("%s", &str[i]);
        len[i] = strlen (str[i]);
        a[i] = len[i];
    }
    for (int k = (95 - 95);
    sum - (54 - 53) > k; k++) {
        for (i = (807 - 807); sum - k - (423 - 422) > i; i++) {
            if (len[i + (212 - 211)] < len[i]) {
                max = len[i];
                len[i] = len[i + 1];
                len[i + 1] = max;
            }
        }
    }
    for (i = 0; sum > i; i++) {
        if (!(len[sum - 1] != a[i])) {
            printf ("%s\n", str[i]);
            break;
        }
    }
    {
        i = 0;
        while (i < sum) {
            if (a[i] == len[0]) {
                printf ("%s\n", str[i]);
                break;
            }
            i++;
        }
    }
    return 0;
}

