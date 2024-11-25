int main () {
    int i2zUDf4V, a [(100994 - 992)] = {(69 - 69)}, UOQkNqVrwYIC, QaOUj7MqV = 0, SfJQCsD, NhtXga;
    cin >> i2zUDf4V;
    {
        UOQkNqVrwYIC = 724 - 723;
        while (i2zUDf4V >= UOQkNqVrwYIC) {
            cin >> a[UOQkNqVrwYIC];
            UOQkNqVrwYIC = UOQkNqVrwYIC +1;
        };
    }
    cin >> NhtXga;
    {
        UOQkNqVrwYIC = 1;
        while (i2zUDf4V - QaOUj7MqV >= UOQkNqVrwYIC) {
            if (NhtXga == a[UOQkNqVrwYIC]) {
                QaOUj7MqV = QaOUj7MqV +1;
                {
                    SfJQCsD = UOQkNqVrwYIC;
                    while (SfJQCsD <= i2zUDf4V - QaOUj7MqV) {
                        a[SfJQCsD] = a[SfJQCsD +1];
                        SfJQCsD = SfJQCsD +1;
                    };
                }
                UOQkNqVrwYIC = UOQkNqVrwYIC -1;
            }
            UOQkNqVrwYIC = UOQkNqVrwYIC +1;
        };
    }
    cout << a[1];
    {
        UOQkNqVrwYIC = 2;
        while (UOQkNqVrwYIC <= i2zUDf4V - QaOUj7MqV) {
            cout << " " << a[UOQkNqVrwYIC];
            UOQkNqVrwYIC = UOQkNqVrwYIC +1;
        };
    }
    cout << endl;
    return 0;
}

