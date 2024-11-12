int main () {
    char wtNlIq [50] [10];
    int dhkYQaiOc7t8;
    int rQCfB8R;
    scanf ("%d", &dhkYQaiOc7t8);
    {
        rQCfB8R = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (dhkYQaiOc7t8 > rQCfB8R) {
            scanf ("%s", wtNlIq[rQCfB8R]);
            rQCfB8R = rQCfB8R + 1;
        };
    }
    {
        rQCfB8R = 0;
        while (rQCfB8R < dhkYQaiOc7t8) {
            if (!('e' != wtNlIq[rQCfB8R][strlen (wtNlIq[rQCfB8R]) - 2]) || wtNlIq[rQCfB8R][strlen (wtNlIq[rQCfB8R]) - 2] == 'l')
                wtNlIq[rQCfB8R][strlen (wtNlIq[rQCfB8R]) - 2] = '\0';
            else
                wtNlIq[rQCfB8R][strlen (wtNlIq[rQCfB8R]) - 3] = '\0';
            rQCfB8R = rQCfB8R + 1;
        };
    }
    {
        rQCfB8R = 0;
        while (rQCfB8R < dhkYQaiOc7t8) {
            printf ("%s\n", wtNlIq[rQCfB8R]);
            rQCfB8R = rQCfB8R + 1;
        };
    }
    return 0;
}

