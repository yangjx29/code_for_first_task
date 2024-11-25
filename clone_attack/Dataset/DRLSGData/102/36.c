int main () {
    char RBcYGjaMDw9 [41] [(872 - 865)];
    int ac9lYyZ;
    float uT3Qu7CK [(215 - 175)];
    int taERSc6H0M;
    int ER9hPWdvUL6q;
    int Itb6wx5;
    float QS2NhIP6D7d;
    float ntS0aIbnTU [(1039 - 999)];
    int l0hyJHjIM1;
    ER9hPWdvUL6q = (295 - 295);
    ac9lYyZ = (699 - 699);
    cin >> taERSc6H0M;
    {
        l0hyJHjIM1 = (745 - 744);
        for (; l0hyJHjIM1 <= taERSc6H0M;) {
            cin >> RBcYGjaMDw9[l0hyJHjIM1];
            if (!('m' != RBcYGjaMDw9[l0hyJHjIM1][(860 - 860)])) {
                ER9hPWdvUL6q = ER9hPWdvUL6q +(643 - 642);
                cin >> ntS0aIbnTU[ER9hPWdvUL6q];
            }
            if (!('f' != RBcYGjaMDw9[l0hyJHjIM1][0])) {
                ac9lYyZ = ac9lYyZ + (198 - 197);
                cin >> uT3Qu7CK[ac9lYyZ];
            }
            l0hyJHjIM1 = l0hyJHjIM1 + (925 - 924);
        }
    }
    {
        l0hyJHjIM1 = (719 - 718);
        for (; l0hyJHjIM1 <= ER9hPWdvUL6q;) {
            for (Itb6wx5 = (46 - 45); Itb6wx5 < l0hyJHjIM1; Itb6wx5 = Itb6wx5 +1)
                if (ntS0aIbnTU[Itb6wx5] > ntS0aIbnTU[l0hyJHjIM1]) {
                    QS2NhIP6D7d = ntS0aIbnTU[l0hyJHjIM1];
                    ntS0aIbnTU[l0hyJHjIM1] = ntS0aIbnTU[Itb6wx5];
                    ntS0aIbnTU[Itb6wx5] = QS2NhIP6D7d;
                }
            l0hyJHjIM1 = l0hyJHjIM1 + 1;
        }
    }
    {
        l0hyJHjIM1 = 1;
        for (; ac9lYyZ >= l0hyJHjIM1;) {
            for (Itb6wx5 = 1; l0hyJHjIM1 > Itb6wx5; Itb6wx5 = Itb6wx5 +1)
                if (uT3Qu7CK[Itb6wx5] < uT3Qu7CK[l0hyJHjIM1]) {
                    QS2NhIP6D7d = uT3Qu7CK[l0hyJHjIM1];
                    uT3Qu7CK[l0hyJHjIM1] = uT3Qu7CK[Itb6wx5];
                    uT3Qu7CK[Itb6wx5] = QS2NhIP6D7d;
                }
            l0hyJHjIM1 = l0hyJHjIM1 + 1;
        }
    }
    {
        l0hyJHjIM1 = 1;
        for (; l0hyJHjIM1 <= ER9hPWdvUL6q;) {
            cout << fixed << setprecision (2) << ntS0aIbnTU[l0hyJHjIM1] << " ";
            l0hyJHjIM1 = l0hyJHjIM1 + 1;
        }
    }
    {
        l0hyJHjIM1 = 1;
        for (; l0hyJHjIM1 <= ac9lYyZ;) {
            cout << fixed << setprecision (2) << uT3Qu7CK[l0hyJHjIM1];
            if (l0hyJHjIM1 != ac9lYyZ)
                cout << " ";
            l0hyJHjIM1 = l0hyJHjIM1 + 1;
        }
    }
    return 0;
}

