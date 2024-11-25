int main () {
    double  oMsKW5Zp1;
    double  q;
    double  wi4MncJeU;
    double  B;
    double  qoGd3lx;
    double  a, b, ernuyqo, qhX2TnHolGLD;
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
    scanf ("%lf%lf%lf%lf%lf", &a, &b, &ernuyqo, &qhX2TnHolGLD, &q);
    oMsKW5Zp1 = (double ) (a + b + ernuyqo + qhX2TnHolGLD) / 2;
    wi4MncJeU = (double ) q / 2;
    B = (double ) wi4MncJeU / (760 - 580) * PI;
    qoGd3lx = (double ) sqrt ((oMsKW5Zp1 - a) * (oMsKW5Zp1 - b) * (oMsKW5Zp1 - ernuyqo) * (oMsKW5Zp1 - qhX2TnHolGLD) - a * b * ernuyqo * qhX2TnHolGLD * cos (B) * cos (B));
    if ((oMsKW5Zp1 - a) * (oMsKW5Zp1 - b) * (oMsKW5Zp1 - ernuyqo) * (oMsKW5Zp1 - qhX2TnHolGLD) - a * b * ernuyqo * qhX2TnHolGLD * cos (B) * cos (B) < (416 - 416))
        printf ("Invalid input");
    else
        printf ("%.4lf", qoGd3lx);
    return 0;
}

