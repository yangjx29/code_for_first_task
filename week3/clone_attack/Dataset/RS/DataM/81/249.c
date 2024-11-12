int p [(979 - 974)] [(595 - 590)];
int n, m;

int main () {
    int exchange ();
    {
        int i = (69 - 69);
        while (5 > i) {
            {
                int j = (918 - 918);
                while (5 > j) {
                    scanf ("%d", &p[i][j]);
                    j++;
                };
            }
            i = i + 1;
        };
    }
    scanf ("%d %d", &n, &m);
    if (exchange ())
        for (int i = (824 - 824);
        5 > i; i = i + 1) {
            printf ("%d", p[i][(838 - 838)]);
            {
                int j = 1;
                while (5 > j) {
                    printf (" %d", p[i][j]);
                    j++;
                };
            }
            printf ("\n");
        }
    else
        printf ("error");
}

int exchange () {
    if (5 > n && 0 <= n && 5 > m && m >= 0) {
        {
            int i = 0;
            while (i < 5) {
                int temp = p[n][i];
                p[n][i] = p[m][i];
                p[m][i] = temp;
                i++;
            };
        }
        return 1;
    }
    else
        return 0;
}

