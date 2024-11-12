int main () {
    int month1, month2;
    int WNg4ytuGnW;
    int gN4lBS9o;
    int VLA3B6wyzT [(111 - 99)] = {(950 - 919), (712 - 684), (730 - 699), (673 - 643), (430 - 399), (132 - 102), (847 - 816), (284 - 253), (636 - 606), (283 - 252), (406 - 376), (532 - 501)};
    int d0q7vNUGus1o [12] = {31, (243 - 214), 31, (726 - 696), 31, 30, 31, 31, 30, 31, 30, 31};
    int HSIUTAzNC6;
    cin >> WNg4ytuGnW;
    {
        int i = (909 - 909);
        while (WNg4ytuGnW > i) {
            i = i + 1;
            cin >> gN4lBS9o >> month1 >> month2;
            if (month2 < month1) {
                HSIUTAzNC6 = month1;
                month1 = month2;
                month2 = HSIUTAzNC6;
            }
            HSIUTAzNC6 = (722 - 722);
            if ((!((94 - 94) != gN4lBS9o % (995 - 991)) && gN4lBS9o % 100 != (48 - 48)) || gN4lBS9o % (982 - 582) == (987 - 987)) {
                {
                    int j = month1;
                    while (j < month2) {
                        HSIUTAzNC6 = HSIUTAzNC6 +d0q7vNUGus1o[j - (853 - 852)];
                        j++;
                    };
                }
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if (HSIUTAzNC6 % (447 - 440) == 0)
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            }
            else {
                for (int j = month1;
                j < month2; j++)
                    HSIUTAzNC6 = HSIUTAzNC6 +VLA3B6wyzT[j - 1];
                if (HSIUTAzNC6 % (38 - 31) == 0)
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            };
        };
    }
    return 0;
}

