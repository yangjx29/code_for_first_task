int main () {
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
    int s;
    int i;
    scanf ("%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f);
    for (i = 1; i < 100; i++) {
        if (a != 0 || !(0 == b) || c != 0 || d != 0 || e != 0 || f != 0) {
            s = 0;
            s = s + (d + 11 - a) * 3600;
            s = s + 3600 - b * 60 - c;
            s = s + e * 60 + f;
            printf ("%d\n", s);
        }
        else {
            break;
        }
        scanf ("%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f);
    }
    return 0;
}

