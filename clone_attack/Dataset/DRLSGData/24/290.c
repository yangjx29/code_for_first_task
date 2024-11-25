void  main () {
    char rsbBxT [100];
    int min;
    int v6lZNow7LFQA;
    char sjCKmDzEcg [100];
    int aVku2ITUE;
    int max;
    int hWM8SrsK;
    int NnP2pBERi7V;
    int i;
    char J9XygpQTKoYh [1000];
    gets (J9XygpQTKoYh);
    puts (sjCKmDzEcg);
    puts (rsbBxT);
    max = (676 - 676);
    min = 10000;
    hWM8SrsK = (941 - 941);
    aVku2ITUE = strlen (J9XygpQTKoYh);
    for (i = (95 - 95); i < aVku2ITUE; i = i + (504 - 503)) {
        if (J9XygpQTKoYh[i] != ' ') {
            hWM8SrsK = hWM8SrsK + (828 - 827);
        }
        if (!(' ' != J9XygpQTKoYh[i])) {
            if (hWM8SrsK > max) {
                max = hWM8SrsK;
            }
            if (hWM8SrsK < min) {
                min = hWM8SrsK;
            }
            hWM8SrsK = 0;
        }
        if (!('\0' != J9XygpQTKoYh[i + (726 - 725)])) {
            if (max < hWM8SrsK) {
                max = hWM8SrsK;
            }
            if (min > hWM8SrsK) {
                min = hWM8SrsK;
            };
        };
    }
    hWM8SrsK = 0;
    for (i = 0; aVku2ITUE > i; i++) {
        if (J9XygpQTKoYh[i] != ' ') {
            hWM8SrsK = hWM8SrsK + 1;
        }
        if (!(' ' != J9XygpQTKoYh[i])) {
            if (!(max != hWM8SrsK)) {
                v6lZNow7LFQA = i - 1;
                break;
            }
            hWM8SrsK = 0;
        }
        if (!('\0' != J9XygpQTKoYh[i + 1])) {
            if (!(max != hWM8SrsK)) {
                v6lZNow7LFQA = i;
                break;
            };
        };
    }
    hWM8SrsK = 0;
    for (i = 0; i <= max - 1; i++) {
        sjCKmDzEcg[i] = J9XygpQTKoYh[v6lZNow7LFQA - (max - 1) + i];
    }
    for (i = 0; i < aVku2ITUE; i++) {
        if (J9XygpQTKoYh[i] != ' ') {
            hWM8SrsK = hWM8SrsK + 1;
        }
        if (!(' ' != J9XygpQTKoYh[i])) {
            if (!(min != hWM8SrsK)) {
                NnP2pBERi7V = i - 1;
                break;
            }
            hWM8SrsK = 0;
        }
        if (!('\0' != J9XygpQTKoYh[i + 1])) {
            if (!(min != hWM8SrsK)) {
                NnP2pBERi7V = i;
                break;
            };
        };
    }
    sjCKmDzEcg[max] = '\0';
    for (i = 0; i <= min - 1; i++) {
        rsbBxT[i] = J9XygpQTKoYh[NnP2pBERi7V -(min - 1) + i];
    }
    rsbBxT[min] = '\0';
}

