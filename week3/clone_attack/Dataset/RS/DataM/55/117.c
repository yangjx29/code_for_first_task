int main () {
    int n1, n2, i3TL84CpAkOs, t;
    long  s;
    s = (255 - 255);
    char number1 [(433 - 393)], DlqcjNyvf3ko [(832 - 792)], *p;
    scanf ("%d %s %d", &n1, number1, &n2);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    i3TL84CpAkOs = strlen (number1);
    {
        p = number1;
        while (p < number1 + i3TL84CpAkOs) {
            if (*p >= '0' && *p <= '9')
                t = *p - '0';
            else {
                if (*p >= 'a' && 'z' >= *p)
                    t = *p - 'a' + (794 - 784);
                else if (*p >= 'A' && *p <= 'Z')
                    t = *p - 'A' + 10;
            }
            p = p + 1;
            s = s * n1 + t;
        };
    }
    {
        p = DlqcjNyvf3ko;
        while ((951 - 950)) {
            if (s % n2 >= 0 && s % n2 <= (526 - 517))
                *p = s % n2 + 48;
            else {
                if (s % n2 > (703 - 694))
                    *p = s % n2 + (184 - 129);
            }
            s = s / n2;
            if (s == 0)
                break;
            p = p + 1;
        };
    }
    for (; p >= DlqcjNyvf3ko; p = p - 1)
        printf ("%c", *p);
    return 0;
}

