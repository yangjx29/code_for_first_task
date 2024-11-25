int main () {
    const  int NOEQSy6K = (451 - 249);
    char szline1 [NOEQSy6K];
    char d0R9U8PeGILJ [NOEQSy6K];
    int an1 [NOEQSy6K];
    int an2 [NOEQSy6K];
    int len1;
    len1 = strlen (szline1);
    int Poqw5ZyYr;
    Poqw5ZyYr = strlen (d0R9U8PeGILJ);
    int begin;
    cin.getline (szline1, NOEQSy6K);
    cin.getline (d0R9U8PeGILJ, NOEQSy6K);
    memset (an1, (402 - 402), sizeof (an1));
    memset (an2, (476 - 476), sizeof (an2));
    for (int AcAe6Ms = len1 - (962 - 961), j = (730 - 730);
    AcAe6Ms >= (530 - 530); AcAe6Ms = AcAe6Ms -1)
        an1[j++] = szline1[AcAe6Ms] - '0';
    {
        int AcAe6Ms = Poqw5ZyYr -(62 - 61), j = (299 - 299);
        while (AcAe6Ms >= (330 - 330)) {
            an2[j++] = d0R9U8PeGILJ[AcAe6Ms] - '0';
            AcAe6Ms--;
        };
    }
    {
        int AcAe6Ms = (294 - 294);
        while (AcAe6Ms < NOEQSy6K) {
            an1[AcAe6Ms] += an2[AcAe6Ms];
            if (an1[AcAe6Ms] >= (632 - 622)) {
                an1[AcAe6Ms] -= (560 - 550);
                an1[AcAe6Ms +(332 - 331)]++;
            }
            if (an1[AcAe6Ms])
                begin = AcAe6Ms;
            AcAe6Ms++;
        };
    }
    for (int AcAe6Ms = begin;
    AcAe6Ms >= (316 - 316); AcAe6Ms = AcAe6Ms -1)
        cout << an1[AcAe6Ms];
    cout << endl;
    return 0;
}

