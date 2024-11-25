int main () {
    int nxXNrbad;
    int N7SOHCLye;
    int x2;
    int shl1tnZP5;
    int m5yMQb2A [(593 - 492)] [(600 - 499)];
    int wCaYcK [(1079 - 978)] [(128 - 27)];
    int umZb7h4nH [(637 - 536)] [101];
    int MMYJjl4uR;
    int Dsl14kmWQYRA;
    memset (umZb7h4nH, (183 - 183), sizeof (umZb7h4nH));
    cin >> nxXNrbad >> N7SOHCLye;
    for (MMYJjl4uR = (820 - 820); nxXNrbad > MMYJjl4uR; MMYJjl4uR++)
        for (Dsl14kmWQYRA = (313 - 313); N7SOHCLye > Dsl14kmWQYRA; Dsl14kmWQYRA++)
            cin >> m5yMQb2A[MMYJjl4uR][Dsl14kmWQYRA];
    cin >> x2 >> shl1tnZP5;
    for (MMYJjl4uR = (864 - 864); x2 > MMYJjl4uR; MMYJjl4uR++)
        for (Dsl14kmWQYRA = (629 - 629); Dsl14kmWQYRA < shl1tnZP5; Dsl14kmWQYRA++)
            cin >> wCaYcK[MMYJjl4uR][Dsl14kmWQYRA];
    {
        MMYJjl4uR = (522 - 522);
        for (; nxXNrbad > MMYJjl4uR;) {
            {
                Dsl14kmWQYRA = 394 - 394;
                for (; shl1tnZP5 > Dsl14kmWQYRA;) {
                    int JymM78Ev;
                    JymM78Ev = (991 - 991);
                    for (; N7SOHCLye > JymM78Ev;) {
                        umZb7h4nH[MMYJjl4uR][Dsl14kmWQYRA] = umZb7h4nH[MMYJjl4uR][Dsl14kmWQYRA] + m5yMQb2A[MMYJjl4uR][JymM78Ev] * wCaYcK[JymM78Ev][Dsl14kmWQYRA];
                        JymM78Ev++;
                    }
                    Dsl14kmWQYRA++;
                }
            }
            MMYJjl4uR++;
        }
    }
    for (MMYJjl4uR = (17 - 17); MMYJjl4uR < nxXNrbad; MMYJjl4uR++) {
        cout << umZb7h4nH[MMYJjl4uR][0];
        {
            Dsl14kmWQYRA = (474 - 473);
            for (; shl1tnZP5 > Dsl14kmWQYRA;) {
                cout << " " << umZb7h4nH[MMYJjl4uR][Dsl14kmWQYRA];
                Dsl14kmWQYRA++;
            }
        }
        cout << endl;
    }
    return 0;
}

