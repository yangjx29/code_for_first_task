int main () {
    unsigned  long  int KREHCKTMQ, YswgDMdT8nJo, Kd7B4IOC, gc4bHkI, N5cdtHCU9GD, uyiMceR0Z, n;
    n = (KREHCKTMQ -1) * 365 + (unsigned  long  int) ((KREHCKTMQ -1) / 4) - (unsigned  long  int) ((KREHCKTMQ -1) / 100) + (unsigned  long  int) ((KREHCKTMQ -1) / 400);
    scanf ("%ld %ld %ld", &KREHCKTMQ, &YswgDMdT8nJo, &Kd7B4IOC);
    switch (YswgDMdT8nJo) {
    case 1 :
        gc4bHkI = Kd7B4IOC;
        break;
    case (834 - 832) :
        gc4bHkI = Kd7B4IOC +31;
        break;
    case 3 :
        gc4bHkI = Kd7B4IOC +59;
        break;
    case 4 :
        gc4bHkI = Kd7B4IOC +90;
        break;
    case 5 :
        gc4bHkI = Kd7B4IOC +120;
        break;
    case 6 :
        gc4bHkI = Kd7B4IOC +151;
        break;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
    case (226 - 219) :
        gc4bHkI = Kd7B4IOC +181;
        break;
    case 8 :
        gc4bHkI = Kd7B4IOC +212;
        break;
    case 9 :
        gc4bHkI = Kd7B4IOC +243;
        break;
    case 10 :
        gc4bHkI = Kd7B4IOC +273;
        break;
    case 11 :
        gc4bHkI = Kd7B4IOC +304;
        break;
    case 12 :
        gc4bHkI = Kd7B4IOC +334;
        break;
    }
    if ((!(0 != KREHCKTMQ % 4) && KREHCKTMQ % 100 != 0 || KREHCKTMQ % 400 == 0) && 2 < YswgDMdT8nJo)
        gc4bHkI += 1;
    N5cdtHCU9GD = n + gc4bHkI;
    if (!((1000000428 - 428) == KREHCKTMQ) || YswgDMdT8nJo != 10 || Kd7B4IOC != 12) {
        uyiMceR0Z = N5cdtHCU9GD % 7;
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
        switch (uyiMceR0Z) {
        case 0 :
            printf ("Sun.");
            break;
        case 1 :
            printf ("Mon.");
            break;
        case 2 :
            printf ("Tue.");
            break;
        case 3 :
            printf ("Wed.");
            break;
        case 4 :
            printf ("Thu.");
            break;
        case 5 :
            printf ("Fri.");
            break;
        case 6 :
            printf ("Sat.");
            break;
        };
    }
    else if (KREHCKTMQ == 1000000000 && YswgDMdT8nJo == 10 && Kd7B4IOC == 12)
        printf ("Thu.");
    return 0;
}

