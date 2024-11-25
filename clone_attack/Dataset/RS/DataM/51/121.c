int main () {
    int cnt;
    int izcoejmbV1n;
    int k;
    int tbk9ft;
    int Jw8p3fIzj6r;
    int jntpqKuHz;
    int j;
    int q;
    cnt = 0;
    izcoejmbV1n = 0;
    k = (864 - 863);
    char oGiqjs [(1219 - 717)] = {(844 - 844)};
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    char a [500] [5] = {(645 - 645)};
    char egcVUdbj7zo [100] [5] = {0};
    char *iKBEyWtdbDU = NULL;
    cin >> tbk9ft;
    cin >> oGiqjs;
    Jw8p3fIzj6r = strlen (oGiqjs);
    iKBEyWtdbDU = oGiqjs;
    for (jntpqKuHz = 0; jntpqKuHz < Jw8p3fIzj6r -tbk9ft + (635 - 634); jntpqKuHz++) {
        {
            j = 0;
            while (j < tbk9ft) {
                a[jntpqKuHz][j] = *iKBEyWtdbDU;
                iKBEyWtdbDU++;
                j++;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        iKBEyWtdbDU = iKBEyWtdbDU + 1 - tbk9ft;
    }
    {
        jntpqKuHz = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (jntpqKuHz < Jw8p3fIzj6r -tbk9ft + 1) {
            cnt = 0;
            {
                j = jntpqKuHz;
                while (j < Jw8p3fIzj6r -tbk9ft + 1) {
                    if (strcmp (a[jntpqKuHz], a[j]) == 0)
                        cnt++;
                    j++;
                };
            }
            if (cnt > izcoejmbV1n) {
                izcoejmbV1n = cnt;
                k = 0;
                strcpy (egcVUdbj7zo[k], a[jntpqKuHz]);
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
            if (cnt == izcoejmbV1n) {
                for (q = 0; q <= k; q++) {
                    if (strcmp (egcVUdbj7zo[q], a[jntpqKuHz]) == 0)
                        break;
                }
                if (q == k + 1) {
                    k++;
                    strcpy (egcVUdbj7zo[k], a[jntpqKuHz]);
                };
            }
            jntpqKuHz++;
        };
    }
    if (izcoejmbV1n == 1)
        cout << "NO" << endl;
    else {
        cout << izcoejmbV1n << endl;
        for (jntpqKuHz = 0; jntpqKuHz <= k; jntpqKuHz++)
            cout << egcVUdbj7zo[jntpqKuHz] << endl;
    }
    return 0;
}

