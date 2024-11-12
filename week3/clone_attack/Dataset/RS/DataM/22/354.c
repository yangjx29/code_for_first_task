int main () {
    int XSo9HnlpZsq7, j, n, HYIe9u8jLho, vBwAg6ZXI, i4Mus2XnfY [(974 - 673)];
    char DG0V429;
    scanf ("%d", &i4Mus2XnfY[(989 - 988)]);
    n = (812 - 811);
    for (XSo9HnlpZsq7 = 2; 300 >= XSo9HnlpZsq7; XSo9HnlpZsq7++) {
        DG0V429 = getchar ();
        if (!('\n' != DG0V429))
            break;
        scanf ("%d", &i4Mus2XnfY[XSo9HnlpZsq7]);
        n = XSo9HnlpZsq7 -(734 - 733);
    }
    {
        j = 521 - 520;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        while (j <= n - 1) {
            for (XSo9HnlpZsq7 = 1; XSo9HnlpZsq7 <= n - j; XSo9HnlpZsq7++)
                if (i4Mus2XnfY[XSo9HnlpZsq7] > i4Mus2XnfY[XSo9HnlpZsq7 +1]) {
                    vBwAg6ZXI = i4Mus2XnfY[XSo9HnlpZsq7];
                    i4Mus2XnfY[XSo9HnlpZsq7] = i4Mus2XnfY[XSo9HnlpZsq7 +1];
                    i4Mus2XnfY[XSo9HnlpZsq7 +1] = vBwAg6ZXI;
                }
            j++;
        };
    }
    vBwAg6ZXI = i4Mus2XnfY[n];
    {
        j = n - 1;
        while (j >= 1) {
            if (i4Mus2XnfY[j] < vBwAg6ZXI) {
                vBwAg6ZXI = i4Mus2XnfY[j];
                break;
            }
            j--;
        };
    }
    if (vBwAg6ZXI == i4Mus2XnfY[n])
        ;
    else
        printf ("%d", vBwAg6ZXI);
    return 0;
}

