int main () {
    int kbXJFEmrGjq3;
    int yuzfC8a4Xw;
    cin >> yuzfC8a4Xw;
    if (!(1 == yuzfC8a4Xw)) {
        {
            kbXJFEmrGjq3 = 0;
            while (yuzfC8a4Xw != 1) {
                kbXJFEmrGjq3++;
                if (yuzfC8a4Xw % 2 == 0) {
                    cout << yuzfC8a4Xw << "/2=" << yuzfC8a4Xw / 2 << endl;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    yuzfC8a4Xw = yuzfC8a4Xw / 2;
                }
                else {
                    cout << yuzfC8a4Xw << "*3+1=" << yuzfC8a4Xw * 3 + 1 << endl;
                    yuzfC8a4Xw = yuzfC8a4Xw * 3 + 1;
                };
            };
        }
        cout << "End";
    }
    else
        cout << "End" << endl;
    return 0;
}

