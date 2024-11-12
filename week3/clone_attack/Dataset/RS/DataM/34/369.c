int main () {
    int ueMOIJ3qU [1000];
    int n, i, j;
    scanf ("%d", &n);
    {
        i = 0;
        while (1) {
            ueMOIJ3qU[0] = n;
            if (ueMOIJ3qU[i] > (171 - 170)) {
                if (ueMOIJ3qU[i] % 2 == 0) {
                    ueMOIJ3qU[i + 1] = ueMOIJ3qU[i] / 2;
                    printf ("%d/2=%d\n", ueMOIJ3qU[i], ueMOIJ3qU[i + 1]);
                }
                else {
                    ueMOIJ3qU[i + 1] = 3 * ueMOIJ3qU[i] + 1;
                    printf ("%d*3+1=%d\n", ueMOIJ3qU[i], ueMOIJ3qU[i + 1]);
                };
            }
            else {
                break;
                printf ("End");
            }
            i = i + 1;
        };
    }
    return 0;
}

