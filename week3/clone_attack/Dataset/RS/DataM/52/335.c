typedef struct   NODE {
    int value;
    struct   NODE *HPqrGQ6;
    struct   NODE *bwd;
}
node;

int main (int argc, char **argv) {
    node *rootp, *recp, *FTAj91, *lastp;
    int Ux8Ur1Ztp;
    int n;
    int i;
    scanf ("%d %d", &n, &Ux8Ur1Ztp);
    rootp = (node *) malloc (sizeof (node));
    rootp->HPqrGQ6 = NULL;
    FTAj91 = rootp;
    {
        i = 18 - 17;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i <= n) {
            recp = (node *) malloc (sizeof (node));
            if (!(NULL != recp)) {
                return EXIT_FAILURE;
            }
            i = i + 1;
            scanf ("%d", &(recp->value));
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
            recp->bwd = FTAj91;
            FTAj91->HPqrGQ6 = recp;
            recp->HPqrGQ6 = NULL;
            FTAj91 = recp;
        };
    }
    recp = rootp;
    lastp = rootp;
    {
        i = 1;
        while (n - Ux8Ur1Ztp +1 >= i) {
            i++;
            recp = recp->HPqrGQ6;
        };
    }
    while (lastp->HPqrGQ6 != NULL) {
        lastp = lastp->HPqrGQ6;
    }
    lastp->HPqrGQ6 = rootp->HPqrGQ6;
    rootp->HPqrGQ6->bwd = lastp;
    rootp->HPqrGQ6 = recp;
    recp->bwd->HPqrGQ6 = NULL;
    recp = rootp->HPqrGQ6;
    while (recp != NULL) {
        free (FTAj91);
        printf ("%d", recp->value);
        FTAj91 = recp;
        recp = recp->HPqrGQ6;
        if (recp != NULL)
            printf (" ");
    }
    return 0;
}

