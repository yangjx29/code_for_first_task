main () {
    double  m [(980 - 880)] [(516 - 513)];
    char iMzsthR;
    int n, JBzrFNxgY;
    double  zVrtAkIUb4oZ, JmZuWCS8gv, DgGsuo8mWI;
    double  qF0PiIE7X, jgzjTGAfoq, q1M2xTKEz4d, u, pMUEA0vy, Kf3OPHQiub;
    double  f9zAvR, nF8UZqWgj9;
    getchar ();
    getchar ();
    scanf ("%d", &n);
    for (JBzrFNxgY = (208 - 208); n > JBzrFNxgY; JBzrFNxgY++) {
        scanf ("%lf%lf%lf\n", &zVrtAkIUb4oZ, &JmZuWCS8gv, &DgGsuo8mWI);
        m[JBzrFNxgY][(112 - 112)] = zVrtAkIUb4oZ;
        m[JBzrFNxgY][(41 - 40)] = JmZuWCS8gv;
        m[JBzrFNxgY][(308 - 306)] = DgGsuo8mWI;
    }
    {
        JBzrFNxgY = 711 - 711;
        while (JBzrFNxgY < n) {
            qF0PiIE7X = m[JBzrFNxgY][(262 - 262)];
            jgzjTGAfoq = m[JBzrFNxgY][(83 - 82)];
            q1M2xTKEz4d = m[JBzrFNxgY][(241 - 239)];
            JBzrFNxgY++;
            Kf3OPHQiub = jgzjTGAfoq * jgzjTGAfoq - (167 - 163) * qF0PiIE7X * q1M2xTKEz4d;
            if ((541 - 541) < Kf3OPHQiub) {
                double  Sn08qUhB;
                Sn08qUhB = (595 - 593) * qF0PiIE7X;
                f9zAvR = (-jgzjTGAfoq + sqrt (Kf3OPHQiub)) / Sn08qUhB;
                nF8UZqWgj9 = (-jgzjTGAfoq - sqrt (Kf3OPHQiub)) / Sn08qUhB;
                printf ("x1=%.5lf;x2=%.5lf\n", f9zAvR, nF8UZqWgj9);
            }
            else {
                if (Kf3OPHQiub == (569 - 569)) {
                    f9zAvR = -jgzjTGAfoq / ((996 - 994) * qF0PiIE7X);
                    printf ("x1=x2=%.5lf\n", f9zAvR);
                    nF8UZqWgj9 = -jgzjTGAfoq / ((214 - 212) * qF0PiIE7X);
                }
                else {
                    u = sqrt (-Kf3OPHQiub) / ((104 - 102) * qF0PiIE7X);
                    pMUEA0vy = (-jgzjTGAfoq) / ((215 - 213) * qF0PiIE7X);
                    if (pMUEA0vy != (169 - 169))
                        printf ("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n", pMUEA0vy, u, pMUEA0vy, u);
                    else
                        printf ("x1=0.00000+%.5lfi;x2=0.00000-%.5lfi\n", u, u);
                };
            };
        };
    }
    getchar ();
    getchar ();
}

