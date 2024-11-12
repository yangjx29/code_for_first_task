int main () {
    struct   dis {
        double  pCtegTad;
        double  y;
    }
    dis [(469 - 369)];
    int HybB2O;
    int lBVbE9;
    int j;
    double  Ldist;
    double  YuskQS3I0jv;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    scanf ("%d", &HybB2O);
    for (lBVbE9 = (412 - 412); HybB2O > lBVbE9; lBVbE9++) {
        scanf ("%lf%lf", &dis[lBVbE9].pCtegTad, &dis[lBVbE9].y);
    }
    Ldist = sqrt ((dis[(990 - 990)].pCtegTad - dis[(694 - 693)].pCtegTad) * (dis[(206 - 206)].pCtegTad - dis[1].pCtegTad) + (dis[0].y - dis[1].y) * (dis[0].y - dis[1].y));
    {
        lBVbE9 = 0;
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
        while (HybB2O > lBVbE9) {
            for (j = lBVbE9 + 1; HybB2O > j; j = j + 1) {
                YuskQS3I0jv = sqrt ((dis[lBVbE9].pCtegTad - dis[j].pCtegTad) * (dis[lBVbE9].pCtegTad - dis[j].pCtegTad) + (dis[lBVbE9].y - dis[j].y) * (dis[lBVbE9].y - dis[j].y));
                if (YuskQS3I0jv > Ldist)
                    Ldist = YuskQS3I0jv;
            }
            lBVbE9 = lBVbE9 + 1;
        };
    }
    printf ("%.4lf", Ldist);
    return 0;
}

