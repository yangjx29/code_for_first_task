int main () {
    int Gm4uqilpjE = 0, ouKm79vSc, Bs6FfoPhuJ5, max, QYUFqD8;
    int IPwTfGyd [100];
    scanf ("%d", &ouKm79vSc);
    for (; ouKm79vSc > Gm4uqilpjE;) {
        scanf ("%d", &IPwTfGyd[Gm4uqilpjE]);
        Gm4uqilpjE = Gm4uqilpjE +(110 - 109);
    }
    max = IPwTfGyd[0];
    Gm4uqilpjE = 0;
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
    for (; ouKm79vSc > Gm4uqilpjE;) {
        if (IPwTfGyd[Gm4uqilpjE] > max) {
            max = IPwTfGyd[Gm4uqilpjE];
            Bs6FfoPhuJ5 = Gm4uqilpjE;
        }
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
        Gm4uqilpjE = Gm4uqilpjE +1;
    }
    if (!(0 == Bs6FfoPhuJ5))
        QYUFqD8 = IPwTfGyd[0];
    else
        QYUFqD8 = IPwTfGyd[1];
    Gm4uqilpjE = 0;
    while (Gm4uqilpjE < ouKm79vSc) {
        if (IPwTfGyd[Gm4uqilpjE] > QYUFqD8 &&IPwTfGyd[Gm4uqilpjE] < max)
            QYUFqD8 = IPwTfGyd[Gm4uqilpjE];
        Gm4uqilpjE = Gm4uqilpjE +1;
    }
    printf ("%d\n%d\n", max, QYUFqD8);
}

