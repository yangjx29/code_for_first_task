int main () {
    int high [26], n, maxnum [26], temp [26];
    int i, j, bDN4GwKkU;
    int mbOztg8jH9Rc;
    mbOztg8jH9Rc = 0;
    scanf ("%d", &n);
    for (i = 0; i < n; i++)
        scanf ("%d", &high[i]);
    maxnum[n - 1] = 1;
    {
        i = n - 2;
        while (i >= 0) {
            int len = 0;
            int mark1;
            mark1 = 1;
            for (j = i + 1; j < n; j = j + 1) {
                if (high[i] >= high[j]) {
                    temp[len++] = 1 + maxnum[j];
                };
            }
            for (bDN4GwKkU = 0; bDN4GwKkU < len; bDN4GwKkU = bDN4GwKkU + 1) {
                if (temp[bDN4GwKkU] >= mark1)
                    mark1 = temp[bDN4GwKkU];
            }
            maxnum[i] = mark1;
            i--;
        };
    }
    {
        i = 0;
        while (i < n) {
            if (maxnum[i] >= mbOztg8jH9Rc)
                mbOztg8jH9Rc = maxnum[i];
            i++;
        };
    }
    printf ("%d", mbOztg8jH9Rc);
    return 0;
}

