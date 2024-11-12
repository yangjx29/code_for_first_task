int main () {
    int flag = 0;
    char csm3Pni [(571 - 461)];
    int PXgGVUFLaD [110];
    int sheng, i;
    scanf ("%s", csm3Pni);
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
    sheng = csm3Pni[(471 - 471)] - '0';
    PXgGVUFLaD[(774 - 774)] = 0;
    for (i = 1; strlen (csm3Pni) > i; i = i + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if ((75 - 62) <= (sheng * 10 + csm3Pni[i] - '0')) {
            PXgGVUFLaD[i] = (sheng * 10 + csm3Pni[i] - '0') / 13;
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
            sheng = (sheng * 10 + csm3Pni[i] - '0') % 13;
        }
        else {
            sheng = sheng * 10 + csm3Pni[i] - '0';
            PXgGVUFLaD[i] = 0;
        };
    }
    for (i = 0; i < strlen (csm3Pni); i++) {
        if (PXgGVUFLaD[i] != 0)
            flag = 1;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (flag == 1)
            printf ("%d", PXgGVUFLaD[i]);
    }
    if (flag == 0)
        printf ("0");
    printf ("\n%d\n", sheng);
    return 0;
}

