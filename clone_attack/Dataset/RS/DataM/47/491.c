void  ieMnIB4 (int VKQys0R5F [], int jLgZjVe);
void  CeWgE1 (int EA4wN6qEMy [], int VKQys0R5F [], int jLgZjVe);

int main () {
    int yPUauAo5My;
    int d318dDf;
    int nQ1Dg6 [1001] = {0};
    int s8qupy5W [1001] = {0};
    yPUauAo5My = 0;
    scanf ("%d\n", &d318dDf);
    ieMnIB4 (nQ1Dg6, d318dDf);
    CeWgE1 (s8qupy5W, nQ1Dg6, d318dDf);
    for (yPUauAo5My = 0; yPUauAo5My < d318dDf - 1; yPUauAo5My = yPUauAo5My + 1) {
        printf ("%d ", s8qupy5W[yPUauAo5My]);
    }
    printf ("%d", s8qupy5W[d318dDf - 1]);
    return 0;
}

void  ieMnIB4 (int VKQys0R5F [], int jLgZjVe) {
    int yPUauAo5My;
    for (yPUauAo5My = 0; jLgZjVe > yPUauAo5My; yPUauAo5My = yPUauAo5My + 1) {
        scanf ("%d", &VKQys0R5F[yPUauAo5My]);
    };
}

void  CeWgE1 (int EA4wN6qEMy [], int VKQys0R5F [], int jLgZjVe) {
    int yPUauAo5My;
    {
        yPUauAo5My = jLgZjVe - 1;
        while (yPUauAo5My > -1) {
            EA4wN6qEMy[yPUauAo5My] = VKQys0R5F[jLgZjVe - yPUauAo5My - 1];
            yPUauAo5My = yPUauAo5My - 1;
        };
    };
}

