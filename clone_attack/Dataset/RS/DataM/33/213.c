struct   DNA {
    char Mn95JOt7G [255];
}
a [1000];

int main () {
    int n;
    int jLOhCe9v8DY;
    int j;
    int t;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    scanf ("%d\n", &n);
    {
        jLOhCe9v8DY = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > jLOhCe9v8DY) {
            gets (a[jLOhCe9v8DY].Mn95JOt7G);
            t = strlen (a[jLOhCe9v8DY].Mn95JOt7G);
            for (j = 0; j < t; j++) {
                if (!('A' != a[jLOhCe9v8DY].Mn95JOt7G[j]))
                    a[jLOhCe9v8DY].Mn95JOt7G[j] = 'T';
                else if (!('T' != a[jLOhCe9v8DY].Mn95JOt7G[j]))
                    a[jLOhCe9v8DY].Mn95JOt7G[j] = 'A';
                else if (a[jLOhCe9v8DY].Mn95JOt7G[j] == 'C')
                    a[jLOhCe9v8DY].Mn95JOt7G[j] = 'G';
                else if (a[jLOhCe9v8DY].Mn95JOt7G[j] == 'G')
                    a[jLOhCe9v8DY].Mn95JOt7G[j] = 'C';
            }
            puts (a[jLOhCe9v8DY].Mn95JOt7G);
            jLOhCe9v8DY++;
        };
    }
    return 0;
}

