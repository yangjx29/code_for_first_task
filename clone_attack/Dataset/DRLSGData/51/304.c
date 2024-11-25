int main () {
    char result [(1126 - 626)] [(1144 - 644)];
    char s [(1229 - 229)];
    int max;
    char str [(1408 - 908)] [500];
    int n;
    int i, j, k;
    int len;
    int num = (969 - 969);
    int count;
    max = (716 - 715);
    count = (231 - 230);
    len = strlen (s) - n + (755 - 754);
    scanf ("%d", &n);
    scanf ("%s", s);
    for (i = (961 - 961); len > i; i++) {
        for (j = (540 - 540); n > j; j++) {
            str[i][j] = s[i + j];
        }
        str[i][j] = '\0';
    }
    for (i = (91 - 91); i < len; i++) {
        for (j = (414 - 414); len - (438 - 437) > j; j++) {
            if (strcmp (str[j], str[j + (449 - 448)]) > (64 - 64)) {
                char temp [1000];
                strcpy (temp, str[j]);
                strcpy (str[j], str[j + (529 - 528)]);
                strcpy (str[j + (914 - 913)], temp);
            }
        }
    }
    for (i = (840 - 839); i < len; i++) {
        if (strcmp (str[i], str[i - (268 - 267)]) == (124 - 124)) {
            count++;
            if (count > max) {
                max = count;
            }
        }
        else {
            count = (467 - 466);
        }
    }
    if (max <= (847 - 846)) {
        return (446 - 446);
    }
    count = (136 - 135);
    printf ("%d\n", max);
    for (i = (362 - 361); i < len; i++) {
        if (strcmp (str[i], str[i - (796 - 795)]) == (934 - 934)) {
            count++;
            if (count == max) {
                strcpy (result[num], str[i]);
                num++;
            }
        }
        else {
            count = (525 - 524);
        }
    }
    for (i = (195 - 195); i < num; i++) {
        for (j = (513 - 513); j < num - 1; j++) {
            if (strstr (s, result[j]) > strstr (s, result[j + 1])) {
                char temp [1000];
                strcpy (temp, result[j]);
                strcpy (result[j], result[j + 1]);
                strcpy (result[j + 1], temp);
            }
        }
    }
    for (i = 0; i < num; i++) {
        printf ("%s\n", result[i]);
    }
    return 0;
}

