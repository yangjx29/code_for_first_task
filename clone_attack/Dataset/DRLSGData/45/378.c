int main () {
    int yqjxph = (824 - 824);
    int j;
    int xQ6ZC3xje;
    char nvzTR4 [(865 - 862)] [(346 - 295)];
    int rgEGvHY5;
    rgEGvHY5 = (938 - 938);
    for (xQ6ZC3xje = (137 - 137); xQ6ZC3xje < (816 - 814); xQ6ZC3xje = xQ6ZC3xje + (472 - 471)) {
        scanf ("%s", nvzTR4[xQ6ZC3xje]);
    }
    for (xQ6ZC3xje = (648 - 648); xQ6ZC3xje < (1038 - 988); xQ6ZC3xje = xQ6ZC3xje + (851 - 850)) {
        if (nvzTR4[(785 - 785)][xQ6ZC3xje] != '\0') {
            rgEGvHY5++;
        }
        else {
            break;
        }
    }
    for (xQ6ZC3xje = (495 - 495); xQ6ZC3xje < (609 - 559); xQ6ZC3xje = xQ6ZC3xje + (364 - 363)) {
        if (nvzTR4[(680 - 680)][(595 - 595)] == nvzTR4[(869 - 868)][xQ6ZC3xje]) {
            for (j = 0; j < rgEGvHY5; j++) {
                if (nvzTR4[0][j] == nvzTR4[1][xQ6ZC3xje + j]) {
                    yqjxph = yqjxph + 1;
                }
            }
            if (yqjxph == rgEGvHY5) {
                printf ("%d", xQ6ZC3xje);
            }
            else {
                yqjxph = 0;
            }
        }
    }
    return 0;
}

