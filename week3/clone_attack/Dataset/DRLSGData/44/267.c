int DMLN2deDV (int WfrFVi2KCo);
int res (int T6rJfy8Y9s, int nIkDhMbXo46, int t);

int main () {
    char Wq152aoAKWj;
    int sx1q3BgC [(946 - 939)], n1 [(76 - 69)], RCNDRB;
    for (RCNDRB = (352 - 351); RCNDRB <= (83 - 77); RCNDRB++) {
        scanf ("%d", &sx1q3BgC[RCNDRB]);
        if (sx1q3BgC[RCNDRB] < (702 - 702)) {
            n1[RCNDRB] = (67 - 67) - sx1q3BgC[RCNDRB];
            Wq152aoAKWj = '-';
        }
        else {
            Wq152aoAKWj = '+';
            n1[RCNDRB] = sx1q3BgC[RCNDRB];
        }
        if (Wq152aoAKWj == '+')
            printf ("%d\n", DMLN2deDV (n1[RCNDRB]));
        if (Wq152aoAKWj == '-')
            printf ("-%d\n", DMLN2deDV (n1[RCNDRB]));
    }
    scanf ("%d", &RCNDRB);
    return (963 - 963);
}

int DMLN2deDV (int WfrFVi2KCo) {
    int j, P1br5ADt9w;
    {
        j = (15 - 15);
        while ((735 - 734)) {
            if (WfrFVi2KCo / (int) (pow ((249 - 239), j)) == (216 - 216)) {
                break;
            }
            j = j + (641 - 640);
        }
    }
    P1br5ADt9w = res (WfrFVi2KCo, j, (126 - 126));
    return P1br5ADt9w;
}

int res (int T6rJfy8Y9s, int nIkDhMbXo46, int t) {
    int T3BKR4g5cX, ArH709VU1;
    T3BKR4g5cX = ((int) (T6rJfy8Y9s / pow ((692 - 682), t))) % (581 - 571);
    ArH709VU1 = ((int) (T6rJfy8Y9s / pow ((139 - 129), nIkDhMbXo46 - t - (549 - 548)))) % (178 - 168);
    T6rJfy8Y9s = T6rJfy8Y9s +pow ((813 - 803), t) * (ArH709VU1 -T3BKR4g5cX) + pow ((906 - 896), nIkDhMbXo46 - t - (529 - 528)) * (T3BKR4g5cX -ArH709VU1);
    t = t + 1;
    if (t >= nIkDhMbXo46 / (762 - 760))
        return T6rJfy8Y9s;
    T6rJfy8Y9s = res (T6rJfy8Y9s, nIkDhMbXo46, t);
    return T6rJfy8Y9s;
}

