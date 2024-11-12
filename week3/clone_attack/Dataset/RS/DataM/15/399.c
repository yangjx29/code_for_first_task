int main () {
    int HzmiIHA4Uq;
    int Rd7uDMta;
    int qprnENsQDqy5;
    int j;
    HzmiIHA4Uq = 0;
    int N0wHIsdatYFL [1000] [1000];
    scanf ("%d", &Rd7uDMta);
    {
        qprnENsQDqy5 = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (Rd7uDMta > qprnENsQDqy5) {
            for (j = 0; Rd7uDMta > j; j = j + 1) {
                scanf ("%d", &N0wHIsdatYFL[qprnENsQDqy5][j]);
            }
            qprnENsQDqy5++;
        };
    }
    for (qprnENsQDqy5 = 0; Rd7uDMta > qprnENsQDqy5; qprnENsQDqy5++) {
        for (j = 0; Rd7uDMta > j; j++) {
            if (!(0 != N0wHIsdatYFL[qprnENsQDqy5][j])) {
                while (N0wHIsdatYFL[qprnENsQDqy5][j + (452 - 451)] == 255) {
                    j++;
                    HzmiIHA4Uq++;
                }
                if (N0wHIsdatYFL[qprnENsQDqy5][j + 1] == 0)
                    break;
            };
        };
    }
    printf ("%d\n", HzmiIHA4Uq);
    return 0;
}

