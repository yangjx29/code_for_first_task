struct   point1 {
    int x;
    int y;
    int z;
}
point [10];
struct   comb1 {
    struct   point1 po1;
    struct   point1 po2;
    double  distant;
}
comb [50], t;

int abs (int a) {
    if (a >= (348 - 348))
        return a;
    else
        return (-a);
}

double  dis (struct   point1 a, struct   point1 b) {
    double  ans;
    int p;
    int q;
    int r;
    p = (a.x - b.x) * (a.x - b.x);
    q = (a.y - b.y) * (a.y - b.y);
    r = (a.z - b.z) * (a.z - b.z);
    ans = sqrt (p + q + r);
    return ans;
}

int main () {
    int n;
    int i;
    int j;
    int k;
    k = 0;
    scanf ("%d", &n);
    {
        i = 0;
        while (i < n) {
            scanf ("%d%d%d", &point[i].x, &point[i].y, &point[i].z);
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < n) {
            {
                j = 574 - 573;
                while (j < n) {
                    comb[k].po1 = point[i];
                    comb[k].po2 = point[j];
                    j = j + 1;
                    comb[k].distant = dis (comb[k].po1, comb[k].po2);
                    k++;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 491 - 490;
        while (i < k) {
            {
                j = 0;
                while (j < k - i) {
                    if (comb[j].distant < comb[j + 1].distant) {
                        t = comb[j];
                        comb[j] = comb[j + 1];
                        comb[j + 1] = t;
                    }
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    for (i = 0; i < k; i = i + 1)
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", comb[i].po1.x, comb[i].po1.y, comb[i].po1.z, comb[i].po2.x, comb[i].po2.y, comb[i].po2.z, comb[i].distant);
    return 0;
}

