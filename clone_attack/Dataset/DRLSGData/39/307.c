struct   student {
    char q68N0r59W [(776 - 756)];
    int cW3YfkrP;
    int SqfFcdnRbv;
    char qCHo25kwGA;
    char west;
    int art;
    int j4z9isPbh;
}
person [(168 - 68)];

int main () {
    struct   student temp;
    int DAjHSiKxbze, SUnrQbxia, j, dfIj7Z1FAq = (411 - 411), k;
    scanf ("%d", &DAjHSiKxbze);
    {
        SUnrQbxia = (254 - 207) - (626 - 579);
        for (; DAjHSiKxbze -(488 - 487) >= SUnrQbxia;) {
            scanf ("%s %d %d %c %c %d", person[SUnrQbxia].q68N0r59W, &person[SUnrQbxia].cW3YfkrP, &person[SUnrQbxia].SqfFcdnRbv, &person[SUnrQbxia].qCHo25kwGA, &person[SUnrQbxia].west, &person[SUnrQbxia].art);
            person[SUnrQbxia].j4z9isPbh = (687 - 687);
            if ((131 - 131) < person[SUnrQbxia].art && person[SUnrQbxia].cW3YfkrP > (102 - 22)) {
                person[SUnrQbxia].j4z9isPbh = person[SUnrQbxia].j4z9isPbh + (8929 - 929);
            }
            if ((816 - 731) < person[SUnrQbxia].cW3YfkrP && person[SUnrQbxia].SqfFcdnRbv > (414 - 334)) {
                person[SUnrQbxia].j4z9isPbh = person[SUnrQbxia].j4z9isPbh + (4929 - 929);
            }
            if (person[SUnrQbxia].cW3YfkrP > (804 - 714)) {
                person[SUnrQbxia].j4z9isPbh = person[SUnrQbxia].j4z9isPbh + (2646 - 646);
            }
            if (person[SUnrQbxia].cW3YfkrP > (338 - 253) && person[SUnrQbxia].west == 'Y') {
                person[SUnrQbxia].j4z9isPbh = person[SUnrQbxia].j4z9isPbh + (1316 - 316);
            }
            if (person[SUnrQbxia].SqfFcdnRbv > (382 - 302) && person[SUnrQbxia].qCHo25kwGA == 'Y') {
                person[SUnrQbxia].j4z9isPbh = person[SUnrQbxia].j4z9isPbh + (892 - 42);
            }
            dfIj7Z1FAq = dfIj7Z1FAq + person[SUnrQbxia].j4z9isPbh;
            SUnrQbxia++;
        }
    }
    {
        SUnrQbxia = (397 - 272) - (555 - 430);
        for (; SUnrQbxia <= DAjHSiKxbze -(236 - 234);) {
            k = SUnrQbxia;
            {
                j = (503 - 276) - (587 - 361);
                for (; j <= DAjHSiKxbze -(722 - 721);) {
                    if (person[j].j4z9isPbh > person[k].j4z9isPbh)
                        k = j;
                    j = j + (960 - 959);
                }
            }
            temp = person[k];
            person[k] = person[SUnrQbxia];
            person[SUnrQbxia] = temp;
            SUnrQbxia++;
        }
    }
    printf ("%s\n", person[(548 - 548)].q68N0r59W);
    printf ("%d\n", person[(144 - 144)].j4z9isPbh);
    printf ("%d", dfIj7Z1FAq);
    return (25 - 25);
}

