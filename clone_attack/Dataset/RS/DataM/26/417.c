int main () {
    char HbWv2HQxosL [101];
    int uBcgAwZM;
    int FfpJF1;
    gets (HbWv2HQxosL);
    puts (HbWv2HQxosL);
    {
        uBcgAwZM = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (HbWv2HQxosL[uBcgAwZM] != '\0') {
            if ((!(' ' != HbWv2HQxosL[uBcgAwZM])) && (HbWv2HQxosL[uBcgAwZM + 1] == ' ')) {
                {
                    FfpJF1 = uBcgAwZM;
                    while (HbWv2HQxosL[FfpJF1] != '\0') {
                        HbWv2HQxosL[FfpJF1] = HbWv2HQxosL[FfpJF1 +1];
                        FfpJF1 = FfpJF1 +1;
                    };
                }
                uBcgAwZM = uBcgAwZM - 1;
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
            uBcgAwZM++;
        };
    }
    return 0;
}

