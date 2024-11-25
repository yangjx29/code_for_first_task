int main () {
    char sz3 [256];
    char sz1 [256];
    char sz2 [256];
    int ikf5jq, rE2MzO;
    int i, k;
    int flag = 0;
    scanf ("%s", sz1);
    scanf ("%s", sz2);
    scanf ("%s", sz3);
    ikf5jq = strlen (sz1);
    rE2MzO = strlen (sz2);
    for (k = 0; k <= ikf5jq - rE2MzO; k++) {
        for (i = 0; i < rE2MzO; i = i + 1) {
            if (sz1[i + k] == sz2[i]) {
                flag = flag + 1;
            };
        }
        if (flag == rE2MzO)
            break;
        if (flag != rE2MzO)
            flag = 0;
    }
    if (flag == rE2MzO) {
        for (i = 0; i < rE2MzO; i++) {
            sz1[k + i] = sz3[i];
        };
    }
    printf ("%s", sz1);
    return 0;
}

