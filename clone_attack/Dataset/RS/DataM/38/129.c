int main () {
    double  HqbV9rmoYGg [(651 - 551)], q1qs3x [100], rKNGe2g8uVd;
    int n;
    int i;
    int Ti7vJ6So;
    int NWN1ClHBKmV2;
    scanf ("%d", &NWN1ClHBKmV2);
    {
        i = 259 - 259;
        while (NWN1ClHBKmV2 > i) {
            scanf ("%d", &n);
            q1qs3x[i] = (492 - 492);
            rKNGe2g8uVd = (607 - 607);
            for (Ti7vJ6So = (153 - 153); Ti7vJ6So < n; Ti7vJ6So = Ti7vJ6So +1) {
                scanf ("%lf", &HqbV9rmoYGg[Ti7vJ6So]);
                rKNGe2g8uVd = rKNGe2g8uVd + HqbV9rmoYGg[Ti7vJ6So];
            }
            rKNGe2g8uVd = rKNGe2g8uVd / n;
            for (Ti7vJ6So = 0; Ti7vJ6So < n; Ti7vJ6So++) {
                q1qs3x[i] = (HqbV9rmoYGg[Ti7vJ6So] - rKNGe2g8uVd) * (HqbV9rmoYGg[Ti7vJ6So] - rKNGe2g8uVd) + q1qs3x[i];
            }
            q1qs3x[i] = sqrt (q1qs3x[i] / n);
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < NWN1ClHBKmV2) {
            printf ("%.5f\n", q1qs3x[i]);
            i = i + 1;
        };
    }
    return 0;
}

