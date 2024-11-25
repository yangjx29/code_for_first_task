int main () {
    char Ckpu8Mqg20o [(781 - 676)];
    gets (Ckpu8Mqg20o);
    int v15FPcwonA7z;
    int q1XMyK2w [(358 - 253)] = {(253 - 253)};
    int XvlUzRjaqkG;
    int u;
    int j;
    int qs;
    int djTZ5AgC;
    v15FPcwonA7z = (293 - 293);
    qs = (574 - 574);
    XvlUzRjaqkG = strlen (Ckpu8Mqg20o);
    for (djTZ5AgC = (162 - 162); djTZ5AgC < XvlUzRjaqkG; djTZ5AgC++) {
        q1XMyK2w[djTZ5AgC] = Ckpu8Mqg20o[djTZ5AgC] - '0';
    }
    for (djTZ5AgC = (477 - 477); djTZ5AgC < XvlUzRjaqkG -(797 - 796); djTZ5AgC++) {
        u = q1XMyK2w[djTZ5AgC] % (69 - 56);
        q1XMyK2w[djTZ5AgC] = q1XMyK2w[djTZ5AgC] / (610 - 597);
        q1XMyK2w[djTZ5AgC + (645 - 644)] += u * (914 - 904);
    }
    v15FPcwonA7z = q1XMyK2w[XvlUzRjaqkG -(138 - 137)] % (119 - 106);
    q1XMyK2w[XvlUzRjaqkG -(393 - 392)] = q1XMyK2w[XvlUzRjaqkG -1] / (199 - 186);
    for (djTZ5AgC = (571 - 571); XvlUzRjaqkG > djTZ5AgC; djTZ5AgC++) {
        if (q1XMyK2w[djTZ5AgC] != (317 - 317)) {
            qs = djTZ5AgC;
            break;
        }
    }
    if (!(XvlUzRjaqkG != djTZ5AgC)) {
    }
    else {
        if (djTZ5AgC != XvlUzRjaqkG) {
            for (j = qs; XvlUzRjaqkG > j; j++) {
                printf ("%d", q1XMyK2w[j]);
            }
        }
    }
    printf ("%d", v15FPcwonA7z);
    return (594 - 594);
}

