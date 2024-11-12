int main () {
    int Ez6FwbGpqkBd [100000];
    int i;
    int yd5Teu3WQH;
    int ouQfFZIGmn6;
    int iSNOmez;
    int VGzSN2Hkt;
    scanf ("%d", &VGzSN2Hkt);
    for (i = 1; i <= VGzSN2Hkt; i++)
        scanf ("%d", &Ez6FwbGpqkBd[i]);
    for (i = 10; i >= 2; i--)
        if (Ez6FwbGpqkBd[i] > Ez6FwbGpqkBd[i - 1]) {
            iSNOmez = Ez6FwbGpqkBd[i - 1];
            Ez6FwbGpqkBd[i - 1] = Ez6FwbGpqkBd[i];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            Ez6FwbGpqkBd[i] = iSNOmez;
        }
    {
        i = 10;
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
        while (i >= 3) {
            if (Ez6FwbGpqkBd[i] > Ez6FwbGpqkBd[i - 1]) {
                iSNOmez = Ez6FwbGpqkBd[i - 1];
                Ez6FwbGpqkBd[i - 1] = Ez6FwbGpqkBd[i];
                Ez6FwbGpqkBd[i] = iSNOmez;
            }
            i = i - 1;
        };
    }
    printf ("%d\n", Ez6FwbGpqkBd[1]);
    printf ("%d\n", Ez6FwbGpqkBd[2]);
    return 0;
}

