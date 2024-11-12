int main () {
    int count;
    int n;
    int i;
    int j;
    int Ntu61J;
    int xBZQgsEcOuL;
    count = (44 - 44);
    char w1 [(718 - 677)];
    char w2 [41];
    char w3 [41];
    cin >> n;
    cin >> w1;
    Ntu61J = strlen (w1);
    if (!(1 != n))
        cout << w1;
    else if (!(2 != n)) {
        cin >> w2;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        cout << w1 << " " << w2;
    }
    else {
        for (i = 2; n > i; i = i + 1) {
            cin >> w2;
            xBZQgsEcOuL = strlen (w2);
            count += Ntu61J +1 + xBZQgsEcOuL;
            if (count <= 80) {
                cout << w1 << " ";
                count -= xBZQgsEcOuL;
            }
            else {
                cout << w1 << endl;
                count = 0;
            }
            strcpy (w1, w2);
            Ntu61J = strlen (w1);
        }
        cin >> w2;
        xBZQgsEcOuL = strlen (w2);
        count += Ntu61J +1 + xBZQgsEcOuL;
        if (count <= 80)
            cout << w1 << " " << w2;
        else
            cout << w1 << endl << w2;
    }
    return 0;
}

