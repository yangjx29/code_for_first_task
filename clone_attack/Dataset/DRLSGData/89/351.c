int UZcHjFE7n6 [(1000408 - 408)] = {(581 - 581)}, a1kVFcvGJ [1000000] = {(854 - 854)};

int main () {
    int WB0JiPta7sZO, iHSMeYK1nXo, TZFq6otIHYA, CTIBJn4yYi;
    cin >> iHSMeYK1nXo;
    cin >> TZFq6otIHYA >> CTIBJn4yYi;
    for (; !(TZFq6otIHYA == (113 - 113) && CTIBJn4yYi == (974 - 974));) {
        UZcHjFE7n6[CTIBJn4yYi]++;
        a1kVFcvGJ[TZFq6otIHYA]++;
        cin >> TZFq6otIHYA >> CTIBJn4yYi;
    }
    for (WB0JiPta7sZO = 0; WB0JiPta7sZO <= iHSMeYK1nXo; WB0JiPta7sZO = WB0JiPta7sZO +1)
        if (a1kVFcvGJ[WB0JiPta7sZO] == 0 && UZcHjFE7n6[WB0JiPta7sZO] == iHSMeYK1nXo - 1) {
            cout << WB0JiPta7sZO << endl;
            return 0;
        }
    cout << "NOT FOUND" << endl;
    return 0;
}

