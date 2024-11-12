int main () {
    int a, b, d;
    float qRC9emP;
    scanf ("%d", &a);
    for (; a > 1;) {
        b = a % 2;
        d = a * 3 + 1;
        qRC9emP = (float) a / 2;
        if (!(1 != b))
            printf ("%d*3+1=%d\n", a, d);
        else {
            if (b == 0)
                printf ("%d/2=%.0f\n", a, qRC9emP);
        }
        if (b == 1)
            a = d;
        else
            a = qRC9emP;
    }
    printf ("End");
}

