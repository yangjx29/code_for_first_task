int main () {
    int k5YR4Ji;
    char OQThrF7caK [200];
    int hiFYx4 [100] = {0};
    int oe21ZHUJ [100] = {0};
    int Ggs79k01chY;
    Ggs79k01chY = 0;
    cin >> OQThrF7caK;
    for (k5YR4Ji = 0; k5YR4Ji < strlen (OQThrF7caK); k5YR4Ji = k5YR4Ji + 1) {
        if (OQThrF7caK[k5YR4Ji] >= 'a' && OQThrF7caK[k5YR4Ji] <= 'z')
            OQThrF7caK[k5YR4Ji] = OQThrF7caK[k5YR4Ji] - 32;
    }
    {
        k5YR4Ji = 0;
        while (k5YR4Ji < strlen (OQThrF7caK)) {
            if (OQThrF7caK[k5YR4Ji] == OQThrF7caK[k5YR4Ji + 1]) {
                hiFYx4[Ggs79k01chY]++;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
            else {
                hiFYx4[Ggs79k01chY]++;
                Ggs79k01chY++;
                oe21ZHUJ[Ggs79k01chY] = k5YR4Ji + 1;
            }
            k5YR4Ji = k5YR4Ji + 1;
        };
    }
    {
        k5YR4Ji = 0;
        while (k5YR4Ji < Ggs79k01chY) {
            cout << '(' << OQThrF7caK[oe21ZHUJ[k5YR4Ji]] << ',' << hiFYx4[k5YR4Ji] << ')';
            k5YR4Ji++;
        };
    }
    return 0;
}

