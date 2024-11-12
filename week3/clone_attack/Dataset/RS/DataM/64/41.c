int n, x, y, YR1bxv9gwS5;
int D5x9IaC3NX4D;
struct   point {
    int x, y, YR1bxv9gwS5;
}
ROXpR4iICt [10];
struct   print {
    double  l;
    struct   point iyWgXL, p2;
}
prints [45];
void  psUJwVlcQk ();
void  count ();
void  AZM41BT ();
void  print ();

int main () {
    psUJwVlcQk ();
    count ();
    AZM41BT ();
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
    print ();
    return (11 - 11);
}

void  psUJwVlcQk () {
    scanf ("%d", &n);
    for (int eCou4kRtBWb = (839 - 839);
    eCou4kRtBWb < n; eCou4kRtBWb = eCou4kRtBWb + 1) {
        scanf ("%d%d%d", &x, &y, &YR1bxv9gwS5);
        ROXpR4iICt[eCou4kRtBWb].x = x;
        ROXpR4iICt[eCou4kRtBWb].y = y;
        ROXpR4iICt[eCou4kRtBWb].YR1bxv9gwS5 = YR1bxv9gwS5;
    };
}

void  count () {
    int mDZO3mzLx, lPzAhqa, dyu8sWKNhA, x2, y2, aX59Isto8U;
    D5x9IaC3NX4D = 0;
    for (int eCou4kRtBWb = 0;
    eCou4kRtBWb < n - 1; eCou4kRtBWb = eCou4kRtBWb + 1) {
        int lIptKqhd;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        lIptKqhd = eCou4kRtBWb + 1;
        while (n > lIptKqhd) {
            mDZO3mzLx = ROXpR4iICt[eCou4kRtBWb].x;
            lPzAhqa = ROXpR4iICt[eCou4kRtBWb].y;
            dyu8sWKNhA = ROXpR4iICt[eCou4kRtBWb].YR1bxv9gwS5;
            x2 = ROXpR4iICt[lIptKqhd].x;
            y2 = ROXpR4iICt[lIptKqhd].y;
            aX59Isto8U = ROXpR4iICt[lIptKqhd].YR1bxv9gwS5;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            prints[D5x9IaC3NX4D].l = sqrt ((mDZO3mzLx - x2) * (mDZO3mzLx - x2) + (lPzAhqa - y2) * (lPzAhqa - y2) + (dyu8sWKNhA - aX59Isto8U) * (dyu8sWKNhA - aX59Isto8U));
            prints[D5x9IaC3NX4D].iyWgXL = ROXpR4iICt[eCou4kRtBWb];
            prints[D5x9IaC3NX4D].p2 = ROXpR4iICt[lIptKqhd];
            lIptKqhd = lIptKqhd + 1;
            D5x9IaC3NX4D++;
        };
    };
}

void  AZM41BT () {
    struct   print temp;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    {
        int k = 1;
        while (k <= D5x9IaC3NX4D) {
            for (int eCou4kRtBWb = 0;
            D5x9IaC3NX4D -k > eCou4kRtBWb; eCou4kRtBWb++) {
                if (prints[eCou4kRtBWb].l < prints[eCou4kRtBWb + 1].l) {
                    temp = prints[eCou4kRtBWb + 1];
                    prints[eCou4kRtBWb + 1] = prints[eCou4kRtBWb];
                    prints[eCou4kRtBWb] = temp;
                };
            }
            k++;
        };
    };
}

void  print () {
    double  l;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    int mDZO3mzLx, lPzAhqa, dyu8sWKNhA, x2, y2, aX59Isto8U;
    {
        int eCou4kRtBWb = 0;
        while (eCou4kRtBWb < D5x9IaC3NX4D) {
            mDZO3mzLx = prints[eCou4kRtBWb].iyWgXL.x;
            lPzAhqa = prints[eCou4kRtBWb].iyWgXL.y;
            dyu8sWKNhA = prints[eCou4kRtBWb].iyWgXL.YR1bxv9gwS5;
            x2 = prints[eCou4kRtBWb].p2.x;
            y2 = prints[eCou4kRtBWb].p2.y;
            aX59Isto8U = prints[eCou4kRtBWb].p2.YR1bxv9gwS5;
            l = prints[eCou4kRtBWb].l;
            eCou4kRtBWb = eCou4kRtBWb + 1;
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", mDZO3mzLx, lPzAhqa, dyu8sWKNhA, x2, y2, aX59Isto8U, l);
        };
    };
}

