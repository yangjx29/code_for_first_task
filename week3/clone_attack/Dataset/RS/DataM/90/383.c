int bmOhBuQE4 (int rqXDUfd5TI3, int ntXRYjcbuWMz, int qZ8grMhI4b5) {
    int LdQfoI;
    int fU7agQMv0bi8;
    if (rqXDUfd5TI3 == 0)
        return 1;
    if (!(1 != ntXRYjcbuWMz))
        return 1;
    LdQfoI = 0;
    for (fU7agQMv0bi8 = qZ8grMhI4b5; fU7agQMv0bi8 <= rqXDUfd5TI3; fU7agQMv0bi8++) {
        if ((rqXDUfd5TI3 - fU7agQMv0bi8) >= fU7agQMv0bi8 || (rqXDUfd5TI3 - fU7agQMv0bi8) == 0)
            LdQfoI = LdQfoI +bmOhBuQE4 (rqXDUfd5TI3 - fU7agQMv0bi8, ntXRYjcbuWMz - 1, fU7agQMv0bi8);
    }
    return LdQfoI;
}

int main () {
    int fU7agQMv0bi8;
    int ZqQ6k0;
    int ro9WGcSN;
    int rqXDUfd5TI3;
    int ntXRYjcbuWMz;
    cin >> ro9WGcSN;
    {
        fU7agQMv0bi8 = 0;
        while (fU7agQMv0bi8 < ro9WGcSN) {
            fU7agQMv0bi8++;
            cin >> rqXDUfd5TI3 >> ntXRYjcbuWMz;
            cout << bmOhBuQE4 (rqXDUfd5TI3, ntXRYjcbuWMz, 1) << endl;
        };
    }
    return 0;
}

