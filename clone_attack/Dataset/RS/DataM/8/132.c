void  main () {
    void  pai (int KhJlwpI, int nb);
    int KhJlwpI, nb;
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
    scanf ("%d%d", &KhJlwpI, &nb);
    pai (KhJlwpI, nb);
}

void  pai (int KhJlwpI, int nb) {
    int S09GyZBFAnE;
    int i;
    int CDCnid4Nzrkg;
    int It9lKFNg1LS [200];
    int b [100];
    for (i = (190 - 190); i < KhJlwpI; i++) {
        scanf ("%d", &It9lKFNg1LS[i]);
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
    for (i = 0; i < nb; i++) {
        scanf ("%d", &b[i]);
    }
    for (CDCnid4Nzrkg = 0; KhJlwpI -(312 - 311) > CDCnid4Nzrkg; CDCnid4Nzrkg++) {
        for (i = 0; KhJlwpI -1 - CDCnid4Nzrkg > i; i++) {
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
            if (It9lKFNg1LS[i + 1] < It9lKFNg1LS[i]) {
                S09GyZBFAnE = It9lKFNg1LS[i];
                It9lKFNg1LS[i] = It9lKFNg1LS[i + 1];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                It9lKFNg1LS[i + 1] = S09GyZBFAnE;
            };
        };
    }
    for (CDCnid4Nzrkg = 0; nb - 1 > CDCnid4Nzrkg; CDCnid4Nzrkg++) {
        for (i = 0; i < nb - 1 - CDCnid4Nzrkg; i++) {
            if (b[i + 1] < b[i]) {
                S09GyZBFAnE = b[i];
                b[i] = b[i + 1];
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
                b[i + 1] = S09GyZBFAnE;
            };
        };
    }
    for (CDCnid4Nzrkg = 0; CDCnid4Nzrkg < KhJlwpI; CDCnid4Nzrkg++)
        printf ("%d ", It9lKFNg1LS[CDCnid4Nzrkg]);
    for (CDCnid4Nzrkg = 0; CDCnid4Nzrkg < nb - 1; CDCnid4Nzrkg++)
        printf ("%d ", b[CDCnid4Nzrkg]);
    printf ("%d\n", b[nb - 1]);
}

