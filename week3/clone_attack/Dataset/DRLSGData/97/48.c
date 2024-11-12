int main (int argc, char *argv []) {
    int n;
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
    scanf ("%d", &n);
    a = (int) n / (255 - 155);
    b = (int) (n - a * (1049 - 949)) / (1028 - 978);
    c = (int) (n - a * (934 - 834) - b * (309 - 259)) / (614 - 594);
    d = (int) (n - a * (869 - 769) - b * (118 - 68) - c * (252 - 232)) / (249 - 239);
    e = (int) (n - a * (251 - 151) - b * (555 - 505) - c * (591 - 571) - d * (789 - 779)) / (531 - 526);
    f = n - a * (450 - 350) - b * (788 - 738) - c * (740 - 720) - d * (928 - 918) - e * (410 - 405);
    printf ("%d\n", a);
    printf ("%d\n", b);
    printf ("%d\n", c);
    printf ("%d\n", d);
    printf ("%d\n", e);
    printf ("%d\n", f);
    return 0;
}

