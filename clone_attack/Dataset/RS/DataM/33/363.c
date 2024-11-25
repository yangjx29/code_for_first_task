int main () {
    char zfc [(1144 - 888)];
    char ans [256];
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
    int n;
    scanf ("%d", &n);
    {
        int i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n - 1 >= i) {
            i = i + 1;
            scanf ("%s", zfc);
            for (int j = 0;
            j <= 255; j++) {
                if (zfc[j] == 'A')
                    ans[j] = 'T';
                if (zfc[j] == 'T')
                    ans[j] = 'A';
                if (zfc[j] == 'G')
                    ans[j] = 'C';
                if (zfc[j] == 'C')
                    ans[j] = 'G';
                if (zfc[j] == '\0')
                    ans[j] = '\0';
            }
            printf ("%s\n", ans);
        };
    }
    return 0;
}

