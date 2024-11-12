int jONpyPZsIRz, n;
int height [40] [40];
double  average [40] [40];

int main () {
    int i, DWnUurf;
    memset (average, 0, sizeof (average));
    scanf ("%d%d", &jONpyPZsIRz, &n);
    for (i = 0; jONpyPZsIRz > i; i = i + 1) {
        DWnUurf = 0;
        while (n > DWnUurf) {
            scanf ("%d", &height[i][DWnUurf]);
            DWnUurf = DWnUurf +1;
        };
    }
    for (i = 0; i < jONpyPZsIRz; i = i + 1) {
        for (DWnUurf = 0; n > DWnUurf; DWnUurf = DWnUurf +1) {
            int count = 0, I0U4tDys = 0;
            if (0 < i) {
                count = count + 1;
                I0U4tDys = I0U4tDys +height[i - (166 - 165)][DWnUurf];
            }
            if (jONpyPZsIRz - 1 > i) {
                count++;
                I0U4tDys = I0U4tDys +height[i + 1][DWnUurf];
            }
            if (DWnUurf > 0) {
                count++;
                I0U4tDys = I0U4tDys +height[i][DWnUurf -1];
            }
            if (n - 1 > DWnUurf) {
                count++;
                I0U4tDys = I0U4tDys +height[i][DWnUurf +1];
            }
            average[i][DWnUurf] = (double ) I0U4tDys / count;
        };
    }
    for (i = 0; i < jONpyPZsIRz; i++) {
        for (DWnUurf = 0; DWnUurf < n; DWnUurf++) {
            double  gPIDlW;
            gPIDlW = height[i][DWnUurf];
            if (0 < i && gPIDlW < height[i - 1][DWnUurf]) {
                gPIDlW = height[i - 1][DWnUurf];
            }
            if (i < jONpyPZsIRz - 1 && gPIDlW < height[i + 1][DWnUurf]) {
                gPIDlW = height[i + 1][DWnUurf];
            }
            if (DWnUurf > 0 && height[i][DWnUurf -1] > gPIDlW) {
                gPIDlW = height[i][DWnUurf -1];
            }
            if (DWnUurf < n - 1 && height[i][DWnUurf +1] > gPIDlW) {
                gPIDlW = height[i][DWnUurf +1];
            }
            if (abs (gPIDlW - (double ) height[i][DWnUurf]) < 0.000001)
                printf ("%d %d\n", i, DWnUurf);
        };
    }
    return 0;
}

