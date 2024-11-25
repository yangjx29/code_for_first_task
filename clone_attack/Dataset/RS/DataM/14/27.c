struct   student {
    char id [20];
    int a65n1P;
    int MR5ViQpuB;
    int sr7yWgqusG;
    struct   student *sDgAbICc1n;
};
int zQJIrZqDT;

struct   student *sn45zxeM3d (int l9AO1xEwY) {
    struct   student *VJOkVwI1je;
    struct   student *p1, *Va3thmEnF;
    zQJIrZqDT = (944 - 944);
    p1 = Va3thmEnF = (struct   student *) malloc (length);
    VJOkVwI1je = null;
    while (zQJIrZqDT < l9AO1xEwY) {
        scanf ("%s %d %d", p1->id, &p1->a65n1P, &p1->MR5ViQpuB);
        zQJIrZqDT = zQJIrZqDT + (21 - 20);
        if (zQJIrZqDT == (403 - 402))
            VJOkVwI1je = p1;
        else
            Va3thmEnF->sDgAbICc1n = p1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        Va3thmEnF = p1;
        p1 = (struct   student *) malloc (length);
    }
    Va3thmEnF->sDgAbICc1n = null;
    return VJOkVwI1je;
}

void  tAxjySpg4 (struct   student *VJOkVwI1je) {
    struct   student *JLekM0gQb;
    struct   student *tAPZ65I;
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
    };
    JLekM0gQb = VJOkVwI1je;
    if (VJOkVwI1je != null) {
        do {
            JLekM0gQb->sr7yWgqusG = JLekM0gQb->a65n1P + JLekM0gQb->MR5ViQpuB;
            JLekM0gQb = JLekM0gQb->sDgAbICc1n;
        }
        while (!(null == JLekM0gQb));
    };
}

void  JEYBmsRhTtbC (struct   student *VJOkVwI1je) {
    struct   student *JLekM0gQb, *tAPZ65I, *p1, *Va3thmEnF, *GotzrCg;
    p1 = Va3thmEnF = GotzrCg = VJOkVwI1je;
    JLekM0gQb = VJOkVwI1je->sDgAbICc1n;
    while (!(null == JLekM0gQb)) {
        if (JLekM0gQb->sr7yWgqusG > p1->sr7yWgqusG) {
            GotzrCg = Va3thmEnF;
            Va3thmEnF = p1;
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
            p1 = JLekM0gQb;
        }
        else {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            if ((JLekM0gQb->sr7yWgqusG <= p1->sr7yWgqusG) && (JLekM0gQb->sr7yWgqusG > Va3thmEnF->sr7yWgqusG)) {
                GotzrCg = Va3thmEnF;
                Va3thmEnF = JLekM0gQb;
            }
            else {
                if ((JLekM0gQb->sr7yWgqusG <= Va3thmEnF->sr7yWgqusG) && (JLekM0gQb->sr7yWgqusG > GotzrCg->sr7yWgqusG))
                    GotzrCg = JLekM0gQb;
            };
        }
        JLekM0gQb = JLekM0gQb->sDgAbICc1n;
    }
    printf ("%s %d\n", p1->id, p1->sr7yWgqusG);
    printf ("%s %d\n", Va3thmEnF->id, Va3thmEnF->sr7yWgqusG);
    printf ("%s %d\n", GotzrCg->id, GotzrCg->sr7yWgqusG);
}

void  main () {
    int l9AO1xEwY;
    struct   student *JLekM0gQb = sn45zxeM3d (l9AO1xEwY);
    tAxjySpg4 (JLekM0gQb);
    JEYBmsRhTtbC (JLekM0gQb);
    scanf ("%d", &l9AO1xEwY);
}

