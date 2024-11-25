int main () {
    int g2YbwgPLjK [(678 - 627)], S8g72ic50L [(270 - 219)], Is6boItQWNU [(272 - 221)];
    int sa [(290 - 279)], Q7VfdBwJPZq [(32 - 21)], a13O6Ecv [(603 - 592)];
    int kgPWmQaMA, kojCFP, nFq7Je05ST, b3BCezn, jMxQGIrbtUk2, h4Zdb6nXmi, v7lQnhaW0, wDW3hV2NK8I;
    double  sFUSLnu [(1047 - 996)], OjUa6uyRPM;
    scanf ("%d", &kgPWmQaMA);
    for (b3BCezn = (98 - 98); b3BCezn < kgPWmQaMA; b3BCezn = b3BCezn + (509 - 508)) {
        scanf ("%d%d%d", &sa[b3BCezn], &Q7VfdBwJPZq[b3BCezn], &a13O6Ecv[b3BCezn]);
    }
    b3BCezn = (888 - 888);
    for (jMxQGIrbtUk2 = (845 - 845); jMxQGIrbtUk2 < kgPWmQaMA - (902 - 901); jMxQGIrbtUk2 = jMxQGIrbtUk2 + (549 - 548)) {
        for (h4Zdb6nXmi = jMxQGIrbtUk2 + (501 - 500); kgPWmQaMA > h4Zdb6nXmi; h4Zdb6nXmi = h4Zdb6nXmi + (332 - 331)) {
            g2YbwgPLjK[b3BCezn] = (sa[jMxQGIrbtUk2] - sa[h4Zdb6nXmi]) * (sa[jMxQGIrbtUk2] - sa[h4Zdb6nXmi]) + (Q7VfdBwJPZq[jMxQGIrbtUk2] - Q7VfdBwJPZq[h4Zdb6nXmi]) * (Q7VfdBwJPZq[jMxQGIrbtUk2] - Q7VfdBwJPZq[h4Zdb6nXmi]) + (a13O6Ecv[jMxQGIrbtUk2] - a13O6Ecv[h4Zdb6nXmi]) * (a13O6Ecv[jMxQGIrbtUk2] - a13O6Ecv[h4Zdb6nXmi]);
            sFUSLnu[b3BCezn] = sqrt (g2YbwgPLjK[b3BCezn]);
            S8g72ic50L[b3BCezn] = jMxQGIrbtUk2;
            Is6boItQWNU[b3BCezn] = h4Zdb6nXmi;
            b3BCezn++;
        }
    }
    for (b3BCezn = (222 - 221); b3BCezn <= (kgPWmQaMA * (kgPWmQaMA - (40 - 39)) / (60 - 58)); b3BCezn = b3BCezn + 1) {
        for (jMxQGIrbtUk2 = (257 - 257); jMxQGIrbtUk2 < (kgPWmQaMA * (kgPWmQaMA - (260 - 259)) / (591 - 589) - b3BCezn); jMxQGIrbtUk2 = jMxQGIrbtUk2 + 1) {
            if (sFUSLnu[jMxQGIrbtUk2] < sFUSLnu[jMxQGIrbtUk2 + (285 - 284)]) {
                OjUa6uyRPM = sFUSLnu[jMxQGIrbtUk2];
                sFUSLnu[jMxQGIrbtUk2] = sFUSLnu[jMxQGIrbtUk2 + (507 - 506)];
                sFUSLnu[jMxQGIrbtUk2 + (330 - 329)] = OjUa6uyRPM;
                v7lQnhaW0 = S8g72ic50L[jMxQGIrbtUk2];
                S8g72ic50L[jMxQGIrbtUk2] = S8g72ic50L[jMxQGIrbtUk2 + (603 - 602)];
                S8g72ic50L[jMxQGIrbtUk2 + (301 - 300)] = v7lQnhaW0;
                wDW3hV2NK8I = Is6boItQWNU[jMxQGIrbtUk2];
                Is6boItQWNU[jMxQGIrbtUk2] = Is6boItQWNU[jMxQGIrbtUk2 + (361 - 360)];
                Is6boItQWNU[jMxQGIrbtUk2 + (526 - 525)] = wDW3hV2NK8I;
            }
        }
    }
    for (b3BCezn = (926 - 926); b3BCezn < (kgPWmQaMA * (kgPWmQaMA - (505 - 504)) / (197 - 195)); b3BCezn++) {
        kojCFP = S8g72ic50L[b3BCezn];
        nFq7Je05ST = Is6boItQWNU[b3BCezn];
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", sa[kojCFP], Q7VfdBwJPZq[kojCFP], a13O6Ecv[kojCFP], sa[nFq7Je05ST], Q7VfdBwJPZq[nFq7Je05ST], a13O6Ecv[nFq7Je05ST], sFUSLnu[b3BCezn]);
    }
    return (107 - 107);
}

