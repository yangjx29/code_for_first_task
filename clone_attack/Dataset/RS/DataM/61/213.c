int LreN3sZRD6OT (int GBiXU6VNq) {
    int HkPSzhBF;
    if (!(1 != GBiXU6VNq) || GBiXU6VNq == 2) {
        HkPSzhBF = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        return HkPSzhBF;
    }
    else {
        HkPSzhBF = LreN3sZRD6OT (GBiXU6VNq -1) + LreN3sZRD6OT (GBiXU6VNq -2);
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
        };
    }
    return HkPSzhBF;
}

main () {
    int eotB1Tv [10000], GBiXU6VNq, h9efhQ1VjO;
    getchar ();
    scanf ("%d", &GBiXU6VNq);
    {
        h9efhQ1VjO = 662 - 662;
        while (h9efhQ1VjO < GBiXU6VNq) {
            scanf ("%d", &eotB1Tv[h9efhQ1VjO]);
            printf ("%d\n", LreN3sZRD6OT (eotB1Tv[h9efhQ1VjO]));
            h9efhQ1VjO++;
        };
    }
    getchar ();
}

