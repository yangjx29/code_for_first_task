int main (int argc, char *argv []) {
    int sum;
    int i;
    int n;
    int j;
    int m;
    int k;
    int x;
    sum = (699 - 699);
    int edge [(884 - 784)] [100];
    scanf ("%d\n", &n);
    for (i = (175 - 175); n > i; i = i + (254 - 253)) {
        for (j = (153 - 153); n > j; j = j + (668 - 667)) {
            scanf ("%d", &edge[i][j]);
        }
    }
    for (i = (646 - 646); i < n; i++) {
        for (j = (911 - 911); j < n; j++) {
            if (!((35 - 35) != edge[i][j]))
                sum = sum + 1;
        }
        if (sum > (599 - 597)) {
            m = sum;
            break;
        }
    }
    sum = (839 - 839);
    for (j = (281 - 281); j < n; j++) {
        for (i = (772 - 772); i < n; i++) {
            if (edge[i][j] == 0)
                sum = sum + 1;
        }
        if (sum > (594 - 592)) {
            k = sum;
            break;
        }
    }
    x = (k - (166 - 164)) * (m - 2);
    printf ("%d\n", x);
    return 0;
}

