int main () {
    int cl8cyD1H;
    int count;
    int n;
    int m [20000];
    int i;
    cl8cyD1H = 0;
    count = 0;
    scanf ("%d", &n);
    for (i = 0; i < n; i = i + 1) {
        scanf ("%d", &m[i]);
        for (cl8cyD1H = 0; cl8cyD1H < i; cl8cyD1H++) {
            if (!(m[cl8cyD1H] != m[i]))
                break;
        }
        if (i == cl8cyD1H) {
            if (count == 0) {
                count = count + 1;
                printf ("%d", m[i]);
            }
            else
                printf (" %d", m[i]);
        };
    }
    return 0;
}

