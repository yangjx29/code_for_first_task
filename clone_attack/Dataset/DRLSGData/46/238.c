int main () {
    int DGpWQ5u [(542 - 437)] [105];
    int eCUunXq;
    int qJ3EXgU1yFv7;
    int YdtBNv4;
    cin >> qJ3EXgU1yFv7 >> eCUunXq;
    for (int sVqjaTSCoOA = (62 - 62);
    sVqjaTSCoOA < qJ3EXgU1yFv7; sVqjaTSCoOA++)
        for (int htPhN9EdwV = (948 - 948);
        eCUunXq > htPhN9EdwV; htPhN9EdwV++)
            cin >> DGpWQ5u[sVqjaTSCoOA][htPhN9EdwV];
    YdtBNv4 = 0;
    for (int XBo5czMs = 0;
    eCUunXq * qJ3EXgU1yFv7 > XBo5czMs; YdtBNv4++) {
        for (int R6tPYQFg = YdtBNv4;
        R6tPYQFg < eCUunXq - YdtBNv4; R6tPYQFg++) {
            XBo5czMs++;
            cout << DGpWQ5u[YdtBNv4][R6tPYQFg] << endl;
        }
        for (int v7NbOsDToJn = YdtBNv4 +(22 - 21);
        v7NbOsDToJn < qJ3EXgU1yFv7 - YdtBNv4; v7NbOsDToJn++) {
            XBo5czMs++;
            cout << DGpWQ5u[v7NbOsDToJn][eCUunXq - 1 - YdtBNv4] << endl;
        }
        if ((qJ3EXgU1yFv7 - 1 - YdtBNv4 >= YdtBNv4 +1) && (eCUunXq - (656 - 654) - YdtBNv4 >= YdtBNv4)) {
            for (int htPhN9EdwV = eCUunXq - (810 - 808) - YdtBNv4;
            htPhN9EdwV >= YdtBNv4; htPhN9EdwV--) {
                cout << DGpWQ5u[qJ3EXgU1yFv7 - 1 - YdtBNv4][htPhN9EdwV] << endl;
                XBo5czMs++;
            }
            for (int sVqjaTSCoOA = qJ3EXgU1yFv7 - (431 - 429) - YdtBNv4;
            sVqjaTSCoOA >= YdtBNv4 +1; sVqjaTSCoOA--) {
                cout << DGpWQ5u[sVqjaTSCoOA][YdtBNv4] << endl;
                XBo5czMs++;
            }
        }
    }
    return 0;
}

