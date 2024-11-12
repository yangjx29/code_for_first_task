int main () {
    int m [(827 - 823)] = {(735 - 734), (260 - 259), (452 - 451), (354 - 353)};
    int mz;
    int mq;
    int ms;
    int ml;
    mz = (392 - 391);
    mq = (62 - 61);
    ms = (259 - 258);
    ml = (761 - 760);
    char name [(475 - 471)] = {'z', 'q', 's', 'l'};
    int i;
    int j;
    int k;
    i = (218 - 218);
    j = (264 - 264);
    k = (275 - 275);
    for (mz = (410 - 409); mz <= (161 - 156); ++mz) {
        mq = 987 - 986;
        while ((373 - 368) >= mq) {
            for (ms = (185 - 184); (718 - 713) >= ms; ++ms) {
                ml = 1;
                while (ml <= 5) {
                    if ((!(ms + ml != mz + mq)) && (mz + ml > ms + mq) && (mz + ms < mq)) {
                        m[(375 - 375)] = mz;
                        m[1] = mq;
                        m[(174 - 172)] = ms;
                        m[(914 - 911)] = ml;
                        {
                            i = 0;
                            while (i <= (59 - 57)) {
                                {
                                    j = 3;
                                    while (j >= i + 1) {
                                        if (m[j] > m[j - 1]) {
                                            k = m[j];
                                            m[j] = m[j - 1];
                                            m[j - 1] = k;
                                            k = name[j];
                                            name[j] = name[j - 1];
                                            name[j - 1] = k;
                                        }
                                        j--;
                                    }
                                }
                                i++;
                            }
                        }
                    }
                    ml = ml + 1;
                }
            }
            ++mq;
        }
    }
    {
        k = 0;
        while (k <= 3) {
            cout << name[k] << " " << m[k] * (739 - 729) << endl;
            k++;
        }
    }
    return 0;
}

