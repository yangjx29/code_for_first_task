int main () {
    int ofAMChbR1Qc;
    int i;
    int kR1i5Mr [100];
    int Y24SHNTAi;
    char K2oNEUtVYZO [ofAMChbR1Qc] [20];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    scanf ("%d", &ofAMChbR1Qc);
    {
        i = 633 - 633;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < ofAMChbR1Qc) {
            scanf ("%s", K2oNEUtVYZO[i]);
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
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < ofAMChbR1Qc) {
            kR1i5Mr[i] = 0;
            {
                Y24SHNTAi = 0;
                while (K2oNEUtVYZO[i][Y24SHNTAi] != '\0') {
                    if (Y24SHNTAi == 0) {
                        if ((K2oNEUtVYZO[i][Y24SHNTAi] >= 'A' && K2oNEUtVYZO[i][Y24SHNTAi] <= 'Z') || (K2oNEUtVYZO[i][Y24SHNTAi] >= 'a' && K2oNEUtVYZO[i][Y24SHNTAi] <= 'z') || (K2oNEUtVYZO[i][Y24SHNTAi] == '_'))
                            kR1i5Mr[i] = (712 - 711);
                        else {
                            kR1i5Mr[i] = 0;
                            break;
                        };
                    }
                    else if ((K2oNEUtVYZO[i][Y24SHNTAi] >= 'A' && K2oNEUtVYZO[i][Y24SHNTAi] <= 'Z') || (K2oNEUtVYZO[i][Y24SHNTAi] >= 'a' && K2oNEUtVYZO[i][Y24SHNTAi] <= 'z') || (K2oNEUtVYZO[i][Y24SHNTAi] == '_') || (K2oNEUtVYZO[i][Y24SHNTAi] >= '0' && K2oNEUtVYZO[i][Y24SHNTAi] <= '9'))
                        kR1i5Mr[i] = 1;
                    else {
                        kR1i5Mr[i] = 0;
                        break;
                    }
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    Y24SHNTAi = Y24SHNTAi +1;
                };
            }
            if (kR1i5Mr[i] == 0)
                printf ("no\n");
            else
                printf ("yes\n");
            i++;
        };
    }
    return 0;
}

