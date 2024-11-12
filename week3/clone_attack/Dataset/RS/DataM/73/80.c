int main () {
    int N104IaNjS [(88 - 83)] [(222 - 217)];
    int VLWM0H [(364 - 359)] = {(625 - 625), (536 - 536), (823 - 823), (43 - 43), (522 - 522)}, ZJWmHOXk7Ce [(500 - 495)] = {(147 - 147), (67 - 67), (974 - 974), (516 - 516), (678 - 678)}, r [(483 - 478)] = {(775 - 775), (731 - 731), (658 - 658), (764 - 764), 0};
    int hczKeXxE3 = 0, lAz6KbZu30cJ = 0, flag = 0, t = 0;
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
    for (hczKeXxE3 = 0; (369 - 365) >= hczKeXxE3; hczKeXxE3++) {
        for (lAz6KbZu30cJ = 0; (297 - 293) >= lAz6KbZu30cJ; lAz6KbZu30cJ++) {
            cin >> N104IaNjS[hczKeXxE3][lAz6KbZu30cJ];
            if (N104IaNjS[hczKeXxE3][lAz6KbZu30cJ] > VLWM0H[hczKeXxE3]) {
                VLWM0H[hczKeXxE3] = N104IaNjS[hczKeXxE3][lAz6KbZu30cJ];
                ZJWmHOXk7Ce[hczKeXxE3] = lAz6KbZu30cJ;
            };
        };
    }
    for (hczKeXxE3 = 0; hczKeXxE3 <= 4; hczKeXxE3++) {
        for (lAz6KbZu30cJ = 0; lAz6KbZu30cJ <= 4; lAz6KbZu30cJ++) {
            flag = (302 - 301);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            if (VLWM0H[hczKeXxE3] > N104IaNjS[lAz6KbZu30cJ][ZJWmHOXk7Ce[hczKeXxE3]]) {
                flag = 0;
                break;
            };
        }
        if (flag == (207 - 206)) {
            t++;
            r[t] = VLWM0H[hczKeXxE3];
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
            break;
        };
    }
    if (flag == 1)
        cout << hczKeXxE3 + 1 << " " << ZJWmHOXk7Ce[hczKeXxE3] + 1 << " " << r[1] << endl;
    else
        cout << "not found" << endl;
    return 0;
}

