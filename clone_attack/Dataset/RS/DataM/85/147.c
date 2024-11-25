int main () {
    char c [1000] [22];
    int n;
    int sum;
    sum = (614 - 614);
    int D6s4vy [1000];
    scanf ("%d", &n);
    for (int i = 0;
    i < n; i = i + 1) {
        scanf ("%s", c[i]);
        D6s4vy[i] = strlen (c[i]);
    }
    {
        int i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        while (i < n) {
            for (int j = 0;
            D6s4vy[i] > j; j = j + 1) {
                if ((('A' <= c[i][0] && c[i][0] <= 'Z') || (c[i][0] >= 'a' && c[i][0] <= 'z') || c[i][0] == '_') && ((c[i][j] >= 'A' && c[i][j] <= 'Z') || (c[i][j] >= 'a' && c[i][j] <= 'z') || c[i][j] == '_' || (c[i][j] >= '0' && c[i][j] <= '9')))
                    sum = sum + 1;
            }
            if (sum == D6s4vy[i])
                printf ("yes\n");
            else
                ;
            i = i + 1;
            sum = 0;
        };
    };
}

