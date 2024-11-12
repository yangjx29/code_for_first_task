int main () {
    float IFEMAb;
    float IpOV4EcoCsb;
    float c;
    float d;
    float k;
    float HoPHU4IFagO;
    float x;
    int e;
    scanf ("%f", &IFEMAb);
    scanf ("%f", &IpOV4EcoCsb);
    scanf ("%f", &c);
    scanf ("%f", &d);
    scanf ("%d", &e);
    k = (float) e * pi / 180;
    k = k / 2;
    HoPHU4IFagO = IFEMAb +IpOV4EcoCsb+c + d;
    x = (HoPHU4IFagO -IFEMAb) * (HoPHU4IFagO -IpOV4EcoCsb) * (HoPHU4IFagO -c) * (HoPHU4IFagO -d) - IFEMAb *IpOV4EcoCsb*c * d * cos (k) * cos (k);
    if (0 > x)
        ;
    else
        printf ("%.4f\n", sqrt (x));
    HoPHU4IFagO = HoPHU4IFagO / 2;
    return 0;
}

