int main () {
    int XuAoxV;
    int hNrfyg;
    int euKDtF5QdZp;
    int EP0MwZAOpJeT;
    int O1IJ6tdoQA;
    int XRgI8l;
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
    int s;
    int GctRgx1mPa;
    {
        GctRgx1mPa = 0;
        while (GctRgx1mPa < 10000) {
            scanf ("%d%d%d%d%d%d", &XuAoxV, &hNrfyg, &euKDtF5QdZp, &EP0MwZAOpJeT, &O1IJ6tdoQA, &XRgI8l);
            if (XuAoxV == 0 && !(0 != hNrfyg) && !(0 != euKDtF5QdZp) && EP0MwZAOpJeT == 0 && O1IJ6tdoQA == 0 && XRgI8l == 0) {
                return 0;
            }
            GctRgx1mPa = GctRgx1mPa +1;
            s = 3600 * (EP0MwZAOpJeT -XuAoxV-1) + 60 * O1IJ6tdoQA +XRgI8l+(60 - euKDtF5QdZp) + 60 * (60 - hNrfyg - 1);
            printf ("%d\n", s);
            if (EP0MwZAOpJeT <= 11) {
                EP0MwZAOpJeT = EP0MwZAOpJeT +12;
            };
        };
    }
    return 0;
}

