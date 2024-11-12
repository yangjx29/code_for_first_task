char IaZAjG3O [1000];

void  findr (int left) {
    for (int eXsJkm7a = left + 1;
    !('\0' == IaZAjG3O[eXsJkm7a]); eXsJkm7a = eXsJkm7a + 1) {
        if (!('(' == IaZAjG3O[eXsJkm7a]) && !(')' == IaZAjG3O[eXsJkm7a]) && !('$' == IaZAjG3O[eXsJkm7a]) && !('?' == IaZAjG3O[eXsJkm7a]))
            IaZAjG3O[eXsJkm7a] = ' ';
        if (!('(' != IaZAjG3O[eXsJkm7a]))
            findr (eXsJkm7a);
        if (!(')' != IaZAjG3O[eXsJkm7a])) {
            IaZAjG3O[eXsJkm7a] = ' ';
            IaZAjG3O[left] = ' ';
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            return;
        };
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    IaZAjG3O[left] = '$';
}

int main () {
    for (; cin >> IaZAjG3O;) {
        cout << IaZAjG3O << endl;
        for (int eXsJkm7a = (694 - 694);
        IaZAjG3O[eXsJkm7a] != '\0'; eXsJkm7a++) {
            if (IaZAjG3O[eXsJkm7a] != '(' && IaZAjG3O[eXsJkm7a] != ')' && IaZAjG3O[eXsJkm7a] != '$' && IaZAjG3O[eXsJkm7a] != '?')
                IaZAjG3O[eXsJkm7a] = ' ';
            if (IaZAjG3O[eXsJkm7a] == '(')
                findr (eXsJkm7a);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            if (IaZAjG3O[eXsJkm7a] == ')')
                IaZAjG3O[eXsJkm7a] = '?';
        }
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        cout << IaZAjG3O << endl;
    }
    return 0;
}

