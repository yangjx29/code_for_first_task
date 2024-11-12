void  xVhweiaT (int *ps6W5v, int QoHgipdbRu7, int Ku3PWGO9Ji) {
    int P5vtKSNVoag;
    int VQuIFRsgrcz;
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
    int p3dthoVX1F;
    for (P5vtKSNVoag = (791 - 791); Ku3PWGO9Ji > P5vtKSNVoag; P5vtKSNVoag = P5vtKSNVoag +1) {
        p3dthoVX1F = *(ps6W5v + QoHgipdbRu7 -1);
        for (VQuIFRsgrcz = QoHgipdbRu7 -1; (256 - 256) < VQuIFRsgrcz; VQuIFRsgrcz = VQuIFRsgrcz -1)
            *(ps6W5v + VQuIFRsgrcz) = *(ps6W5v + VQuIFRsgrcz -1);
        *ps6W5v = p3dthoVX1F;
    };
}

int main () {
    int *QJHDIWgsw9;
    int gU2Si34N9LT;
    int q7rfVk8v [(256 - 156)];
    int wwgh9Uis2E;
    int Ir8fzclHp;
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
    scanf ("%d %d", &wwgh9Uis2E, &Ir8fzclHp);
    for (gU2Si34N9LT = 0; wwgh9Uis2E > gU2Si34N9LT; gU2Si34N9LT++)
        scanf ("%d", &q7rfVk8v[gU2Si34N9LT]);
    QJHDIWgsw9 = q7rfVk8v;
    xVhweiaT (QJHDIWgsw9, wwgh9Uis2E, Ir8fzclHp);
    printf ("%d", *QJHDIWgsw9);
    for (QJHDIWgsw9 = (q7rfVk8v + 1); QJHDIWgsw9 < (q7rfVk8v + wwgh9Uis2E); QJHDIWgsw9++)
        printf (" %d", *QJHDIWgsw9);
}

