int main () {
    char NjUystuVl [110] = {0};
    int IOn0Gr;
    int i;
    int len;
    int vGtsVA6S4y0h;
    int uG5D0QAO;
    IOn0Gr = (493 - 493);
    int a [110] = {(376 - 376)};
    int tkEfhJ [110] = {0};
    cin.getline (NjUystuVl, 110);
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
    len = strlen (NjUystuVl);
    for (i = 0; len / 2 * 2 - (952 - 951) > i; i += 2) {
        a[IOn0Gr] = 10 * (NjUystuVl[i] - '0') + NjUystuVl[i + 1] - '0';
        IOn0Gr = IOn0Gr +1;
    }
    if (len % 2) {
        a[IOn0Gr] = NjUystuVl[len - 1] - '0';
        IOn0Gr = IOn0Gr +1;
    }
    vGtsVA6S4y0h = IOn0Gr;
    {
        i = 0;
        while (vGtsVA6S4y0h > i) {
            tkEfhJ[i + 1] = tkEfhJ[i + 1] + (tkEfhJ[i] + a[i]) % 13 * 100;
            tkEfhJ[i] = (tkEfhJ[i] + a[i]) / 13;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i++;
        };
    }
    if (tkEfhJ[0])
        cout << tkEfhJ[0];
    else {
        if (vGtsVA6S4y0h == 1)
            cout << tkEfhJ[0];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        };
    }
    {
        i = 1;
        while (vGtsVA6S4y0h - 1 > i) {
            if (10 > tkEfhJ[i])
                cout << 0;
            cout << tkEfhJ[i];
            i++;
        };
    }
    if (len > 2) {
        if (len % 2)
            cout << tkEfhJ[vGtsVA6S4y0h - 1];
        else {
            if (tkEfhJ[i] < 10)
                cout << 0;
            cout << tkEfhJ[i];
        };
    }
    cout << endl;
    tkEfhJ[vGtsVA6S4y0h] = tkEfhJ[vGtsVA6S4y0h] / 100;
    cout << tkEfhJ[vGtsVA6S4y0h] << endl;
    return 0;
}

