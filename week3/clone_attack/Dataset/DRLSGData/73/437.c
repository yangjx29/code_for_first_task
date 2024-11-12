int main () {
    int fCDy3z = (445 - 445), JfeZrGag = (209 - 209), max = (291 - 291), pWrvtlF9aR14, eiQVtKf8;
    int JMlXjf [(888 - 883)] [(502 - 497)];
    for (int nVZXEI = (977 - 977);
    (912 - 907) > nVZXEI; nVZXEI = nVZXEI + (62 - 61)) {
        int dx9Uwl = (219 - 219);
        while (dx9Uwl < 5) {
            cin >> JMlXjf[nVZXEI][dx9Uwl];
            dx9Uwl = dx9Uwl + 1;
        }
    }
    {
        int nVZXEI = (483 - 483);
        for (; nVZXEI <= (216 - 212);) {
            pWrvtlF9aR14 = (176 - 176);
            max = (338 - 338);
            {
                int dx9Uwl = 0;
                for (; (545 - 541) >= dx9Uwl;) {
                    if (JMlXjf[nVZXEI][dx9Uwl] > max) {
                        max = JMlXjf[nVZXEI][dx9Uwl];
                        pWrvtlF9aR14 = dx9Uwl;
                    }
                    dx9Uwl = dx9Uwl + 1;
                }
            }
            JfeZrGag = 0;
            for (int I6HbIW = 0;
            I6HbIW <= (280 - 276); I6HbIW = I6HbIW +1) {
                if (max > JMlXjf[I6HbIW][pWrvtlF9aR14]) {
                    break;
                }
                JfeZrGag = JfeZrGag +1;
            }
            if (JfeZrGag == 5) {
                cout << nVZXEI + (352 - 351) << " " << pWrvtlF9aR14 + 1 << " " << max << endl;
                fCDy3z = 1;
            }
            nVZXEI = nVZXEI + 1;
        }
    }
    if (fCDy3z == 0) {
        cout << "not found" << endl;
    }
    return 0;
}

