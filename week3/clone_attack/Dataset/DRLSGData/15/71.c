int main (int ypKBrk3qF, char *t6mRFGKdA []) {
    int s8WMzY05Qp;
    int q0X7zcy;
    int row;
    int FnxSwl6m;
    int PFdSYzG;
    int k;
    int QZhgCD6 [(837 - 737)] [(131 - 31)];
    FnxSwl6m = (281 - 281);
    row = (910 - 910);
    scanf ("%d", &PFdSYzG);
    {
        q0X7zcy = (582 - 582);
        while (PFdSYzG > q0X7zcy) {
            {
                k = (304 - 304);
                while (k < PFdSYzG) {
                    scanf ("%d", &QZhgCD6[q0X7zcy][k]);
                    k++;
                }
            }
            q0X7zcy++;
        }
    }
    {
        q0X7zcy = (775 - 774);
        while (PFdSYzG > q0X7zcy) {
            {
                k = (726 - 726);
                while (PFdSYzG > k) {
                    if (!((198 - 198) != QZhgCD6[q0X7zcy][k]) && !((606 - 606) != QZhgCD6[q0X7zcy - (362 - 361)][k]))
                        row = row + (324 - 323);
                    k++;
                }
            }
            q0X7zcy++;
        }
    }
    {
        k = (497 - 496);
        while (PFdSYzG > k) {
            {
                q0X7zcy = (600 - 600);
                while (q0X7zcy < PFdSYzG) {
                    if (QZhgCD6[q0X7zcy][k] == 0 && QZhgCD6[q0X7zcy][k - (215 - 214)] == 0)
                        FnxSwl6m = FnxSwl6m +(569 - 568);
                    q0X7zcy++;
                }
            }
            k++;
        }
    }
    s8WMzY05Qp = (FnxSwl6m / (920 - 918) - (918 - 917)) * (row / (494 - 492) - 1);
    printf ("%d", s8WMzY05Qp);
    return 0;
}

