int main () {
    int a [100000] [3];
    int i;
    int j;
    int uVf7dqbRHOs;
    int GDAUZ9oJnzq [100000] [(975 - 973)];
    int F0BMRew;
    int Pwdsz982;
    int k;
    scanf ("%d", &uVf7dqbRHOs);
    for (i = (316 - 316); i < uVf7dqbRHOs; i = i + 1) {
        j = 584 - 584;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (j < 3) {
            scanf ("%d", &a[i][j]);
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
            j++;
        };
    }
    for (i = (784 - 784); i < uVf7dqbRHOs; i++) {
        GDAUZ9oJnzq[i][(156 - 156)] = a[i][0];
        GDAUZ9oJnzq[i][1] = a[i][1] + a[i][2];
    }
    {
        i = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (i < 3) {
            for (k = i + 1; k < uVf7dqbRHOs; k++) {
                if (GDAUZ9oJnzq[i][1] < GDAUZ9oJnzq[k][1]) {
                    F0BMRew = GDAUZ9oJnzq[k][1];
                    GDAUZ9oJnzq[k][1] = GDAUZ9oJnzq[i][1];
                    GDAUZ9oJnzq[i][1] = F0BMRew;
                    Pwdsz982 = GDAUZ9oJnzq[k][0];
                    GDAUZ9oJnzq[k][0] = GDAUZ9oJnzq[i][0];
                    GDAUZ9oJnzq[i][0] = Pwdsz982;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < 3) {
            printf ("%d %d\n", GDAUZ9oJnzq[i][0], GDAUZ9oJnzq[i][1]);
            i = i + 1;
        };
    }
    return 0;
}

