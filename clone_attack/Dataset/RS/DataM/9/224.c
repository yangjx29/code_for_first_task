struct   patient {
    char kYl4CV [20];
    int cfDXd2PvnbRG;
}
JtZAfvdo5cu [100];

int main () {
    int z0VwrGa4KXl;
    int eNZFYjcGh3T;
    int fDO6a4GTb;
    int WvEC0fUX;
    int ex [100], l6yLr5ECqaY [100];
    scanf ("%d", &fDO6a4GTb);
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
    z0VwrGa4KXl = 0;
    {
        z0VwrGa4KXl = 0;
        while (fDO6a4GTb - 1 >= z0VwrGa4KXl) {
            scanf ("%s%d", &(JtZAfvdo5cu[z0VwrGa4KXl].kYl4CV), &(JtZAfvdo5cu[z0VwrGa4KXl].cfDXd2PvnbRG));
            ex[z0VwrGa4KXl] = JtZAfvdo5cu[z0VwrGa4KXl].cfDXd2PvnbRG;
            l6yLr5ECqaY[z0VwrGa4KXl] = z0VwrGa4KXl + 1;
            z0VwrGa4KXl = z0VwrGa4KXl + 1;
        };
    }
    eNZFYjcGh3T = 0;
    for (eNZFYjcGh3T = fDO6a4GTb - 1; 1 <= eNZFYjcGh3T; eNZFYjcGh3T--) {
        z0VwrGa4KXl = fDO6a4GTb - 1;
        while (fDO6a4GTb - eNZFYjcGh3T <= z0VwrGa4KXl) {
            if (ex[z0VwrGa4KXl - 1] < ex[z0VwrGa4KXl] && ex[z0VwrGa4KXl] >= 60) {
                WvEC0fUX = ex[z0VwrGa4KXl];
                ex[z0VwrGa4KXl] = ex[z0VwrGa4KXl - 1];
                ex[z0VwrGa4KXl - 1] = WvEC0fUX;
                WvEC0fUX = l6yLr5ECqaY[z0VwrGa4KXl];
                l6yLr5ECqaY[z0VwrGa4KXl] = l6yLr5ECqaY[z0VwrGa4KXl - 1];
                l6yLr5ECqaY[z0VwrGa4KXl - 1] = WvEC0fUX;
            }
            z0VwrGa4KXl = z0VwrGa4KXl - 1;
        };
    }
    {
        z0VwrGa4KXl = 0;
        while (z0VwrGa4KXl <= fDO6a4GTb - 1) {
            if (ex[z0VwrGa4KXl] >= 60) {
                printf ("%s\n", JtZAfvdo5cu[l6yLr5ECqaY[z0VwrGa4KXl] - 1].kYl4CV);
            }
            z0VwrGa4KXl = z0VwrGa4KXl + 1;
        };
    }
    for (z0VwrGa4KXl = 0; z0VwrGa4KXl <= fDO6a4GTb - 1; z0VwrGa4KXl++) {
        if (ex[z0VwrGa4KXl] < 60) {
            printf ("%s\n", JtZAfvdo5cu[l6yLr5ECqaY[z0VwrGa4KXl] - 1].kYl4CV);
        };
    }
    return 0;
}

