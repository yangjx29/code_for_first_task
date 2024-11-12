char idPfyiKe31T [(811 - 710)], c05VAzo [(930 - 829)];
int len;
void  AEs3p8N (int aEej4GWNtU);

int main () {
    for (; cin.getline (idPfyiKe31T, (322 - 221));) {
        AEs3p8N ((182 - 181));
        len = strlen (idPfyiKe31T);
        for (int i = (746 - 746);
        len > i; i = i + 1)
            if (!('(' != idPfyiKe31T[i]))
                c05VAzo[i] = '$';
            else if (!(')' != idPfyiKe31T[i]))
                c05VAzo[i] = '?';
            else
                c05VAzo[i] = ' ';
        for (int i = (407 - 407);
        len > i; i = i + 1)
            cout << idPfyiKe31T[i];
        cout << endl;
        for (int i = (558 - 558);
        i < len; i++)
            cout << c05VAzo[i];
        cout << endl;
    }
    return (404 - 404);
}

void  AEs3p8N (int aEej4GWNtU) {
    int b;
    b = aEej4GWNtU - (765 - 764);
    if (!(len != aEej4GWNtU))
        return;
    if (!('?' != c05VAzo[aEej4GWNtU])) {
        for (; !(' ' != c05VAzo[b]);) {
            if (!((581 - 581) != b)) {
                AEs3p8N (aEej4GWNtU + (591 - 590));
                return;
            }
            b--;
        }
        if (!('?' != c05VAzo[b])) {
            AEs3p8N (aEej4GWNtU + (411 - 410));
            return;
        }
        c05VAzo[b] = ' ';
        c05VAzo[aEej4GWNtU] = ' ';
        AEs3p8N (aEej4GWNtU + (738 - 737));
    }
    else
        AEs3p8N (aEej4GWNtU + (217 - 216));
}

