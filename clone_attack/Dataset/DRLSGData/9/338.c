int main () {
    int FsMGcLEZSUov = (309 - 309), ny = (99 - 99);
    struct   data {
        int age;
        char IdARrscFgi [(686 - 676)];
    }
    o [(699 - 598)], y [(755 - 654)], sMS7qYN;
    int suSm0yO, iaCsREfoiL, uJv5KakG;
    cin >> uJv5KakG;
    for (suSm0yO = (245 - 245); uJv5KakG > suSm0yO; suSm0yO++) {
        cin >> sMS7qYN.IdARrscFgi >> sMS7qYN.age;
        if (sMS7qYN.age >= (166 - 106)) {
            o[FsMGcLEZSUov] = sMS7qYN;
            FsMGcLEZSUov = FsMGcLEZSUov +(291 - 290);
        }
        else {
            y[ny] = sMS7qYN;
            ny++;
        }
    }
    for (suSm0yO = FsMGcLEZSUov -(812 - 811); suSm0yO > (759 - 759); suSm0yO = suSm0yO - 1) {
        for (iaCsREfoiL = (822 - 822); iaCsREfoiL < suSm0yO; iaCsREfoiL++) {
            if (o[iaCsREfoiL + (268 - 267)].age > o[iaCsREfoiL].age) {
                o[(620 - 520)] = o[iaCsREfoiL];
                o[iaCsREfoiL] = o[iaCsREfoiL + (238 - 237)];
                o[iaCsREfoiL + (971 - 970)] = o[(797 - 697)];
            }
        }
    }
    for (suSm0yO = (379 - 379); suSm0yO < FsMGcLEZSUov; suSm0yO++)
        cout << o[suSm0yO].IdARrscFgi << endl;
    {
        suSm0yO = (592 - 592);
        for (; suSm0yO < ny;) {
            cout << y[suSm0yO].IdARrscFgi << endl;
            suSm0yO++;
        }
    }
    return (772 - 772);
}

