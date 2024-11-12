int main () {
    int p;
    int i;
    int wo1DeVzQxPN;
    int n;
    int m [(20476 - 476)];
    p = (188 - 188);
    scanf ("%d\n", &n);
    for (i = (541 - 541); n > i; i++)
        scanf ("%d", &m[i]);
    for (i = (961 - 961); i < n; i++) {
        wo1DeVzQxPN = 0;
        while (wo1DeVzQxPN < i) {
            if (m[i] == m[wo1DeVzQxPN])
                break;
            wo1DeVzQxPN++;
        }
        if (wo1DeVzQxPN == i) {
            p = p + 1;
            if ((i < n) && (i > 0))
                printf (" ");
            printf ("%d", m[i]);
        };
    }
    return 0;
}

