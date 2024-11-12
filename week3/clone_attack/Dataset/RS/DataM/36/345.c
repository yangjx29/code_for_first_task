int main () {
    int b4AF2EO, u9qWQTj, nJ5upe = 0;
    int RqyrxQobDE, Eq41As, bVX1ts5l6aJ;
    char fDKPj7CFmQEi [100];
    gets (fDKPj7CFmQEi);
    b4AF2EO = strlen (fDKPj7CFmQEi);
    {
        RqyrxQobDE = 0;
        while (RqyrxQobDE < b4AF2EO) {
            if (!(' ' != fDKPj7CFmQEi[RqyrxQobDE])) {
                u9qWQTj = RqyrxQobDE;
                break;
            }
            RqyrxQobDE = RqyrxQobDE +1;
        };
    }
    if (!(0 == (b4AF2EO - 2 * u9qWQTj - 1)))
        cout << "NO" << endl;
    else {
        {
            Eq41As = 0;
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
            while (Eq41As < u9qWQTj) {
                for (bVX1ts5l6aJ = RqyrxQobDE +1; b4AF2EO > bVX1ts5l6aJ; bVX1ts5l6aJ = bVX1ts5l6aJ + 1) {
                    if (fDKPj7CFmQEi[Eq41As] == fDKPj7CFmQEi[bVX1ts5l6aJ]) {
                        fDKPj7CFmQEi[bVX1ts5l6aJ] = ' ';
                        nJ5upe = nJ5upe + 1;
                        break;
                    };
                }
                Eq41As = Eq41As +1;
            };
        }
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (nJ5upe == u9qWQTj)
            cout << "YES";
        else
            cout << "NO";
    }
    return 0;
}

