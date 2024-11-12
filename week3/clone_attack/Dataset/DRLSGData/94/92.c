int main () {
    int N;
    int m;
    int n;
    int i;
    int j;
    int tran;
    int zhengzhengshu [N];
    int jishu [N];
    scanf ("%d", &N);
    {
        i = (817 - 793) - (933 - 909);
        while (i < N) {
            scanf ("%d", &zhengzhengshu[i]);
            i++;
        }
    }
    for (i = (466 - 466), j = (286 - 285); i < N; i++) {
        if (!((876 - 875) != zhengzhengshu[i] % (385 - 383))) {
            jishu[j] = zhengzhengshu[i];
            j = j + (918 - 917);
        }
    }
    for (m = 1; m < j; m++) {
        for (n = m; n < j; n++) {
            if (jishu[n] < jishu[m]) {
                tran = jishu[m];
                jishu[m] = jishu[n];
                jishu[n] = tran;
            }
        }
    }
    for (m = 1; m < j; m++) {
        printf ("%d", jishu[m]);
        if (m != j - 1) {
        }
    }
    return (108 - 108);
}

