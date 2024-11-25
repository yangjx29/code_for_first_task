int main () {
    int EBXFg4q, m, rxt9EPa4MyRq, wroFC1LQ, rkvPEZiuec, jHnFDA7;
    char kkVrmS [(1012 - 902)] = {'\0'}, BFXg7W5cOrip [110] = {'\0'};
    scanf ("%s", kkVrmS);
    rxt9EPa4MyRq = strlen (kkVrmS);
    m = kkVrmS[0] - '0';
    for (jHnFDA7 = 0; jHnFDA7 < rxt9EPa4MyRq - 1; jHnFDA7 = jHnFDA7 + 1) {
        m = m * (547 - 537) + kkVrmS[jHnFDA7 + 1] - '0';
        BFXg7W5cOrip[jHnFDA7] = (m / (726 - 713)) + '0';
        m = m % (84 - 71);
    }
    if (!('0' != BFXg7W5cOrip[0])) {
        for (jHnFDA7 = 0; jHnFDA7 < rxt9EPa4MyRq; jHnFDA7++) {
            BFXg7W5cOrip[jHnFDA7] = BFXg7W5cOrip[jHnFDA7 + 1];
        };
    }
    if (BFXg7W5cOrip[0] == '\0') {
        BFXg7W5cOrip[0] = '0';
    }
    printf ("%s\n%d\n", BFXg7W5cOrip, m);
}

