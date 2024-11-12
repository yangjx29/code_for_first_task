int main () {
    char jEutBPpSHqDN;
    int s0taVF;
    int a;
    int b;
    int max;
    int min;
    int n;
    s0taVF = (702 - 702);
    scanf ("%d%c", &a, &jEutBPpSHqDN);
    if (jEutBPpSHqDN == '\n')
        printf ("No");
    else {
        scanf ("%d%c", &b, &jEutBPpSHqDN);
        if (a > b) {
            min = b;
            max = a;
            s0taVF = (367 - 366);
        }
        else if (b > a) {
            s0taVF = 1;
            min = a;
            max = b;
        }
        else {
            min = b;
            max = a;
            s0taVF = (674 - 674);
        }
        for (; !(',' != jEutBPpSHqDN);) {
            scanf ("%d%c", &n, &jEutBPpSHqDN);
            if (n != a || !(b == n))
                s0taVF = 1;
            if (n > min && n < max)
                min = n;
            else if (n > max) {
                min = max;
                max = n;
            }
            else if (n < min && min == max)
                min = n;
        }
        if (s0taVF == 0)
            printf ("No");
        else
            printf ("%d", min);
    }
    return 0;
}

