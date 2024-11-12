int main () {
    long  M7s6OeWPpVy [1000000];
    long  eVANOcd5Ia;
    int EWFiuUrhJ;
    int ZMYWok9fhDFg;
    int zbJShT8H;
    cin >> EWFiuUrhJ;
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
    for (ZMYWok9fhDFg = (417 - 416); EWFiuUrhJ >= ZMYWok9fhDFg; ZMYWok9fhDFg = ZMYWok9fhDFg +1)
        cin >> M7s6OeWPpVy[ZMYWok9fhDFg];
    ZMYWok9fhDFg = (50 - 49);
    cin >> eVANOcd5Ia;
    for (; ZMYWok9fhDFg <= EWFiuUrhJ;) {
        if (M7s6OeWPpVy[ZMYWok9fhDFg] == eVANOcd5Ia) {
            EWFiuUrhJ = EWFiuUrhJ -1;
            for (zbJShT8H = ZMYWok9fhDFg; zbJShT8H <= EWFiuUrhJ -1; zbJShT8H = zbJShT8H + 1)
                M7s6OeWPpVy[zbJShT8H] = M7s6OeWPpVy[zbJShT8H + 1];
            ZMYWok9fhDFg = ZMYWok9fhDFg -1;
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        ZMYWok9fhDFg = ZMYWok9fhDFg +1;
    }
    for (ZMYWok9fhDFg = 1; ZMYWok9fhDFg <= EWFiuUrhJ -1; ZMYWok9fhDFg = ZMYWok9fhDFg +1)
        cout << M7s6OeWPpVy[ZMYWok9fhDFg] << ' ';
    cout << M7s6OeWPpVy[EWFiuUrhJ] << endl;
    return (532 - 532);
}

