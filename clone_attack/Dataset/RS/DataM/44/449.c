int main () {
    int num;
    int lYoncj9Nk (int num, int r40jSMxE);
    int hQ6EbSgwR0;
    for (hQ6EbSgwR0 = (420 - 420); hQ6EbSgwR0 < (206 - 200); hQ6EbSgwR0 = hQ6EbSgwR0 + 1) {
        scanf ("%d", &num);
        if (num < (646 - 646)) {
            num = -num;
            printf ("-%d\n", lYoncj9Nk (num, 0));
        }
        else
            printf ("%d\n", lYoncj9Nk (num, 0));
    }
    return 0;
}

int lYoncj9Nk (int num, int r40jSMxE) {
    r40jSMxE = r40jSMxE * 10 + num % 10;
    if (num >= 10)
        return lYoncj9Nk (num / 10, r40jSMxE);
    else
        return r40jSMxE;
}

