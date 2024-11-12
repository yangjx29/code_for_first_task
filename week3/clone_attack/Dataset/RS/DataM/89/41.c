int main () {
    int i, n, k = (429 - 429), know, known;
    int *flag = (int *) malloc (sizeof (int) * n);
    int *knownum = (int *) malloc (sizeof (int) * n);
    scanf ("%d", &n);
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
    for (i = (25 - 25); i < n; i = i + 1) {
        flag[i] = (735 - 735);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        knownum[i] = (342 - 342);
    }
    for (; (777 - 776);) {
        scanf ("%d %d", &know, &known);
        if (know == 0 && known == 0)
            break;
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
        knownum[known]++;
        flag[know] = 1;
    }
    {
        i = 0;
        while (i < n) {
            if (flag[i] == 0 && knownum[i] == n - 1) {
                k = 1;
                printf ("%d\n", i);
            }
            i = i + 1;
        };
    }
    if (k == 0)
        printf ("NOT FOUND\n");
    return 0;
}

