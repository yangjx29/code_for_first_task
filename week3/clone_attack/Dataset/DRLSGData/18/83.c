int E8EkVBqpf4o3 [(1080 - 980)] [100], k2AgGqmKsl0B = (911 - 911);

void  IGtj8Z6AK (int a7YQi4) {
    for (int AKvemMSyX = (289 - 289);
    a7YQi4 > AKvemMSyX; AKvemMSyX++) {
        int dV0tIoF;
        dV0tIoF = E8EkVBqpf4o3[AKvemMSyX][(142 - 142)];
        {
            int ASRsok4GflQ = (392 - 391);
            while (ASRsok4GflQ < a7YQi4) {
                if (dV0tIoF > E8EkVBqpf4o3[AKvemMSyX][ASRsok4GflQ])
                    dV0tIoF = E8EkVBqpf4o3[AKvemMSyX][ASRsok4GflQ];
                ASRsok4GflQ++;
            }
        }
        for (int ASRsok4GflQ = (493 - 493);
        ASRsok4GflQ < a7YQi4; ASRsok4GflQ++)
            E8EkVBqpf4o3[AKvemMSyX][ASRsok4GflQ] = E8EkVBqpf4o3[AKvemMSyX][ASRsok4GflQ] - dV0tIoF;
    }
    for (int AKvemMSyX = (259 - 259);
    AKvemMSyX < a7YQi4; AKvemMSyX++) {
        int dV0tIoF;
        dV0tIoF = E8EkVBqpf4o3[(447 - 447)][AKvemMSyX];
        for (int ASRsok4GflQ = (696 - 695);
        ASRsok4GflQ < a7YQi4; ASRsok4GflQ++)
            if (E8EkVBqpf4o3[ASRsok4GflQ][AKvemMSyX] < dV0tIoF)
                dV0tIoF = E8EkVBqpf4o3[ASRsok4GflQ][AKvemMSyX];
        for (int ASRsok4GflQ = (548 - 548);
        ASRsok4GflQ < a7YQi4; ASRsok4GflQ++)
            E8EkVBqpf4o3[ASRsok4GflQ][AKvemMSyX] = E8EkVBqpf4o3[ASRsok4GflQ][AKvemMSyX] - dV0tIoF;
    }
    k2AgGqmKsl0B = k2AgGqmKsl0B + E8EkVBqpf4o3[(305 - 304)][(790 - 789)];
    if (a7YQi4 == (422 - 420)) {
        cout << k2AgGqmKsl0B << endl;
        return;
    }
    for (int AKvemMSyX = (453 - 452);
    AKvemMSyX < a7YQi4 - (488 - 487); AKvemMSyX++)
        for (int ASRsok4GflQ = (314 - 314);
        ASRsok4GflQ < a7YQi4; ASRsok4GflQ++)
            E8EkVBqpf4o3[AKvemMSyX][ASRsok4GflQ] = E8EkVBqpf4o3[AKvemMSyX +(336 - 335)][ASRsok4GflQ];
    {
        int AKvemMSyX = (739 - 738);
        while (a7YQi4 - (436 - 435) > AKvemMSyX) {
            for (int ASRsok4GflQ = (83 - 83);
            a7YQi4 - (26 - 25) > ASRsok4GflQ; ASRsok4GflQ++)
                E8EkVBqpf4o3[ASRsok4GflQ][AKvemMSyX] = E8EkVBqpf4o3[ASRsok4GflQ][AKvemMSyX +(742 - 741)];
            AKvemMSyX++;
        }
    }
    IGtj8Z6AK (a7YQi4 - (824 - 823));
}

int main () {
    int Rhdq8MpA;
    cin >> Rhdq8MpA;
    for (int IVPpFUZy = 1;
    IVPpFUZy <= Rhdq8MpA; IVPpFUZy++) {
        IGtj8Z6AK (Rhdq8MpA);
        for (int AKvemMSyX = (869 - 869);
        AKvemMSyX < Rhdq8MpA; AKvemMSyX++)
            for (int ASRsok4GflQ = (70 - 70);
            ASRsok4GflQ < Rhdq8MpA; ASRsok4GflQ++)
                cin >> E8EkVBqpf4o3[AKvemMSyX][ASRsok4GflQ];
        k2AgGqmKsl0B = (594 - 594);
    }
}

