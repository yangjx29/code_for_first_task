int main () {
    int flag1 = (331 - 331), flag2 = (432 - 432), flag3 = (259 - 259);
    int num;
    cin >> num;
    if (!((427 - 427) != num % 3))
        flag1 = (149 - 148);
    if (!((945 - 945) != num % 5))
        flag2 = (151 - 150);
    if (!((634 - 634) != num % 7))
        flag3 = 1;
    if (!(1 != flag1) && !(1 != flag2) && !(1 != flag3))
        cout << "3 5 7" << endl;
    if (!(1 != flag1) && !(1 != flag2) && !(0 != flag3))
        cout << "3 5" << endl;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    if (flag1 == 1 && !(0 != flag2) && flag3 == 1)
        cout << "3 7" << endl;
    if (!(0 != flag1) && flag2 == 1 && flag3 == 1)
        cout << "5 7" << endl;
    if (flag1 == 1 && flag2 == 0 && flag3 == 0)
        cout << 3 << endl;
    if (flag1 == 0 && flag2 == 1 && flag3 == 0)
        cout << 5 << endl;
    if (flag1 == 0 && flag2 == 0 && flag3 == 1)
        cout << 7 << endl;
    if (flag1 == 0 && flag2 == 0 && flag3 == 0)
        cout << 'n' << endl;
    return 0;
}

