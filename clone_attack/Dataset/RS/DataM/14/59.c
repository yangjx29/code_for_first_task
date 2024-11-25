struct   stu {
    int okWsP9C;
    int JcRkTdw;
    int math;
}
MS4hg6 [100000];

void  main () {
    int fH1r3As5M;
    int h2;
    int h3;
    int LrlSteg;
    int i;
    int IbKTZv;
    int IO7TDPA0oK;
    int z5NtWu1p;
    int nQ61siIZR;
    fH1r3As5M = 0;
    h2 = 0;
    h3 = 0;
    IO7TDPA0oK = 0;
    scanf ("%d", &LrlSteg);
    {
        i = 0;
        while (i < LrlSteg) {
            scanf ("%d%d%d", &MS4hg6[i].okWsP9C, &MS4hg6[i].JcRkTdw, &MS4hg6[i].math);
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
            i++;
        };
    }
    IbKTZv = 0;
    z5NtWu1p = 0;
    for (i = 0; i < LrlSteg; i = i + 1) {
        if ((MS4hg6[i].JcRkTdw + MS4hg6[i].math) > IbKTZv) {
            z5NtWu1p = IO7TDPA0oK;
            h3 = h2;
            IO7TDPA0oK = IbKTZv;
            h2 = fH1r3As5M;
            IbKTZv = MS4hg6[i].JcRkTdw + MS4hg6[i].math;
            fH1r3As5M = MS4hg6[i].okWsP9C;
        }
        else if (IbKTZv == (MS4hg6[i].JcRkTdw + MS4hg6[i].math) && IbKTZv > IO7TDPA0oK) {
            h3 = h2;
            h2 = MS4hg6[i].okWsP9C;
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
            z5NtWu1p = IO7TDPA0oK;
            IO7TDPA0oK = MS4hg6[i].JcRkTdw + MS4hg6[i].math;
        }
        else if (IbKTZv == (MS4hg6[i].JcRkTdw + MS4hg6[i].math) && IbKTZv == IO7TDPA0oK &&IO7TDPA0oK > z5NtWu1p) {
            z5NtWu1p = MS4hg6[i].JcRkTdw + MS4hg6[i].math;
            h3 = MS4hg6[i].okWsP9C;
        }
        else if (IbKTZv > (MS4hg6[i].JcRkTdw + MS4hg6[i].math) && (MS4hg6[i].JcRkTdw + MS4hg6[i].math) > IO7TDPA0oK) {
            h3 = h2;
            z5NtWu1p = IO7TDPA0oK;
            IO7TDPA0oK = MS4hg6[i].JcRkTdw + MS4hg6[i].math;
            h2 = MS4hg6[i].okWsP9C;
        }
        else if (IO7TDPA0oK > (MS4hg6[i].JcRkTdw + MS4hg6[i].math) && z5NtWu1p < (MS4hg6[i].JcRkTdw + MS4hg6[i].math)) {
            z5NtWu1p = MS4hg6[i].JcRkTdw + MS4hg6[i].math;
            h3 = MS4hg6[i].okWsP9C;
        };
    }
    printf ("%d %d\n%d %d\n%d %d", fH1r3As5M, IbKTZv, h2, IO7TDPA0oK, h3, z5NtWu1p);
}

