int main () {
    char g9DeEp0QwguH [(668 - 566)] [(485 - 383)] = {(180 - 180)};
    int vBTcqUns, RiuYls0gc1, iSyCUi8TOEL, aPbnG8hL1eQ0, lqfdU0xETI, FJIZTik5 = (640 - 640);
    cin >> vBTcqUns;
    for (RiuYls0gc1 = (347 - 346); RiuYls0gc1 <= vBTcqUns; RiuYls0gc1 = RiuYls0gc1 +(794 - 793)) {
        for (iSyCUi8TOEL = (647 - 646); iSyCUi8TOEL <= vBTcqUns; iSyCUi8TOEL++) {
            cin >> g9DeEp0QwguH[RiuYls0gc1][iSyCUi8TOEL];
        }
    }
    cin >> aPbnG8hL1eQ0;
    for (lqfdU0xETI = (426 - 426); lqfdU0xETI < aPbnG8hL1eQ0 - (235 - 234); lqfdU0xETI++) {
        {
            RiuYls0gc1 = (631 - 630);
            for (; RiuYls0gc1 <= vBTcqUns;) {
                for (iSyCUi8TOEL = (593 - 592); iSyCUi8TOEL <= vBTcqUns; iSyCUi8TOEL++) {
                    if (g9DeEp0QwguH[RiuYls0gc1][iSyCUi8TOEL] == '!') {
                        g9DeEp0QwguH[RiuYls0gc1][iSyCUi8TOEL] = '@';
                    }
                }
                RiuYls0gc1++;
            }
        }
        for (RiuYls0gc1 = (485 - 484); RiuYls0gc1 <= vBTcqUns; RiuYls0gc1++) {
            for (iSyCUi8TOEL = (647 - 646); iSyCUi8TOEL <= vBTcqUns; iSyCUi8TOEL++) {
                if (g9DeEp0QwguH[RiuYls0gc1][iSyCUi8TOEL] == '@') {
                    if (g9DeEp0QwguH[RiuYls0gc1 -(652 - 651)][iSyCUi8TOEL] == '.')
                        g9DeEp0QwguH[RiuYls0gc1 -(986 - 985)][iSyCUi8TOEL] = '!';
                    if (g9DeEp0QwguH[RiuYls0gc1 +(544 - 543)][iSyCUi8TOEL] == '.')
                        g9DeEp0QwguH[RiuYls0gc1 +(169 - 168)][iSyCUi8TOEL] = '!';
                    if (g9DeEp0QwguH[RiuYls0gc1][iSyCUi8TOEL - (829 - 828)] == '.')
                        g9DeEp0QwguH[RiuYls0gc1][iSyCUi8TOEL - (370 - 369)] = '!';
                    if (g9DeEp0QwguH[RiuYls0gc1][iSyCUi8TOEL + (38 - 37)] == '.')
                        g9DeEp0QwguH[RiuYls0gc1][iSyCUi8TOEL + (457 - 456)] = '!';
                }
            }
        }
    }
    for (RiuYls0gc1 = (788 - 787); RiuYls0gc1 <= vBTcqUns; RiuYls0gc1++) {
        for (iSyCUi8TOEL = 1; iSyCUi8TOEL <= vBTcqUns; iSyCUi8TOEL++) {
            if (g9DeEp0QwguH[RiuYls0gc1][iSyCUi8TOEL] == '!' || g9DeEp0QwguH[RiuYls0gc1][iSyCUi8TOEL] == '@')
                FJIZTik5++;
        }
    }
    cout << FJIZTik5 << endl;
    return (274 - 274);
}

