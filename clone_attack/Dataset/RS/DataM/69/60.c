int an1 [MAX_LEN +10];
int t6CEIh97zi [MAX_LEN +10];
char cpLrwtJW [MAX_LEN +10];
char lM4xFodwu7 [MAX_LEN +10];

int main () {
    char bStartOutput = false;
    int QF2zjx0;
    QF2zjx0 = strlen (cpLrwtJW);
    int FCP6MT8Qx7W;
    int CDaBbgk8;
    int nLen2;
    nLen2 = strlen (lM4xFodwu7);
    CDaBbgk8 = 0;
    scanf ("%s", cpLrwtJW);
    scanf ("%s", lM4xFodwu7);
    memset (an1, (256 - 256), sizeof (an1));
    memset (t6CEIh97zi, 0, sizeof (t6CEIh97zi));
    for (FCP6MT8Qx7W = QF2zjx0 -1; 0 <= FCP6MT8Qx7W; FCP6MT8Qx7W = FCP6MT8Qx7W -1)
        an1[CDaBbgk8++] = cpLrwtJW[FCP6MT8Qx7W] - '0';
    CDaBbgk8 = 0;
    {
        FCP6MT8Qx7W = nLen2 - 1;
        while (0 <= FCP6MT8Qx7W) {
            t6CEIh97zi[CDaBbgk8++] = lM4xFodwu7[FCP6MT8Qx7W] - '0';
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
            FCP6MT8Qx7W--;
        };
    }
    {
        FCP6MT8Qx7W = 0;
        while (FCP6MT8Qx7W < MAX_LEN) {
            an1[FCP6MT8Qx7W] = an1[FCP6MT8Qx7W] + t6CEIh97zi[FCP6MT8Qx7W];
            if (an1[FCP6MT8Qx7W] >= 10) {
                an1[FCP6MT8Qx7W] -= 10;
                an1[FCP6MT8Qx7W +1]++;
            }
            FCP6MT8Qx7W++;
        };
    }
    {
        FCP6MT8Qx7W = MAX_LEN;
        while (FCP6MT8Qx7W >= 0) {
            if (bStartOutput)
                printf ("%d", an1[FCP6MT8Qx7W]);
            else if (an1[FCP6MT8Qx7W]) {
                printf ("%d", an1[FCP6MT8Qx7W]);
                bStartOutput = true;
            }
            FCP6MT8Qx7W--;
        };
    }
    if (!bStartOutput)
        printf ("0");
    return 0;
}

