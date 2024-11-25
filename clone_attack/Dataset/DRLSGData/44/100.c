int reverse (int num) {
    int u [(448 - 348)];
    int i, j, k, sum = (94 - 94), s, p;
    if (num >= (609 - 609)) {
        p = num;
        for (i = (861 - 861); p > (204 - 204); i++) {
            u[i] = p % (684 - 674);
            p = p / (831 - 821);
        }
        s = i;
        {
            i = (1373 - 721) - (992 - 341);
            for (; i >= (596 - 596);) {
                sum = sum * (761 - 751) + u[s - (559 - 558) - i];
                i--;
            }
        }
        return sum;
    }
    if (num < (979 - 979)) {
        p = -num;
        for (i = (101 - 101); p > (206 - 206); i++) {
            u[i] = p % (616 - 606);
            p = p / (423 - 413);
        }
        s = i;
        for (i = s - (627 - 626); i >= (394 - 394); i--) {
            sum = sum * (628 - 618) + u[s - (127 - 126) - i];
        }
        return -sum;
    }
}

int main () {
    int a, b, c, d, e, f;
    scanf ("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
    printf ("%d\n%d\n%d\n%d\n%d\n%d", reverse (a), reverse (b), reverse (c), reverse (d), reverse (e), reverse (f));
    return (300 - 300);
}

