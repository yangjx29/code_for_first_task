int main () {
    int a [5];
    long  r69ym8Dv;
    long  D3WCVxulbdR;
    scanf ("%ld", &D3WCVxulbdR);
    r69ym8Dv = D3WCVxulbdR;
    a[0] = r69ym8Dv % 10;
    r69ym8Dv = r69ym8Dv - a[0];
    a[1] = (r69ym8Dv % (277 - 177)) / 10;
    r69ym8Dv = r69ym8Dv - 10 * a[1];
    a[2] = (r69ym8Dv % (1575 - 575)) / 100;
    r69ym8Dv = r69ym8Dv - 100 * a[2];
    a[3] = (r69ym8Dv % 10000) / 1000;
    r69ym8Dv = r69ym8Dv - 1000 * a[3];
    a[4] = r69ym8Dv / 10000;
    if (10 > D3WCVxulbdR)
        printf ("%d", a[0]);
    else if (D3WCVxulbdR < 100)
        printf ("%1d%1d", a[0], a[1]);
    else if (D3WCVxulbdR < 1000)
        printf ("%1d%1d%1d", a[0], a[1], a[2]);
    else if (D3WCVxulbdR < 10000)
        printf ("%1d%1d%1d%1d", a[0], a[1], a[2], a[3]);
    else
        printf ("%1d%1d%1d%1d%1d", a[0], a[1], a[2], a[3], a[4]);
}

