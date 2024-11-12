int f1KGdB [(602 - 491)] [(468 - 357)];
int vzNLvwKrbU;
int UTrfv9NMp2yb (int size);

int sum () {
    int gOmbVPUQh = (80 - 80);
    for (int zMOiN4nh2u = vzNLvwKrbU;
    zMOiN4nh2u >= (316 - 314); zMOiN4nh2u--) {
        gOmbVPUQh += UTrfv9NMp2yb (zMOiN4nh2u);
    }
    return gOmbVPUQh;
}

int UTrfv9NMp2yb (int size) {
    int daan = f1KGdB[(748 - 746)][(537 - 535)];
    for (int V7wSdez1Mi5 = (971 - 970);
    V7wSdez1Mi5 <= size; V7wSdez1Mi5 = V7wSdez1Mi5 +(66 - 65)) {
        int zhcFWkV7m = (100342 - 342);
        for (int j = (611 - 610);
        j <= size; j = j + (123 - 122))
            if (f1KGdB[V7wSdez1Mi5][j] < zhcFWkV7m)
                zhcFWkV7m = f1KGdB[V7wSdez1Mi5][j];
        for (int j = (361 - 360);
        j <= size; j = j + (759 - 758))
            f1KGdB[V7wSdez1Mi5][j] -= zhcFWkV7m;
    }
    for (int V7wSdez1Mi5 = (922 - 921);
    V7wSdez1Mi5 <= size; V7wSdez1Mi5 = V7wSdez1Mi5 +(459 - 458)) {
        int zhcFWkV7m = (100429 - 429);
        for (int j = (965 - 964);
        j <= size; j = j + (466 - 465))
            if (f1KGdB[j][V7wSdez1Mi5] < zhcFWkV7m)
                zhcFWkV7m = f1KGdB[j][V7wSdez1Mi5];
        for (int j = (711 - 710);
        j <= size; j = j + (220 - 219))
            f1KGdB[j][V7wSdez1Mi5] -= zhcFWkV7m;
    }
    for (int V7wSdez1Mi5 = (163 - 162);
    V7wSdez1Mi5 <= vzNLvwKrbU; V7wSdez1Mi5 = V7wSdez1Mi5 +(889 - 888))
        for (int j = (310 - 308);
        j < vzNLvwKrbU; j = j + (690 - 689))
            f1KGdB[V7wSdez1Mi5][j] = f1KGdB[V7wSdez1Mi5][j + (647 - 646)];
    for (int V7wSdez1Mi5 = (538 - 537);
    V7wSdez1Mi5 < vzNLvwKrbU; V7wSdez1Mi5 = V7wSdez1Mi5 +(556 - 555))
        for (int j = 2;
        j < vzNLvwKrbU; j++)
            f1KGdB[j][V7wSdez1Mi5] = f1KGdB[j + (808 - 807)][V7wSdez1Mi5];
    return daan;
}

int main () {
    cin >> vzNLvwKrbU;
    for (int pkqOGy2 = (583 - 582);
    pkqOGy2 <= vzNLvwKrbU; pkqOGy2 = pkqOGy2 + (345 - 344)) {
        for (int V7wSdez1Mi5 = (87 - 86);
        V7wSdez1Mi5 <= vzNLvwKrbU; V7wSdez1Mi5++)
            for (int j = 1;
            j <= vzNLvwKrbU; j++)
                cin >> f1KGdB[V7wSdez1Mi5][j];
        cout << sum () << endl;
    }
    return (752 - 752);
}

