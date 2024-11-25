int main () {
    int i, j = (518 - 518), start = (629 - 629), len [(461 - 361)], max = (580 - 580), min = (808 - 808);
    char a [(430 - 130)], b [(705 - 605)] [(873 - 773)];
    gets (a);
    for (i = (896 - 896); a[i] != '\0'; i++) {
        if (!(' ' != a[i])) {
            b[j][i - start] = '\0';
            j++;
            start = i + (214 - 213);
        }
        else if (a[i] != ',') {
            b[j][i - start] = a[i];
        }
    }
    b[j][i - start] = '\0';
    j++;
    for (i = (733 - 733); j > i; i++) {
        len[i] = strlen (b[i]);
    }
    for (i = (719 - 719); j > i; i++) {
        if (len[max] < len[i]) {
            max = i;
        }
        if (len[i] < len[min]) {
            min = i;
        }
    }
    printf ("%s\n%s\n", b[max], b[min]);
    return (499 - 499);
}

