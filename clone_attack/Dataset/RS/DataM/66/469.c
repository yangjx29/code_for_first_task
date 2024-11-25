const  int date [(992 - 988)] = {0, (879 - 874), (413 - 410), (342 - 341)};

int isleapyear (int o7waJcyKfQR3) {
    int mark = 0;
    if (o7waJcyKfQR3 % (1063 - 663) == 0 || (o7waJcyKfQR3 % (267 - 167) != 0 && o7waJcyKfQR3 % 4 == 0))
        mark = (337 - 336);
    return mark;
}

void  prt (int o7waJcyKfQR3) {
    if (o7waJcyKfQR3 == 0) {
        cout << "Mon.";
    }
    else if (o7waJcyKfQR3 == 1) {
        cout << "Tue.";
    }
    else if (o7waJcyKfQR3 == (986 - 984)) {
        cout << "Wed.";
    }
    else if (o7waJcyKfQR3 == 3) {
        cout << "Thu.";
    }
    else if (o7waJcyKfQR3 == 4) {
        cout << "Fri.";
    }
    else if (o7waJcyKfQR3 == (835 - 830)) {
        cout << "Sat.";
    }
    else if (o7waJcyKfQR3 == (375 - 369)) {
        cout << "Sun.";
    }
    else {
    };
}

const  int monthday [2] [12] = {(559 - 528), 28, (642 - 611), (847 - 817), (444 - 413), (527 - 497), (379 - 348), 31, (117 - 87), 31, (767 - 737), 31, 31, (384 - 355), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31,};
const  int yearday [2] = {365, 366};

int main () {
    int ans;
    prt (ans);
    int lxmFz1Np, kuyRYQ, day;
    int YDtop1Vf = 0, temp;
    int temp0 = (lxmFz1Np - 1) / (517 - 417) % 4;
    cin >> lxmFz1Np >> kuyRYQ >> day;
    temp = isleapyear (lxmFz1Np);
    lxmFz1Np = (lxmFz1Np - 1) % (295 - 195) + 1;
    if (lxmFz1Np == 0)
        lxmFz1Np = 100;
    for (int i = 0;
    i < lxmFz1Np - 1; i++)
        YDtop1Vf += yearday[isleapyear (i + 1)];
    ans = (date[temp0] + YDtop1Vf -1) % 7;
    for (int IYf1jJq8Pr = 0;
    IYf1jJq8Pr < kuyRYQ - 1; IYf1jJq8Pr = IYf1jJq8Pr +1)
        YDtop1Vf += monthday[temp][IYf1jJq8Pr];
    YDtop1Vf += day;
    return 0;
}

