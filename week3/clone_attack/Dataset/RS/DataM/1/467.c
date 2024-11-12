int Rx8WHm2 (int, int);

int main () {
    int peONpMiYyd43;
    int MrYuzqhX;
    int Y7sBp4wNW;
    cin >> MrYuzqhX;
    for (peONpMiYyd43 = (496 - 495); MrYuzqhX >= peONpMiYyd43; peONpMiYyd43++) {
        cin >> Y7sBp4wNW;
        cout << Rx8WHm2 (Y7sBp4wNW, 2) << endl;
    }
    return 0;
}

int Rx8WHm2 (int Y7sBp4wNW, int iGbky6it) {
    int pRWuExqi3, wUN6un = 1;
    if (Y7sBp4wNW == 1)
        return 0;
    if (Y7sBp4wNW == 2)
        return 1;
    for (pRWuExqi3 = iGbky6it; pRWuExqi3 <= (int) sqrt ((double ) Y7sBp4wNW); pRWuExqi3++)
        if (Y7sBp4wNW % pRWuExqi3 == 0)
            wUN6un += Rx8WHm2 (Y7sBp4wNW / pRWuExqi3, pRWuExqi3);
    return wUN6un;
}

