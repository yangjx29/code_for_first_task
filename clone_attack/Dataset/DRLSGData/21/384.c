const  double  e9fuXR50F = 0.000001;

int main () {
    double  bZN61ghCad;
    int t;
    int SQUp3I;
    int p6xJliTHZrk;
    int n, IcZehGy [301];
    double  average;
    bZN61ghCad = (666 - 666);
    cin >> n;
    for (SQUp3I = (524 - 524); SQUp3I < n; SQUp3I = SQUp3I +1) {
        cin >> IcZehGy[SQUp3I];
        bZN61ghCad = bZN61ghCad + IcZehGy[SQUp3I];
    }
    average = bZN61ghCad / n;
    for (SQUp3I = (388 - 388); n - (864 - 863) > SQUp3I; SQUp3I = SQUp3I +1) {
        for (p6xJliTHZrk = SQUp3I +(592 - 591); n > p6xJliTHZrk; p6xJliTHZrk = p6xJliTHZrk + 1) {
            if (IcZehGy[p6xJliTHZrk] < IcZehGy[SQUp3I]) {
                t = IcZehGy[SQUp3I];
                IcZehGy[SQUp3I] = IcZehGy[p6xJliTHZrk];
                IcZehGy[p6xJliTHZrk] = t;
            }
        }
    }
    if (!(IcZehGy[n - (496 - 495)] - average != average - IcZehGy[(964 - 964)]))
        cout << IcZehGy[(867 - 867)] << "," << IcZehGy[n - (336 - 335)] << endl;
    else if (average - IcZehGy[0] > IcZehGy[n - (476 - 475)] - average)
        cout << IcZehGy[0] << endl;
    else if (average - IcZehGy[0] < IcZehGy[n - 1] - average)
        cout << IcZehGy[n - 1] << endl;
    return 0;
}

