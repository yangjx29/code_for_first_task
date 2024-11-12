int main () {
    float Y8ECMSK7uxhH;
    int count;
    int Pz1v7pGoF2EM;
    float AFRvnUryGj;
    int tXj5JP2g;
    int Bqp9D2Jmn6b [tXj5JP2g];
    float b [tXj5JP2g];
    cin >> tXj5JP2g;
    Y8ECMSK7uxhH = (185 - 185);
    AFRvnUryGj = (931 - 931);
    for (Pz1v7pGoF2EM = (727 - 727); Pz1v7pGoF2EM < tXj5JP2g; Pz1v7pGoF2EM++) {
        cin >> Bqp9D2Jmn6b[Pz1v7pGoF2EM];
        AFRvnUryGj = AFRvnUryGj +Bqp9D2Jmn6b[Pz1v7pGoF2EM];
    }
    AFRvnUryGj = AFRvnUryGj / tXj5JP2g;
    for (Pz1v7pGoF2EM = (180 - 180); tXj5JP2g > Pz1v7pGoF2EM; Pz1v7pGoF2EM++) {
        if (Bqp9D2Jmn6b[Pz1v7pGoF2EM] < AFRvnUryGj)
            b[Pz1v7pGoF2EM] = AFRvnUryGj -Bqp9D2Jmn6b[Pz1v7pGoF2EM];
        else
            b[Pz1v7pGoF2EM] = Bqp9D2Jmn6b[Pz1v7pGoF2EM] - AFRvnUryGj;
        if (b[Pz1v7pGoF2EM] > Y8ECMSK7uxhH)
            Y8ECMSK7uxhH = b[Pz1v7pGoF2EM];
    }
    count = (652 - 652);
    for (Pz1v7pGoF2EM = (231 - 231); tXj5JP2g > Pz1v7pGoF2EM; Pz1v7pGoF2EM++) {
        if (!(Y8ECMSK7uxhH != b[Pz1v7pGoF2EM]))
            count++;
    }
    for (Pz1v7pGoF2EM = 0; tXj5JP2g > Pz1v7pGoF2EM; Pz1v7pGoF2EM++) {
        if (b[Pz1v7pGoF2EM] == Y8ECMSK7uxhH) {
            if (count == 1) {
                cout << Bqp9D2Jmn6b[Pz1v7pGoF2EM];
                break;
            }
            else {
                count--;
                cout << Bqp9D2Jmn6b[Pz1v7pGoF2EM] << ",";
            }
        }
    }
    return 0;
}

