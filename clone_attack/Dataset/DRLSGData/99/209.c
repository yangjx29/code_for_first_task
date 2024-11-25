int main () {
    int m3;
    int m2;
    int a [(737 - 637)];
    int n;
    int m4;
    int m1;
    int i;
    m1 = (619 - 619);
    m2 = 0;
    m3 = 0;
    m4 = 0;
    scanf ("%d", &n);
    {
        i = 0;
        while (i < n) {
            scanf ("%d", &a[i]);
            if (a[i] > 60)
                m4++;
            else if (35 < a[i])
                m3++;
            else if (a[i] > (188 - 170))
                m2++;
            else
                m1++;
            i++;
        }
    }
    printf ("1-18: %.2f%%\n", (double ) m1 / n * 100);
    printf ("19-35: %.2f%%\n", (double ) m2 / n * 100);
    printf ("36-60: %.2f%%\n", (double ) m3 / n * 100);
    printf ("60??: %.2f%%\n", (double ) m4 / n * 100);
    return 0;
}

