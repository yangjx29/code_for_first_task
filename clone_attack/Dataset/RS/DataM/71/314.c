int main () {
    int p3MFy6tz [12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int year [200];
    int month0 [200];
    int CDSsuWCPja [200];
    int day;
    int rLZf5Fobm;
    int i;
    int Kv0sewSN;
    int mHNrZ0Sqs;
    cin >> rLZf5Fobm;
    {
        i = 0;
        while (i < rLZf5Fobm) {
            day = 0;
            cin >> year[i] >> month0[i] >> CDSsuWCPja[i];
            if (month0[i] > CDSsuWCPja[i]) {
                mHNrZ0Sqs = month0[i];
                month0[i] = CDSsuWCPja[i];
                CDSsuWCPja[i] = mHNrZ0Sqs;
            }
            if ((year[i] % 4 == 0 && year[i] % 100 != 0) || year[i] % 400 == 0)
                p3MFy6tz[1] = 29;
            else
                p3MFy6tz[1] = 28;
            {
                Kv0sewSN = i;
                while (Kv0sewSN <= CDSsuWCPja[i] - 1) {
                    day += p3MFy6tz[Kv0sewSN -1];
                    Kv0sewSN++;
                };
            }
            if (day % 7 == 0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
            i++;
        };
    }
    return 0;
}

