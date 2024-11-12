int txHVOndfN (int wAqhOcHKG, int QeMgBo) {
    if (!(QeMgBo != wAqhOcHKG)) {
        return wAqhOcHKG;
    }
    else if (wAqhOcHKG > QeMgBo) {
        return txHVOndfN (wAqhOcHKG / 2, QeMgBo);
    }
    else {
        return txHVOndfN (wAqhOcHKG, QeMgBo / 2);
    };
}

int main () {
    int OPKZ0sjaA;
    int PIGhp8;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    cin >> OPKZ0sjaA >> PIGhp8;
    cout << txHVOndfN (OPKZ0sjaA, PIGhp8) << endl;
    return 0;
}

