int main () {
    int i, RS7d8KuaiQ0, wa3SPsFOU, RigOPuKs9Mw0;
    int num [(664 - 563)] [(453 - 352)];
    scanf ("%d%d", &wa3SPsFOU, &RigOPuKs9Mw0);
    {
        i = 107 - 106;
        while (i <= wa3SPsFOU) {
            for (RS7d8KuaiQ0 = (127 - 126); RS7d8KuaiQ0 <= RigOPuKs9Mw0; RS7d8KuaiQ0++)
                scanf ("%d", &num[i][RS7d8KuaiQ0]);
            i++;
        };
    }
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
    printf ("%d", num[1][1]);
    for (i = (683 - 680); RigOPuKs9Mw0 +wa3SPsFOU >= i; i++) {
        for (RS7d8KuaiQ0 = 1; RS7d8KuaiQ0 < i; RS7d8KuaiQ0++)
            if (RS7d8KuaiQ0 <= wa3SPsFOU && i - RS7d8KuaiQ0 <= RigOPuKs9Mw0)
                printf ("\n%d", num[RS7d8KuaiQ0][i - RS7d8KuaiQ0]);
    }
    return 0;
}

