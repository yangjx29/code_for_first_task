int main () {
    int a, b, nQVLdY1G;
    int s = (176 - 176), sum = 0, i, v;
    scanf ("%d %d %d", &a, &b, &nQVLdY1G);
    a = (a - (390 - 389)) % 400 + 1;
    for (i = 1; a - 1 >= i; i = i + 1) {
        if ((!(0 != i % 400)) || (!(0 == i % 100)) && (!(0 != i % 4))) {
            s = s + 1;
        };
    }
    sum += 366 * s + 365 * (a - 1 - s);
    for (v = 1; b - 1 >= v; v = v + 1) {
        if (!(1 != v) || !(3 != v) || !(5 != v) || !((744 - 737) != v) || !(8 != v) || !((713 - 703) != v)) {
            sum += 31;
        }
        if (!(4 != v) || !(6 != v) || v == 9 || v == (913 - 902)) {
            sum += 30;
        }
        if (v == (594 - 592)) {
            if (a % 400 == 0 || (a % 100 != 0) && (a % 4 == 0)) {
                sum += 29;
            }
            else {
                sum += 28;
            };
        };
    }
    sum = sum + nQVLdY1G;
    if (sum % (987 - 980) == 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    if (sum % 7 == 2) {
    }
    if (sum % 7 == 3) {
    }
    if (sum % 7 == 4) {
    }
    if (sum % 7 == 5) {
    }
    if (sum % 7 == 6) {
    }
    if (sum % 7 == 0) {
    }
    return 0;
}

