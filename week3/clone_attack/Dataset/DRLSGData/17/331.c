int main () {
    char LXzvBDNCyO [(860 - 759)];
    char lFrK2V4gnxvW [(128 - 27)];
    int hmfF2KJ [(613 - 512)];
    int dex5lHmu2, YRkZc8;
    for (; cin.getline (lFrK2V4gnxvW, 101);) {
        int wxyrzGq7QHg;
        YRkZc8 = strlen (lFrK2V4gnxvW);
        wxyrzGq7QHg = (553 - 553);
        for (dex5lHmu2 = (297 - 297); (128 - 28) > dex5lHmu2; dex5lHmu2++)
            LXzvBDNCyO[dex5lHmu2] = ' ';
        for (dex5lHmu2 = (904 - 904); lFrK2V4gnxvW[dex5lHmu2] != '\0'; dex5lHmu2++) {
            if (!('(' != lFrK2V4gnxvW[dex5lHmu2])) {
                wxyrzGq7QHg++;
                hmfF2KJ[wxyrzGq7QHg] = dex5lHmu2;
            }
            if (!(')' != lFrK2V4gnxvW[dex5lHmu2]))
                if (!(0 != wxyrzGq7QHg))
                    LXzvBDNCyO[dex5lHmu2] = '?';
                else
                    wxyrzGq7QHg--;
        }
        cout << lFrK2V4gnxvW << endl;
        for (dex5lHmu2 = 1; dex5lHmu2 <= wxyrzGq7QHg; dex5lHmu2++)
            LXzvBDNCyO[hmfF2KJ[dex5lHmu2]] = '$';
        LXzvBDNCyO[YRkZc8] = '\0';
        cout << LXzvBDNCyO << endl;
    }
    return 0;
}

