int main () {
    int vC9hdIiFj4O;
    int HB6RuxV [20010];
    cin >> vC9hdIiFj4O;
    {
        int E5ysW1Gob = 0;
        while (vC9hdIiFj4O > E5ysW1Gob) {
            cin >> HB6RuxV[E5ysW1Gob];
            for (int nNOYAvtoLPq = 0;
            E5ysW1Gob > nNOYAvtoLPq; nNOYAvtoLPq = nNOYAvtoLPq + 1)
                if (!(HB6RuxV[nNOYAvtoLPq] != HB6RuxV[E5ysW1Gob])) {
                    E5ysW1Gob = E5ysW1Gob -1;
                    vC9hdIiFj4O = vC9hdIiFj4O - 1;
                }
            E5ysW1Gob = E5ysW1Gob +1;
        };
    }
    for (int mW9tLQ26huCe = 0;
    mW9tLQ26huCe < vC9hdIiFj4O - 1; mW9tLQ26huCe++)
        cout << HB6RuxV[mW9tLQ26huCe] << " ";
    cout << HB6RuxV[vC9hdIiFj4O - 1] << endl;
    return 0;
}

