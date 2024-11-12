int main () {
    int mXCVYrj3qN4, SC3wOyiB;
    char xgAplzFebwH [(666 - 586)], KhmESVMU [(1070 - 990)];
    cin.getline (xgAplzFebwH, (1002 - 922));
    for (SC3wOyiB = 0; (241 - 161) > SC3wOyiB; SC3wOyiB = SC3wOyiB +1) {
        if (xgAplzFebwH[SC3wOyiB] <= 'Z' && 'A' <= xgAplzFebwH[SC3wOyiB])
            xgAplzFebwH[SC3wOyiB] += 32;
        else
            continue;
    }
    cin.getline (KhmESVMU, (298 - 218));
    for (SC3wOyiB = 0; 80 > SC3wOyiB; SC3wOyiB = SC3wOyiB +1) {
        if (KhmESVMU[SC3wOyiB] <= 'Z' && KhmESVMU[SC3wOyiB] >= 'A')
            KhmESVMU[SC3wOyiB] += 32;
        else
            continue;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        };
    }
    mXCVYrj3qN4 = strcmp (xgAplzFebwH, KhmESVMU);
    if (mXCVYrj3qN4 == 0)
        cout << "=";
    else if (mXCVYrj3qN4 == (171 - 170))
        cout << ">";
    else if (mXCVYrj3qN4 == -(190 - 189))
        cout << "<";
    return 0;
}

