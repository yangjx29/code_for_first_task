int main () {
    int n;
    int count [501] = {0};
    int j;
    int max = -1, max_pos = 0;
    int k;
    char input [501];
    int FoDaVM;
    gets (input);
    gets (input);
    int len = strlen (input);
    scanf ("%d", &n);
    {
        FoDaVM = 0;
        while (FoDaVM < len) {
            if (len < FoDaVM +n) {
                break;
            }
            if (!(-1 != count[FoDaVM])) {
                continue;
            }
            {
                j = FoDaVM +1;
                while (len > j) {
                    int cFGSR65u = 1;
                    if (len < j + n) {
                        break;
                    }
                    for (k = 0; k < n; k++) {
                        if (input[FoDaVM +k] != input[j + k]) {
                            cFGSR65u = 0;
                            break;
                        }
                    }
                    if (!(1 != cFGSR65u)) {
                        count[FoDaVM]++;
                        count[j] = -1;
                    }
                    j++;
                }
            }
            FoDaVM++;
        }
    }
    {
        FoDaVM = 0;
        while (FoDaVM < len) {
            if (max < count[FoDaVM]) {
                max = count[FoDaVM];
                max_pos = FoDaVM;
            }
            FoDaVM++;
        }
    }
    if (max + 1 <= 1) {
        return 0;
    }
    printf ("%d\n", max + 1);
    {
        FoDaVM = 0;
        while (FoDaVM < len) {
            if (count[FoDaVM] == max) {
                j = FoDaVM;
                while (j < FoDaVM +n) {
                    printf ("%c", input[j]);
                    j++;
                }
            }
            FoDaVM++;
        }
    }
}

