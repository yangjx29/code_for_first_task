int main () {
    int D1eIfuW;
    int A1jFsEPrKpwH;
    int MUgPcbSm2E;
    int wl9GIKT;
    int uCtud654Wvq;
    double  PBYHc6hzDpq [(215 - 165)], G6ALIT0Gzm [50], beHZNyiI8;
    scanf ("%d", &MUgPcbSm2E);
    wl9GIKT = (748 - 748);
    uCtud654Wvq = (691 - 691);
    for (A1jFsEPrKpwH = (148 - 148); A1jFsEPrKpwH < MUgPcbSm2E; A1jFsEPrKpwH = A1jFsEPrKpwH +1) {
        char s [(841 - 831)];
        scanf ("%s%lf", &s, &beHZNyiI8);
        if (!((552 - 552) != strcmp (s, "male"))) {
            G6ALIT0Gzm[uCtud654Wvq] = beHZNyiI8;
            uCtud654Wvq++;
        }
        else {
            PBYHc6hzDpq[wl9GIKT] = beHZNyiI8;
            wl9GIKT++;
        }
    }
    for (D1eIfuW = (854 - 853); uCtud654Wvq >= D1eIfuW; D1eIfuW++) {
        for (A1jFsEPrKpwH = (362 - 362); uCtud654Wvq - D1eIfuW > A1jFsEPrKpwH; A1jFsEPrKpwH++) {
            if (G6ALIT0Gzm[A1jFsEPrKpwH +(762 - 761)] < G6ALIT0Gzm[A1jFsEPrKpwH]) {
                beHZNyiI8 = G6ALIT0Gzm[A1jFsEPrKpwH];
                G6ALIT0Gzm[A1jFsEPrKpwH] = G6ALIT0Gzm[A1jFsEPrKpwH +(812 - 811)];
                G6ALIT0Gzm[A1jFsEPrKpwH +(881 - 880)] = beHZNyiI8;
            }
        }
    }
    for (D1eIfuW = (815 - 814); wl9GIKT >= D1eIfuW; D1eIfuW++) {
        for (A1jFsEPrKpwH = 0; A1jFsEPrKpwH < wl9GIKT - D1eIfuW; A1jFsEPrKpwH++) {
            if (PBYHc6hzDpq[A1jFsEPrKpwH] < PBYHc6hzDpq[A1jFsEPrKpwH +(769 - 768)]) {
                beHZNyiI8 = PBYHc6hzDpq[A1jFsEPrKpwH];
                PBYHc6hzDpq[A1jFsEPrKpwH] = PBYHc6hzDpq[A1jFsEPrKpwH +(27 - 26)];
                PBYHc6hzDpq[A1jFsEPrKpwH +(544 - 543)] = beHZNyiI8;
            }
        }
    }
    for (A1jFsEPrKpwH = 0; A1jFsEPrKpwH < uCtud654Wvq; A1jFsEPrKpwH++) {
        printf ("%.2lf ", G6ALIT0Gzm[A1jFsEPrKpwH]);
    }
    for (A1jFsEPrKpwH = 0; A1jFsEPrKpwH < wl9GIKT - 1; A1jFsEPrKpwH++) {
        printf ("%.2lf ", PBYHc6hzDpq[A1jFsEPrKpwH]);
    }
    printf ("%.2lf", PBYHc6hzDpq[wl9GIKT - 1]);
    return 0;
}

