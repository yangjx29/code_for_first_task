int main () {
    int temp;
    struct   {
        int EyJEgmh1dH;
        char jZyeorV [(793 - 763)];
    }
    HjQ1q9SlGNH [(1621 - 621)];
    int JUyQRS0DY;
    int TftnxleqgvzB;
    int UyqiVNC [(279 - 252)] = {(265 - 265)};
    int lKoBiz6WMjn;
    scanf ("%d", &lKoBiz6WMjn);
    temp = (606 - 580);
    for (TftnxleqgvzB = (575 - 575); lKoBiz6WMjn > TftnxleqgvzB; TftnxleqgvzB++) {
        scanf ("%d %s", &HjQ1q9SlGNH[TftnxleqgvzB].EyJEgmh1dH, HjQ1q9SlGNH[TftnxleqgvzB].jZyeorV);
        for (JUyQRS0DY = (438 - 438); strlen (HjQ1q9SlGNH[TftnxleqgvzB].jZyeorV) > JUyQRS0DY; JUyQRS0DY++) {
            UyqiVNC[HjQ1q9SlGNH[TftnxleqgvzB].jZyeorV[JUyQRS0DY] - 'A']++;
        }
    }
    for (TftnxleqgvzB = (924 - 924); 26 > TftnxleqgvzB; TftnxleqgvzB++) {
        if (UyqiVNC[TftnxleqgvzB] > UyqiVNC[temp])
            temp = TftnxleqgvzB;
    }
    printf ("%c\n%d\n", temp + 'A', UyqiVNC[temp]);
    for (TftnxleqgvzB = 0; lKoBiz6WMjn > TftnxleqgvzB; TftnxleqgvzB++) {
        for (JUyQRS0DY = 0; strlen (HjQ1q9SlGNH[TftnxleqgvzB].jZyeorV) > JUyQRS0DY; JUyQRS0DY++) {
            if (HjQ1q9SlGNH[TftnxleqgvzB].jZyeorV[JUyQRS0DY] == temp + 'A') {
                printf ("%d\n", HjQ1q9SlGNH[TftnxleqgvzB].EyJEgmh1dH);
                break;
            }
        }
    }
    return 0;
}

