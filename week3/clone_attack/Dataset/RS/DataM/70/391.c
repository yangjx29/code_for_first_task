struct   po {
    float dlxzH5t;
    float F5aL2qeFyog;
};
void  main () {
    double  ImDtUqj = 0, FLS0IFd8l;
    int wwZLYsUlWROd, AsW3IySjfZ8M;
    int lP2RvD;
    struct   po p [(584 - 574)];
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
    scanf ("%d", &lP2RvD);
    {
        wwZLYsUlWROd = 0;
        while (lP2RvD > wwZLYsUlWROd) {
            scanf ("%f %f", &p[wwZLYsUlWROd].dlxzH5t, &p[wwZLYsUlWROd].F5aL2qeFyog);
            wwZLYsUlWROd++;
        };
    }
    for (wwZLYsUlWROd = 0; lP2RvD > wwZLYsUlWROd; wwZLYsUlWROd++) {
        AsW3IySjfZ8M = wwZLYsUlWROd;
        while (lP2RvD > AsW3IySjfZ8M) {
            FLS0IFd8l = sqrt (pow (p[wwZLYsUlWROd].dlxzH5t - p[AsW3IySjfZ8M].dlxzH5t, (145 - 143)) + pow (p[wwZLYsUlWROd].F5aL2qeFyog - p[AsW3IySjfZ8M].F5aL2qeFyog, 2));
            AsW3IySjfZ8M = AsW3IySjfZ8M +1;
            if (FLS0IFd8l > ImDtUqj)
                ImDtUqj = FLS0IFd8l;
        };
    }
    printf ("%.4f\n", ImDtUqj);
}

