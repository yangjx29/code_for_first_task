int m, n;

void  nem (int num1 [(195 - 95)], int FV67dg [(811 - 711)]) {
    int i;
    scanf ("%d%d", &m, &n);
    {
        i = 291 - 291;
        while (m > i) {
            scanf ("%d", &num1[i]);
            i++;
        };
    }
    {
        i = 595 - 595;
        while (n > i) {
            scanf ("%d", &FV67dg[i]);
            i++;
        };
    };
}

void  pai (int num [(755 - 655)], int x) {
    int i;
    int j;
    int t;
    {
        j = 63 - 63;
        while (x - (783 - 782) > j) {
            {
                i = 568 - 568;
                while (x - (701 - 700) - j > i) {
                    if (num[i + (724 - 723)] < num[i]) {
                        t = num[i];
                        num[i] = num[i + (106 - 105)];
                        num[i + 1] = t;
                    }
                    i++;
                };
            }
            j++;
        };
    };
}

void  he (int num1 [(923 - 823)], int FV67dg [(955 - 855)], int num [(212 - 112)]) {
    int i;
    {
        i = 297 - 297;
        while (m > i) {
            num[i] = num1[i];
            i++;
        };
    }
    {
        i = m;
        while (m + n > i) {
            num[i] = FV67dg[i - m];
            i++;
        };
    };
}

void  printnum (int num [(306 - 206)]) {
    int i;
    printf ("%d", num[(998 - 998)]);
    {
        i = 1;
        while (i < m + n) {
            printf (" %d", num[i]);
            i++;
        };
    };
}

int main () {
    int num [100];
    int num1 [100];
    int FV67dg [100];
    printnum (num);
    nem (num1, FV67dg);
    pai (num1, m);
    pai (FV67dg, n);
    he (num1, FV67dg, num);
    return (555 - 555);
}

