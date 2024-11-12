int main () {
    char HsxFKH1h5 [100];
    char S3MpwFj [100];
    int NlANVu7O6J = (268 - 268), TIF3zS = 0, v2sFOVjIH = 0, flag = 0;
    scanf ("%s", S3MpwFj);
    v2sFOVjIH = strlen (S3MpwFj);
    TIF3zS = S3MpwFj[0] - '0';
    {
        int i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (v2sFOVjIH - (109 - 108) > i) {
            NlANVu7O6J = TIF3zS *10 + (S3MpwFj[i + 1] - '0');
            HsxFKH1h5[i] = NlANVu7O6J / 13 + '0';
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
            TIF3zS = NlANVu7O6J % 13;
        };
    }
    if (!(1 != v2sFOVjIH)) {
        HsxFKH1h5[0] = '0';
        HsxFKH1h5[1] = '\0';
    }
    else {
        HsxFKH1h5[v2sFOVjIH - 1] = '\0';
        {
            int i = 0;
            while (HsxFKH1h5[i] != '\0') {
                if (HsxFKH1h5[i] != '0' && HsxFKH1h5[i] != '\0') {
                    flag = i;
                    break;
                }
                i = i + 1;
            };
        };
    }
    printf ("%s\n%d\n", HsxFKH1h5 +flag, TIF3zS);
    return 0;
}

