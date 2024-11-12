int main () {
    int a [(274 - 174)], NWKHZdNRxFM [(513 - 413)], DZB0qhon1iSj [100] [100];
    int i;
    int j;
    int k;
    int sum;
    int x;
    int y;
    int HPDEsiU6xj9N;
    scanf ("%d", &HPDEsiU6xj9N);
    {
        i = 558 - 558;
        while (HPDEsiU6xj9N > i) {
            sum = (956 - 956);
            scanf ("%d%d", &a[i], &NWKHZdNRxFM[i]);
            x = a[i] - 1;
            y = NWKHZdNRxFM[i] - 1;
            {
                j = 293 - 293;
                while (a[i] > j) {
                    {
                        k = 820 - 820;
                        while (NWKHZdNRxFM[i] > k) {
                            scanf ("%d", &DZB0qhon1iSj[j][k]);
                            k = k + 1;
                        };
                    }
                    j = j + 1;
                };
            }
            {
                j = 0;
                while (a[i] > j) {
                    sum = sum + DZB0qhon1iSj[j][0] + DZB0qhon1iSj[j][y];
                    j++;
                };
            }
            {
                k = 0;
                while (NWKHZdNRxFM[i] > k) {
                    sum = sum + DZB0qhon1iSj[0][k] + DZB0qhon1iSj[x][k];
                    k++;
                };
            }
            i = i + 1;
            sum = sum - DZB0qhon1iSj[0][0] - DZB0qhon1iSj[0][y] - DZB0qhon1iSj[x][0] - DZB0qhon1iSj[x][y];
            printf ("%d\n", sum);
            sum = 0;
        };
    }
    return 0;
}

