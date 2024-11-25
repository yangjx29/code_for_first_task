int main () {
    double  he [100];
    int xLKiWJXATC61;
    int b;
    int w8rIdg;
    int j;
    int m;
    int x1MmuPcYOnL [100];
    int vwyKEq8zxr;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    xLKiWJXATC61 = (35 - 34);
    b = 2;
    scanf ("%d", &m);
    for (w8rIdg = 0; w8rIdg < m; w8rIdg++) {
        scanf ("%d", &x1MmuPcYOnL[w8rIdg]);
    }
    he[0] = 0;
    for (w8rIdg = 0; w8rIdg < m; w8rIdg++) {
        {
            j = 0;
            while (j < x1MmuPcYOnL[w8rIdg]) {
                j++;
                he[w8rIdg] = he[w8rIdg] + (1.0 * b / (xLKiWJXATC61 * 1.0));
                vwyKEq8zxr = b;
                b = xLKiWJXATC61 + b;
                xLKiWJXATC61 = vwyKEq8zxr;
            };
        }
        printf ("%.3lf\n", he[w8rIdg]);
        he[w8rIdg + 1] = 0;
        xLKiWJXATC61 = 1;
        b = 2;
    }
    return 0;
}

