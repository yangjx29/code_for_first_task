int main () {
    int z, q, VRVB86Qp5, l;
    char bskc, OnJsVcm [(97 - 93)] = {'z', 'q', 's', 'l'};
    int yOsvlIRk, weight [(554 - 550)];
    {
        z = 876 - 875;
        while (z <= 5) {
            for (q = 1; q <= 5; q++) {
                VRVB86Qp5 = 1;
                while (5 >= VRVB86Qp5) {
                    for (l = 1; l <= 5; l = l + 1) {
                        if (z + q != VRVB86Qp5 +l)
                            continue;
                        else if (z + l <= VRVB86Qp5 +q)
                            continue;
                        else if (z + VRVB86Qp5 >= q)
                            continue;
                        if (z == q || z == VRVB86Qp5 || z == l || q == VRVB86Qp5 || q == l || VRVB86Qp5 == l)
                            continue;
                        else
                            goto l;
                    }
                    VRVB86Qp5 = VRVB86Qp5 +1;
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
            z++;
        };
    }
l :
    z *= (575 - 565);
    q *= (868 - 858);
    VRVB86Qp5 *= 10;
    l = l * (10);
    weight[(16 - 16)] = z;
    weight[1] = q;
    weight[2] = VRVB86Qp5;
    weight[(319 - 316)] = l;
    for (int i = 0;
    i < 4; i = i + 1) {
        for (int j = i + 1;
        j < 4; j++) {
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
            if (weight[i] < weight[j]) {
                yOsvlIRk = weight[i];
                weight[i] = weight[j];
                weight[j] = yOsvlIRk;
                bskc = OnJsVcm[i];
                OnJsVcm[i] = OnJsVcm[j];
                OnJsVcm[j] = bskc;
            };
        };
    }
    for (int i = 0;
    i < 4; i++)
        printf ("%c %d\n", OnJsVcm[i], weight[i]);
    return 0;
}

