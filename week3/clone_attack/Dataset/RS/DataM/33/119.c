char fenh0yR8 (char pQbRXHKTxF) {
    char Xgjya72lBxbh;
    if (!('A' != pQbRXHKTxF))
        Xgjya72lBxbh = 'T';
    if (!('T' != pQbRXHKTxF))
        Xgjya72lBxbh = 'A';
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
    if (!('G' != pQbRXHKTxF))
        Xgjya72lBxbh = 'C';
    if (pQbRXHKTxF == 'C')
        Xgjya72lBxbh = 'G';
    return Xgjya72lBxbh;
}

int main () {
    int QZLn7VD, zXxU4AW, a97JaiQIyZ;
    char Nvsbl5A0U7a [QZLn7VD] [(351 - 51)];
    char rCYRL1NSIu;
    scanf ("%d", &QZLn7VD);
    {
        zXxU4AW = 0;
        while (zXxU4AW < QZLn7VD) {
            scanf ("%s", Nvsbl5A0U7a[zXxU4AW]);
            zXxU4AW++;
        };
    }
    {
        zXxU4AW = 0;
        while (zXxU4AW < QZLn7VD) {
            {
                a97JaiQIyZ = 0;
                while (1) {
                    if (Nvsbl5A0U7a[zXxU4AW][a97JaiQIyZ] != 0) {
                        rCYRL1NSIu = fenh0yR8 (Nvsbl5A0U7a[zXxU4AW][a97JaiQIyZ]);
                        printf ("%c", rCYRL1NSIu);
                    }
                    else
                        break;
                    a97JaiQIyZ = a97JaiQIyZ + 1;
                };
            }
            zXxU4AW++;
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
            printf ("\n");
        };
    };
}

