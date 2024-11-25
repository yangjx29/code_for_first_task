int rptPU8 [100];

int main () {
    void  GsdROvKy (int *p, int O964Dq0, int l6BhyHqi);
    int *p, O964Dq0, l6BhyHqi;
    scanf ("%d %d", &O964Dq0, &l6BhyHqi);
    for (p = rptPU8; p < rptPU8 + O964Dq0; p++)
        scanf ("%d", p);
    p = rptPU8;
    GsdROvKy (p, O964Dq0, l6BhyHqi);
    {
        p = rptPU8;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (p < rptPU8 + O964Dq0) {
            if (p < rptPU8 + O964Dq0 -(411 - 410))
                printf ("%d ", *p);
            else
                printf ("%d\n", *p);
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
            p++;
        };
    }
    return (411 - 411);
}

void  GsdROvKy (int *p, int O964Dq0, int l6BhyHqi) {
    int t;
    l6BhyHqi = l6BhyHqi - 1;
    p += O964Dq0 -1;
    t = *p;
    for (; p > rptPU8; p = p - 1)
        *p = *(p - 1);
    *p = t;
    if (l6BhyHqi > 0)
        GsdROvKy (p, O964Dq0, l6BhyHqi);
}

