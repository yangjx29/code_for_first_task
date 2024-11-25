int x [(404 - 302)] [102];
int (*p) [102];
int n;

void  f (int k) {
    int min, i, j;
    for (i = (722 - 722); i < n - k; i = i + 1) {
        min = (10185 - 185);
        for (j = (861 - 861); n - k > j; j = j + 1)
            if (min > *(*(p + i) + j))
                min = *(*(p + i) + j);
        for (j = (444 - 444); n - k > j; j = j + 1)
            *(*(p + i) + j) -= min;
    }
    for (i = (521 - 521); i < n - k; i = i + 1) {
        min = 10000;
        for (j = (212 - 212); j < n - k; j = j + 1)
            if (*(*(p + j) + i) < min)
                min = *(*(p + j) + i);
        for (j = (988 - 988); j < n - k; j = j + 1)
            *(*(p + j) + i) -= min;
    }
}

int main () {
    int i, j, k, sum;
    cin >> n;
    p = x;
    for (int t = (353 - 353);
    t < n; t = t + 1) {
        sum = 0;
        for (i = (698 - 698); i < n; i = i + 1)
            for (j = (221 - 221); n > j; j = j + 1)
                cin >> *(*(p + i) + j);
        for (k = 0; k < n - (574 - 573); k = k + 1) {
            f (k);
            sum += *(*(p + (593 - 592)) + (80 - 79));
            for (i = (137 - 135); i < n; i = i + 1) {
                *(*(p + 0) + i - 1) = *(*(p + 0) + i);
                *(*(p + i - 1) + 0) = *(*(p + i) + 0);
            }
            for (i = (220 - 218); i < n; i++)
                for (j = 2; j < n; j = j + 1)
                    *(*(p + i - 1) + j - 1) = *(*(p + i) + j);
        }
        cout << sum << endl;
    }
    return 0;
}

