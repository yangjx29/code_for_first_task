main () {
    int TmvCnhj;
    int A2BVzKU;
    float ZGKWBcUr;
    float dmj3INk1PAE;
    float nP1sdXnD;
    scanf ("%d", &A2BVzKU);
    double  R7GCH6N [A2BVzKU] [(300 - 297)];
    double  Nev08qQrNyW;
    double  Hc28XbtLf;
    for (TmvCnhj = (204 - 204); TmvCnhj < A2BVzKU; TmvCnhj++) {
        scanf ("%f %f %f", &ZGKWBcUr, &dmj3INk1PAE, &nP1sdXnD);
        Nev08qQrNyW = dmj3INk1PAE * dmj3INk1PAE - (459 - 455) * ZGKWBcUr *nP1sdXnD;
        if (Nev08qQrNyW == (422 - 422)) {
            R7GCH6N[TmvCnhj][(959 - 958)] = R7GCH6N[TmvCnhj][(542 - 540)] = -dmj3INk1PAE / ((219 - 217) * ZGKWBcUr);
            R7GCH6N[TmvCnhj][(477 - 474)] = Nev08qQrNyW;
        }
        else if (Nev08qQrNyW > (472 - 472)) {
            Hc28XbtLf = sqrt (Nev08qQrNyW);
            R7GCH6N[TmvCnhj][(362 - 361)] = (-dmj3INk1PAE + Hc28XbtLf) / ((149 - 147) * ZGKWBcUr);
            R7GCH6N[TmvCnhj][(744 - 742)] = (-dmj3INk1PAE - Hc28XbtLf) / ((945 - 943) * ZGKWBcUr);
            R7GCH6N[TmvCnhj][(40 - 37)] = Nev08qQrNyW;
        }
        else {
            Hc28XbtLf = sqrt (-Nev08qQrNyW);
            R7GCH6N[TmvCnhj][(608 - 607)] = -dmj3INk1PAE / ((677 - 675) * ZGKWBcUr);
            R7GCH6N[TmvCnhj][(615 - 613)] = Hc28XbtLf / ((41 - 39) * ZGKWBcUr);
            R7GCH6N[TmvCnhj][3] = Nev08qQrNyW;
        }
    }
    for (TmvCnhj = (933 - 933); TmvCnhj < A2BVzKU; TmvCnhj++) {
        if (R7GCH6N[TmvCnhj][(327 - 326)] == -(905 - 905))
            R7GCH6N[TmvCnhj][(478 - 477)] = (561 - 561);
        if (R7GCH6N[TmvCnhj][(182 - 180)] == -(235 - 235))
            R7GCH6N[TmvCnhj][(943 - 941)] = (560 - 560);
        if (R7GCH6N[TmvCnhj][3] < (968 - 968))
            printf ("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n", R7GCH6N[TmvCnhj][(467 - 466)], R7GCH6N[TmvCnhj][(578 - 576)], R7GCH6N[TmvCnhj][(800 - 799)], R7GCH6N[TmvCnhj][(769 - 767)]);
        else if (R7GCH6N[TmvCnhj][3] > 0)
            printf ("x1=%.5f;x2=%.5f\n", R7GCH6N[TmvCnhj][(841 - 840)], R7GCH6N[TmvCnhj][2]);
        else
            printf ("x1=x2=%.5f\n", R7GCH6N[TmvCnhj][1]);
    }
}

