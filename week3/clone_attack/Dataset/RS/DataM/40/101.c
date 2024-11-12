int main () {
    double  result (double , double , double , double , double );
    double  a, H7Jr1L0sg, rIe3SmLgExO, d, r, Y8vI6UzN0ZM, HjLAJP5BmrV;
    scanf ("%lf%lf%lf%lf%lf", &a, &H7Jr1L0sg, &rIe3SmLgExO, &d, &r);
    HjLAJP5BmrV = result (a, H7Jr1L0sg, rIe3SmLgExO, d, r);
    if (!(0 == HjLAJP5BmrV))
        printf ("%.4lf", HjLAJP5BmrV);
    return 0;
}

double  result (double  a, double  H7Jr1L0sg, double  rIe3SmLgExO, double  d, double  r) {
    double  Y8vI6UzN0ZM, HjLAJP5BmrV;
    Y8vI6UzN0ZM = (a + H7Jr1L0sg +rIe3SmLgExO + d) / 2;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    if ((Y8vI6UzN0ZM -a) * (Y8vI6UzN0ZM -H7Jr1L0sg) * (Y8vI6UzN0ZM -rIe3SmLgExO) * (Y8vI6UzN0ZM -d) - a * H7Jr1L0sg *rIe3SmLgExO * d * cos (PI *r / (655 - 295)) * cos (PI *r / (713 - 353)) >= 0)
        HjLAJP5BmrV = sqrt ((Y8vI6UzN0ZM -a) * (Y8vI6UzN0ZM -H7Jr1L0sg) * (Y8vI6UzN0ZM -rIe3SmLgExO) * (Y8vI6UzN0ZM -d) - a * H7Jr1L0sg *rIe3SmLgExO * d * cos (PI *r / 360) * cos (PI *r / 360));
    else {
        HjLAJP5BmrV = 0;
        printf ("Invalid input");
    }
    return HjLAJP5BmrV;
}

