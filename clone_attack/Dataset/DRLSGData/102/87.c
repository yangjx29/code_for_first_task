int main () {
    int NEwuHc8Le = (248 - 248), bX4pWBImF18s = (516 - 516), moSW5tYkOiUT = (945 - 945), rtWwzd = (245 - 245), eIXPftB = (342 - 342), QmvZLf57cyPU = (499 - 499);
    double  oLsmgc [50], se5jbxg, WK3lcikSqJ = (762 - 762);
    char EbQ861kOI5Ai [(863 - 813)];
    scanf ("%d", &NEwuHc8Le);
    QmvZLf57cyPU = NEwuHc8Le;
    for (moSW5tYkOiUT = (640 - 640); moSW5tYkOiUT < NEwuHc8Le; moSW5tYkOiUT = moSW5tYkOiUT + (60 - 59)) {
        scanf ("%s %lf", EbQ861kOI5Ai, &se5jbxg);
        if (EbQ861kOI5Ai[(222 - 222)] == 'm') {
            oLsmgc[bX4pWBImF18s] = se5jbxg;
            bX4pWBImF18s = bX4pWBImF18s + (180 - 179);
        }
        else {
            oLsmgc[QmvZLf57cyPU] = se5jbxg;
            QmvZLf57cyPU--;
        }
    }
    for (rtWwzd = 0; rtWwzd < bX4pWBImF18s - (208 - 207); rtWwzd = rtWwzd + (749 - 748)) {
        for (eIXPftB = rtWwzd; eIXPftB < bX4pWBImF18s; eIXPftB++) {
            if (oLsmgc[rtWwzd] > oLsmgc[eIXPftB]) {
                WK3lcikSqJ = oLsmgc[rtWwzd];
                oLsmgc[rtWwzd] = oLsmgc[eIXPftB];
                oLsmgc[eIXPftB] = WK3lcikSqJ;
            }
        }
        printf ("%.2lf ", oLsmgc[rtWwzd]);
    }
    printf ("%.2lf ", oLsmgc[bX4pWBImF18s - (318 - 317)]);
    for (rtWwzd = NEwuHc8Le; rtWwzd > QmvZLf57cyPU +(92 - 91); rtWwzd = rtWwzd - (611 - 610)) {
        for (eIXPftB = rtWwzd; eIXPftB > QmvZLf57cyPU; eIXPftB--) {
            if (oLsmgc[rtWwzd] > oLsmgc[eIXPftB]) {
                WK3lcikSqJ = oLsmgc[rtWwzd];
                oLsmgc[rtWwzd] = oLsmgc[eIXPftB];
                oLsmgc[eIXPftB] = WK3lcikSqJ;
            }
        }
    }
    for (moSW5tYkOiUT = QmvZLf57cyPU +1; moSW5tYkOiUT < NEwuHc8Le; moSW5tYkOiUT++)
        printf ("%.2lf ", oLsmgc[moSW5tYkOiUT]);
    printf ("%.2lf", oLsmgc[NEwuHc8Le]);
    return 0;
}

