int main () {
    int goIlNn3F0z;
    int VqueY2RiZJM [1000];
    int HZ6OhDN1C;
    goIlNn3F0z = 0;
    char CcPCwp9X [1000];
    char FN64Jkldw [1000];
    int noQSH8Et4ZJn;
    cin >> CcPCwp9X;
    noQSH8Et4ZJn = strlen (CcPCwp9X);
    {
        HZ6OhDN1C = 0;
        while (HZ6OhDN1C <= noQSH8Et4ZJn) {
            VqueY2RiZJM[HZ6OhDN1C] = 1;
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
            HZ6OhDN1C++;
        };
    }
    {
        HZ6OhDN1C = 0;
        while (HZ6OhDN1C < noQSH8Et4ZJn) {
            if (CcPCwp9X[HZ6OhDN1C +1] != CcPCwp9X[HZ6OhDN1C] && CcPCwp9X[HZ6OhDN1C +1] != CcPCwp9X[HZ6OhDN1C] + 32 && !(CcPCwp9X[HZ6OhDN1C] - 32 == CcPCwp9X[HZ6OhDN1C +1])) {
                FN64Jkldw[goIlNn3F0z] = CcPCwp9X[HZ6OhDN1C];
                goIlNn3F0z++;
            }
            if (CcPCwp9X[HZ6OhDN1C +1] == CcPCwp9X[HZ6OhDN1C] || CcPCwp9X[HZ6OhDN1C +1] == CcPCwp9X[HZ6OhDN1C] + 32 || CcPCwp9X[HZ6OhDN1C +1] == CcPCwp9X[HZ6OhDN1C] - 32) {
                VqueY2RiZJM[goIlNn3F0z]++;
            }
            HZ6OhDN1C++;
        };
    }
    FN64Jkldw[goIlNn3F0z - 1] = CcPCwp9X[noQSH8Et4ZJn - 1];
    {
        HZ6OhDN1C = 0;
        while (HZ6OhDN1C < goIlNn3F0z) {
            if (FN64Jkldw[HZ6OhDN1C] >= 'A' && FN64Jkldw[HZ6OhDN1C] <= 'Z') {
                cout << "(" << FN64Jkldw[HZ6OhDN1C] << "," << VqueY2RiZJM[HZ6OhDN1C] << ")";
            }
            if (FN64Jkldw[HZ6OhDN1C] >= 'a' && FN64Jkldw[HZ6OhDN1C] <= 'z')
                cout << "(" << (char) (FN64Jkldw[HZ6OhDN1C] - 'a' + 'A') << "," << VqueY2RiZJM[HZ6OhDN1C] << ")";
            HZ6OhDN1C++;
        };
    }
    return 0;
}

