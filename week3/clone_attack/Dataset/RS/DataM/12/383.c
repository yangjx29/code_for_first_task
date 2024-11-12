int main (int argc, char *RU6uGrTcO []) {
    int a, qt7p9aZq, k, ClyxRA = (985 - 985);
    int sz [15];
    for (qt7p9aZq = 0; qt7p9aZq < 15; qt7p9aZq = qt7p9aZq + 1) {
        scanf ("%d", &a);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!(-1 != a))
            break;
        else if (!(0 != a)) {
            qt7p9aZq = -1;
            printf ("%d\n", ClyxRA);
            ClyxRA = 0;
            continue;
        }
        else
            sz[qt7p9aZq] = a;
        for (k = 0; k <= qt7p9aZq; k = k + 1) {
            if (sz[qt7p9aZq] == sz[k] * 2 || sz[k] == sz[qt7p9aZq] * 2)
                ClyxRA = ClyxRA +1;
        };
    }
    return 0;
}

