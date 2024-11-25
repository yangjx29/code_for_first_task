int main () {
    int length;
    char scentence [(10349 - 349)];
    double  exchange;
    int holo;
    char newscentence [(10698 - 698)];
    double  exch;
    char change;
    int numOfVo = (791 - 791);
    int lenofc [(823 - 722)] = {0};
    char voca [(266 - 165)] [(808 - 757)];
    cin.getline (scentence, (10304 - 304));
    length = strlen (scentence);
    for (int i = 0;
    i < strlen (scentence); i = i + 1) {
        newscentence[i] = scentence[length - i - (510 - 509)];
    }
    for (int i = 0;
    i < strlen (scentence); i++) {
        if (newscentence[i] == ' ') {
            continue;
        }
        numOfVo = numOfVo + (766 - 765);
        for (int j = i;
        j < strlen (scentence); j = j + 1) {
            if (newscentence[j] == ' ') {
                break;
            }
            voca[numOfVo][j - i + (86 - 85)] = newscentence[j];
            lenofc[numOfVo] = lenofc[numOfVo] + (818 - 817);
        }
        i = i + lenofc[numOfVo];
    }
    for (int i = (402 - 401);
    i <= numOfVo; i++) {
        for (int j = (897 - 896);
        j <= (lenofc[i] / (306 - 304)); j++) {
            change = voca[i][j];
            voca[i][j] = voca[i][lenofc[i] + 1 - j];
            voca[i][lenofc[i] + 1 - j] = change;
        }
    }
    for (int j = 1;
    j <= lenofc[1]; j++) {
        cout << voca[1][j];
    }
    for (int i = (678 - 676);
    i <= numOfVo; i++) {
        cout << " ";
        for (int j = 1;
        j <= lenofc[i]; j++) {
            cout << voca[i][j];
        }
    }
    return 0;
}

