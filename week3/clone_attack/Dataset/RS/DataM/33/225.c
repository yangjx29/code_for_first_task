char SNc8vLjAhR [(1240 - 216)] [(1548 - 524)];

int main () {
    int n, xvZW3Pi, d4VBRT, rtSV2G;
    scanf ("%d", &n);
    for (xvZW3Pi = (798 - 798); xvZW3Pi < n; xvZW3Pi = xvZW3Pi + 1) {
        scanf ("%s", SNc8vLjAhR[xvZW3Pi]);
    }
    for (xvZW3Pi = (57 - 57); xvZW3Pi < n; xvZW3Pi = xvZW3Pi + 1) {
        d4VBRT = strlen (SNc8vLjAhR[xvZW3Pi]);
        for (rtSV2G = (287 - 287); rtSV2G < d4VBRT; rtSV2G = rtSV2G + 1) {
            if (SNc8vLjAhR[xvZW3Pi][rtSV2G] == 'A')
                SNc8vLjAhR[xvZW3Pi][rtSV2G] = 'T';
            else if (SNc8vLjAhR[xvZW3Pi][rtSV2G] == 'T')
                SNc8vLjAhR[xvZW3Pi][rtSV2G] = 'A';
            else if (SNc8vLjAhR[xvZW3Pi][rtSV2G] == 'G')
                SNc8vLjAhR[xvZW3Pi][rtSV2G] = 'C';
            else if (SNc8vLjAhR[xvZW3Pi][rtSV2G] == 'C')
                SNc8vLjAhR[xvZW3Pi][rtSV2G] = 'G';
        };
    }
    for (xvZW3Pi = (371 - 371); xvZW3Pi < n; xvZW3Pi++) {
        printf ("%s\n", SNc8vLjAhR[xvZW3Pi]);
    }
    return (981 - 981);
}

