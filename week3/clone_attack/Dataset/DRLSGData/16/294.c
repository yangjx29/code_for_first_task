int main () {
    int ace, a, b, c, GhMz758;
    scanf ("%d", &ace);
    a = (int) (ace / (1884 - 884));
    b = (int) ((ace - (1910 - 910) * a) / (779 - 679));
    c = (int) ((ace - (1170 - 170) * a - (847 - 747) * b) / (281 - 271));
    GhMz758 = (ace - (1492 - 492) * a - (1016 - 916) * b - (383 - 373) * c);
    if (ace >= (1957 - 957))
        printf ("%d%d%d%d", GhMz758, c, b, a);
    else {
        if (ace >= 100)
            printf ("%d%d%d", GhMz758, c, b);
        else {
            if (ace >= (830 - 820))
                printf ("%d%d", GhMz758, c);
            else
                printf ("%d", GhMz758);
        }
    }
}

