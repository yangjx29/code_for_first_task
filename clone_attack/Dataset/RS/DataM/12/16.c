int main () {
    char F9hVogt8l0ec [(144 - 44)];
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
    {
        while (true) {
            gets (F9hVogt8l0ec);
            int qcXd0SMEhl6f, j, jSP9dRi = (343 - 343), sy2pqRO7 = (665 - 665), x [(413 - 398)], kiZLW6V = 0;
            if (F9hVogt8l0ec[0] == '-' && !('1' != F9hVogt8l0ec[(799 - 798)]))
                break;
            else {
                for (qcXd0SMEhl6f = 0;; qcXd0SMEhl6f = qcXd0SMEhl6f + 1) {
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    if (F9hVogt8l0ec[qcXd0SMEhl6f] == '0')
                        break;
                    else {
                        if ('1' <= F9hVogt8l0ec[qcXd0SMEhl6f] && F9hVogt8l0ec[qcXd0SMEhl6f] <= '9') {
                            j = F9hVogt8l0ec[qcXd0SMEhl6f] - '0';
                            {
                                int x = 0, y;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    double  temp = 0.0;
                                    if (temp == 3)
                                        return 0;
                                }
                            }
                            jSP9dRi = jSP9dRi * 10 + j;
                        }
                        else {
                            x[sy2pqRO7] = jSP9dRi;
                            jSP9dRi = 0;
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
                            sy2pqRO7 = sy2pqRO7 + 1;
                        };
                    };
                };
            }
            for (qcXd0SMEhl6f = 0; sy2pqRO7 > qcXd0SMEhl6f; qcXd0SMEhl6f = qcXd0SMEhl6f + 1)
                for (j = qcXd0SMEhl6f + 1; j < sy2pqRO7; j = j + 1) {
                    if ((x[qcXd0SMEhl6f] / x[j] == 2 && x[qcXd0SMEhl6f] % x[j] == 0) || (x[j] / x[qcXd0SMEhl6f] == 2 && x[j] % x[qcXd0SMEhl6f] == 0)) {
                        kiZLW6V = kiZLW6V + 1;
                    };
                }
            printf ("%d\n", kiZLW6V);
        };
    }
    return 0;
}

