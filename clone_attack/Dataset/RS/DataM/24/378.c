int main () {
    int min;
    int dDdNtXh6RLm;
    min = 0;
    dDdNtXh6RLm = 0;
    char sr [1000];
    char dc [50] [20];
    gets (sr);
    int C3G4LzIN2Ea;
    int k;
    int i;
    C3G4LzIN2Ea = 0;
    k = 0;
    int W0SCLrwsq;
    int sz [50];
    W0SCLrwsq = strlen (sr);
    {
        i = 0;
        while (i <= W0SCLrwsq) {
            if (sr[i] != ' ' && sr[i] != '\0') {
                dc[C3G4LzIN2Ea][k] = sr[i];
                k = k + 1;
            }
            else {
                if (!(' ' != sr[i]) || sr[i] == '\0') {
                    dc[C3G4LzIN2Ea][k] = '\0';
                    C3G4LzIN2Ea = C3G4LzIN2Ea +1;
                    k = 0;
                };
            }
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
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < C3G4LzIN2Ea) {
            sz[i] = strlen (dc[i]);
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < C3G4LzIN2Ea) {
            if (sz[i] < sz[min]) {
                min = i;
            }
            if (sz[i] > sz[dDdNtXh6RLm]) {
                dDdNtXh6RLm = i;
            }
            i = i + 1;
        };
    }
    printf ("%s\n", dc[dDdNtXh6RLm]);
    printf ("%s\n", dc[min]);
    return 0;
}

