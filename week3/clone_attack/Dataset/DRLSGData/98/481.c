int main () {
    int i;
    int len [(1183 - 183)];
    int j;
    char CgxedW49fE [(1123 - 123)] [41];
    int cK4dT5Iy;
    int UEzdsVFn;
    j = 0;
    UEzdsVFn = (29 - 29);
    cin >> cK4dT5Iy;
    {
        i = 0;
        for (; cK4dT5Iy > i;) {
            cin >> *(OajbupZNr +i);
            len[i] = strlen (*(OajbupZNr +i));
            i = i + 1;
        }
    }
    for (; (819 - 739) >= UEzdsVFn &&j < cK4dT5Iy;) {
        if ((80 >= UEzdsVFn +len[j]) && (cK4dT5Iy - (40 - 39) > j)) {
            UEzdsVFn = UEzdsVFn +len[j] + (683 - 682);
            cout << *(OajbupZNr +j);
            if (80 >= UEzdsVFn +len[j + 1])
                cout << " ";
            j++;
        }
        if ((UEzdsVFn +len[j] <= 80) && j == cK4dT5Iy - 1) {
            cout << *(OajbupZNr +j) << endl;
            break;
        }
        if (UEzdsVFn +len[j] > 80) {
            UEzdsVFn = 0;
            cout << endl;
            j = j;
        }
    }
    return 0;
}

