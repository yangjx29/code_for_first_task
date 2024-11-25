int main () {
    int aFmqQtZl [(651 - 625)] = {(16 - 16)};
    char HdhIpC;
    int mM8KEfL0W;
    int mL1fv2NFs;
    int B3iYaXln;
    char m [(1584 - 584)] [(431 - 405)];
    int hLRmpAbutc3 [(1809 - 809)];
    cin >> mL1fv2NFs;
    {
        int LV9uHSBoK;
        LV9uHSBoK = (254 - 253);
        for (; mL1fv2NFs >= LV9uHSBoK;) {
            cin >> hLRmpAbutc3[LV9uHSBoK -(377 - 376)];
            cin.getline (m[LV9uHSBoK -1], (1010 - 984));
            LV9uHSBoK++;
            getchar ();
        }
    }
    {
        int LV9uHSBoK;
        LV9uHSBoK = (939 - 939);
        for (; LV9uHSBoK < mL1fv2NFs;) {
            {
                int EX4nZj = 0;
                for (; 26 > EX4nZj;) {
                    aFmqQtZl[m[LV9uHSBoK][EX4nZj] - 'A']++;
                    EX4nZj = EX4nZj +1;
                }
            }
            LV9uHSBoK++;
        }
    }
    B3iYaXln = 0;
    {
        int BSOhWLqZ = 0;
        for (; 26 > BSOhWLqZ;) {
            if (aFmqQtZl[BSOhWLqZ] >= B3iYaXln) {
                B3iYaXln = aFmqQtZl[BSOhWLqZ];
                mM8KEfL0W = BSOhWLqZ +'A';
                HdhIpC = mM8KEfL0W;
            }
            BSOhWLqZ++;
        }
    }
    cout << HdhIpC << endl;
    cout << B3iYaXln << endl;
    {
        int LV9uHSBoK = 0;
        for (; LV9uHSBoK < mL1fv2NFs;) {
            {
                int EX4nZj = 0;
                for (; EX4nZj < 26;) {
                    if (m[LV9uHSBoK][EX4nZj] == HdhIpC) {
                        cout << hLRmpAbutc3[LV9uHSBoK] << endl;
                        break;
                    }
                    EX4nZj = EX4nZj +1;
                }
            }
            LV9uHSBoK++;
        }
    }
    return 0;
}

