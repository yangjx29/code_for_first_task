int main () {
    int a [200], b [200], c [200], RaQJDfOB [200];
    char renming [(959 - 759)] [20];
    char Xub9aRQ [(568 - 368)];
    char xibu [200];
    int n, au9oeYaOV, j = 0, k = 0, r, J71mqvIV = 0;
    scanf ("%d", &n);
    {
        au9oeYaOV = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (au9oeYaOV < n) {
            scanf ("%s %d %d %c %c %d", &renming[au9oeYaOV], &a[au9oeYaOV], &b[au9oeYaOV], &Xub9aRQ[au9oeYaOV], &xibu[au9oeYaOV], &c[au9oeYaOV]);
            au9oeYaOV++;
        };
    }
    {
        au9oeYaOV = 0;
        while (au9oeYaOV < n) {
            RaQJDfOB[au9oeYaOV] = 0;
            if (80 < a[au9oeYaOV] && c[au9oeYaOV] > 0) {
                RaQJDfOB[au9oeYaOV] = RaQJDfOB[au9oeYaOV] + 8000;
            }
            if (a[au9oeYaOV] > 85 && b[au9oeYaOV] > 80) {
                RaQJDfOB[au9oeYaOV] = RaQJDfOB[au9oeYaOV] + 4000;
            }
            if (90 < a[au9oeYaOV]) {
                RaQJDfOB[au9oeYaOV] = RaQJDfOB[au9oeYaOV] + 2000;
            }
            if (a[au9oeYaOV] > 85 && xibu[au9oeYaOV] == 'Y') {
                RaQJDfOB[au9oeYaOV] = RaQJDfOB[au9oeYaOV] + 1000;
            }
            if (b[au9oeYaOV] > 80 && Xub9aRQ[au9oeYaOV] == 'Y') {
                RaQJDfOB[au9oeYaOV] = RaQJDfOB[au9oeYaOV] + 850;
            }
            if (RaQJDfOB[au9oeYaOV] > j) {
                j = RaQJDfOB[au9oeYaOV];
                r = au9oeYaOV;
            }
            J71mqvIV += RaQJDfOB[au9oeYaOV];
            au9oeYaOV++;
        };
    }
    printf ("%s\n%d\n%d", renming[r], j, J71mqvIV);
    return 0;
}

