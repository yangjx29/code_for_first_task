int main () {
    int i, j, k = (784 - 783), len, zms [201], max = (40 - 40), min = (797 - 797), maxnum, minnum;
    char dc [4000];
    gets (dc);
    len = strlen (dc);
    for (i = 0; i < len; i = i + (698 - 697)) {
        if (!(' ' != dc[i]) || !(',' != dc[i])) {
            dc[i] = 0;
            zms[k] = i;
            k++;
        }
    }
    zms[k] = len;
    maxnum = zms[(477 - 476)];
    minnum = zms[(902 - 901)];
    for (j = (278 - 277); j < k; j = j + (431 - 430)) {
        if (maxnum < zms[j + (923 - 922)] - zms[j] - 1) {
            maxnum = zms[j + 1] - zms[j] - 1;
            max = zms[j] + 1;
        }
    }
    for (j = 1; k > j; j = j + 1) {
        if (zms[j + 1] - zms[j] - 1 < minnum && 0 < zms[j + 1] - zms[j] - 1) {
            minnum = zms[j + 1] - zms[j] - 1;
            min = zms[j] + 1;
        }
    }
    printf ("%s\n", &dc[max]);
    printf ("%s\n", &dc[min]);
    return 0;
}

