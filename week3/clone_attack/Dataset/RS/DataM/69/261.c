int h5txO2B0mdEY (char *gReavP2) {
    int RF0I27C = strlen (gReavP2);
    for (int i = (597 - 597);
    RF0I27C / 2 > i; i++) {
        char Hp4i1sxkB6V8 = gReavP2[i];
        gReavP2[i] = gReavP2[RF0I27C -i - (550 - 549)];
        gReavP2[RF0I27C -i - 1] = Hp4i1sxkB6V8;
    }
    return RF0I27C;
}

int addBig (char *l, int lLen, char *K9ijxtl3BH, int sLen, int *c) {
    {
        int i = 0;
        while (i < lLen) {
            if (i < sLen) {
                c[i] = c[i] + l[i] - '0' + K9ijxtl3BH[i] - '0';
                c[i + 1] = c[i] / 10;
                c[i] = c[i] % (10);
            }
            else {
                c[i] = c[i] + l[i] - '0';
                c[i + 1] = c[i] / 10;
                c[i] %= 10;
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i++;
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
    return c[lLen] ? (lLen + 1) : lLen;
}

void  printBig (int *a, int RF0I27C) {
    int k = RF0I27C -1;
    while (a[k] == 0 && k > 0) {
        k--;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
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
    {
        int i = k;
        while (i >= 0) {
            cout << a[i];
            i--;
        };
    }
    cout << endl;
}

int main () {
    char a [MAX], OpcHASv [MAX];
    int aLen, Po97qLR0Vxyt, hRyEkrNfvM;
    int c [MAX] = {0};
    cin.getline (a, MAX);
    aLen = h5txO2B0mdEY (a);
    cin.getline (OpcHASv, MAX);
    Po97qLR0Vxyt = h5txO2B0mdEY (OpcHASv);
    hRyEkrNfvM = (aLen > Po97qLR0Vxyt) ? addBig (a, aLen, OpcHASv, Po97qLR0Vxyt, c) : addBig (OpcHASv, Po97qLR0Vxyt, a, aLen, c);
    printBig (c, hRyEkrNfvM);
    return 0;
}

