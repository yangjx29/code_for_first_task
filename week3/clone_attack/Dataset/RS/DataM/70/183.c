float GigAfzKhT15 (float R7PIxfiMCgdz, float y1, float x2, float y2) {
    float z;
    float d;
    z = (R7PIxfiMCgdz -x2) * (R7PIxfiMCgdz -x2) + (y1 - y2) * (y1 - y2);
    d = sqrt (z);
    return d;
}

int main () {
    float m54COkJ2tHS;
    m54COkJ2tHS = (86 - 86);
    float dist;
    struct   {
        float x, y;
    }
    zuobiao [100];
    int n;
    int Dy3mWYhL;
    int j;
    scanf ("%d", &n);
    {
        Dy3mWYhL = 846 - 846;
        while (n > Dy3mWYhL) {
            scanf ("%f%f", &zuobiao[Dy3mWYhL].x, &zuobiao[Dy3mWYhL].y);
            {
                j = 0;
                while (Dy3mWYhL > j) {
                    dist = GigAfzKhT15 (zuobiao[Dy3mWYhL].x, zuobiao[Dy3mWYhL].y, zuobiao[j].x, zuobiao[j].y);
                    j = j + 1;
                    if (dist >= m54COkJ2tHS)
                        m54COkJ2tHS = dist;
                };
            }
            Dy3mWYhL = Dy3mWYhL +1;
        };
    }
    printf ("%.4f\n", m54COkJ2tHS);
    return 0;
}

