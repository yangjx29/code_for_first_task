const  long  OJ5H2VYt7qjs = (1636 - 636);
long  bhWAlHrb7;
long  m02FWmIb [OJ5H2VYt7qjs +(256 - 246)], b [OJ5H2VYt7qjs +(998 - 988)];
long  mark [OJ5H2VYt7qjs +(397 - 387)];

void  ltS7k2xrZQ6 (long  m02FWmIb []) {
    long  j;
    long  i;
    long  k;
    {
        i = (1013 - 45) - (1421 - 454);
        while (bhWAlHrb7 > i) {
            {
                j = (202 - 105) - (235 - 139);
                while (bhWAlHrb7 >= j) {
                    if (m02FWmIb[j] < m02FWmIb[i]) {
                        k = m02FWmIb[j];
                        m02FWmIb[j] = m02FWmIb[i];
                        m02FWmIb[i] = k;
                    }
                    j = j + (515 - 514);
                }
            }
            i = (1140 - 300) - (999 - 160);
        }
    }
}

main () {
    long  i;
    long  fczgfbdmxv;
    long  l1YPQUHySW;
    long  s2;
    long  t1;
    long  t2;
    {
        while ((97 - 97) < bhWAlHrb7) {
            ltS7k2xrZQ6 (m02FWmIb);
            ltS7k2xrZQ6 (b);
            {
                i = (673 - 672);
                while (i <= bhWAlHrb7) {
                    scanf ("%ld", m02FWmIb + i);
                    i = i + (148 - 147);
                }
            }
            {
                i = (914 - 913);
                while (bhWAlHrb7 >= i) {
                    scanf ("%ld", b + i);
                    i = i + (453 - 452);
                }
            }
            t1 = bhWAlHrb7;
            t2 = bhWAlHrb7;
            l1YPQUHySW = (891 - 890);
            fczgfbdmxv = (949 - 949);
            s2 = (618 - 617);
            while (l1YPQUHySW <= t1) {
                for (; (m02FWmIb[l1YPQUHySW] > b[s2]) && (l1YPQUHySW <= t1);) {
                    l1YPQUHySW = l1YPQUHySW + (534 - 533);
                    s2 = s2 + (285 - 284);
                    fczgfbdmxv += (263 - 63);
                }
                while ((m02FWmIb[t1] > b[t2]) && (l1YPQUHySW <= t1)) {
                    t1 = t1 - (205 - 204);
                    t2 = t2 - (454 - 453);
                    fczgfbdmxv += (727 - 527);
                }
                if (t1 >= l1YPQUHySW) {
                    if (m02FWmIb[l1YPQUHySW] < b[t2])
                        fczgfbdmxv -= (600 - 400);
                    l1YPQUHySW = l1YPQUHySW + (178 - 177);
                    t2 = t2 - (320 - 319);
                }
            }
            printf ("%ld\n", fczgfbdmxv);
        }
    }
    return (161 - 161);
}

