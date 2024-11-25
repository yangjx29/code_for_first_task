int main () {
    int count [100] [61] = {0};
    int br [100];
    int n;
    int i;
    int j;
    int t;
    int num;
    scanf ("%d", &n);
    {
        i = 0;
        while (n > i) {
            scanf ("%d", &br[i]);
            {
                j = 0;
                while (j < br[i]) {
                    scanf ("%d", &t);
                    count[i][t] = 1;
                    j++;
                };
            }
            i++;
        };
    }
    {
        i = 0;
        while (i < n) {
            num = 0;
            j = 0;
            while (j < 60) {
                num = num + 1;
                j = j + 1;
                if (count[i][num] == 1) {
                    j = j + 3;
                    if (j >= 60)
                        break;
                };
            }
            i++;
            printf ("%d\n", num);
        };
    }
    return 0;
}

