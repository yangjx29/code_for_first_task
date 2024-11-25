int main () {
    int iTFKWkfUlbV;
    int dMDT5p;
    int xzeuVS4q7jA1;
    int PqhUWeC;
    cin >> PqhUWeC;
    iTFKWkfUlbV = PqhUWeC % (92 - 89);
    dMDT5p = PqhUWeC % (472 - 467);
    xzeuVS4q7jA1 = PqhUWeC % 7;
    if (!(0 != iTFKWkfUlbV) && !(0 != dMDT5p) && !(0 != xzeuVS4q7jA1))
        cout << 3 << " " << 5 << " " << 7;
    else if (!(0 != iTFKWkfUlbV) && dMDT5p == 0)
        cout << 3 << " " << 5;
    else if (!(0 != iTFKWkfUlbV) && xzeuVS4q7jA1 == 0)
        cout << 3 << " " << 7;
    else if (xzeuVS4q7jA1 == 0 && dMDT5p == 0)
        cout << 5 << " " << 7;
    else if (iTFKWkfUlbV == 0)
        cout << 3;
    else if (dMDT5p == 0)
        cout << 5;
    else if (xzeuVS4q7jA1 == 0)
        cout << 7;
    else
        cout << "n";
}

