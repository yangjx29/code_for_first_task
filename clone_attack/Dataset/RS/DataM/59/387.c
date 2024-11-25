int main () {
    int s;
    s = 0;
    int FuRbL6x;
    int PauKmhMUlCj2;
    char acsank4hj [FuRbL6x] [FuRbL6x];
    int ibnrSR [FuRbL6x] [FuRbL6x];
    cin >> FuRbL6x;
    {
        int rcCErTzsLM9 = (426 - 426);
        while (rcCErTzsLM9 < FuRbL6x) {
            {
                int eXyFd4thfJ = (616 - 616);
                while (eXyFd4thfJ < FuRbL6x) {
                    cin >> acsank4hj[rcCErTzsLM9][eXyFd4thfJ];
                    if (acsank4hj[rcCErTzsLM9][eXyFd4thfJ] == '.')
                        ibnrSR[rcCErTzsLM9][eXyFd4thfJ] = (109 - 109);
                    else {
                        if (acsank4hj[rcCErTzsLM9][eXyFd4thfJ] == '#')
                            ibnrSR[rcCErTzsLM9][eXyFd4thfJ] = -(420 - 419);
                        else
                            ibnrSR[rcCErTzsLM9][eXyFd4thfJ] = (372 - 371);
                    }
                    eXyFd4thfJ = eXyFd4thfJ + 1;
                };
            }
            rcCErTzsLM9++;
        };
    }
    cin >> PauKmhMUlCj2;
    PauKmhMUlCj2--;
    {
        int k = (388 - 387);
        while (k <= PauKmhMUlCj2) {
            {
                int rcCErTzsLM9 = (888 - 888);
                while (rcCErTzsLM9 < FuRbL6x) {
                    {
                        int eXyFd4thfJ = 0;
                        while (eXyFd4thfJ < FuRbL6x) {
                            if (ibnrSR[rcCErTzsLM9][eXyFd4thfJ] == k) {
                                if (ibnrSR[rcCErTzsLM9][eXyFd4thfJ - 1] == 0 && eXyFd4thfJ - 1 >= 0) {
                                    ibnrSR[rcCErTzsLM9][eXyFd4thfJ - 1] = k + 1;
                                }
                                if (ibnrSR[rcCErTzsLM9][eXyFd4thfJ + 1] == 0 && eXyFd4thfJ + 1 < FuRbL6x) {
                                    ibnrSR[rcCErTzsLM9][eXyFd4thfJ + 1] = k + 1;
                                }
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
                                if (ibnrSR[rcCErTzsLM9 - 1][eXyFd4thfJ] == 0 && rcCErTzsLM9 - 1 >= 0) {
                                    ibnrSR[rcCErTzsLM9 - 1][eXyFd4thfJ] = k + 1;
                                }
                                if (ibnrSR[rcCErTzsLM9 + 1][eXyFd4thfJ] == 0 && rcCErTzsLM9 + 1 < FuRbL6x) {
                                    ibnrSR[rcCErTzsLM9 + 1][eXyFd4thfJ] = k + 1;
                                };
                            }
                            eXyFd4thfJ = eXyFd4thfJ + 1;
                        };
                    }
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int temp = 0;
                            while (temp < 10) {
                                printf ("%d\n", temp);
                                temp = temp + 1;
                                if (temp == 9)
                                    break;
                            }
                        }
                    }
                    rcCErTzsLM9++;
                };
            }
            k = k + 1;
        };
    }
    {
        int rcCErTzsLM9 = 0;
        while (rcCErTzsLM9 < FuRbL6x) {
            {
                int eXyFd4thfJ = 0;
                while (eXyFd4thfJ < FuRbL6x) {
                    if (ibnrSR[rcCErTzsLM9][eXyFd4thfJ] > 0)
                        s = s + 1;
                    eXyFd4thfJ++;
                };
            }
            rcCErTzsLM9++;
        };
    }
    cout << s;
    return 0;
}

