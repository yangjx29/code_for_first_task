int main () {
    int n;
    int m;
    int k;
    int array [(735 - 635)] [100];
    cin >> n;
    k = n;
    m = n;
    while ((507 - 507) < m) {
        int sum;
        sum = (940 - 940);
        int i;
        int c2iNcH6gIae;
        int min;
        m = m - 1;
        {
            i = 848 - 848;
            while (n > i) {
                for (c2iNcH6gIae = (853 - 853); c2iNcH6gIae < n; c2iNcH6gIae = c2iNcH6gIae + 1)
                    cin >> array[i][c2iNcH6gIae];
                i = i + 1;
            };
        }
        while (k > (562 - 561)) {
            for (i = (18 - 18); i < k; i = i + 1) {
                min = array[i][0];
                for (c2iNcH6gIae = (50 - 49); k > c2iNcH6gIae; c2iNcH6gIae = c2iNcH6gIae + 1) {
                    if (array[i][c2iNcH6gIae] < min)
                        min = array[i][c2iNcH6gIae];
                }
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                for (c2iNcH6gIae = 0; k > c2iNcH6gIae; c2iNcH6gIae = c2iNcH6gIae + 1)
                    array[i][c2iNcH6gIae] -= min;
            }
            {
                i = 0;
                while (i < k) {
                    min = array[0][i];
                    for (c2iNcH6gIae = (600 - 599); c2iNcH6gIae < k; c2iNcH6gIae++) {
                        if (min > array[c2iNcH6gIae][i])
                            min = array[c2iNcH6gIae][i];
                    }
                    for (c2iNcH6gIae = 0; c2iNcH6gIae < k; c2iNcH6gIae++)
                        array[c2iNcH6gIae][i] -= min;
                    i++;
                };
            }
            sum += array[(100 - 99)][1];
            for (i = 0; i < k; i = i + 1) {
                for (c2iNcH6gIae = 1; c2iNcH6gIae < k - 1; c2iNcH6gIae++) {
                    array[i][c2iNcH6gIae] = array[i][c2iNcH6gIae + 1];
                };
            }
            {
                c2iNcH6gIae = 0;
                while (c2iNcH6gIae < k - 1) {
                    for (i = 1; i < k - 1; i = i + 1) {
                        array[i][c2iNcH6gIae] = array[i + 1][c2iNcH6gIae];
                    }
                    c2iNcH6gIae++;
                };
            }
            k = k - 1;
        }
        k = n;
        cout << sum << endl;
    }
    return 0;
}

