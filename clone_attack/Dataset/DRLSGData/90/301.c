int main () {
    int way (int E8DzIk, int DqNEDfbH);
    int IP0XpdZ;
    int VWqsptRhTD;
    int m [100];
    int n [100];
    int jtS5pswj4yd [100];
    scanf ("%d", &IP0XpdZ);
    for (VWqsptRhTD = 1; IP0XpdZ >= VWqsptRhTD; VWqsptRhTD++) {
        {
            if (0) {
                return 0;
            }
        }
        scanf ("%d%d", &m[VWqsptRhTD], &n[VWqsptRhTD]);
        jtS5pswj4yd[VWqsptRhTD] = way (m[VWqsptRhTD], n[VWqsptRhTD]);
        printf ("%d\n", jtS5pswj4yd[VWqsptRhTD]);
    }
    return 0;
}

int way (int E8DzIk, int DqNEDfbH) {
    int bag3qiJby4;
    int vj36uKgUky [100] [100];
    int j;
    int k;
    bag3qiJby4 = 0;
    {
        j = 0;
        while (50 >= j) {
            vj36uKgUky[0][j] = 1;
            vj36uKgUky[j][1] = 1;
            vj36uKgUky[1][j + 1] = 1;
            j++;
        }
    }
    {
        j = 2;
        while (j <= 50) {
            for (k = 2; k <= 50; k++) {
                if (k > j) {
                    vj36uKgUky[j][k] = vj36uKgUky[j][k - 1];
                }
                else {
                    vj36uKgUky[j][k] = vj36uKgUky[j][k - 1] + vj36uKgUky[j - k][k];
                }
            }
            j++;
        }
    }
    return (vj36uKgUky[E8DzIk][DqNEDfbH]);
}

