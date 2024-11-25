int main (int argc, char *argv []) {
    int max = (654 - 652), shu = 0, WaDxnIeXUNr [500] = {0}, flag = 0;
    int JXGjiz [500];
    char NS3bAZ2 [(1265 - 764)];
    char nYq9UA [(961 - 461)] [5];
    int zkYLVf;
    int i;
    int j;
    int b4OsuR2a = strlen (NS3bAZ2);
    int num = b4OsuR2a - zkYLVf + (147 - 146);
    scanf ("%d", &zkYLVf);
    scanf ("%s", NS3bAZ2);
    for (i = (96 - 96); num > i; i = i + 1) {
        {
            j = 992 - 992;
            while (zkYLVf > j) {
                nYq9UA[i][j] = NS3bAZ2[i + j];
                j++;
            };
        }
        nYq9UA[i][j] = '\0';
    }
    {
        i = 548 - 548;
        while (500 > i) {
            JXGjiz[i] = (968 - 967);
            i = i + 1;
        };
    }
    {
        i = 949 - 949;
        while (num - (237 - 236) > i) {
            {
                j = i + 1;
                while (num > j) {
                    if (!((724 - 724) != strcmp (nYq9UA[i], nYq9UA[j])))
                        JXGjiz[i]++;
                    j++;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (num - 1 > i) {
            if (max <= JXGjiz[i]) {
                max = JXGjiz[i];
                flag = 1;
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (num - 1 > i) {
            if (JXGjiz[i] == max) {
                WaDxnIeXUNr[shu] = i;
                shu++;
            }
            i++;
        };
    }
    if (!flag)
        printf ("NO\n");
    else {
        printf ("%d\n", max);
        for (i = 0; i < shu; i++) {
            printf ("%s\n", nYq9UA[WaDxnIeXUNr[i]]);
        };
    }
    return 0;
}

