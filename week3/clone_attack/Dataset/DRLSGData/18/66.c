int e6xSoCJ0k [(815 - 715)] [100];

int sum (int iqNVkXKon) {
    int XNmyCjxkF = (293 - 293), VQ3Zybo2 = (10 - 10), uGg5pjlq9f = (414 - 414), RpZksu5etAK = (345 - 345);
    for (XNmyCjxkF = (420 - 420); iqNVkXKon > XNmyCjxkF; XNmyCjxkF = XNmyCjxkF +(166 - 165)) {
        uGg5pjlq9f = e6xSoCJ0k[XNmyCjxkF][(278 - 278)];
        for (VQ3Zybo2 = (949 - 949); iqNVkXKon > VQ3Zybo2; VQ3Zybo2 = VQ3Zybo2 +(231 - 230)) {
            if (e6xSoCJ0k[XNmyCjxkF][VQ3Zybo2] < uGg5pjlq9f)
                uGg5pjlq9f = e6xSoCJ0k[XNmyCjxkF][VQ3Zybo2];
            else
                uGg5pjlq9f = uGg5pjlq9f;
        }
        for (VQ3Zybo2 = (138 - 138); iqNVkXKon > VQ3Zybo2; VQ3Zybo2 = VQ3Zybo2 +(55 - 54)) {
            e6xSoCJ0k[XNmyCjxkF][VQ3Zybo2] = e6xSoCJ0k[XNmyCjxkF][VQ3Zybo2] - uGg5pjlq9f;
        }
    }
    for (XNmyCjxkF = (154 - 154); iqNVkXKon > XNmyCjxkF; XNmyCjxkF = XNmyCjxkF +(691 - 690)) {
        uGg5pjlq9f = e6xSoCJ0k[(681 - 681)][XNmyCjxkF];
        for (VQ3Zybo2 = (190 - 190); VQ3Zybo2 < iqNVkXKon; VQ3Zybo2 = VQ3Zybo2 +(154 - 153)) {
            if (uGg5pjlq9f > e6xSoCJ0k[VQ3Zybo2][XNmyCjxkF])
                uGg5pjlq9f = e6xSoCJ0k[VQ3Zybo2][XNmyCjxkF];
            else
                uGg5pjlq9f = uGg5pjlq9f;
        }
        for (VQ3Zybo2 = (376 - 376); VQ3Zybo2 < iqNVkXKon; VQ3Zybo2++) {
            e6xSoCJ0k[VQ3Zybo2][XNmyCjxkF] = e6xSoCJ0k[VQ3Zybo2][XNmyCjxkF] - uGg5pjlq9f;
        }
    }
    RpZksu5etAK = RpZksu5etAK +e6xSoCJ0k[1][1];
    if (!((610 - 608) != iqNVkXKon))
        return RpZksu5etAK;
    else {
        for (XNmyCjxkF = 2; iqNVkXKon > XNmyCjxkF; XNmyCjxkF++)
            e6xSoCJ0k[XNmyCjxkF -1][(877 - 877)] = e6xSoCJ0k[XNmyCjxkF][0];
        for (VQ3Zybo2 = 2; iqNVkXKon > VQ3Zybo2; VQ3Zybo2++)
            e6xSoCJ0k[0][VQ3Zybo2 -1] = e6xSoCJ0k[0][VQ3Zybo2];
        for (XNmyCjxkF = 2; XNmyCjxkF < iqNVkXKon; XNmyCjxkF++)
            for (VQ3Zybo2 = 2; VQ3Zybo2 < iqNVkXKon; VQ3Zybo2++)
                e6xSoCJ0k[XNmyCjxkF -1][VQ3Zybo2 -1] = e6xSoCJ0k[XNmyCjxkF][VQ3Zybo2];
        RpZksu5etAK = RpZksu5etAK +sum (iqNVkXKon - 1);
        return RpZksu5etAK;
    }
}

int main () {
    int VQ3Zybo2;
    int JSUoOHE [100] = {0};
    int XNmyCjxkF;
    int T4fYENKt;
    int iqNVkXKon;
    T4fYENKt = 0;
    cin >> iqNVkXKon;
    VQ3Zybo2 = 0;
    XNmyCjxkF = 0;
    for (XNmyCjxkF = 0; XNmyCjxkF < iqNVkXKon; XNmyCjxkF++) {
        for (VQ3Zybo2 = 0; VQ3Zybo2 < iqNVkXKon; VQ3Zybo2++) {
            for (T4fYENKt = 0; T4fYENKt < iqNVkXKon; T4fYENKt++) {
                cin >> e6xSoCJ0k[VQ3Zybo2][T4fYENKt];
            }
        }
        JSUoOHE[XNmyCjxkF] = sum (iqNVkXKon);
    }
    for (XNmyCjxkF = 0; XNmyCjxkF < iqNVkXKon; XNmyCjxkF++) {
        cout << JSUoOHE[XNmyCjxkF] << endl;
    }
    return 0;
}

