int main () {
    int GnvYqR;
    int NbKu3jqB9HmU;
    int la69AGV3;
    int w5aSmVJcMsf [100] [100];
    int qYGmPIc7Wz;
    int E9DLjxqpoM5;
    int RME73sfFpaP9;
    int XmTHrIV6ZyDB;
    NbKu3jqB9HmU = 0;
    cin >> la69AGV3;
    {
        GnvYqR = 0;
        while (la69AGV3 > GnvYqR) {
            for (qYGmPIc7Wz = 0; qYGmPIc7Wz < la69AGV3; qYGmPIc7Wz = qYGmPIc7Wz + (974 - 973))
                for (E9DLjxqpoM5 = 0; la69AGV3 > E9DLjxqpoM5; E9DLjxqpoM5 = E9DLjxqpoM5 +1)
                    cin >> *(*(w5aSmVJcMsf + qYGmPIc7Wz) + E9DLjxqpoM5);
            XmTHrIV6ZyDB = la69AGV3;
            NbKu3jqB9HmU = 0;
            while (XmTHrIV6ZyDB != 1) {
                for (qYGmPIc7Wz = 0; qYGmPIc7Wz < XmTHrIV6ZyDB; qYGmPIc7Wz = qYGmPIc7Wz + 1) {
                    RME73sfFpaP9 = *(*(w5aSmVJcMsf + qYGmPIc7Wz) + 0);
                    {
                        E9DLjxqpoM5 = 1;
                        while (E9DLjxqpoM5 < XmTHrIV6ZyDB) {
                            RME73sfFpaP9 = (RME73sfFpaP9 > *(*(w5aSmVJcMsf + qYGmPIc7Wz) + E9DLjxqpoM5)) ? *(*(w5aSmVJcMsf + qYGmPIc7Wz) + E9DLjxqpoM5) : RME73sfFpaP9;
                            E9DLjxqpoM5 = E9DLjxqpoM5 +1;
                        }
                    }
                    for (E9DLjxqpoM5 = 0; E9DLjxqpoM5 < XmTHrIV6ZyDB; E9DLjxqpoM5 = E9DLjxqpoM5 +1)
                        *(*(w5aSmVJcMsf + qYGmPIc7Wz) + E9DLjxqpoM5) = *(*(w5aSmVJcMsf + qYGmPIc7Wz) + E9DLjxqpoM5) - RME73sfFpaP9;
                }
                for (qYGmPIc7Wz = 0; qYGmPIc7Wz < XmTHrIV6ZyDB; qYGmPIc7Wz = qYGmPIc7Wz + 1) {
                    RME73sfFpaP9 = *(*(w5aSmVJcMsf)+qYGmPIc7Wz);
                    {
                        E9DLjxqpoM5 = 1;
                        while (E9DLjxqpoM5 < XmTHrIV6ZyDB) {
                            RME73sfFpaP9 = (*(*(w5aSmVJcMsf + E9DLjxqpoM5) + qYGmPIc7Wz) < RME73sfFpaP9) ? *(*(w5aSmVJcMsf + E9DLjxqpoM5) + qYGmPIc7Wz) : RME73sfFpaP9;
                            E9DLjxqpoM5 = E9DLjxqpoM5 +1;
                        }
                    }
                    for (E9DLjxqpoM5 = 0; E9DLjxqpoM5 < XmTHrIV6ZyDB; E9DLjxqpoM5++)
                        *(*(w5aSmVJcMsf + E9DLjxqpoM5) + qYGmPIc7Wz) = *(*(w5aSmVJcMsf + E9DLjxqpoM5) + qYGmPIc7Wz) - RME73sfFpaP9;
                }
                NbKu3jqB9HmU = NbKu3jqB9HmU +*(*(w5aSmVJcMsf + 1) + 1);
                for (qYGmPIc7Wz = 1; qYGmPIc7Wz < XmTHrIV6ZyDB; qYGmPIc7Wz = qYGmPIc7Wz + 1)
                    *(*(w5aSmVJcMsf + 0) + qYGmPIc7Wz) = *(*(w5aSmVJcMsf + 0) + qYGmPIc7Wz + 1);
                {
                    qYGmPIc7Wz = 1;
                    while (qYGmPIc7Wz < XmTHrIV6ZyDB) {
                        *(*(w5aSmVJcMsf + qYGmPIc7Wz) + 0) = *(*(w5aSmVJcMsf + qYGmPIc7Wz + 1) + 0);
                        qYGmPIc7Wz = qYGmPIc7Wz + 1;
                    }
                }
                {
                    qYGmPIc7Wz = 2;
                    while (qYGmPIc7Wz < XmTHrIV6ZyDB) {
                        {
                            E9DLjxqpoM5 = 2;
                            while (E9DLjxqpoM5 < XmTHrIV6ZyDB) {
                                *(*(w5aSmVJcMsf + E9DLjxqpoM5 -1) + qYGmPIc7Wz - 1) = *(*(w5aSmVJcMsf + E9DLjxqpoM5) + qYGmPIc7Wz);
                                E9DLjxqpoM5 = E9DLjxqpoM5 +1;
                            }
                        }
                        qYGmPIc7Wz = qYGmPIc7Wz + 1;
                    }
                }
                XmTHrIV6ZyDB = XmTHrIV6ZyDB -1;
            }
            cout << NbKu3jqB9HmU << endl;
            GnvYqR = GnvYqR +1;
        }
    }
    return 0;
}

