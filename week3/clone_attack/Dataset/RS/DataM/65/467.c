int main () {
    int n, i, suma = (723 - 723), sumb = 0;
    scanf ("%d", &n);
    {
        i = 0;
        while (n > i) {
            int a, b;
            i++;
            scanf ("%d %d", &a, &b);
            if (!((815 - 814) != b - a) || !(-2 != b - a))
                suma = suma + 1;
            if (!(1 != a - b) || a - b == -2)
                sumb++;
        };
    }
    if (suma > sumb)
        printf ("A");
    if (suma < sumb)
        printf ("B");
    if (suma == sumb)
        printf ("Tie");
}

