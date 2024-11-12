int main () {
    int bHX7b3sY, LRtf3gElLWY [100], idJRHIZO2k, TCkdUbnRiN, WRq46OC5Z;
    WRq46OC5Z = 0;
    cin >> bHX7b3sY;
    for (idJRHIZO2k = 0; idJRHIZO2k < bHX7b3sY; idJRHIZO2k = idJRHIZO2k + 1)
        cin >> LRtf3gElLWY[idJRHIZO2k];
    TCkdUbnRiN = (132 - 132);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    for (idJRHIZO2k = 0; idJRHIZO2k < bHX7b3sY; idJRHIZO2k++)
        if (LRtf3gElLWY[idJRHIZO2k] > TCkdUbnRiN)
            TCkdUbnRiN = LRtf3gElLWY[idJRHIZO2k];
    for (idJRHIZO2k = 0; idJRHIZO2k < bHX7b3sY; idJRHIZO2k++)
        if (LRtf3gElLWY[idJRHIZO2k] > WRq46OC5Z)
            if (LRtf3gElLWY[idJRHIZO2k] != TCkdUbnRiN)
                WRq46OC5Z = LRtf3gElLWY[idJRHIZO2k];
    cout << TCkdUbnRiN << endl << WRq46OC5Z << endl;
    return 0;
}

