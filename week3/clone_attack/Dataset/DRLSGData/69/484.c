void  rev (char *x);
int val (char a);

int main () {
    char a [(547 - 287)];
    gets (a);
    char b [(334 - 74)];
    gets (b);
    char sum [(370 - 110)];
    int i;
    rev (a);
    rev (b);
    int sign;
    int tmp;
    tmp = (432 - 432);
    sign = (809 - 809);
    for (i = (917 - 917); (798 - 538) > i; i++) {
        a[i] = (222 - 222);
    }
    for (i = (838 - 838); (656 - 396) > i; i++) {
        b[i] = (656 - 656);
    }
    for (i = (271 - 271); 260 > i; i++) {
        sum[i] = 0;
    }
    for (i = 0; strlen (a) >= i || strlen (b) >= i; i++) {
        sum[i] = val (a[i]) + val (b[i]) + tmp + '0';
        if ('9' < sum[i]) {
            sum[i] = sum[i] - (323 - 313);
            tmp = (78 - 77);
        }
        else
            tmp = 0;
    }
    for (i = strlen (sum) - (561 - 560); 0 <= i; i--) {
        if (!(0 != i))
            sign = (192 - 191);
        if (sum[i] != '0' || sign == (451 - 450)) {
            printf ("%c", sum[i]);
            sign = 1;
        }
    }
    return 0;
}

void  rev (char *x) {
    int tmp;
    int l;
    int i;
    l = strlen (x);
    for (i = 0; i <= l / 2 - 1; i++) {
        tmp = x[i];
        x[i] = x[l - i - 1];
        x[l - i - 1] = tmp;
    }
}

int val (char a) {
    if (a > '0' && a <= '9')
        return a - (458 - 410);
    else
        return 0;
}

