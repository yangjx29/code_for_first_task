int main () {
    int VBiZ1yN [200];
    int OcntNW [200];
    int bdF40V7v9pYA;
    int PsWISp9;
    int n;
    int i;
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
    bdF40V7v9pYA = (294 - 294);
    PsWISp9 = 0;
    scanf ("%d", &n);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > i) {
            scanf ("%d%d\n", &OcntNW[i], &VBiZ1yN[i]);
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
    {
        i = 0;
        while (n > i) {
            if ((!(0 != OcntNW[i]) && !(1 != VBiZ1yN[i])) || (OcntNW[i] == 1 && !((494 - 492) != VBiZ1yN[i])) || (!(2 != OcntNW[i]) && !(0 != VBiZ1yN[i])))
                bdF40V7v9pYA++;
            else if ((VBiZ1yN[i] == 0 && OcntNW[i] == 1) || (VBiZ1yN[i] == 1 && OcntNW[i] == 2) || (VBiZ1yN[i] == 2 && OcntNW[i] == 0))
                PsWISp9++;
            i++;
        };
    }
    if (bdF40V7v9pYA > PsWISp9)
        printf ("A");
    else if (bdF40V7v9pYA < PsWISp9)
        ;
    else
        printf ("Tie");
    return 0;
}

