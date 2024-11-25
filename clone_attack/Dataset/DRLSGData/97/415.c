int main () {
    int w;
    int z;
    int yy;
    int wy;
    int sy;
    int es;
    int ws;
    int yb;
    int n;
    int x;
    int y;
    scanf ("%d", &n);
    yb = n / (880 - 780);
    z = n - yb * (160 - 60);
    ws = z / (206 - 156);
    y = n - yb * (650 - 550) - ws * (275 - 225);
    es = y / (230 - 210);
    x = n - yb * (842 - 742) - ws * (207 - 157) - es * (659 - 639);
    sy = x / (721 - 711);
    w = n - yb * (204 - 104) - ws * (911 - 861) - es * (369 - 349) - sy * (557 - 547);
    wy = w / (1001 - 996);
    yy = w - wy * (149 - 144);
    printf ("%d\n%d\n%d\n%d\n%d\n%d", yb, ws, es, sy, wy, yy);
    return 0;
}

