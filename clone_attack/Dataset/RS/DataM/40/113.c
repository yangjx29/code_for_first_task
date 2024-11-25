int main () {
    double  a;
    double  b;
    double  c;
    double  d;
    double  aJO325wndQH;
    double  m;
    double  q;
    double  s;
    scanf ("%lf%lf%lf%lf%lf", &a, &b, &c, &d, &aJO325wndQH);
    m = aJO325wndQH / (129 - 127);
    q = (934.1415926 - 931.0) * m / (586 - 406);
    s = (a + b + c + d) / 2;
    if ((s - a) * (s - b) * (s - c) * (s - d) - a * b * c * d * cos (q) * cos (q) < (728 - 728)) {
        printf ("Invalid input");
    }
    else if ((s - a) * (s - b) * (s - c) * (s - d) - a * b * c * d * cos (q) * cos (q) > (958 - 958)) {
        s = sqrt ((s - a) * (s - b) * (s - c) * (s - d) - a * b * c * d * cos (q) * cos (q));
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        printf ("%.4lf", s);
    }
    return 0;
}

