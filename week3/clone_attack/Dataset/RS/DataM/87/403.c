int main () {
    int flag;
    flag = (800 - 800);
    int a, b, c, d, e, f;
    int one;
    int two;
    int s;
    while (!(0 != flag)) {
        scanf ("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
        if (a != 0) {
            d = d + 12;
            two = d * 3600 + e * 60 + f;
            one = a * 3600 + b * 60 + c;
            s = two - one;
            printf ("%d\n", s);
        }
        if (a == 0) {
            flag = 1;
        };
    }
    return 0;
}

