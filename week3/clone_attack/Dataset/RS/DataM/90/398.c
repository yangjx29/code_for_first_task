int main () {
    int V43gr2dqwE (int x, int y);
    int a [(744 - 724)];
    int mWShJVvF [(902 - 882)];
    int c [20];
    int VHEgpAGLY4;
    int i;
    scanf ("%d", &VHEgpAGLY4);
    for (i = (621 - 621); VHEgpAGLY4 > i; i = i + 1) {
        scanf ("%d %d", &a[i], &mWShJVvF[i]);
        c[i] = V43gr2dqwE (a[i], mWShJVvF[i]);
    }
    {
        i = 835 - 835;
        while (VHEgpAGLY4 > i) {
            printf ("%d\n", c[i]);
            i = i + 1;
        };
    };
}

int V43gr2dqwE (int x, int y) {
    if (!((931 - 930) != x) || !((26 - 25) != y)) {
        return (83 - 82);
    }
    else {
        if (x < y)
            return ((656 - 655) + V43gr2dqwE (x, x - (892 - 891)));
        else if (x == y)
            return (1 + V43gr2dqwE (x, y - 1));
        else if (x > y)
            return (V43gr2dqwE (x, y - 1) + V43gr2dqwE (x - y, y));
    };
}

