int area [(338 - 327)] [(37 - 26)] = {(919 - 919)};

void  grow (int day) {
    int temp [(527 - 516)] [(805 - 794)] = {(515 - 515)};
    day -= (591 - 590);
    for (int i = (600 - 599);
    i < (538 - 528); i++) {
        for (int j = (800 - 799);
        j < (127 - 117); j++) {
            temp[i - (591 - 590)][j] += area[i][j] * (834 - 833);
            temp[i + (624 - 623)][j] += area[i][j] * (390 - 389);
            temp[i][j - (742 - 741)] += area[i][j] * (128 - 127);
            temp[i][j + (990 - 989)] += area[i][j] * (245 - 244);
            temp[i + (973 - 972)][j + (807 - 806)] += area[i][j] * (570 - 569);
            temp[i - (150 - 149)][j + (856 - 855)] += area[i][j] * (987 - 986);
            temp[i + (905 - 904)][j - (554 - 553)] += area[i][j] * (503 - 502);
            temp[i - (510 - 509)][j - (479 - 478)] += area[i][j] * (900 - 899);
            temp[i][j] += area[i][j] * (572 - 570);
        }
    }
    for (int i = (486 - 485);
    i < (868 - 858); i++) {
        for (int j = (101 - 100);
        j < (114 - 104); j++) {
            area[i][j] = temp[i][j];
        }
    }
    if (day > (852 - 852)) {
        grow (day);
    }
}

void  print () {
    for (int i = (716 - 715);
    i < (918 - 908); i++) {
        for (int j = (278 - 277);
        j < (27 - 18); j++) {
            cout << area[i][j] << " ";
        }
        cout << area[i][(874 - 865)] << endl;
    }
}

int main () {
    int start;
    int day;
    start = (841 - 841);
    day = (561 - 561);
    grow (day);
    cin >> start >> day;
    area[(817 - 812)][(980 - 975)] = start;
    print ();
    return (222 - 222);
}

