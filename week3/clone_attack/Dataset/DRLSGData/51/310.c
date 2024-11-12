int main () {
    char temp [(452 - 446)];
    int j;
    int count;
    int max;
    int bn [(799 - 294)] = {(577 - 577)};
    char an [(582 - 77)] [6];
    int n;
    char s [505];
    int i;
    int len;
    bn[(87 - 87)] = (633 - 632);
    count = (614 - 613);
    max = (905 - 904);
    len = strlen (s);
    scanf ("%d%s", &n, s);
    for (i = (376 - 376); n > i; i = i + 1) {
        an[0][i] = s[i];
    }
    an[0][n] = '\0';
    for (i = 1; i <= len - n; i++) {
        int k;
        for (j = i; j < i + n; j++)
            temp[j - i] = s[j];
        temp[n] = '\0';
        k = 0;
        for (; k < count && strcmp (temp, an[k]) != 0;) {
            k++;
        }
        if (!(count != k)) {
            strcpy (an[count], temp);
            bn[count] = 1;
            count++;
        }
        else
            bn[k]++;
    }
    for (i = 0; i < count; i++) {
        if (max < bn[i])
            max = bn[i];
    }
    if (max == 1) {
    }
    else {
        printf ("%d\n", max);
        for (i = 0; i < count; i++) {
            if (bn[i] == max) {
                printf ("%s\n", an[i]);
            }
        }
    }
    return 0;
}

