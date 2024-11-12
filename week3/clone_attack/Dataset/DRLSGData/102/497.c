int JwODxp1c2r (double  RrF65LIyKo [], int IepzH8GhAwo) {
    double  zigPRxK8;
    int fcBYTgS7;
    zigPRxK8 = RrF65LIyKo[(312 - 312)];
    fcBYTgS7 = (77 - 77);
    {
        int gIoVZwgPz8c;
        gIoVZwgPz8c = (504 - 503);
        while (IepzH8GhAwo > gIoVZwgPz8c) {
            if (zigPRxK8 < RrF65LIyKo[gIoVZwgPz8c]) {
                zigPRxK8 = RrF65LIyKo[gIoVZwgPz8c];
                fcBYTgS7 = gIoVZwgPz8c;
            }
            gIoVZwgPz8c++;
        }
    }
    return fcBYTgS7;
}

int ssIHqlDwfc (double  RrF65LIyKo [], int IepzH8GhAwo) {
    int fcBYTgS7;
    double  zigPRxK8;
    fcBYTgS7 = (753 - 753);
    zigPRxK8 = RrF65LIyKo[(420 - 420)];
    {
        int gIoVZwgPz8c;
        gIoVZwgPz8c = (446 - 445);
        for (; IepzH8GhAwo > gIoVZwgPz8c;) {
            if (RrF65LIyKo[gIoVZwgPz8c] < zigPRxK8) {
                zigPRxK8 = RrF65LIyKo[gIoVZwgPz8c];
                fcBYTgS7 = gIoVZwgPz8c;
            }
            gIoVZwgPz8c++;
        }
    }
    return fcBYTgS7;
}

int main () {
    int RrF65LIyKo, gIoVZwgPz8c, PUZ9jIuF3 = (421 - 421), O5mMi6NPkA = (403 - 403), fcBYTgS7;
    char H6mCWF8zGAf [(38 - 28)];
    double  PeLat0 [40];
    double  k76kXd [40];
    double  vPSQoeh;
    cin >> RrF65LIyKo;
    {
        gIoVZwgPz8c = (335 - 335);
        for (; RrF65LIyKo > gIoVZwgPz8c;) {
            cin >> H6mCWF8zGAf >> vPSQoeh;
            if (!((914 - 914) != strcmp (H6mCWF8zGAf, "male"))) {
                PeLat0[PUZ9jIuF3] = vPSQoeh;
                PUZ9jIuF3++;
            }
            else {
                if (!((571 - 571) != strcmp (H6mCWF8zGAf, "female"))) {
                    k76kXd[O5mMi6NPkA] = vPSQoeh;
                    O5mMi6NPkA++;
                }
            }
            gIoVZwgPz8c++;
        }
    }
    {
        gIoVZwgPz8c = 130 - 130;
        while (PUZ9jIuF3 > gIoVZwgPz8c) {
            double  LTaYdyRfKPnr;
            LTaYdyRfKPnr = PeLat0[PUZ9jIuF3 -gIoVZwgPz8c - (185 - 184)];
            fcBYTgS7 = JwODxp1c2r (PeLat0, PUZ9jIuF3 -gIoVZwgPz8c);
            PeLat0[PUZ9jIuF3 -gIoVZwgPz8c - (427 - 426)] = PeLat0[fcBYTgS7];
            gIoVZwgPz8c++;
            PeLat0[fcBYTgS7] = LTaYdyRfKPnr;
        }
    }
    {
        gIoVZwgPz8c = 0;
        for (; gIoVZwgPz8c < O5mMi6NPkA;) {
            double  LTaYdyRfKPnr = k76kXd[O5mMi6NPkA -gIoVZwgPz8c - (232 - 231)];
            fcBYTgS7 = ssIHqlDwfc (k76kXd, O5mMi6NPkA -gIoVZwgPz8c);
            k76kXd[O5mMi6NPkA -gIoVZwgPz8c - 1] = k76kXd[fcBYTgS7];
            k76kXd[fcBYTgS7] = LTaYdyRfKPnr;
            gIoVZwgPz8c++;
        }
    }
    {
        gIoVZwgPz8c = 0;
        for (; PUZ9jIuF3 > gIoVZwgPz8c;) {
            printf ("%0.2f ", PeLat0[gIoVZwgPz8c]);
            gIoVZwgPz8c++;
        }
    }
    {
        gIoVZwgPz8c = 0;
        for (; gIoVZwgPz8c < O5mMi6NPkA -1;) {
            printf ("%0.2f ", k76kXd[gIoVZwgPz8c]);
            gIoVZwgPz8c++;
        }
    }
    printf ("%0.2f", k76kXd[O5mMi6NPkA -1]);
    return 0;
}

