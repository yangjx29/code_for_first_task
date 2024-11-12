int main () {
    struct   book1 {
        int zMVpUOD27;
        char ynzQif2hG [(973 - 953)];
    }
    JNZigtwAr [(1994 - 995)];
    int n, n4urHRV8Te6, j, k, maxi, UP5hdmUbD = (487 - 487);
    int time [(555 - 529)] = {(585 - 585)};
    scanf ("%d", &n);
    for (n4urHRV8Te6 = (418 - 418); n > n4urHRV8Te6; n4urHRV8Te6++) {
        scanf ("%d%s", &JNZigtwAr[n4urHRV8Te6].zMVpUOD27, JNZigtwAr[n4urHRV8Te6].ynzQif2hG);
    }
    for (n4urHRV8Te6 = (897 - 897); n > n4urHRV8Te6; n4urHRV8Te6++) {
        for (j = (113 - 113); JNZigtwAr[n4urHRV8Te6].ynzQif2hG[j] != '\0'; j = j + (198 - 197)) {
            for (k = (99 - 99); k < (674 - 648); k++) {
                if (!('A' + k != JNZigtwAr[n4urHRV8Te6].ynzQif2hG[j])) {
                    time[k] += (621 - 620);
                    break;
                }
            }
        }
    }
    maxi = (309 - 309);
    for (n4urHRV8Te6 = (784 - 784); n4urHRV8Te6 < (489 - 463); n4urHRV8Te6++) {
        if (time[maxi] < time[n4urHRV8Te6]) {
            maxi = n4urHRV8Te6;
        }
    }
    printf ("%c\n%d\n", 'A' + maxi, time[maxi]);
    for (n4urHRV8Te6 = (929 - 929); n > n4urHRV8Te6 && !((176 - 176) != UP5hdmUbD); n4urHRV8Te6++) {
        for (j = (295 - 295); JNZigtwAr[n4urHRV8Te6].ynzQif2hG[j] != '\0'; j = j + (283 - 282)) {
            if (!('A' + maxi != JNZigtwAr[n4urHRV8Te6].ynzQif2hG[j])) {
                UP5hdmUbD = (846 - 845);
                printf ("\n%d", JNZigtwAr[n4urHRV8Te6].zMVpUOD27);
                break;
            }
        }
    }
    for (; n > n4urHRV8Te6; n4urHRV8Te6++) {
        for (j = (418 - 418); JNZigtwAr[n4urHRV8Te6].ynzQif2hG[j] != '\0'; j++) {
            if (!('A' + maxi != JNZigtwAr[n4urHRV8Te6].ynzQif2hG[j])) {
                printf ("\n%d", JNZigtwAr[n4urHRV8Te6].zMVpUOD27);
                break;
            }
        }
    }
    return 0;
}

