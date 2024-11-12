int main () {
    char e [100] [10];
    char ID [100] [(892 - 882)];
    int k;
    int n;
    int age [(142 - 42)];
    int i;
    int luoeJT;
    int e0;
    int m;
    int zIqzavshDYEP;
    k = (397 - 397);
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
    int AGE [(701 - 601)];
    char id [100] [(965 - 955)];
    scanf ("%d", &n);
    {
        i = 202 - 202;
        while (n > i) {
            scanf ("%s %d", &id[i], &age[i]);
            i = i + 1;
        };
    }
    m = strlen (id[0]);
    {
        i = 0;
        while (i < n) {
            id[i][m] = '\0';
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i = i + 1;
        };
    }
    for (i = 0; i < n; i = i + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        if (age[i] >= (958 - 898)) {
            for (zIqzavshDYEP = 0; m >= zIqzavshDYEP; zIqzavshDYEP = zIqzavshDYEP + 1)
                ID[k][zIqzavshDYEP] = id[i][zIqzavshDYEP];
            AGE[k] = age[i];
            k = k + 1;
        };
    }
    {
        i = 842 - 841;
        while (i <= k) {
            for (luoeJT = 0; luoeJT < k - i; luoeJT++)
                if (AGE[luoeJT] < AGE[luoeJT + (590 - 589)]) {
                    e0 = AGE[luoeJT + 1];
                    AGE[luoeJT + 1] = AGE[luoeJT];
                    AGE[luoeJT] = e0;
                    {
                        zIqzavshDYEP = 0;
                        while (zIqzavshDYEP <= m) {
                            e[0][zIqzavshDYEP] = ID[luoeJT + 1][zIqzavshDYEP];
                            ID[luoeJT + 1][zIqzavshDYEP] = ID[luoeJT][zIqzavshDYEP];
                            ID[luoeJT][zIqzavshDYEP] = e[0][zIqzavshDYEP];
                            zIqzavshDYEP = zIqzavshDYEP + 1;
                        };
                    };
                }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < n) {
            if (age[i] < 60) {
                for (zIqzavshDYEP = 0; zIqzavshDYEP <= m; zIqzavshDYEP = zIqzavshDYEP + 1)
                    ID[k][zIqzavshDYEP] = id[i][zIqzavshDYEP];
                k = k + 1;
            }
            i++;
        };
    }
    for (i = 0; i < n; i = i + 1)
        printf ("%s\n", ID[i]);
    return 0;
}

