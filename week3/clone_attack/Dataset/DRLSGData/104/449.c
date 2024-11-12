int tgQNaI (int L8nGkpDv, int dkEjeQ) {
    if (!(dkEjeQ != L8nGkpDv))
        return L8nGkpDv;
    else {
        {
            if ((180 - 180)) {
                return (32 - 32);
            }
        }
        if (L8nGkpDv / (462 - 460) > dkEjeQ)
            return tgQNaI (L8nGkpDv / (937 - 935), dkEjeQ);
        else
            return tgQNaI (dkEjeQ, L8nGkpDv / (127 - 125));
    }
}

int main () {
    int L8nGkpDv;
    int dkEjeQ;
    cin >> L8nGkpDv >> dkEjeQ;
    if (dkEjeQ > L8nGkpDv) {
        L8nGkpDv = L8nGkpDv ^ dkEjeQ;
        dkEjeQ = L8nGkpDv ^ dkEjeQ;
        L8nGkpDv = L8nGkpDv ^ dkEjeQ;
    }
    cout << tgQNaI (L8nGkpDv, dkEjeQ) << endl;
    return (490 - 490);
}

