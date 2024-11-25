struct   student {
    char H7QELraj9 [30];
    int tG4a50J, XPWAGhyV;
    char BNQSj6IALV, hlVvuhi;
    int ZVFbQrmD3UR;
    int Ycl9mABb;
};
int Y0CzbU (struct   student *XkOHSAWqI) {
    int VKpOYzcf;
    VKpOYzcf = 0;
    if (80 < XkOHSAWqI->tG4a50J && 1 <= XkOHSAWqI->ZVFbQrmD3UR)
        VKpOYzcf += 8000;
    if ((245 - 160) < XkOHSAWqI->tG4a50J && 80 < XkOHSAWqI->XPWAGhyV)
        VKpOYzcf += 4000;
    if (XkOHSAWqI->tG4a50J > 90)
        VKpOYzcf += 2000;
    if (XkOHSAWqI->tG4a50J > 85 && !('Y' != XkOHSAWqI->hlVvuhi))
        VKpOYzcf += 1000;
    if (XkOHSAWqI->XPWAGhyV > 80 && XkOHSAWqI->BNQSj6IALV == 'Y')
        VKpOYzcf += 850;
    return VKpOYzcf;
}

int main () {
    char QHVlZKYN5fXg;
    int i;
    struct   student *JlpIKctzgR2d, *ksF0G1k;
    long  int n, nfBWaGMlgHp = 0;
    scanf ("%d", &n);
    JlpIKctzgR2d = (struct   student *) malloc (sizeof (struct   student) * n);
    {
        i = 0;
        while (i < n) {
            scanf ("%s%d%d%c%c%c%c%d", JlpIKctzgR2d[i].H7QELraj9, &(JlpIKctzgR2d[i].tG4a50J), &(JlpIKctzgR2d[i].XPWAGhyV), &QHVlZKYN5fXg, &(JlpIKctzgR2d[i].BNQSj6IALV), &QHVlZKYN5fXg, &(JlpIKctzgR2d[i].hlVvuhi), &(JlpIKctzgR2d[i].ZVFbQrmD3UR));
            JlpIKctzgR2d[i].Ycl9mABb = Y0CzbU (JlpIKctzgR2d +i);
            nfBWaGMlgHp += JlpIKctzgR2d[i].Ycl9mABb;
            i = i + 1;
        }
    }
    ksF0G1k = JlpIKctzgR2d +n - 1;
    {
        i = n - 1;
        while (i > 0) {
            if (ksF0G1k->Ycl9mABb <= JlpIKctzgR2d[i].Ycl9mABb)
                ksF0G1k = JlpIKctzgR2d +i;
            i = i - 1;
        }
    }
    printf ("%s\n%d\n%d\n", ksF0G1k->H7QELraj9, ksF0G1k->Ycl9mABb, nfBWaGMlgHp);
}

