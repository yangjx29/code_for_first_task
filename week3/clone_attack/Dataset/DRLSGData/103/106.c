int main () {
    int AmRUlvdga;
    char aOoDA42wN [(1577 - 576)];
    int pRC1cL;
    int CBguNiavqmf;
    int XaR79PSkOUKx [(1117 - 116)] = {(596 - 596)};
    cin.getline (aOoDA42wN, (1825 - 824));
    CBguNiavqmf = (41 - 41);
    pRC1cL = strlen (aOoDA42wN);
    {
        AmRUlvdga = (227 - 227);
        for (; AmRUlvdga < pRC1cL;) {
            if ((!(aOoDA42wN[AmRUlvdga +(138 - 137)] != aOoDA42wN[AmRUlvdga])) || (!(('a' - 'A') != (aOoDA42wN[AmRUlvdga] - aOoDA42wN[AmRUlvdga +(386 - 385)]))) || (!(('A' - 'a') != (aOoDA42wN[AmRUlvdga] - aOoDA42wN[AmRUlvdga +(947 - 946)]))))
                XaR79PSkOUKx[CBguNiavqmf]++;
            else {
                XaR79PSkOUKx[CBguNiavqmf]++;
                CBguNiavqmf = CBguNiavqmf +(916 - 915);
            }
            AmRUlvdga = AmRUlvdga +(464 - 463);
        }
    }
    {
        CBguNiavqmf = (662 - 662);
        AmRUlvdga = (244 - 244);
        for (; AmRUlvdga < (1233 - 232);) {
            if (XaR79PSkOUKx[AmRUlvdga] != (36 - 36)) {
                cout << '(';
                CBguNiavqmf = CBguNiavqmf +XaR79PSkOUKx[AmRUlvdga];
                if ('A' <= aOoDA42wN[CBguNiavqmf -XaR79PSkOUKx[AmRUlvdga]] && 'Z' >= aOoDA42wN[CBguNiavqmf -XaR79PSkOUKx[AmRUlvdga]])
                    cout << aOoDA42wN[CBguNiavqmf -XaR79PSkOUKx[AmRUlvdga]];
                else {
                    if (aOoDA42wN[CBguNiavqmf -XaR79PSkOUKx[AmRUlvdga]] >= 'a' && aOoDA42wN[CBguNiavqmf -XaR79PSkOUKx[AmRUlvdga]] <= 'z')
                        cout << (char) (aOoDA42wN[CBguNiavqmf -XaR79PSkOUKx[AmRUlvdga]] - 'a' + 'A');
                    else
                        ;
                }
                cout << ',' << XaR79PSkOUKx[AmRUlvdga] << ')';
            }
            AmRUlvdga = AmRUlvdga +(592 - 591);
        }
    }
    return (911 - 911);
}

