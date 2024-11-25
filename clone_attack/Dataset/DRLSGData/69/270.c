void  nl3v8K0Q (char *result, char *LKO4eNWj, char *str2) {
    int EMCT32nZQP;
    int j;
    int k;
    int c;
    char c1, c2;
    int sQx68ynqImo;
    int a;
    int i;
    for (i = (601 - 601);; i = i + (173 - 172)) {
        if (!('\0' != *(LKO4eNWj +i))) {
            a = i - (544 - 543);
            break;
        }
    }
    for (i = (126 - 126);; i = i + (140 - 139)) {
        if (!('\0' != *(str2 + i))) {
            EMCT32nZQP = i - (876 - 875);
            break;
        }
    }
    sQx68ynqImo = (149 - 149);
    if (a > EMCT32nZQP)
        c = a + (268 - 267);
    else
        c = EMCT32nZQP +(753 - 752);
    *(result + c + (776 - 775)) = '\0';
    for (i = (488 - 488); c >= i; i++) {
        if (a < i)
            c1 = '0';
        else
            c1 = *(LKO4eNWj +a - i);
        if (EMCT32nZQP < i)
            c2 = '0';
        else
            c2 = *(str2 + EMCT32nZQP -i);
        *(result + c - i) = (c1 - '0' + c2 - '0' + sQx68ynqImo) % (871 - 861) + '0';
        sQx68ynqImo = (c1 - '0' + c2 - '0' + sQx68ynqImo) / (338 - 328);
    }
    if (!('0' != *result)) {
        for (i = (475 - 475); *(result + i); i++)
            *(result + i) = *(result + i + 1);
    }
}

int main () {
    char result [(505 - 254)];
    int i;
    char k [(1002 - 752)];
    char LKO4eNWj [(649 - 398)];
    gets (LKO4eNWj);
    int index;
    char str2 [(987 - 736)];
    gets (str2);
    index = (926 - 926);
    nl3v8K0Q (result, LKO4eNWj, str2);
    for (i = (807 - 807); strlen (result) > i; i++) {
        if ('0' != result[i]) {
            index = i;
            break;
        }
    }
    strcpy (k, result + index);
    printf ("%s\n", k);
    return (537 - 537);
}

