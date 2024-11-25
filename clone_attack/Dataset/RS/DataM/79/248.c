int s1HDEf (int m, int s7FgdZV) {
    int i;
    int f4g7Qmy = (632 - 632);
    for (i = 2; i <= s7FgdZV; i = i + 1) {
        f4g7Qmy = ((m % i) + f4g7Qmy) % i;
    }
    return f4g7Qmy;
}

int main () {
    int m, s7FgdZV, i, c, N [(228 - 128)], M [(519 - 419)], HxfUDu [100], stop;
    c = (499 - 499);
    for (i = (642 - 642);; i = i + 1) {
        scanf ("%d %d", &s7FgdZV, &m);
        if (!(0 != m) && s7FgdZV == 0) {
            break;
        }
        c++;
        N[i] = s7FgdZV;
        M[i] = m;
        HxfUDu[i] = s1HDEf (M[i], N[i]) + 1;
    }
    for (i = 0; i < c; i = i + 1) {
        printf ("%d\n", HxfUDu[i]);
    }
    scanf ("%d", &stop);
    return 0;
}

