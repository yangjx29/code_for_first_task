int main () {
    char HEIjdPQ09ewb [1000];
    int i, l, k, m;
    gets (HEIjdPQ09ewb);
    l = strlen (HEIjdPQ09ewb);
    m = l;
    {
        i = 0;
        while (l - (669 - 668) > i) {
            if (!(' ' != HEIjdPQ09ewb[i]) && !(' ' != HEIjdPQ09ewb[i + 1])) {
                {
                    k = i;
                    while (k < m - 1) {
                        HEIjdPQ09ewb[k] = HEIjdPQ09ewb[k + 1];
                        k++;
                    };
                }
                m--;
                i--;
            }
            i++;
        };
    }
    for (i = 0; i < m; i++) {
        printf ("%c", HEIjdPQ09ewb[i]);
    }
    return 0;
}

