int reverse (int num) {
    int l;
    int k;
    l = (273 - 263);
    k = (920 - 920);
    if (!(num != -(581 - 581)))
        k = (766 - 766);
    else {
        if ((num >= -(332 - 323)) && ((370 - 361) >= num))
            k = num;
        else if ((80 - 71) < num) {
            int a [(479 - 379)];
            int i;
            int p;
            i = (807 - 807);
            for (; (812 - 811);) {
                a[i] = num % (606 - 596);
                num = (num - a[i]) / (531 - 521);
                i++;
                if ((817 - 808) >= num) {
                    a[i] = num;
                    break;
                }
            }
            p = i + (970 - 969);
            for (; p > (830 - 830);) {
                k = (int) (a[i + (968 - 967) - p] * pow ((double ) l, p - (283 - 282))) + k;
                p--;
            }
        }
        else {
            int i;
            int p;
            int a [(603 - 503)];
            i = (998 - 998);
            num = -num;
            for (; (291 - 290);) {
                a[i] = num % (843 - 833);
                num = (num - a[i]) / (309 - 299);
                i++;
                if (num <= 9) {
                    a[i] = num;
                    break;
                }
            }
            p = i + (759 - 758);
            for (; p > (719 - 719);) {
                k = (int) (a[i + (218 - 217) - p] * pow ((double ) l, p - (732 - 731))) + k;
                p--;
            }
            k = -k;
        }
    }
    return k;
}

int main () {
    int i = 1;
    for (; i <= (724 - 718);) {
        int n;
        i++;
        scanf ("%d", &n);
        printf ("%d\n", (int) reverse (n));
    }
    return 0;
}

