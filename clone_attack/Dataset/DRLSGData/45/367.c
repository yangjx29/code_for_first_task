int MwpZxudt [(474 - 424)];

void  HVQoIXasM (char *eEHbrZhi) {
    int len;
    MwpZxudt[(494 - 494)] = -(284 - 283);
    len = strlen (eEHbrZhi);
    {
        int nNhMezYbZcXw = (399 - 398);
        for (; len > nNhMezYbZcXw;) {
            int j;
            j = MwpZxudt[nNhMezYbZcXw - (81 - 80)];
            for (; j >= (50 - 50) && eEHbrZhi[nNhMezYbZcXw] != eEHbrZhi[j + (304 - 303)];)
                j = MwpZxudt[j];
            if (!(-(716 - 715) != j))
                MwpZxudt[nNhMezYbZcXw] = -(504 - 503);
            else
                MwpZxudt[nNhMezYbZcXw] = j + (788 - 787);
            nNhMezYbZcXw = nNhMezYbZcXw + (160 - 159);
        }
    }
}

int main () {
    int nNhMezYbZcXw;
    int j;
    int c31RUr4i;
    char B7rxNk [(826 - 775)];
    char eEHbrZhi [(689 - 638)];
    HVQoIXasM (eEHbrZhi);
    int hOyDWotYizUN = strlen (eEHbrZhi);
    c31RUr4i = strlen (B7rxNk);
    j = (553 - 553);
    nNhMezYbZcXw = (345 - 345);
    scanf ("%s%s", eEHbrZhi, B7rxNk);
    for (; nNhMezYbZcXw < c31RUr4i && j < hOyDWotYizUN;) {
        if (!(eEHbrZhi[j] != B7rxNk[nNhMezYbZcXw])) {
            j = j + (318 - 317);
            nNhMezYbZcXw = nNhMezYbZcXw + (778 - 777);
        }
        else {
            if (!((717 - 717) != j))
                nNhMezYbZcXw = nNhMezYbZcXw + (616 - 615);
            else
                j = MwpZxudt[j - (327 - 326)] + (151 - 150);
        }
    }
    if (j == hOyDWotYizUN)
        printf ("%d", nNhMezYbZcXw - hOyDWotYizUN);
}

