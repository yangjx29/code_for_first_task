int nnTqQbJrGRDd (int xVyUAt, int TAKIxkG2MU5l) {
    return xVyUAt < TAKIxkG2MU5l ? xVyUAt : TAKIxkG2MU5l;
}

int BKMI4DEy9 (int n, int lc4Jo7EFt [100] [100]) {
    int num [100], qR0YdWIw1 = 10000;
    {
        int NBtNzQWVmj = 0;
        while (n > NBtNzQWVmj) {
            {
                int SE8xP6uFakTB = 0;
                while (n > SE8xP6uFakTB) {
                    qR0YdWIw1 = nnTqQbJrGRDd (qR0YdWIw1, lc4Jo7EFt[NBtNzQWVmj][SE8xP6uFakTB]);
                    SE8xP6uFakTB++;
                }
            }
            num[NBtNzQWVmj] = qR0YdWIw1;
            NBtNzQWVmj++;
            qR0YdWIw1 = 10000;
        }
    }
    qR0YdWIw1 = 10000;
    {
        int NBtNzQWVmj = 0;
        while (NBtNzQWVmj < n) {
            {
                int SE8xP6uFakTB = 0;
                while (SE8xP6uFakTB < n) {
                    lc4Jo7EFt[NBtNzQWVmj][SE8xP6uFakTB] = lc4Jo7EFt[NBtNzQWVmj][SE8xP6uFakTB] - num[NBtNzQWVmj];
                    SE8xP6uFakTB++;
                }
            }
            NBtNzQWVmj++;
        }
    }
    {
        int SE8xP6uFakTB = 0;
        while (SE8xP6uFakTB < n) {
            {
                int NBtNzQWVmj = 0;
                while (NBtNzQWVmj < n) {
                    qR0YdWIw1 = nnTqQbJrGRDd (qR0YdWIw1, lc4Jo7EFt[NBtNzQWVmj][SE8xP6uFakTB]);
                    NBtNzQWVmj++;
                }
            }
            num[SE8xP6uFakTB] = qR0YdWIw1;
            qR0YdWIw1 = 10000;
            SE8xP6uFakTB++;
        }
    }
    {
        int SE8xP6uFakTB = 0;
        while (SE8xP6uFakTB < n) {
            {
                int NBtNzQWVmj = 0;
                for (; NBtNzQWVmj < n;) {
                    lc4Jo7EFt[NBtNzQWVmj][SE8xP6uFakTB] = lc4Jo7EFt[NBtNzQWVmj][SE8xP6uFakTB] - num[SE8xP6uFakTB];
                    NBtNzQWVmj++;
                }
            }
            SE8xP6uFakTB++;
        }
    }
    if (!(2 != n))
        return lc4Jo7EFt[1][1];
    else {
        int pReWEsT0;
        pReWEsT0 = lc4Jo7EFt[1][1];
        {
            int SE8xP6uFakTB = 0;
            while (SE8xP6uFakTB < n) {
                {
                    int NBtNzQWVmj = 1;
                    while (n - 1 > NBtNzQWVmj) {
                        lc4Jo7EFt[NBtNzQWVmj][SE8xP6uFakTB] = lc4Jo7EFt[NBtNzQWVmj +1][SE8xP6uFakTB];
                        NBtNzQWVmj++;
                    }
                }
                SE8xP6uFakTB++;
            }
        }
        {
            int NBtNzQWVmj = 0;
            while (NBtNzQWVmj < n) {
                {
                    int SE8xP6uFakTB = 1;
                    while (SE8xP6uFakTB < n - 1) {
                        lc4Jo7EFt[NBtNzQWVmj][SE8xP6uFakTB] = lc4Jo7EFt[NBtNzQWVmj][SE8xP6uFakTB +1];
                        SE8xP6uFakTB++;
                    }
                }
                NBtNzQWVmj++;
            }
        }
        return pReWEsT0 + BKMI4DEy9 (n - 1, lc4Jo7EFt);
    }
}

int main () {
    int n;
    int tcUwFd = n;
    int pReWEsT0;
    pReWEsT0 = 0;
    cin >> n;
    while (n--) {
        int lc4Jo7EFt [100] [100];
        int pReWEsT0;
        pReWEsT0 = BKMI4DEy9 (tcUwFd, lc4Jo7EFt);
        cout << pReWEsT0 << endl;
        {
            int NBtNzQWVmj = 0;
            while (tcUwFd > NBtNzQWVmj) {
                {
                    int SE8xP6uFakTB = 0;
                    while (SE8xP6uFakTB < tcUwFd) {
                        cin >> lc4Jo7EFt[NBtNzQWVmj][SE8xP6uFakTB];
                        SE8xP6uFakTB++;
                    }
                }
                NBtNzQWVmj++;
            }
        }
    }
    return 0;
}

