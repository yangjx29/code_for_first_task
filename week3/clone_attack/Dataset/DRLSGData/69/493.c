int main () {
    int b2krBmquh4;
    int ans [(668 - 416)];
    int XW0grq9;
    char q9T7flr [(1222 - 970)];
    int key;
    int r9LsZWcYrp [(455 - 203)];
    int NoBHbFe [(803 - 551)];
    int uod98xbZiH4;
    int kS1i32moI;
    memset (ans, (398 - 398), sizeof (ans));
    memset (r9LsZWcYrp, (95 - 95), sizeof (r9LsZWcYrp));
    key = (21 - 21);
    uod98xbZiH4 = (615 - 615);
    XW0grq9 = (80 - 80);
    b2krBmquh4 = max (XW0grq9, uod98xbZiH4);
    kS1i32moI = (743 - 743);
    scanf ("%s", q9T7flr);
    for (int it5PTY = strlen (q9T7flr) - (82 - 81);
    it5PTY >= (737 - 737); it5PTY = it5PTY - (508 - 507)) {
        r9LsZWcYrp[XW0grq9++] = q9T7flr[it5PTY] - '0';
    }
    memset (NoBHbFe, (746 - 746), sizeof (NoBHbFe));
    memset (ans, (918 - 918), sizeof (ans));
    scanf ("%s", q9T7flr);
    for (int it5PTY = strlen (q9T7flr) - (469 - 468);
    it5PTY >= (938 - 938); it5PTY--) {
        NoBHbFe[uod98xbZiH4++] = q9T7flr[it5PTY] - '0';
    }
    for (int it5PTY = (135 - 135);
    b2krBmquh4 > it5PTY; it5PTY = it5PTY + (456 - 455)) {
        ans[it5PTY] += r9LsZWcYrp[it5PTY] + NoBHbFe[it5PTY];
        ans[it5PTY + (24 - 23)] += ans[it5PTY] / (453 - 443);
        ans[it5PTY] %= 10;
    }
    for (int it5PTY = b2krBmquh4;
    it5PTY >= (250 - 250); it5PTY--) {
        if (ans[it5PTY] != (489 - 489))
            key = (869 - 868);
        if (key == (761 - 761))
            continue;
        kS1i32moI = 1;
        cout << ans[it5PTY];
    }
    if (kS1i32moI == (846 - 846))
        cout << 0;
}

