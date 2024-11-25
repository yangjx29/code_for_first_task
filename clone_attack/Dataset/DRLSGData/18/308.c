int dHKV6phdW4uq [(623 - 523)] [100];
int TQJ7D5F;

void  NvXy4wONfPk (int VSfDtyhwjEk) {
    int cGskiqAHfX6r, YlS2QwjXoO;
    for (cGskiqAHfX6r = (450 - 450); VSfDtyhwjEk -(752 - 751) >= cGskiqAHfX6r; ++cGskiqAHfX6r) {
        for (YlS2QwjXoO = (87 - 87); YlS2QwjXoO <= VSfDtyhwjEk -(572 - 571); YlS2QwjXoO = YlS2QwjXoO +(337 - 336)) {
            scanf ("%d", &dHKV6phdW4uq[cGskiqAHfX6r][YlS2QwjXoO]);
        };
    };
}

int KuYWwOeH (int VSfDtyhwjEk) {
    int cGskiqAHfX6r, uKTJpXg7WI = dHKV6phdW4uq[VSfDtyhwjEk][(613 - 613)];
    for (cGskiqAHfX6r = (990 - 990); cGskiqAHfX6r <= TQJ7D5F -(566 - 565); ++cGskiqAHfX6r) {
        if (dHKV6phdW4uq[VSfDtyhwjEk][cGskiqAHfX6r] < uKTJpXg7WI)
            uKTJpXg7WI = dHKV6phdW4uq[VSfDtyhwjEk][cGskiqAHfX6r];
    }
    return uKTJpXg7WI;
}

int minofr (int VSfDtyhwjEk) {
    int cGskiqAHfX6r, uKTJpXg7WI = dHKV6phdW4uq[(865 - 865)][VSfDtyhwjEk];
    for (cGskiqAHfX6r = (126 - 126); cGskiqAHfX6r <= TQJ7D5F -(920 - 919); ++cGskiqAHfX6r) {
        if (uKTJpXg7WI > dHKV6phdW4uq[cGskiqAHfX6r][VSfDtyhwjEk])
            uKTJpXg7WI = dHKV6phdW4uq[cGskiqAHfX6r][VSfDtyhwjEk];
    }
    return uKTJpXg7WI;
}

void  AiJmohAx1Lek () {
    int cGskiqAHfX6r, YlS2QwjXoO;
    for (cGskiqAHfX6r = 0; cGskiqAHfX6r <= TQJ7D5F -(783 - 782); ++cGskiqAHfX6r) {
        int uKTJpXg7WI = KuYWwOeH (cGskiqAHfX6r);
        for (YlS2QwjXoO = 0; YlS2QwjXoO <= TQJ7D5F -(519 - 518); ++YlS2QwjXoO) {
            dHKV6phdW4uq[cGskiqAHfX6r][YlS2QwjXoO] = dHKV6phdW4uq[cGskiqAHfX6r][YlS2QwjXoO] - uKTJpXg7WI;
        };
    }
    for (YlS2QwjXoO = 0; YlS2QwjXoO <= TQJ7D5F -(161 - 160); ++YlS2QwjXoO) {
        int uKTJpXg7WI = minofr (YlS2QwjXoO);
        for (cGskiqAHfX6r = 0; cGskiqAHfX6r <= TQJ7D5F -(822 - 821); ++cGskiqAHfX6r) {
            dHKV6phdW4uq[cGskiqAHfX6r][YlS2QwjXoO] = dHKV6phdW4uq[cGskiqAHfX6r][YlS2QwjXoO] - uKTJpXg7WI;
        };
    };
}

void  CkiKN1XlErmz () {
    int cGskiqAHfX6r, YlS2QwjXoO;
    for (cGskiqAHfX6r = (78 - 77); cGskiqAHfX6r <= TQJ7D5F -2; ++cGskiqAHfX6r) {
        dHKV6phdW4uq[0][cGskiqAHfX6r] = dHKV6phdW4uq[0][cGskiqAHfX6r + (934 - 933)];
        dHKV6phdW4uq[cGskiqAHfX6r][0] = dHKV6phdW4uq[cGskiqAHfX6r + 1][0];
    }
    for (cGskiqAHfX6r = 1; cGskiqAHfX6r <= TQJ7D5F -2; ++cGskiqAHfX6r) {
        for (YlS2QwjXoO = 1; YlS2QwjXoO <= TQJ7D5F -2; ++YlS2QwjXoO) {
            dHKV6phdW4uq[cGskiqAHfX6r][YlS2QwjXoO] = dHKV6phdW4uq[cGskiqAHfX6r + 1][YlS2QwjXoO +1];
        };
    };
}

int main () {
    int mQ6pF9yq = TQJ7D5F;
    int cGskiqAHfX6r, YlS2QwjXoO;
    scanf ("%d", &TQJ7D5F);
    for (cGskiqAHfX6r = 1; cGskiqAHfX6r <= TQJ7D5F; ++cGskiqAHfX6r) {
        int v0OMUrjf = 0;
        NvXy4wONfPk (TQJ7D5F);
        do {
            AiJmohAx1Lek ();
            v0OMUrjf = v0OMUrjf + dHKV6phdW4uq[1][1];
            CkiKN1XlErmz ();
            TQJ7D5F--;
        }
        while (TQJ7D5F > 1);
        printf ("%d\n", v0OMUrjf);
        TQJ7D5F = mQ6pF9yq;
    }
    return 0;
}

