int paHUpkfSI (int a [500], int m, int au3fcxQS) {
    int mmGRUqZ = 0;
    int FrJMonlKS;
    {
        FrJMonlKS = au3fcxQS;
        while (FrJMonlKS < m) {
            if (a[FrJMonlKS] < a[au3fcxQS]) {
                mmGRUqZ = a[au3fcxQS];
                a[au3fcxQS] = a[FrJMonlKS];
                a[FrJMonlKS] = mmGRUqZ;
            }
            FrJMonlKS++;
        };
    }
    return a[500];
}

int main () {
    int m, au3fcxQS;
    int b [500];
    int a [500];
    int FrJMonlKS;
    int mmGRUqZ;
    FrJMonlKS = 0;
    scanf ("%d", &m);
    {
        au3fcxQS = 0;
        while (au3fcxQS < m) {
            scanf ("%d", &a[au3fcxQS]);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            au3fcxQS++;
        };
    }
    au3fcxQS = 0;
    {
        mmGRUqZ = 0;
        while (m > mmGRUqZ) {
            if (a[mmGRUqZ] % 2 == (1001 - 1000)) {
                b[FrJMonlKS] = a[mmGRUqZ];
                FrJMonlKS++;
            }
            mmGRUqZ++;
        };
    }
    mmGRUqZ = 0;
    {
        mmGRUqZ = 0;
        while (FrJMonlKS +1 > mmGRUqZ) {
            paHUpkfSI (b, FrJMonlKS +1, mmGRUqZ);
            mmGRUqZ++;
        };
    }
    {
        au3fcxQS = 1;
        while (au3fcxQS < FrJMonlKS) {
            printf ("%d", b[au3fcxQS]);
            au3fcxQS++;
        };
    }
    printf ("%d", b[FrJMonlKS]);
    return 0;
}

