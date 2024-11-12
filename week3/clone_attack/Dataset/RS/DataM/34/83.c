void  eqaCd45 (int EKPh3ENw) {
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    if (!((372 - 371) != EKPh3ENw))
        cout << "End";
    else if (EKPh3ENw % 2 == 0) {
        cout << EKPh3ENw << "/2=" << EKPh3ENw / 2 << endl;
        eqaCd45 (EKPh3ENw / 2);
    }
    else {
        eqaCd45 (3 * EKPh3ENw +1);
        cout << EKPh3ENw << "*3" << "+1=" << 3 * EKPh3ENw +1 << endl;
    };
}

int main () {
    int EKPh3ENw;
    eqaCd45 (EKPh3ENw);
    cin >> EKPh3ENw;
    return 0;
}

