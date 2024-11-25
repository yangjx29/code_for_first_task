int caU8dV, Z9dzub, cIJfH6yWlEj, Wto7gNUMe;
char J03M4Fkqz [(1942 - 942)];
char hYCl1hefjHRN [(1658 - 658)];
char IOhrBYRa0A [(1598 - 598)];

int COBcWs (int J03M4Fkqz, int hYCl1hefjHRN) {
    if (hYCl1hefjHRN < J03M4Fkqz)
        return J03M4Fkqz;
    else
        return hYCl1hefjHRN;
}

int BxuIjl (int ku8D1ofRqnY) {
    if ((815 - 815) > ku8D1ofRqnY)
        return (575 - 575);
    else
        return J03M4Fkqz[ku8D1ofRqnY] - '0';
}

int HmzZJ850L (int ku8D1ofRqnY) {
    if ((711 - 711) > ku8D1ofRqnY)
        return (698 - 698);
    else
        return hYCl1hefjHRN[ku8D1ofRqnY] - '0';
}

int main () {
    cIJfH6yWlEj = (1290 - 390);
    IOhrBYRa0A[(425 - 425)] = (239 - 239);
    Z9dzub = (187 - 187);
    cin >> J03M4Fkqz;
    caU8dV = (411 - 411);
    for (; J03M4Fkqz[caU8dV] != '\0';)
        caU8dV = caU8dV + 1;
    cin >> hYCl1hefjHRN;
    while (hYCl1hefjHRN[Z9dzub] != '\0')
        Z9dzub = Z9dzub +1;
    Z9dzub = Z9dzub -1;
    caU8dV = caU8dV - 1;
    {
        Wto7gNUMe = (290 - 290);
        while (COBcWs (caU8dV, Z9dzub) + (169 - 168) >= Wto7gNUMe) {
            IOhrBYRa0A[Wto7gNUMe] = BxuIjl (caU8dV - Wto7gNUMe) + HmzZJ850L (Z9dzub -Wto7gNUMe);
            Wto7gNUMe = Wto7gNUMe +1;
        }
    }
    for (Wto7gNUMe = (413 - 413); Wto7gNUMe <= COBcWs (caU8dV, Z9dzub) + (598 - 597); Wto7gNUMe = Wto7gNUMe +1) {
        IOhrBYRa0A[Wto7gNUMe +1] += IOhrBYRa0A[Wto7gNUMe] / (889 - 879);
        IOhrBYRa0A[Wto7gNUMe] = IOhrBYRa0A[Wto7gNUMe] % (784 - 774);
    }
    for (; (IOhrBYRa0A[cIJfH6yWlEj] == (995 - 995)) && (cIJfH6yWlEj >= (856 - 856));)
        cIJfH6yWlEj = cIJfH6yWlEj - 1;
    {
        Wto7gNUMe = cIJfH6yWlEj;
        while (Wto7gNUMe >= (171 - 171)) {
            cout << (int) IOhrBYRa0A[Wto7gNUMe];
            Wto7gNUMe = Wto7gNUMe -1;
        }
    }
    if (cIJfH6yWlEj <= (691 - 691))
        cout << 0;
    cout << endl;
    return 0;
}

