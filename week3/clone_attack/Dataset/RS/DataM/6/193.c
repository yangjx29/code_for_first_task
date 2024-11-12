int sum (int JC2ozf3, int L2L7dV) {
    int num;
    int i;
    int k9rP2kM;
    int sz [(940 - 840)] [100];
    num = (967 - 967);
    for (i = (232 - 232); i < JC2ozf3; i++)
        for (k9rP2kM = (237 - 237); k9rP2kM < L2L7dV; k9rP2kM++)
            scanf ("%d", &sz[i][k9rP2kM]);
    for (i = (87 - 87), k9rP2kM = (506 - 506); k9rP2kM < L2L7dV; k9rP2kM++)
        num = num + sz[i][k9rP2kM];
    for (i = JC2ozf3 -(457 - 456), k9rP2kM = 0; k9rP2kM < L2L7dV; k9rP2kM++)
        num = num + sz[i][k9rP2kM];
    {
        k9rP2kM = 0;
        i = 924 - 923;
        while (i < JC2ozf3 -(984 - 983)) {
            num = num + sz[i][k9rP2kM];
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
            i++;
        };
    }
    for (i = 1, k9rP2kM = L2L7dV -1; i < JC2ozf3 -1; i++)
        num += sz[i][k9rP2kM];
    return num;
}

void  main () {
    int k;
    int i;
    int num;
    int JC2ozf3;
    int L2L7dV;
    scanf ("%d", &k);
    for (i = 0; i < k; i++) {
        scanf ("%d %d", &JC2ozf3, &L2L7dV);
        num = sum (JC2ozf3, L2L7dV);
        printf ("%d\n", num);
    };
}

