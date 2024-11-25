int main () {
    int eazAG7;
    int agJiCwsS6eA [eazAG7], i;
    scanf ("%d", &eazAG7);
    {
        i = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i <= eazAG7) {
            scanf ("%d", &agJiCwsS6eA[i - 1]);
            i = i + 1;
        };
    }
    printf ("%d", agJiCwsS6eA[0]);
    {
        i = 2;
        while (i <= eazAG7) {
            int j;
            j = 1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (j < i) {
                if (agJiCwsS6eA[i - 1] == agJiCwsS6eA[j - 1]) {
                    break;
                }
                else {
                    j = j + 1;
                };
            }
            if (j == i) {
                printf (" %d", agJiCwsS6eA[i - 1]);
            }
            i++;
        };
    }
    return 0;
}

