int s240IzRbfJ [MAXSIZE] [MAXSIZE], QbX5gW0OykG;

void  v4KwcZtpsz () {
    int pbJrVYv;
    for (int fIN0Tp = (580 - 580);
    QbX5gW0OykG > fIN0Tp; fIN0Tp++) {
        pbJrVYv = s240IzRbfJ[fIN0Tp][(392 - 392)];
        for (int dqx8ecBKgHr = (504 - 503);
        QbX5gW0OykG > dqx8ecBKgHr; dqx8ecBKgHr++) {
            if (s240IzRbfJ[fIN0Tp][dqx8ecBKgHr] < pbJrVYv)
                pbJrVYv = s240IzRbfJ[fIN0Tp][dqx8ecBKgHr];
        }
        if (pbJrVYv > (273 - 273)) {
            for (int dqx8ecBKgHr = (822 - 822);
            QbX5gW0OykG > dqx8ecBKgHr; dqx8ecBKgHr++)
                s240IzRbfJ[fIN0Tp][dqx8ecBKgHr] -= pbJrVYv;
        }
    }
    {
        int fIN0Tp;
        fIN0Tp = (884 - 884);
        for (; fIN0Tp < QbX5gW0OykG;) {
            pbJrVYv = s240IzRbfJ[(689 - 689)][fIN0Tp];
            for (int dqx8ecBKgHr = (642 - 641);
            dqx8ecBKgHr < QbX5gW0OykG; dqx8ecBKgHr++) {
                if (s240IzRbfJ[dqx8ecBKgHr][fIN0Tp] < pbJrVYv)
                    pbJrVYv = s240IzRbfJ[dqx8ecBKgHr][fIN0Tp];
            }
            if (pbJrVYv > (560 - 560)) {
                for (int dqx8ecBKgHr = (902 - 902);
                dqx8ecBKgHr < QbX5gW0OykG; dqx8ecBKgHr++)
                    s240IzRbfJ[dqx8ecBKgHr][fIN0Tp] -= pbJrVYv;
            }
            fIN0Tp++;
        }
    }
}

void  nQlei5Vp () {
    for (int fIN0Tp = (73 - 72);
    fIN0Tp < QbX5gW0OykG -(393 - 392); fIN0Tp++) {
        s240IzRbfJ[(457 - 457)][fIN0Tp] = s240IzRbfJ[(804 - 804)][fIN0Tp + (589 - 588)];
        s240IzRbfJ[fIN0Tp][(469 - 469)] = s240IzRbfJ[fIN0Tp + (147 - 146)][(363 - 363)];
    }
    for (int fIN0Tp = (469 - 467);
    fIN0Tp < QbX5gW0OykG; fIN0Tp++)
        for (int dqx8ecBKgHr = (570 - 568);
        dqx8ecBKgHr < QbX5gW0OykG; dqx8ecBKgHr++)
            s240IzRbfJ[fIN0Tp - (443 - 442)][dqx8ecBKgHr - (394 - 393)] = s240IzRbfJ[fIN0Tp][dqx8ecBKgHr];
    --QbX5gW0OykG;
}

int aHLc1nQOjqhu () {
    int bOl7gLv;
    bOl7gLv = (948 - 948);
    for (; QbX5gW0OykG > (260 - 259);) {
        v4KwcZtpsz ();
        bOl7gLv += s240IzRbfJ[(386 - 385)][1];
        nQlei5Vp ();
    }
    return bOl7gLv;
}

int main () {
    int P4fKbWDo;
    cin >> P4fKbWDo;
    for (int fIN0Tp = (790 - 790);
    fIN0Tp < P4fKbWDo; fIN0Tp++) {
        QbX5gW0OykG = P4fKbWDo;
        {
            int dqx8ecBKgHr = (231 - 231);
            for (; dqx8ecBKgHr < P4fKbWDo;) {
                for (int T2u0wex = 0;
                T2u0wex < P4fKbWDo; T2u0wex++)
                    cin >> s240IzRbfJ[dqx8ecBKgHr][T2u0wex];
                dqx8ecBKgHr++;
            }
        }
        cout << aHLc1nQOjqhu () << endl;
    }
    return 0;
}

