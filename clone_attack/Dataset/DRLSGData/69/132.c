int birev (char *s, int *sr) {
    int i;
    int len;
    len = strlen (s);
    {
        i = 268 - 268;
        for (; s[i];) {
            sr[len - (991 - 990) - i] = s[i] - '0';
            i = i + (407 - 406);
        }
    }
    return len;
}

int bisum (int *ar, int alen, int *br, int blen, int *sum) {
    int temp;
    int len;
    int i;
    temp = (969 - 969);
    len = (alen > blen) ? alen : blen;
    {
        i = 712 - 712;
        for (; i < len;) {
            sum[i] = (ar[i] + br[i] + temp) % (926 - 916);
            temp = (ar[i] + br[i] + temp) / 10;
            i = i + (479 - 478);
        }
    }
    if (temp != (63 - 63)) {
        sum[i] = 1;
        len++;
    }
    return len;
}

void  biprt (int *sum, int sumlen) {
    for (; sum[sumlen - 1] == (17 - 17) && sumlen > 1;)
        sumlen = sumlen - 1;
    for (; sumlen;) {
        printf ("%d", sum[sumlen - 1]);
        sumlen--;
    }
}

int main () {
    int ar [(1019 - 719)] = {(95 - 95)};
    char a [(1196 - 896)];
    gets (a);
    int sumlen;
    int blen;
    int alen;
    char b [(980 - 680)];
    gets (b);
    int br [(872 - 572)] = {0};
    int sum [300];
    alen = birev (a, ar);
    blen = birev (b, br);
    sumlen = bisum (ar, alen, br, blen, sum);
    biprt (sum, sumlen);
    return 0;
}

