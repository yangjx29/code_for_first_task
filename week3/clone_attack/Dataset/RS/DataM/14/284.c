int main (int BdYStv, char *argv []) {
    int GkA3lF;
    long  PB4KpYhza;
    int sum [100000];
    int max;
    int DPjWUOVdx;
    int third;
    max = 0;
    DPjWUOVdx = 0;
    third = 0;
    int a;
    int b;
    int c;
    a = 0;
    b = 0;
    c = 0;
    struct   student {
        int id;
        int chi;
        int math;
    };
    struct   student wangchong [100000];
    scanf ("%d", &PB4KpYhza);
    for (GkA3lF = 0; GkA3lF < PB4KpYhza; GkA3lF++) {
        scanf ("%d%d%d", &wangchong[GkA3lF].id, &wangchong[GkA3lF].chi, &wangchong[GkA3lF].math);
        sum[GkA3lF] = wangchong[GkA3lF].chi + wangchong[GkA3lF].math;
        if (sum[GkA3lF] > third) {
            if (sum[GkA3lF] <= DPjWUOVdx) {
                third = sum[GkA3lF];
                c = GkA3lF +1;
            }
            else {
                if (sum[GkA3lF] <= max) {
                    third = DPjWUOVdx;
                    DPjWUOVdx = sum[GkA3lF];
                    c = b;
                    b = GkA3lF +1;
                }
                else {
                    third = DPjWUOVdx;
                    DPjWUOVdx = max;
                    max = sum[GkA3lF];
                    c = b;
                    b = a;
                    a = GkA3lF +1;
                };
            };
        };
    }
    printf ("%d %d\n%d %d\n%d %d\n", a, max, b, DPjWUOVdx, c, third);
    return 0;
}

