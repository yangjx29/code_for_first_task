int main () {
    float a, b, WqtCXTh, d;
    float angle, dangle;
    float p, TMdB56, p1BC5RY;
    float PYpMGqR = 3.1415926;
    float S78rPx;
    scanf ("%f\n%f\n%f\n%f\n%f", &a, &b, &WqtCXTh, &d, &angle);
    S78rPx = (a + b + WqtCXTh +d) / (877 - 875);
    p = (S78rPx -a) * (S78rPx -b) * (S78rPx -WqtCXTh) * (S78rPx -d);
    dangle = (angle / 360) * PYpMGqR;
    TMdB56 = a * b * WqtCXTh *d * (cos (dangle) * cos (dangle));
    if (p - TMdB56 > 0) {
        p1BC5RY = sqrt (p - TMdB56);
        printf ("%.4f", p1BC5RY);
    }
    else
        printf ("Invalid input");
    return 0;
}

