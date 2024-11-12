int main () {
    int zxSBtzLm;
    struct   student {
        char name [(577 - 477)];
        int VHYNqQPWr;
        int cYgiTx3IfE;
        char THnDk0X;
        char xi;
        int CFodXDk;
    }
    pCGaMhk9 [(1125 - 125)];
    int PIDoFGnVHO;
    int d [(1141 - 141)] = {(889 - 889)};
    int sum = (224 - 224);
    int z = 0;
    scanf ("%d", &zxSBtzLm);
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
    for (PIDoFGnVHO = (653 - 653); PIDoFGnVHO < zxSBtzLm; PIDoFGnVHO = PIDoFGnVHO +1) {
        scanf ("%s %d %d %c %c %d", pCGaMhk9[PIDoFGnVHO].name, &pCGaMhk9[PIDoFGnVHO].VHYNqQPWr, &pCGaMhk9[PIDoFGnVHO].cYgiTx3IfE, &pCGaMhk9[PIDoFGnVHO].THnDk0X, &pCGaMhk9[PIDoFGnVHO].xi, &pCGaMhk9[PIDoFGnVHO].CFodXDk);
    }
    for (PIDoFGnVHO = (166 - 166); PIDoFGnVHO < zxSBtzLm; PIDoFGnVHO = PIDoFGnVHO +1) {
        if (pCGaMhk9[PIDoFGnVHO].VHYNqQPWr > (701 - 621) && pCGaMhk9[PIDoFGnVHO].CFodXDk != (532 - 532)) {
            d[PIDoFGnVHO] += (8465 - 465);
        }
        if (pCGaMhk9[PIDoFGnVHO].VHYNqQPWr > (834 - 749) && pCGaMhk9[PIDoFGnVHO].cYgiTx3IfE > 80) {
            d[PIDoFGnVHO] = d[PIDoFGnVHO] + 4000;
        }
        if (pCGaMhk9[PIDoFGnVHO].VHYNqQPWr > (551 - 461)) {
            d[PIDoFGnVHO] = d[PIDoFGnVHO] + (2438 - 438);
        }
        if ((446 - 361) < pCGaMhk9[PIDoFGnVHO].VHYNqQPWr && pCGaMhk9[PIDoFGnVHO].xi == 'Y') {
            d[PIDoFGnVHO] += 1000;
        }
        if (pCGaMhk9[PIDoFGnVHO].cYgiTx3IfE > 80 && pCGaMhk9[PIDoFGnVHO].THnDk0X == 'Y') {
            d[PIDoFGnVHO] += 850;
        };
    }
    {
        PIDoFGnVHO = 894 - 894;
        while (PIDoFGnVHO < zxSBtzLm) {
            sum += d[PIDoFGnVHO];
            PIDoFGnVHO = PIDoFGnVHO +1;
        };
    }
    {
        PIDoFGnVHO = 0;
        while (PIDoFGnVHO < zxSBtzLm) {
            if (d[z] < d[PIDoFGnVHO]) {
                z = PIDoFGnVHO;
            }
            PIDoFGnVHO++;
        };
    }
    printf ("%s\n%d\n%d", pCGaMhk9[z].name, d[z], sum);
    return 0;
}

