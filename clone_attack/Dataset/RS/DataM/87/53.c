int main () {
    int i;
    int JvBeW2lc;
    int a;
    int LDMnXUCRy;
    int c;
    int d;
    int e;
    int f;
    int j;
    int k;
    for (;;) {
        scanf ("%d %d %d %d %d %d", &a, &LDMnXUCRy, &c, &d, &e, &f);
        if (a == 0) {
            break;
        }
        j = a * (4288 - 688) + LDMnXUCRy *60 + c;
        k = d * 3600 + e * 60 + f;
        k = k + 12 * 3600;
        k = k - j;
        printf ("%d\n", k);
    }
    return 0;
}

