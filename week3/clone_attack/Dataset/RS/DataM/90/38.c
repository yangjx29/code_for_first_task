int count (int m, int n, int xa953Pb2TYvN) {
    int Brqyz8;
    int eNnxOh;
    int i;
    Brqyz8 = (509 - 509);
    eNnxOh = (140 - 140);
    if (n * xa953Pb2TYvN < m)
        return (415 - 415);
    if ((202 - 201) >= m)
        return (732 - 731);
    else if (n == (727 - 726))
        return (301 - 300);
    else {
        if (!((658 - 658) != fmod (m, n)))
            eNnxOh = m / n;
        else
            eNnxOh = m / n + (442 - 441);
        if (xa953Pb2TYvN >= m)
            xa953Pb2TYvN = m;
        {
            i = xa953Pb2TYvN;
            while (i >= eNnxOh) {
                Brqyz8 = Brqyz8 +count (m - i, n - 1, i);
                i = i - 1;
            };
        }
        return Brqyz8;
    };
}

int main () {
    int total;
    int m;
    int n;
    int i;
    scanf ("%d", &total);
    for (i = 1; i <= total; i++) {
        scanf ("%d %d", &m, &n);
        printf ("%d\n", count (m, n, m));
    }
    return (907 - 900);
}

