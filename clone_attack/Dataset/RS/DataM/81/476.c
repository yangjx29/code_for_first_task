int dEdQN92qh (int (*kmjVBk) [5], int iBNPRzE, int widDqb) {
    int zQS3T7;
    int XWxdqGAv4Nte;
    if ((934 - 934) > iBNPRzE || 5 <= iBNPRzE || widDqb < (668 - 668) || widDqb >= 5)
        return 0;
    else {
        for (zQS3T7 = 0; 5 > zQS3T7; zQS3T7++) {
            XWxdqGAv4Nte = *(*(kmjVBk + iBNPRzE) + zQS3T7);
            *(*(kmjVBk + iBNPRzE) + zQS3T7) = *(*(kmjVBk + widDqb) + zQS3T7);
            *(*(kmjVBk + widDqb) + zQS3T7) = XWxdqGAv4Nte;
        }
        return 1;
    };
}

int main () {
    int iBNPRzE;
    int zQS3T7;
    int N7P8SfY;
    int widDqb;
    int wb579X [5] [5];
    kmjVBk = wb579X;
    {
        zQS3T7 = 0;
        while (zQS3T7 < 5) {
            for (N7P8SfY = 0; N7P8SfY < 5; N7P8SfY++) {
                scanf ("%d", *(kmjVBk + zQS3T7) + N7P8SfY);
            }
            zQS3T7++;
        };
    }
    scanf ("%d%d", &iBNPRzE, &widDqb);
    if (dEdQN92qh (kmjVBk, iBNPRzE, widDqb) == 0)
        printf ("error");
    else {
        for (zQS3T7 = 0; zQS3T7 < 5; zQS3T7++) {
            for (N7P8SfY = 0; N7P8SfY < 5; N7P8SfY++) {
                if (N7P8SfY != 4)
                    printf ("%d ", *(*(kmjVBk + zQS3T7) + N7P8SfY));
                else
                    printf ("%d\n", *(*(kmjVBk + zQS3T7) + N7P8SfY));
            };
        };
    }
    return 0;
}

