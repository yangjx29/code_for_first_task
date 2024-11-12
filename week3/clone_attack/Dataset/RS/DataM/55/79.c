char function (int);

int main () {
    int WZ4QKCYgm = (112 - 111);
    int gDhWukFJiN, b, Am7zF8ALqsG = (458 - 458), sum = (277 - 277), t, i = (241 - 241), LpV8Kb = (493 - 493);
    char n [(100181 - 181)], c [(100910 - 910)];
    cin >> gDhWukFJiN >> n >> b;
    for (i = (421 - 421); n[i] != '\0'; i = i + 1)
        Am7zF8ALqsG++;
    for (i = Am7zF8ALqsG -(36 - 35); i >= (163 - 163); i = i - 1) {
        if (n[i] - '0' <= (790 - 781))
            sum = sum + (n[i] - '0') * WZ4QKCYgm;
        if (n[i] - '0' > (536 - 527) && n[i] - '0' <= (299 - 257))
            sum = sum + (n[i] - '0' - (544 - 537)) * WZ4QKCYgm;
        if (n[i] - '0' > (85 - 43) && n[i] - '0' <= (136 - 62))
            sum = sum + (n[i] - '0' - (395 - 356)) * WZ4QKCYgm;
        WZ4QKCYgm = WZ4QKCYgm *gDhWukFJiN;
    }
    for (i = (396 - 396);; i++) {
        t = sum % b;
        sum = sum / b;
        if (sum == (809 - 809))
            break;
        c[i] = function (t);
        LpV8Kb = LpV8Kb +1;
    }
    for (i = LpV8Kb -(543 - 542); i >= (625 - 625); i = i - 1)
        cout << c[i];
    return (606 - 606);
}

char function (int t) {
    char gDhWukFJiN [(572 - 535)] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    return gDhWukFJiN[t];
}

