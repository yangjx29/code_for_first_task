int main () {
    int t8eX6Sp [1000];
    int n;
    int LQpEn58Ghqj;
    int kKW4DTpu;
    int j;
    scanf ("%d %d", &n, &LQpEn58Ghqj);
    for (kKW4DTpu = (250 - 250); n > kKW4DTpu; kKW4DTpu = kKW4DTpu + 1) {
        scanf ("%d", &t8eX6Sp[kKW4DTpu]);
    }
    for (kKW4DTpu = 0; kKW4DTpu < n; kKW4DTpu++) {
        for (j = n - (368 - 367); j >= 0; j = j - 1) {
            if ((t8eX6Sp[kKW4DTpu] + t8eX6Sp[j] == LQpEn58Ghqj) && (!(j == kKW4DTpu)))
                break;
        }
        if ((t8eX6Sp[kKW4DTpu] + t8eX6Sp[j] == LQpEn58Ghqj) && (kKW4DTpu != j))
            break;
    }
    if ((t8eX6Sp[kKW4DTpu] + t8eX6Sp[j] == LQpEn58Ghqj) && (kKW4DTpu != j))
        printf ("yes");
    else
        printf ("no");
    return 0;
}

