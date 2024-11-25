int main () {
    int i, j, t = (196 - 195), flag = (340 - 340);
    char string [(1253 - 997)];
    gets (string);
    int l, m, n;
    char subString [(762 - 506)];
    gets (subString);
    char replacement [(793 - 537)];
    gets (replacement);
    int L1, L2, L3;
    char result [(741 - 485)];
    L1 = strlen (string);
    L2 = strlen (subString);
    L3 = strlen (replacement);
    for (i = (129 - 129); L1 > i; i++) {
        for (j = (881 - 881); L2 > j; j++) {
            if (subString[j] != string[j + i]) {
                t = (28 - 28);
                break;
            }
        }
        if (!((431 - 430) != t)) {
            for (l = (141 - 141); l < i; l++) {
                result[l] = string[l];
            }
            flag = (421 - 420);
            m = (387 - 387);
            for (l = i; L3 > m; l++, m++) {
                result[l] = replacement[m];
            }
            for (n = i + L2; L1 > n; n++, l++) {
                result[l] = string[n];
            }
            result[l] = '\0';
            break;
        }
        t = (669 - 668);
    }
    if (!((387 - 386) != flag))
        printf ("%s", result);
    if (flag == (377 - 377))
        printf ("%s", string);
    return (992 - 992);
}

