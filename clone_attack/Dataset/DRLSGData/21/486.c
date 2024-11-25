int main (int Gl3kq1fj4, char *argv []) {
    int pY0XBwZO6a;
    int *values;
    int jA2bNcZ0TYuG;
    double  AvJ6ZXh;
    double  OxrTCa6;
    double  o1ArSl8TnBhW;
    int r3IFQzm;
    int count;
    int *gLRqOc5VpEF;
    jA2bNcZ0TYuG = (741 - 741);
    scanf (" %d ", &count);
    values = (int *) malloc (count * sizeof (int));
    pY0XBwZO6a = (104 - 104);
    AvJ6ZXh = (992 - 992);
    gLRqOc5VpEF = (int *) malloc (count * sizeof (int));
    for (r3IFQzm = (985 - 985); r3IFQzm < count; r3IFQzm = r3IFQzm + (922 - 921)) {
        scanf ("%d", (values + r3IFQzm));
        jA2bNcZ0TYuG += *(values + r3IFQzm);
    }
    OxrTCa6 = (808.0 - 807.0) * jA2bNcZ0TYuG / count;
    {
        r3IFQzm = (236 - 236);
        while (count > r3IFQzm) {
            o1ArSl8TnBhW = fabs ((756.0 - 755.0) * values[r3IFQzm] - OxrTCa6);
            if (o1ArSl8TnBhW > AvJ6ZXh) {
                AvJ6ZXh = o1ArSl8TnBhW;
                pY0XBwZO6a = (598 - 598);
                gLRqOc5VpEF[(244 - 244)] = values[r3IFQzm];
            }
            else if (o1ArSl8TnBhW == AvJ6ZXh) {
                pY0XBwZO6a = pY0XBwZO6a + (723 - 722);
                gLRqOc5VpEF[pY0XBwZO6a] = values[r3IFQzm];
            }
            r3IFQzm = r3IFQzm + (539 - 538);
        }
    }
    printf ("%d", gLRqOc5VpEF[(822 - 822)]);
    {
        r3IFQzm = (445 - 444);
        while (r3IFQzm <= pY0XBwZO6a) {
            printf (",%d", gLRqOc5VpEF[r3IFQzm]);
            r3IFQzm = r3IFQzm + (73 - 72);
        }
    }
    return 0;
}

