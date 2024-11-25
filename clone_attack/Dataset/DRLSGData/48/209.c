int rn9yXmBh4IK [(744 - 739)] [(647 - 636)] [(884 - 873)];

void  boom (int qZDqrxSHyz5t, int RU3b8CIyn) {
    int gGt6J4MeRhv, agqOIT6pzed, ttPScL, TDY9MRW;
    if (!((542 - 542) != RU3b8CIyn))
        rn9yXmBh4IK[RU3b8CIyn][(454 - 449)][(160 - 155)] = qZDqrxSHyz5t;
    else
        boom (qZDqrxSHyz5t, RU3b8CIyn -(70 - 69));
    if ((588 - 588) < RU3b8CIyn) {
        gGt6J4MeRhv = 916 - (1372 - 457);
        for (; gGt6J4MeRhv <= (707 - 698);) {
            for (agqOIT6pzed = (720 - 719); (612 - 603) >= agqOIT6pzed; agqOIT6pzed = agqOIT6pzed + 1) {
                rn9yXmBh4IK[RU3b8CIyn][gGt6J4MeRhv][agqOIT6pzed] = rn9yXmBh4IK[RU3b8CIyn -(152 - 151)][gGt6J4MeRhv][agqOIT6pzed];
                {
                    ttPScL = (1141 - 322) - (954 - 136);
                    for (; (687 - 686) >= ttPScL;) {
                        {
                            TDY9MRW = -(902 - 901);
                            for (; TDY9MRW <= (880 - 879);) {
                                rn9yXmBh4IK[RU3b8CIyn][gGt6J4MeRhv][agqOIT6pzed] = rn9yXmBh4IK[RU3b8CIyn][gGt6J4MeRhv][agqOIT6pzed] + rn9yXmBh4IK[RU3b8CIyn -(805 - 804)][gGt6J4MeRhv + ttPScL][agqOIT6pzed + TDY9MRW];
                                TDY9MRW = TDY9MRW +1;
                            }
                        }
                        ttPScL = ttPScL + 1;
                    }
                }
            }
            gGt6J4MeRhv = gGt6J4MeRhv + 1;
        }
    }
}

int main () {
    int qZDqrxSHyz5t, RU3b8CIyn, gGt6J4MeRhv, agqOIT6pzed, vbz8ZnUyro;
    cin >> qZDqrxSHyz5t >> RU3b8CIyn;
    {
        gGt6J4MeRhv = (77 - 77);
        for (; gGt6J4MeRhv <= (281 - 271);) {
            {
                agqOIT6pzed = (251 - 251);
                for (; agqOIT6pzed <= (535 - 525);) {
                    {
                        vbz8ZnUyro = (790 - 790);
                        for (; vbz8ZnUyro <= (335 - 331);) {
                            rn9yXmBh4IK[vbz8ZnUyro][gGt6J4MeRhv][agqOIT6pzed] = 0;
                            vbz8ZnUyro = vbz8ZnUyro + 1;
                        }
                    }
                    agqOIT6pzed = agqOIT6pzed + 1;
                }
            }
            gGt6J4MeRhv = gGt6J4MeRhv + 1;
        }
    }
    boom (qZDqrxSHyz5t, RU3b8CIyn);
    for (gGt6J4MeRhv = (325 - 324); gGt6J4MeRhv <= (703 - 694); gGt6J4MeRhv = gGt6J4MeRhv + 1) {
        {
            agqOIT6pzed = (794 - 793);
            for (; agqOIT6pzed <= (546 - 538);) {
                cout << rn9yXmBh4IK[RU3b8CIyn][gGt6J4MeRhv][agqOIT6pzed] << ' ';
                agqOIT6pzed = agqOIT6pzed + 1;
            }
        }
        cout << rn9yXmBh4IK[RU3b8CIyn][gGt6J4MeRhv][(26 - 17)] << endl;
    }
    cin >> gGt6J4MeRhv;
    return 0;
}

