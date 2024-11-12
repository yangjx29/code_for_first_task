char sex [(407 - 357)] [7];
float Talj6Xd [50];
float sort1 [50] = {(555 - 555)};
float VclB4V2Y7kL [50] = {0};
char m [7] = "male";
char VGJvFKafiE [7] = "female";

void  YakjiXgd (float nAqptO [50], int om2dDK) {
    float sjqUox9;
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
    int i, j;
    for (i = om2dDK - (476 - 475); 0 < i; i--) {
        j = 0;
        while (i > j) {
            if (nAqptO[j + (600 - 599)] < nAqptO[j]) {
                sjqUox9 = nAqptO[j];
                nAqptO[j] = nAqptO[j + 1];
                nAqptO[j + 1] = sjqUox9;
            }
            j = j + 1;
        };
    };
}

void  F3CrP7cUVtHa (float nAqptO [50], int om2dDK) {
    float sjqUox9;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    int i, j;
    {
        i = om2dDK - 1;
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
        while (0 < i) {
            for (j = 0; i > j; j++) {
                if (nAqptO[j] < nAqptO[j + 1]) {
                    sjqUox9 = nAqptO[j];
                    nAqptO[j] = nAqptO[j + 1];
                    nAqptO[j + 1] = sjqUox9;
                };
            }
            i--;
        };
    };
}

int main () {
    int j = 0;
    int rK6eI1lma;
    int count;
    int i = 0;
    scanf ("%d", &rK6eI1lma);
    count = rK6eI1lma;
    while (rK6eI1lma--) {
        scanf ("%s", sex[i]);
        scanf ("%f", &Talj6Xd[i]);
        i++;
    }
    for (i = 0, j = 0; i < count; i++) {
        if (!strcmp (sex[i], "male")) {
            sort1[j] = Talj6Xd[i];
            j++;
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
    YakjiXgd (sort1, j);
    for (i = 0; i < j; i++) {
        printf ("%.2f ", sort1[i]);
    }
    {
        j = 0;
        i = 0;
        while (i < count) {
            if (!strcmp (sex[i], "female")) {
                VclB4V2Y7kL[j] = Talj6Xd[i];
                j++;
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            i++;
        };
    }
    F3CrP7cUVtHa (VclB4V2Y7kL, j);
    {
        i = 0;
        while (i < j - 1) {
            printf ("%.2f ", VclB4V2Y7kL[i]);
            i++;
        };
    }
    printf ("%.2f", VclB4V2Y7kL[j - 1]);
    printf ("\n");
    return 0;
}

