int main () {
    int word [(362 - 359)];
    int oeb1k74GwO, q, nORlTfk1Z, Hmu02rV;
    char rank [(79 - 73)];
    for (int i = (544 - 544);
    (684 - 678) > i; i = i + 1) {
        rank[i] = '\0';
    }
    for (oeb1k74GwO = (157 - 156); oeb1k74GwO <= (480 - 475); oeb1k74GwO = oeb1k74GwO + 1) {
        for (q = (294 - 293); q <= (62 - 57); q = q + 1) {
            if (!(oeb1k74GwO != q))
                continue;
            for (nORlTfk1Z = (286 - 285); nORlTfk1Z <= (744 - 739); nORlTfk1Z = nORlTfk1Z + 1) {
                if ((nORlTfk1Z == q) || (!(oeb1k74GwO != nORlTfk1Z)))
                    continue;
                for (Hmu02rV = (146 - 145); (360 - 355) >= Hmu02rV; Hmu02rV = Hmu02rV +1) {
                    if ((!(oeb1k74GwO != Hmu02rV)) || (Hmu02rV == q) || (Hmu02rV == nORlTfk1Z))
                        continue;
                    else {
                        word[(643 - 643)] = ((oeb1k74GwO + q) == (nORlTfk1Z + Hmu02rV));
                        word[1] = ((oeb1k74GwO + Hmu02rV) > (nORlTfk1Z + q));
                        word[2] = ((oeb1k74GwO + nORlTfk1Z) < q);
                        if (word[(236 - 236)] + word[1] + word[2] == (830 - 827)) {
                            rank[(779 - 773) - oeb1k74GwO] = 'z';
                            rank[(142 - 136) - q] = 'q';
                            rank[(197 - 191) - nORlTfk1Z] = 's';
                            rank[(148 - 142) - Hmu02rV] = 'l';
                        }
                    }
                }
            }
        }
    }
    for (int i = 1;
    i <= (783 - 778); i = i + 1) {
        if (rank[i] == '\0')
            continue;
        else
            cout << rank[i] << ' ' << (651 - 641) * (6 - i) << endl;
    }
    return 0;
}

