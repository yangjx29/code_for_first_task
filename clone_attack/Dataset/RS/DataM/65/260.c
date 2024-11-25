int main () {
    int a;
    int MO6f1Ey;
    int n;
    int x [200];
    int BCboYRI8l5XB [200];
    a = (914 - 914);
    MO6f1Ey = 0;
    scanf ("%d", &n);
    for (int tOx7nrATKSh = 0;
    tOx7nrATKSh < n; tOx7nrATKSh++) {
        scanf ("%d%d", &(x[tOx7nrATKSh]), &(BCboYRI8l5XB[tOx7nrATKSh]));
        if (!(1 != BCboYRI8l5XB[tOx7nrATKSh] - x[tOx7nrATKSh]) || x[tOx7nrATKSh] - BCboYRI8l5XB[tOx7nrATKSh] == 2) {
            a++;
        }
        else {
            if (x[tOx7nrATKSh] - BCboYRI8l5XB[tOx7nrATKSh] == 1 || !(2 != BCboYRI8l5XB[tOx7nrATKSh] - x[tOx7nrATKSh])) {
                MO6f1Ey++;
            }
            else if (x[tOx7nrATKSh] == BCboYRI8l5XB[tOx7nrATKSh]) {
                continue;
            };
        };
    }
    if (a == MO6f1Ey) {
    }
    else if (a > MO6f1Ey) {
    }
    else if (a < MO6f1Ey) {
    }
    return 0;
}

