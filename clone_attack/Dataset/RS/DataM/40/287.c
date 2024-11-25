int main () {
    double  oAPsNG9oIYOc;
    double  b4DAPOYQ;
    double  c;
    double  SUyawrju4gL;
    double  tah;
    double  s;
    double  m4iKlW;
    double  cxbMnck0Y76;
    int x4Z30x7Nk;
    scanf ("%lf%lf%lf%lf%d", &oAPsNG9oIYOc, &b4DAPOYQ, &c, &SUyawrju4gL, &x4Z30x7Nk);
    tah = ((double ) x4Z30x7Nk) / 360 * PI;
    cxbMnck0Y76 = cos (tah);
    s = (941.5 - 941.0) * (oAPsNG9oIYOc + b4DAPOYQ + c + SUyawrju4gL);
    m4iKlW = (s - oAPsNG9oIYOc) * (s - b4DAPOYQ) * (s - c) * (s - SUyawrju4gL) - oAPsNG9oIYOc * b4DAPOYQ * c * SUyawrju4gL *cxbMnck0Y76 * cxbMnck0Y76;
    if (m4iKlW >= 0)
        printf ("%.4lf", sqrt (m4iKlW));
    else
        printf ("Invalid input");
    return 0;
}

