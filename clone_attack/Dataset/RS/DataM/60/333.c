int main () {
    int s;
    int flag;
    int m;
    int sushu [10000];
    int i;
    int n;
    int j;
    s = 0;
    flag = 0;
    m = 0;
    {
        i = 2;
        while (10000 > i) {
            flag = 0;
            if (i == 2) {
                sushu[s] = i;
                s = s + 1;
            }
            else {
                {
                    j = 2;
                    while (j < i) {
                        if (i % j == 0) {
                            flag = 1;
                            break;
                        }
                        j = j + 1;
                    };
                }
                if (flag == 0) {
                    sushu[s] = i;
                    s = s + 1;
                };
            }
            i = i + 1;
        };
    }
    scanf ("%d", &n);
    for (i = 0; sushu[i + 1] <= n; i = i + 1) {
        if (sushu[i + 1] - sushu[i] == 2) {
            m = 1;
            printf ("%d %d\n", sushu[i], sushu[i + 1]);
        };
    }
    if (m == 0) {
    }
    return 0;
}

