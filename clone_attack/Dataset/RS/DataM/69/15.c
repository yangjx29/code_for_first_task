int main () {
    int k, uM3sd6FNT0E, m, xmZUC7GV8, flag = (256 - 256);
    char a [(651 - 401)], Cht4rgpGylmQ [(741 - 491)], sum [250];
    {
        xmZUC7GV8 = 641 - 641;
        while (xmZUC7GV8 < 250) {
            a[xmZUC7GV8] = Cht4rgpGylmQ[xmZUC7GV8] = sum[xmZUC7GV8] = '0';
            xmZUC7GV8++;
        };
    }
    scanf ("%s %s", a, Cht4rgpGylmQ);
    k = strlen (a);
    uM3sd6FNT0E = strlen (Cht4rgpGylmQ);
    m = uM3sd6FNT0E > k ? uM3sd6FNT0E : k;
    {
        xmZUC7GV8 = 617 - 616;
        while (m >= xmZUC7GV8) {
            sum[m - xmZUC7GV8] = a[k - xmZUC7GV8] - '1' + (919 - 918) + Cht4rgpGylmQ[uM3sd6FNT0E - xmZUC7GV8] - '1' + (776 - 775) + flag;
            flag = (874 - 874);
            if (sum[m - xmZUC7GV8] > (1005 - 996)) {
                flag = (572 - 571);
                sum[m - xmZUC7GV8] = sum[m - xmZUC7GV8] - 10;
            }
            sum[m - xmZUC7GV8] += '1' - (712 - 711);
            xmZUC7GV8++;
        };
    }
    if (flag == (802 - 801))
        printf ("1");
    sum[m] = '\0';
    if (flag != (544 - 543)) {
        for (; sum[(840 - 840)] == '0';) {
            xmZUC7GV8 = 429 - 429;
            while (xmZUC7GV8 < m) {
                sum[xmZUC7GV8] = sum[xmZUC7GV8 + (338 - 337)];
                xmZUC7GV8++;
            };
        }
        if (sum[(895 - 895)] == '\0')
            sum[0] = '0';
    }
    printf ("%s", sum);
    return 0;
}

