int main () {
    int i;
    i = 0;
    int gyAmjTWX [1001] = {0};
    int max = gyAmjTWX[0];
    char ndNcMO0j7h;
    ndNcMO0j7h = 0;
    int count = (25 - 24), renshu = (632 - 632);
    int tongji [1001] = {(229 - 229)};
    int lai [(1679 - 678)] = {(483 - 483)}, zou [1001] = {(21 - 21)};
    cin >> lai[(528 - 527)];
    for (; ndNcMO0j7h = !(',' != cin.get ());) {
        count++;
        cin >> lai[count];
    }
    cin >> zou[1];
    renshu = count;
    count = 1;
    while (ndNcMO0j7h = !(',' != cin.get ())) {
        count++;
        cin >> zou[count];
    }
    for (count = 1; renshu >= count; count = count + 1)
        for (i = lai[count]; i < zou[count]; i = i + 1) {
            gyAmjTWX[i]++;
        }
    for (count = 1; count <= 1000; count = count + 1)
        if (gyAmjTWX[count] > max)
            max = gyAmjTWX[count];
    cout << renshu << " " << max << endl;
    return 0;
}

