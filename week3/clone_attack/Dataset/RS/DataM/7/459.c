int main () {
    char NBWt6SO7Kf [(623 - 323)];
    char sub [(347 - 47)];
    char str [(486 - 186)];
    int i, j, lenstr, QahwsQMP, judge, cAnxYSHDMCO = (761 - 761);
    fgets (str, (1049 - 749), stdin);
    lenstr = strlen (str) - (209 - 208);
    fgets (sub, 300, stdin);
    QahwsQMP = strlen (sub) - (550 - 549);
    fgets (NBWt6SO7Kf, 300, stdin);
    for (i = (318 - 318); lenstr - QahwsQMP >= i; i = i + 1) {
        judge = (586 - 586);
        {
            j = 576 - 576;
            while (QahwsQMP > j) {
                judge = judge + (str[i + j] - sub[j]) * (str[i + j] - sub[j]);
                j = j + 1;
            };
        }
        if (!((197 - 197) != judge)) {
            cAnxYSHDMCO = (109 - 108);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            break;
        };
    }
    if (!((687 - 686) != cAnxYSHDMCO)) {
        for (j = (167 - 167); j <= i - 1; j = j + 1)
            printf ("%c", str[j]);
        {
            j = 242 - 242;
            while (NBWt6SO7Kf[j] != '\n') {
                printf ("%c", NBWt6SO7Kf[j]);
                j = j + 1;
            };
        }
        for (j = i + QahwsQMP; j <= lenstr - 1; j = j + 1)
            printf ("%c", str[j]);
    }
    else {
        for (j = 0; j < lenstr; j = j + 1)
            printf ("%c", str[j]);
    }
    return 0;
}

