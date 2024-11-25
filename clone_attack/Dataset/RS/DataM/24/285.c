int main () {
    char cen [20];
    int vYlnf0KpmN4;
    int YcP81A7Xd;
    int CVtK1FnYMh;
    int n3Oj5onSmHIy;
    int Trt7eFuAM;
    unsigned  maxlen;
    unsigned  WNTZXUROvm;
    char Sx4bjDCf [(616 - 596)], min [20];
    scanf ("%s", &cen);
    Trt7eFuAM = strlen (cen);
    strcpy (Sx4bjDCf, cen);
    maxlen = WNTZXUROvm = Trt7eFuAM;
    strcpy (min, cen);
    while (getchar () != '\n') {
        scanf ("%s", &cen);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (strlen (cen) > maxlen) {
            strcpy (Sx4bjDCf, cen);
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
            maxlen = strlen (cen);
        }
        if (strlen (cen) < WNTZXUROvm) {
            strcpy (min, cen);
            WNTZXUROvm = strlen (cen);
        };
    }
    printf ("%s\n", Sx4bjDCf);
    printf ("%s\n", min);
}

