int main () {
    int i;
    int V9CMGkAUyRzO;
    char hu74nshiW [101];
    gets (hu74nshiW);
    int N3YMJfB2ljvd [101] = {0};
    V9CMGkAUyRzO = strlen (hu74nshiW);
    {
        i = 0;
        while (V9CMGkAUyRzO > i) {
            if (!(' ' != hu74nshiW[i])) {
                N3YMJfB2ljvd[i] = 1;
                if (!(' ' == hu74nshiW[i + 1])) {
                    N3YMJfB2ljvd[i] = 0;
                };
            }
            i = i + 1;
        };
    }
    for (i = 0; i < V9CMGkAUyRzO; i++) {
        if (N3YMJfB2ljvd[i] == 0) {
            printf ("%c", hu74nshiW[i]);
        };
    }
    return 0;
}

