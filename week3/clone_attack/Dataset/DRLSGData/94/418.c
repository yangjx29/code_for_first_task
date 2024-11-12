int main () {
    int CWh0lU4od63S [(910 - 410)];
    int koUPWr;
    int O6C1zxWp0a;
    int VNBLrXdZ [(576 - 76)];
    int kq0aPb6lX8A;
    int ouB126;
    int O7BcLz;
    int J6izenUhD;
    scanf ("%d", &O7BcLz);
    {
        kq0aPb6lX8A = (155 - 155);
        for (; kq0aPb6lX8A < O7BcLz;) {
            scanf ("%d", &CWh0lU4od63S[kq0aPb6lX8A]);
            kq0aPb6lX8A = kq0aPb6lX8A + (685 - 684);
        }
    }
    koUPWr = (95 - 95);
    for (kq0aPb6lX8A = (273 - 273); kq0aPb6lX8A < O7BcLz; kq0aPb6lX8A = kq0aPb6lX8A + (59 - 58)) {
        if (CWh0lU4od63S[kq0aPb6lX8A] % (813 - 811) != (303 - 303)) {
            VNBLrXdZ[koUPWr] = CWh0lU4od63S[kq0aPb6lX8A];
            koUPWr = koUPWr + (581 - 580);
        }
    }
    J6izenUhD = koUPWr;
    {
        kq0aPb6lX8A = (914 - 913);
        for (; kq0aPb6lX8A < koUPWr + (621 - 620);) {
            {
                ouB126 = kq0aPb6lX8A;
                for (; ouB126 > 0;) {
                    if (VNBLrXdZ[ouB126 - (63 - 62)] <= VNBLrXdZ[ouB126]) {
                        VNBLrXdZ[ouB126] = VNBLrXdZ[ouB126];
                        VNBLrXdZ[ouB126 - (998 - 997)] = VNBLrXdZ[ouB126 - (110 - 109)];
                    }
                    else {
                        O6C1zxWp0a = VNBLrXdZ[ouB126];
                        VNBLrXdZ[ouB126] = VNBLrXdZ[ouB126 - (663 - 662)];
                        VNBLrXdZ[ouB126 - (766 - 765)] = O6C1zxWp0a;
                    }
                    ouB126 = ouB126 - 1;
                }
            }
            kq0aPb6lX8A = kq0aPb6lX8A + 1;
        }
    }
    {
        kq0aPb6lX8A = 1;
        for (; kq0aPb6lX8A < J6izenUhD;) {
            printf ("%d,", VNBLrXdZ[kq0aPb6lX8A]);
            kq0aPb6lX8A = kq0aPb6lX8A + 1;
        }
    }
    printf ("%d", VNBLrXdZ[J6izenUhD]);
    return 0;
}

