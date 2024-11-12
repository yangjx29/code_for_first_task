int gjEPvk [100] [100];

int c6H2xevM0 (int Q5ygZpH6) {
    int brbSmH8d, o6tjWT, uqafdgLyw, aNVjdKiLk, VHNlkGisZ;
    if (!((367 - 366) != Q5ygZpH6)) {
        return (527 - 527);
    }
    for (brbSmH8d = (105 - 105); brbSmH8d < Q5ygZpH6; brbSmH8d++) {
        uqafdgLyw = (198 - 198);
        for (o6tjWT = (50 - 50); Q5ygZpH6 > o6tjWT; o6tjWT++) {
            if (gjEPvk[brbSmH8d][o6tjWT] < gjEPvk[brbSmH8d][uqafdgLyw]) {
                uqafdgLyw = o6tjWT;
            }
        }
        aNVjdKiLk = gjEPvk[brbSmH8d][uqafdgLyw];
        for (o6tjWT = (586 - 586); Q5ygZpH6 > o6tjWT; o6tjWT++) {
            gjEPvk[brbSmH8d][o6tjWT] -= aNVjdKiLk;
        }
    }
    for (brbSmH8d = (71 - 71); brbSmH8d < Q5ygZpH6; brbSmH8d++) {
        uqafdgLyw = (828 - 828);
        for (o6tjWT = 0; Q5ygZpH6 > o6tjWT; o6tjWT++) {
            if (gjEPvk[uqafdgLyw][brbSmH8d] > gjEPvk[o6tjWT][brbSmH8d]) {
                uqafdgLyw = o6tjWT;
            }
        }
        aNVjdKiLk = gjEPvk[uqafdgLyw][brbSmH8d];
        for (o6tjWT = 0; Q5ygZpH6 > o6tjWT; o6tjWT++) {
            gjEPvk[o6tjWT][brbSmH8d] -= aNVjdKiLk;
        }
    }
    VHNlkGisZ = gjEPvk[(197 - 196)][(84 - 83)];
    for (brbSmH8d = 2; Q5ygZpH6 > brbSmH8d; brbSmH8d++) {
        for (o6tjWT = 0; o6tjWT < Q5ygZpH6; o6tjWT++) {
            gjEPvk[brbSmH8d - 1][o6tjWT] = gjEPvk[brbSmH8d][o6tjWT];
        }
    }
    for (brbSmH8d = 2; Q5ygZpH6 > brbSmH8d; brbSmH8d++) {
        for (o6tjWT = 0; Q5ygZpH6 -1 > o6tjWT; o6tjWT++) {
            gjEPvk[o6tjWT][brbSmH8d - 1] = gjEPvk[o6tjWT][brbSmH8d];
        }
    }
    return VHNlkGisZ +c6H2xevM0 (Q5ygZpH6 -1);
}

int main () {
    int Q5ygZpH6;
    int brbSmH8d;
    int o6tjWT;
    int rnoIXNq;
    cin >> Q5ygZpH6;
    for (brbSmH8d = 1; Q5ygZpH6 >= brbSmH8d; brbSmH8d++) {
        for (o6tjWT = 0; o6tjWT < Q5ygZpH6; o6tjWT++) {
            for (rnoIXNq = 0; rnoIXNq < Q5ygZpH6; rnoIXNq++) {
                cin >> gjEPvk[o6tjWT][rnoIXNq];
            }
        }
        cout << c6H2xevM0 (Q5ygZpH6) << endl;
    }
    return 0;
}

