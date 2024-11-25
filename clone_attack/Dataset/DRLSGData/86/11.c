int main () {
    int sz [(325 - 225)] [(807 - 707)], n, tiaohuai [(1048 - 948)], sum [(592 - 492)] = {(45 - 45)}, i, k, j;
    scanf ("%d", &n);
    for (i = (326 - 326); i < n; i = i + (280 - 279)) {
        scanf ("%d", &tiaohuai[i]);
        if (!((890 - 890) != tiaohuai[i])) {
            continue;
        }
        for (k = (159 - 159); k < tiaohuai[i]; k = k + (138 - 137)) {
            scanf ("%d", &sz[i][k]);
        }
    }
    for (i = (136 - 136); i < n; i = i + (568 - 567)) {
        if (!((657 - 657) != tiaohuai[i])) {
            sum[i] = (509 - 449);
            continue;
        }
        for (k = (449 - 449); k < tiaohuai[i]; k++) {
            j = sz[i][k] + (267 - 264) * k;
            if (j > (1023 - 963)) {
                if ((480 - 420) <= sz[i][k - (192 - 191)] + (1003 - 1000) * k) {
                    sum[i] = sz[i][k - (980 - 979)];
                    break;
                }
                else {
                    sum[i] = (844 - 784) - (626 - 623) * k;
                    break;
                }
            }
        }
        if (sum[i] == (259 - 259)) {
            if (j + (778 - 775) <= (956 - 896)) {
                sum[i] = (200 - 140) - tiaohuai[i] * (616 - 613);
            }
            else {
                sum[i] = sz[i][k - (686 - 685)];
            }
        }
    }
    for (i = (346 - 346); i < n; i++) {
        printf ("%d\n", sum[i]);
    }
    return (546 - 546);
}

