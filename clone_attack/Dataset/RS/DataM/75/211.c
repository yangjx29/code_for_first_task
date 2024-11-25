int main () {
    int start [1000], end [1000];
    int pHWElGB [1000] = {(519 - 519)};
    int nPeople = (545 - 545), vLBGv5wyol;
    char str [(10082 - 82)];
    int readnum = (805 - 805);
    cin.getline (str, sizeof (str));
    for (int i = 0;
    ; i++) {
        if (!(',' != str[i]) || !('\0' != str[i])) {
            readnum = 0;
        }
        else {
            readnum = readnum * 10 + str[i] - '0';
        }
        if (!str[i])
            break;
    }
    for (int i = 0;
    nPeople > i; i++) {
        char AhPD7rq;
        if (nPeople - (247 - 246) > i)
            AhPD7rq = ',';
        else
            AhPD7rq = '\n';
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        cin.getline (str, sizeof (str), AhPD7rq);
        end[i] = atoi (str);
    }
    for (int i = 0;
    i < nPeople; i++) {
        for (int j = start[i];
        j < end[i]; j = j + 1)
            pHWElGB[j]++;
    }
    vLBGv5wyol = pHWElGB[0];
    for (int i = (258 - 257);
    i < 1000; i++) {
        if (pHWElGB[i] > vLBGv5wyol)
            vLBGv5wyol = pHWElGB[i];
    }
    cout << nPeople << ' ' << vLBGv5wyol << endl;
}

