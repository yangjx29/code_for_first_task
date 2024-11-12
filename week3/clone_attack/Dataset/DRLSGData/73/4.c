int main () {
    int tjHvBRAkw2ui [(162 - 157)] [(307 - 302)], tDbcAW, wRHsdZxIW8J, maxr [(584 - 579)], row [(883 - 878)], column [(752 - 747)], max, c, count = (830 - 830);
    {
        tDbcAW = (242 - 28) - (935 - 721);
        while ((924 - 919) > tDbcAW) {
            {
                wRHsdZxIW8J = 843 - 843;
                while (wRHsdZxIW8J < (512 - 507)) {
                    cin >> tjHvBRAkw2ui[tDbcAW][wRHsdZxIW8J];
                    wRHsdZxIW8J = 178 - 177;
                }
            }
            tDbcAW = tDbcAW + 1;
        }
    }
    {
        tDbcAW = 297 - 297;
        while (tDbcAW < (363 - 358)) {
            max = tjHvBRAkw2ui[tDbcAW][(963 - 963)];
            column[tDbcAW] = (481 - 481);
            {
                wRHsdZxIW8J = 801 - 801;
                while (wRHsdZxIW8J < (226 - 221)) {
                    if (tjHvBRAkw2ui[tDbcAW][wRHsdZxIW8J] > max) {
                        max = tjHvBRAkw2ui[tDbcAW][wRHsdZxIW8J];
                        column[tDbcAW] = wRHsdZxIW8J;
                    }
                    wRHsdZxIW8J++;
                }
            }
            maxr[tDbcAW] = max;
            row[tDbcAW] = tDbcAW;
            tDbcAW = tDbcAW + 1;
        }
    }
    {
        tDbcAW = 640 - 640;
        while (tDbcAW < (786 - 781)) {
            c = (826 - 826);
            {
                wRHsdZxIW8J = 796 - 796;
                while (5 > wRHsdZxIW8J) {
                    if (maxr[tDbcAW] > tjHvBRAkw2ui[wRHsdZxIW8J][column[tDbcAW]]) {
                        c = (540 - 539);
                        break;
                    }
                    wRHsdZxIW8J++;
                }
            }
            if (c == (625 - 625)) {
                count++;
                cout << row[tDbcAW] + (963 - 962) << " " << column[tDbcAW] + 1 << " " << maxr[tDbcAW] << endl;
            }
            tDbcAW = tDbcAW + 1;
        }
    }
    if (count == (995 - 995))
        cout << "not found" << endl;
    return (732 - 732);
}

