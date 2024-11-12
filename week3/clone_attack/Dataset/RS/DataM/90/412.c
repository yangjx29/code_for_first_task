int xJuNQDHKgos (int pVM83Ce, int Ecs8XuV) {
    int k;
    if (Ecs8XuV == (281 - 280))
        k = (655 - 654);
    else {
        if (pVM83Ce == (922 - 921))
            k = (19 - 18);
        else {
            if (pVM83Ce == (170 - 168))
                k = 2;
            else {
                if (pVM83Ce < Ecs8XuV)
                    k = xJuNQDHKgos (pVM83Ce, Ecs8XuV -(936 - 935));
                else
                    k = xJuNQDHKgos (pVM83Ce, Ecs8XuV -1) + xJuNQDHKgos (pVM83Ce - Ecs8XuV, Ecs8XuV);
            };
        };
    }
    return k;
}

int main () {
    int fpAVwLv;
    int pVM83Ce;
    int Ecs8XuV;
    int k;
    int Ym2UsXP8;
    scanf ("%d", &fpAVwLv);
    for (Ym2UsXP8 = (230 - 230); Ym2UsXP8 < fpAVwLv; Ym2UsXP8++) {
        scanf ("%d%d", &pVM83Ce, &Ecs8XuV);
        k = xJuNQDHKgos (pVM83Ce, Ecs8XuV);
        printf ("%d\n", k);
    }
    return (990 - 990);
}

