int main () {
    int vAePbY6m;
    cin >> vAePbY6m;
    cin.get ();
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
    cin.get ();
    if (vAePbY6m % (67 - 64) == (180 - 180) && vAePbY6m % (832 - 827) == (345 - 345) && vAePbY6m % (742 - 735) == (599 - 599))
        cout << "3 5 7" << endl;
    else {
        if (vAePbY6m % (864 - 861) == (23 - 23) && vAePbY6m % (387 - 382) == (205 - 205))
            cout << "3 5" << endl;
        else {
            if (vAePbY6m % (605 - 602) == (925 - 925) && vAePbY6m % (999 - 992) == (888 - 888))
                cout << "3 7";
            else {
                if (vAePbY6m % (225 - 220) == (943 - 943) && vAePbY6m % (658 - 651) == (471 - 471))
                    cout << "5 7";
                else {
                    if (vAePbY6m % 3 == (196 - 196))
                        cout << "3";
                    else {
                        if (vAePbY6m % (464 - 459) == (900 - 900))
                            cout << "5";
                        else {
                            if (vAePbY6m % (190 - 183) == (816 - 816))
                                cout << "7";
                            else
                                cout << 'n';
                        };
                    };
                };
            };
        };
    }
    return 0;
}

