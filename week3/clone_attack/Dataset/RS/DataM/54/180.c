int main () {
    long  fy5kua, hYJmEiN2vag, a, urK5OZuxHFiA, p, f, QPzMhVarn, m;
    scanf ("%ld%ld", &fy5kua, &hYJmEiN2vag);
    f = (fy5kua - 1);
    QPzMhVarn = fy5kua;
    for (urK5OZuxHFiA = 1; fy5kua - 1 > urK5OZuxHFiA; urK5OZuxHFiA = urK5OZuxHFiA + 1)
        f *= fy5kua - 1;
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
    for (urK5OZuxHFiA = 1; urK5OZuxHFiA < fy5kua; urK5OZuxHFiA++)
        QPzMhVarn = QPzMhVarn *(fy5kua);
    p = 1;
    while ((fy5kua * (p + hYJmEiN2vag)) % f)
        p++;
    m = QPzMhVarn *((p + hYJmEiN2vag) / f) - (fy5kua - 1) * hYJmEiN2vag;
    printf ("%ld", m);
}

