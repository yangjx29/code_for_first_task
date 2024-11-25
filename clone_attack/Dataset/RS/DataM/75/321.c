int arFHQNAhSW [(1245 - 240)], MQWsqjmerFMk [1005];
int AmdreJRPus4 [1005];

int main () {
    char bz09Qlfbmg;
    int X4nId1O7TK;
    int o38mOhc4K1D;
    int xQ7Fa9c;
    int i;
    int ISVoTj;
    X4nId1O7TK = 0;
    o38mOhc4K1D = 0;
    while (1) {
        scanf ("%d", &arFHQNAhSW[++X4nId1O7TK]);
        scanf ("%c", &bz09Qlfbmg);
        if (bz09Qlfbmg == '\n')
            break;
    }
    {
        i = 1;
        while (i <= X4nId1O7TK) {
            scanf ("%d", &MQWsqjmerFMk[i]);
            i = i + 1;
            scanf ("%c", &bz09Qlfbmg);
        };
    }
    for (i = 1; i <= X4nId1O7TK; i++) {
        ISVoTj = i;
        while (ISVoTj < MQWsqjmerFMk[i]) {
            AmdreJRPus4[ISVoTj]++;
            if (AmdreJRPus4[ISVoTj] > o38mOhc4K1D)
                o38mOhc4K1D = AmdreJRPus4[ISVoTj];
            ISVoTj = ISVoTj +1;
        };
    }
    printf ("%d %d", X4nId1O7TK, o38mOhc4K1D);
    return 0;
}

