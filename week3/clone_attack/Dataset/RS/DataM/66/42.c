int main () {
    int fGi48sL, month1, day;
    int o7FArB5Vn3IC;
    o7FArB5Vn3IC = fGi48sL - (95 - 94);
    char week [(645 - 638)] [(426 - 226)] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
    int month [13] = {(408 - 408), (683 - 652), (472 - 444), (166 - 135), 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int nV3saNCdhK;
    int sum = (261 - 261);
    int i;
    nV3saNCdhK = (o7FArB5Vn3IC / 4 + o7FArB5Vn3IC - o7FArB5Vn3IC / (1068 - 968) + o7FArB5Vn3IC / 400) % 7;
    cin >> fGi48sL >> month1 >> day;
    if (((fGi48sL % 4 == 0) && !(0 == (fGi48sL % 100))) || (fGi48sL % 400 == 0)) {
        month[(175 - 173)] = month[2] + 1;
        {
            i = 1;
            while (i < month1) {
                sum = sum + month[i];
                i = i + 1;
            };
        }
        sum = sum + day;
    }
    else {
        for (i = 1; i < month1; i = i + 1) {
            sum = sum + month[i];
        }
        sum = sum + day;
    }
    cout << week[(nV3saNCdhK + sum - 1) % 7] << ".";
}

