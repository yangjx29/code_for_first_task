int main () {
    long  int QuRLvEmaHQ = 0;
    int gA7mZpu0S;
    int a;
    int ugswvt2iOqp;
    char yU2jXQxpGs7 [PI];
    char D9SOmbzZpRsQ [PI];
    int UkzG5Uou93;
    int q7Y0IDUvfq;
    int wV8nb7E;
    wV8nb7E = UkzG5Uou93;
    scanf ("%d %s %d", &a, yU2jXQxpGs7, &ugswvt2iOqp);
    UkzG5Uou93 = strlen (yU2jXQxpGs7);
    {
        gA7mZpu0S = 0;
        while (UkzG5Uou93 > gA7mZpu0S) {
            if ('a' <= yU2jXQxpGs7[gA7mZpu0S] && 'z' >= yU2jXQxpGs7[gA7mZpu0S]) {
                yU2jXQxpGs7[gA7mZpu0S] = yU2jXQxpGs7[gA7mZpu0S] - 32;
            }
            gA7mZpu0S = gA7mZpu0S + 1;
        };
    }
    gA7mZpu0S = 0;
    for (; gA7mZpu0S < UkzG5Uou93;) {
        if (65 <= yU2jXQxpGs7[gA7mZpu0S] && 90 >= yU2jXQxpGs7[gA7mZpu0S]) {
            q7Y0IDUvfq = (yU2jXQxpGs7[gA7mZpu0S] - 55) * (long  int) pow (a, wV8nb7E - 1);
        }
        if (yU2jXQxpGs7[gA7mZpu0S] >= 48 && 57 >= yU2jXQxpGs7[gA7mZpu0S]) {
            q7Y0IDUvfq = (yU2jXQxpGs7[gA7mZpu0S] - 48) * (long  int) pow (a, wV8nb7E - 1);
        }
        wV8nb7E = wV8nb7E - 1;
        QuRLvEmaHQ = QuRLvEmaHQ +q7Y0IDUvfq;
        gA7mZpu0S = gA7mZpu0S + 1;
    }
    if (QuRLvEmaHQ == 0)
        printf ("0");
    gA7mZpu0S = 0;
    while (QuRLvEmaHQ != 0) {
        D9SOmbzZpRsQ[gA7mZpu0S] = QuRLvEmaHQ % ugswvt2iOqp;
        gA7mZpu0S = gA7mZpu0S + 1;
        QuRLvEmaHQ = QuRLvEmaHQ / ugswvt2iOqp;
    }
    for (wV8nb7E = gA7mZpu0S - 1; wV8nb7E >= 0; wV8nb7E--) {
        if (D9SOmbzZpRsQ[wV8nb7E] >= 0 && D9SOmbzZpRsQ[wV8nb7E] <= 9) {
            printf ("%c", D9SOmbzZpRsQ[wV8nb7E] + 48);
        }
        if (D9SOmbzZpRsQ[wV8nb7E] >= 10 && D9SOmbzZpRsQ[wV8nb7E] <= 35) {
            printf ("%c", D9SOmbzZpRsQ[wV8nb7E] + 55);
        };
    }
    return 0;
}

