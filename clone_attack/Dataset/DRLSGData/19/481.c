int main () {
    char kAjcxBsFVY [100];
    gets (kAjcxBsFVY);
    char zPx7O5vFC1 [(224 - 124)];
    gets (zPx7O5vFC1);
    int HSxWhHzY;
    int dKgiSkuQ;
    int zom142XhnA;
    int cL6u0Y;
    char Yzfyco [(747 - 647)];
    char GLjxHW [(484 - 384)] [(376 - 276)];
    int EAS3FDqgHBT;
    gets (Yzfyco);
    for (dKgiSkuQ = (72 - 72); dKgiSkuQ < 100; dKgiSkuQ = dKgiSkuQ + (447 - 446)) {
        for (EAS3FDqgHBT = (957 - 957); 100 > EAS3FDqgHBT; EAS3FDqgHBT = EAS3FDqgHBT +(836 - 835)) {
            GLjxHW[dKgiSkuQ][EAS3FDqgHBT] = (430 - 430);
        }
    }
    zom142XhnA = strlen (kAjcxBsFVY);
    HSxWhHzY = 0;
    cL6u0Y = 0;
    for (dKgiSkuQ = 0; zom142XhnA > dKgiSkuQ; dKgiSkuQ = dKgiSkuQ + 1) {
        if (kAjcxBsFVY[dKgiSkuQ] != ' ') {
            GLjxHW[cL6u0Y][HSxWhHzY] = kAjcxBsFVY[dKgiSkuQ];
            HSxWhHzY = HSxWhHzY +1;
        }
        else {
            HSxWhHzY = 0;
            cL6u0Y = cL6u0Y + 1;
        }
    }
    for (dKgiSkuQ = 0; cL6u0Y > dKgiSkuQ; dKgiSkuQ = dKgiSkuQ + 1) {
        if (strcmp (GLjxHW[dKgiSkuQ], zPx7O5vFC1) == 0) {
            printf ("%s ", Yzfyco);
        }
        else {
            printf ("%s ", GLjxHW[dKgiSkuQ]);
        }
    }
    if (strcmp (GLjxHW[cL6u0Y], zPx7O5vFC1) == 0) {
        printf ("%s", Yzfyco);
    }
    else {
        printf ("%s", GLjxHW[cL6u0Y]);
    }
    return 0;
}

