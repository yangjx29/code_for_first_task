int main () {
    int JVl7pU3tevH;
    int BWTmlhIg;
    int k;
    int AgsBZNQhx [10];
    int CbH8Jt46DlC9;
    struct   distance {
        int gJnOqh;
        int WbUFja;
        int YiYxJB;
        int nUizh1gyr9t8;
        int HYz2qyDP3FX;
        int CvVzKR;
        double  c;
    }
    iRJo2Q [46];
    int BGreyaMZ5 [10];
    int TsyEY3MdC;
    int rlHP1C [10];
    int xAMEu4y8ekq;
    k = 0;
    cout << fixed;
    cin >> CbH8Jt46DlC9;
    {
        JVl7pU3tevH = (665 - 665);
        for (; JVl7pU3tevH < CbH8Jt46DlC9;) {
            cin >> AgsBZNQhx[JVl7pU3tevH] >> rlHP1C[JVl7pU3tevH] >> BGreyaMZ5[JVl7pU3tevH];
            JVl7pU3tevH = JVl7pU3tevH +1;
        }
    }
    {
        JVl7pU3tevH = 0;
        {
            if (0) {
                return 0;
            }
        }
        for (; CbH8Jt46DlC9 > JVl7pU3tevH;) {
            {
                TsyEY3MdC = JVl7pU3tevH +1;
                for (; TsyEY3MdC < CbH8Jt46DlC9;) {
                    iRJo2Q[k].gJnOqh = AgsBZNQhx[JVl7pU3tevH];
                    iRJo2Q[k].WbUFja = rlHP1C[JVl7pU3tevH];
                    iRJo2Q[k].YiYxJB = BGreyaMZ5[JVl7pU3tevH];
                    iRJo2Q[k].nUizh1gyr9t8 = AgsBZNQhx[TsyEY3MdC];
                    iRJo2Q[k].HYz2qyDP3FX = rlHP1C[TsyEY3MdC];
                    iRJo2Q[k].CvVzKR = BGreyaMZ5[TsyEY3MdC];
                    TsyEY3MdC = TsyEY3MdC +1;
                    iRJo2Q[k++].c = sqrt ((iRJo2Q[k].gJnOqh - iRJo2Q[k].nUizh1gyr9t8) * (iRJo2Q[k].gJnOqh - iRJo2Q[k].nUizh1gyr9t8) + (iRJo2Q[k].WbUFja - iRJo2Q[k].HYz2qyDP3FX) * (iRJo2Q[k].WbUFja - iRJo2Q[k].HYz2qyDP3FX) + (iRJo2Q[k].YiYxJB - iRJo2Q[k].CvVzKR) * (iRJo2Q[k].YiYxJB - iRJo2Q[k].CvVzKR));
                }
            }
            JVl7pU3tevH = JVl7pU3tevH +1;
        }
    }
    {
        JVl7pU3tevH = 0;
        for (; CbH8Jt46DlC9 *(CbH8Jt46DlC9 -1) / 2 - 1 > JVl7pU3tevH;) {
            {
                TsyEY3MdC = JVl7pU3tevH +1;
                for (; CbH8Jt46DlC9 *(CbH8Jt46DlC9 -1) / 2 > TsyEY3MdC;) {
                    if (iRJo2Q[TsyEY3MdC].c - iRJo2Q[JVl7pU3tevH].c > 1e-6) {
                        iRJo2Q[45] = iRJo2Q[TsyEY3MdC];
                        {
                            xAMEu4y8ekq = TsyEY3MdC;
                            BWTmlhIg = TsyEY3MdC;
                            for (; xAMEu4y8ekq > JVl7pU3tevH;) {
                                iRJo2Q[xAMEu4y8ekq] = iRJo2Q[--BWTmlhIg];
                                xAMEu4y8ekq = xAMEu4y8ekq - 1;
                            }
                        }
                        iRJo2Q[JVl7pU3tevH] = iRJo2Q[45];
                    }
                    TsyEY3MdC = TsyEY3MdC +1;
                }
            }
            JVl7pU3tevH = JVl7pU3tevH +1;
        }
    }
    {
        JVl7pU3tevH = 0;
        while (JVl7pU3tevH < CbH8Jt46DlC9 *(CbH8Jt46DlC9 -1) / 2) {
            cout << "(" << iRJo2Q[JVl7pU3tevH].gJnOqh << "," << iRJo2Q[JVl7pU3tevH].WbUFja << "," << iRJo2Q[JVl7pU3tevH].YiYxJB << ")" << "-" << "(" << iRJo2Q[JVl7pU3tevH].nUizh1gyr9t8 << "," << iRJo2Q[JVl7pU3tevH].HYz2qyDP3FX << "," << iRJo2Q[JVl7pU3tevH].CvVzKR << ")" << "=" << setprecision (2) << iRJo2Q[JVl7pU3tevH].c << endl;
            JVl7pU3tevH = JVl7pU3tevH +1;
        }
    }
    return 0;
}

