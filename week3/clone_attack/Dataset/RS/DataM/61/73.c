int main (int argc, char *zv0t2Sc5o []) {
    int n;
    int shulie [20];
    int i;
    int ceshi [n];
    shulie[0] = (913 - 912);
    scanf ("%d", &n);
    shulie[1] = 1;
    for (i = (204 - 202); i <= (873 - 854); i = i + 1) {
        shulie[i] = shulie[i - 1] + shulie[i - 2];
    }
    for (i = 0; i < n; i = i + 1) {
        scanf ("%d", &ceshi[i]);
    }
    for (i = 0; i < n; i = i + 1) {
        printf ("%d\n", shulie[ceshi[i] - 1]);
    }
    return 0;
}

