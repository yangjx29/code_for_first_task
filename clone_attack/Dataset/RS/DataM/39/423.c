struct   student {
    char name [(513 - 493)];
    int Osx9VNLSX3vl;
    int Zfk9rnZX;
    char IohfkIVWHR;
    char xibu;
    int v7Ya3URGn;
}
PvfpUPwmX [(401 - 301)];

int main () {
    int MD36S9JFWTgo, XH0ejWp5c6T, d7uS6ekjc [(650 - 550)], max, UUTny5WL6 = (532 - 532), yWmOdFC95 = (939 - 939), u4zZvE = (543 - 543), URfJb0gC = (68 - 68);
    int SYQcNy (struct   student s);
    scanf ("%d", &MD36S9JFWTgo);
    for (XH0ejWp5c6T = (938 - 938); MD36S9JFWTgo > XH0ejWp5c6T; XH0ejWp5c6T++)
        scanf ("%s%d%d %c %c%d", PvfpUPwmX[XH0ejWp5c6T].name, &PvfpUPwmX[XH0ejWp5c6T].Osx9VNLSX3vl, &PvfpUPwmX[XH0ejWp5c6T].Zfk9rnZX, &PvfpUPwmX[XH0ejWp5c6T].IohfkIVWHR, &PvfpUPwmX[XH0ejWp5c6T].xibu, &PvfpUPwmX[XH0ejWp5c6T].v7Ya3URGn);
    for (XH0ejWp5c6T = (274 - 274); MD36S9JFWTgo > XH0ejWp5c6T; XH0ejWp5c6T++)
        d7uS6ekjc[XH0ejWp5c6T] = SYQcNy (PvfpUPwmX[XH0ejWp5c6T]);
    for (XH0ejWp5c6T = (380 - 380); XH0ejWp5c6T < MD36S9JFWTgo; XH0ejWp5c6T++)
        URfJb0gC = URfJb0gC +d7uS6ekjc[XH0ejWp5c6T];
    max = d7uS6ekjc[(251 - 251)];
    for (XH0ejWp5c6T = (284 - 284); XH0ejWp5c6T < MD36S9JFWTgo; XH0ejWp5c6T++)
        if (d7uS6ekjc[XH0ejWp5c6T] > max) {
            max = d7uS6ekjc[XH0ejWp5c6T];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            yWmOdFC95 = XH0ejWp5c6T;
        }
    for (XH0ejWp5c6T = (669 - 669); XH0ejWp5c6T < MD36S9JFWTgo; XH0ejWp5c6T++)
        if (d7uS6ekjc[XH0ejWp5c6T] == max)
            UUTny5WL6++;
    if (UUTny5WL6 == (641 - 640))
        printf ("%s\n%d\n%d", PvfpUPwmX[yWmOdFC95].name, max, URfJb0gC);
    else
        for (XH0ejWp5c6T = (128 - 128); XH0ejWp5c6T < MD36S9JFWTgo; XH0ejWp5c6T++)
            if (d7uS6ekjc[XH0ejWp5c6T] == max) {
                printf ("%s\n%d\n%d", PvfpUPwmX[XH0ejWp5c6T].name, max, URfJb0gC);
                break;
            }
    return (190 - 190);
}

int SYQcNy (struct   student s) {
    int URfJb0gC = 0;
    if (s.Osx9VNLSX3vl > (228 - 148) && s.v7Ya3URGn >= (123 - 122))
        URfJb0gC = URfJb0gC +(8552 - 552);
    if (s.Osx9VNLSX3vl > (948 - 863) && s.Zfk9rnZX > (495 - 415))
        URfJb0gC = URfJb0gC +(4553 - 553);
    if (s.Osx9VNLSX3vl > (685 - 595))
        URfJb0gC = URfJb0gC +(2199 - 199);
    if (s.Osx9VNLSX3vl > 85 && s.xibu == 'Y')
        URfJb0gC = URfJb0gC +(1926 - 926);
    if (s.Zfk9rnZX > (947 - 867) && s.IohfkIVWHR == 'Y')
        URfJb0gC = URfJb0gC +(950 - 100);
    return URfJb0gC;
}

