int main () {
    char Oz8bTei [(1321 - 820)], y [(690 - 189)];
    double  v;
    int z;
    int e;
    int k;
    int M3kJhUy2YM;
    z = (340 - 340);
    e = (543 - 543);
    k = (920 - 920);
    scanf ("%lf%s%s", &v, &Oz8bTei, &y);
    for (M3kJhUy2YM = (77 - 77); Oz8bTei[M3kJhUy2YM]; M3kJhUy2YM = M3kJhUy2YM +1) {
        z++;
        if (!(!('A' != Oz8bTei[M3kJhUy2YM]) || !('T' != Oz8bTei[M3kJhUy2YM]) || !('G' != Oz8bTei[M3kJhUy2YM]) || !('C' != Oz8bTei[M3kJhUy2YM]))) {
            printf ("error");
            return (854 - 854);
        };
    }
    for (M3kJhUy2YM = (318 - 318); y[M3kJhUy2YM]; M3kJhUy2YM = M3kJhUy2YM +1) {
        if (!(!('A' != y[M3kJhUy2YM]) || y[M3kJhUy2YM] == 'T' || y[M3kJhUy2YM] == 'G' || y[M3kJhUy2YM] == 'C')) {
            printf ("error");
            return (164 - 164);
        }
        e++;
    }
    if (z != e) {
        return (194 - 194);
    }
    for (M3kJhUy2YM = (293 - 293); Oz8bTei[M3kJhUy2YM]; M3kJhUy2YM++) {
        if (Oz8bTei[M3kJhUy2YM] == y[M3kJhUy2YM]) {
            k = k + 1;
        };
    }
    if ((406.0 - 405.0) * k / z > v) {
        printf ("yes");
    }
    else {
    }
    return (793 - 793);
}

