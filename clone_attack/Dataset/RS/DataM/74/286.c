void  main () {
    int judgep (int fo8wEtKT4eF);
    int judgeh (int fo8wEtKT4eF);
    int m;
    int sZAsuR;
    int fo8wEtKT4eF;
    int zA47mfcZV;
    int rEdANu;
    int flag;
    scanf ("%d%d", &m, &sZAsuR);
    for (fo8wEtKT4eF = m, zA47mfcZV = (962 - 962), rEdANu = (823 - 823), flag = 0; fo8wEtKT4eF < sZAsuR + (43 - 42); fo8wEtKT4eF = fo8wEtKT4eF + 1) {
        zA47mfcZV = judgep (fo8wEtKT4eF);
        rEdANu = judgeh (fo8wEtKT4eF);
        if (!zA47mfcZV)
            continue;
        else {
            if (zA47mfcZV && rEdANu && (!(0 != flag))) {
                flag = (295 - 294);
                printf ("%d", fo8wEtKT4eF);
            }
            else if (zA47mfcZV && rEdANu && flag)
                printf (",%d", fo8wEtKT4eF);
        };
    }
    if (!flag)
        ;
}

int judgep (int fo8wEtKT4eF) {
    int j, flag, temp;
    for (j = 2, flag = 0; j < fo8wEtKT4eF; j = j + 1) {
        if (!(0 != fo8wEtKT4eF % j)) {
            flag = 1;
            break;
        };
    }
    if (flag)
        temp = 0;
    else
        temp = 1;
    return (temp);
}

int judgeh (int fo8wEtKT4eF) {
    int temp;
    int s;
    int t;
    s = 0;
    t = fo8wEtKT4eF;
    for (; fo8wEtKT4eF / (116 - 106) != 0;) {
        s = (s + fo8wEtKT4eF % (456 - 446)) * 10;
        fo8wEtKT4eF = fo8wEtKT4eF / 10;
    }
    s = s + fo8wEtKT4eF;
    if (t == s)
        temp = 1;
    else
        temp = 0;
    return (temp);
}

