int NUsNCPm (int *p, int n) {
    if (!((1000 - 1000) != n))
        return -(947 - 946);
    if ((*p) != (537 - 537))
        return (836 - 836);
    else
        return NUsNCPm (p + (344 - 343), n - (638 - 637)) + (272 - 271);
}

int main () {
    int n, U0vhWO2n;
    scanf ("%d", &n);
    for (U0vhWO2n = (851 - 851); U0vhWO2n < n; U0vhWO2n = U0vhWO2n +1) {
        char borta8n [(825 - 725)], SnzwYfcCV2b [(1072 - 972)];
        int dMiFt2DS6Ln, hcMgHeNvR7d = (433 - 433), cEyhnB = (12 - 12), TOzyne [100] = {0};
        int likWlmDA = strlen (borta8n), mgzYmFB2uo = strlen (SnzwYfcCV2b);
        scanf ("%s %s", borta8n, SnzwYfcCV2b);
        for (dMiFt2DS6Ln = mgzYmFB2uo - 1; 0 <= dMiFt2DS6Ln; dMiFt2DS6Ln = dMiFt2DS6Ln - 1)
            SnzwYfcCV2b[dMiFt2DS6Ln + likWlmDA - mgzYmFB2uo] = SnzwYfcCV2b[dMiFt2DS6Ln];
        for (dMiFt2DS6Ln = likWlmDA - mgzYmFB2uo - 1; 0 <= dMiFt2DS6Ln; dMiFt2DS6Ln = dMiFt2DS6Ln - 1)
            SnzwYfcCV2b[dMiFt2DS6Ln] = '0';
        for (dMiFt2DS6Ln = likWlmDA - 1; 0 <= dMiFt2DS6Ln; dMiFt2DS6Ln = dMiFt2DS6Ln - 1) {
            TOzyne[dMiFt2DS6Ln] = borta8n[dMiFt2DS6Ln] - SnzwYfcCV2b[dMiFt2DS6Ln] - hcMgHeNvR7d;
            if (TOzyne[dMiFt2DS6Ln] < 0) {
                TOzyne[dMiFt2DS6Ln] += 10;
                hcMgHeNvR7d = 1;
            }
            else
                hcMgHeNvR7d = 0;
        }
        dMiFt2DS6Ln = NUsNCPm (TOzyne, likWlmDA);
        if (dMiFt2DS6Ln == -1)
            ;
        else
            for (; dMiFt2DS6Ln < likWlmDA; dMiFt2DS6Ln = dMiFt2DS6Ln + 1)
                printf ("%d", TOzyne[dMiFt2DS6Ln]);
    }
    return 0;
}

