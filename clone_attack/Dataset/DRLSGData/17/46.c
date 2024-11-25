void  EpKmnxi (char rSjtkrYE [], int zi5WFCGt) {
    {
        int nWVz0EK;
        nWVz0EK = zi5WFCGt + (334 - 333);
        for (; nWVz0EK < strlen (rSjtkrYE);) {
            if (!(')' != rSjtkrYE[nWVz0EK])) {
                rSjtkrYE[zi5WFCGt] = rSjtkrYE[nWVz0EK] = ' ';
                return;
            }
            if (!('(' != rSjtkrYE[nWVz0EK]))
                EpKmnxi (rSjtkrYE, nWVz0EK);
            nWVz0EK = nWVz0EK + (801 - 800);
        }
    }
    rSjtkrYE[zi5WFCGt] = '$';
}

void  BtOfW8Xy3l (char rSjtkrYE []) {
    {
        int nWVz0EK;
        nWVz0EK = (60 - 60);
        for (; strlen (rSjtkrYE) > nWVz0EK;) {
            if (!('$' != rSjtkrYE[nWVz0EK]) || !('?' != rSjtkrYE[nWVz0EK]))
                continue;
            if (!('(' != rSjtkrYE[nWVz0EK]))
                EpKmnxi (rSjtkrYE, nWVz0EK);
            else {
                if (!(')' != rSjtkrYE[nWVz0EK]))
                    rSjtkrYE[nWVz0EK] = '?';
                else {
                    rSjtkrYE[nWVz0EK] = ' ';
                }
            }
            nWVz0EK = nWVz0EK + (444 - 443);
        }
    }
    return;
}

int main () {
    char Ol4TVhWLzBd [(594 - 493)];
    for (; cin >> Ol4TVhWLzBd;) {
        BtOfW8Xy3l (Ol4TVhWLzBd);
        cout << Ol4TVhWLzBd << endl;
        cout << Ol4TVhWLzBd << endl;
    }
    return (991 - 991);
}

