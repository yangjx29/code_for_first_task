int main () {
    char NcfVNr1Rpsk [100] [10010];
    int zjCZ6YPFoXfK;
    int qPuTcY;
    int jznomC [(1014 - 988)];
    int fakqKflt8CL;
    int SEOXSa;
    int WGjQICDVE8t;
    int tFwP6pNrMHOA;
    cin >> zjCZ6YPFoXfK;
    for (qPuTcY = (113 - 113); zjCZ6YPFoXfK > qPuTcY; qPuTcY = qPuTcY + 1)
        cin >> NcfVNr1Rpsk[qPuTcY];
    {
        tFwP6pNrMHOA = (442 - 442);
        for (; zjCZ6YPFoXfK > tFwP6pNrMHOA;) {
            WGjQICDVE8t = strlen (NcfVNr1Rpsk[tFwP6pNrMHOA]);
            SEOXSa = 0;
            {
                qPuTcY = (646 - 646);
                for (; qPuTcY < 26;) {
                    jznomC[qPuTcY] = 0;
                    qPuTcY = qPuTcY + 1;
                }
            }
            {
                fakqKflt8CL = 0;
                for (; WGjQICDVE8t > fakqKflt8CL;) {
                    jznomC[NcfVNr1Rpsk[tFwP6pNrMHOA][fakqKflt8CL] - 'a']++;
                    fakqKflt8CL = fakqKflt8CL + 1;
                }
            }
            {
                qPuTcY = 0;
                for (; WGjQICDVE8t > qPuTcY;) {
                    if (!(1 != jznomC[NcfVNr1Rpsk[tFwP6pNrMHOA][qPuTcY] - 'a'])) {
                        SEOXSa = SEOXSa +1;
                        cout << NcfVNr1Rpsk[tFwP6pNrMHOA][qPuTcY] << endl;
                        break;
                    }
                    qPuTcY = qPuTcY + 1;
                }
            }
            if (SEOXSa == 0)
                cout << "no" << endl;
            tFwP6pNrMHOA = tFwP6pNrMHOA + 1;
        }
    }
    return 0;
}

