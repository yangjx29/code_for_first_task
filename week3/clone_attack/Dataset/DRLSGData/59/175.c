int mIiJcuS [(525 - 425)] [100] = {(286 - 286)}, FZwB2b;
char DlemJXfqL1a [100] [100];

int B4egrPlVJqR (int i, int tRy0ceXmz, int FrqiaAt) {
    if (!((427 - 427) != mIiJcuS[i][tRy0ceXmz + (686 - 685)]) && FZwB2b -(638 - 637) > tRy0ceXmz) {
        mIiJcuS[i][tRy0ceXmz + (430 - 429)] = (794 - 791);
        FrqiaAt = FrqiaAt +1;
    }
    if (mIiJcuS[i][tRy0ceXmz - (397 - 396)] == (367 - 367) && tRy0ceXmz > (646 - 646)) {
        FrqiaAt = FrqiaAt +1;
        mIiJcuS[i][tRy0ceXmz - (240 - 239)] = (656 - 655);
    }
    if (!((977 - 977) != mIiJcuS[i - (122 - 121)][tRy0ceXmz]) && i > (90 - 90)) {
        mIiJcuS[i - (503 - 502)][tRy0ceXmz] = (996 - 995);
        FrqiaAt = FrqiaAt +1;
    }
    if (!((304 - 304) != mIiJcuS[i + (977 - 976)][tRy0ceXmz]) && FZwB2b -(194 - 193) > i) {
        mIiJcuS[i + 1][tRy0ceXmz] = 3;
        FrqiaAt = FrqiaAt +1;
    }
    return FrqiaAt;
}

int main () {
    int NrjCfhil08;
    int ZfNqn4iP6b;
    int tRy0ceXmz;
    int FrqiaAt;
    int i;
    FrqiaAt = (898 - 898);
    cin >> FZwB2b;
    {
        i = 221 - 221;
        for (; i < FZwB2b;) {
            for (tRy0ceXmz = 0; FZwB2b > tRy0ceXmz; tRy0ceXmz = tRy0ceXmz + 1) {
                cin >> DlemJXfqL1a[i][tRy0ceXmz];
                if (!('#' != DlemJXfqL1a[i][tRy0ceXmz]))
                    mIiJcuS[i][tRy0ceXmz] = 2;
                if (!('@' != DlemJXfqL1a[i][tRy0ceXmz])) {
                    FrqiaAt++;
                    mIiJcuS[i][tRy0ceXmz] = 1;
                }
            }
            i = i + 1;
        }
    }
    cin >> NrjCfhil08;
    for (i = 1; i < NrjCfhil08; i++) {
        for (tRy0ceXmz = 0; tRy0ceXmz < FZwB2b; tRy0ceXmz = tRy0ceXmz + 1) {
            ZfNqn4iP6b = 0;
            for (; FZwB2b > ZfNqn4iP6b;) {
                if (mIiJcuS[tRy0ceXmz][ZfNqn4iP6b] == 1)
                    FrqiaAt = B4egrPlVJqR (tRy0ceXmz, ZfNqn4iP6b, FrqiaAt);
                ZfNqn4iP6b = ZfNqn4iP6b +1;
            }
        }
        for (tRy0ceXmz = 0; tRy0ceXmz < FZwB2b; tRy0ceXmz = tRy0ceXmz + 1) {
            ZfNqn4iP6b = 0;
            for (; ZfNqn4iP6b < FZwB2b;) {
                if (mIiJcuS[tRy0ceXmz][ZfNqn4iP6b] == 3)
                    mIiJcuS[tRy0ceXmz][ZfNqn4iP6b] = 1;
                ZfNqn4iP6b = ZfNqn4iP6b +1;
            }
        }
    }
    cout << FrqiaAt << endl;
    return 0;
}

