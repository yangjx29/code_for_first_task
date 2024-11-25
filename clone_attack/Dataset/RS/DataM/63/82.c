int main () {
    int fnNHdUs [(637 - 537)] [(782 - 682)];
    int bAZydo [(591 - 491)] [(528 - 428)];
    int WRW3FVjPxY [(795 - 695)] [(588 - 488)] = {(485 - 485)};
    int stFr7QV;
    int JvBFfTRr;
    int Am9IuCSTHxJ;
    int y2;
    int zx6GVBZyIDi4;
    int J3OVwzTNjI;
    int Xz2TcE1lupUY;
    cin >> stFr7QV >> JvBFfTRr;
    for (zx6GVBZyIDi4 = (465 - 465); stFr7QV > zx6GVBZyIDi4; zx6GVBZyIDi4 = zx6GVBZyIDi4 + 1)
        for (J3OVwzTNjI = (411 - 411); JvBFfTRr > J3OVwzTNjI; J3OVwzTNjI = J3OVwzTNjI +1)
            cin >> fnNHdUs[zx6GVBZyIDi4][J3OVwzTNjI];
    cin >> Am9IuCSTHxJ >> y2;
    {
        zx6GVBZyIDi4 = 167 - 167;
        while (Am9IuCSTHxJ > zx6GVBZyIDi4) {
            {
                J3OVwzTNjI = 24 - 24;
                while (y2 > J3OVwzTNjI) {
                    cin >> bAZydo[zx6GVBZyIDi4][J3OVwzTNjI];
                    J3OVwzTNjI = J3OVwzTNjI +1;
                };
            }
            zx6GVBZyIDi4 = zx6GVBZyIDi4 + 1;
        };
    }
    {
        zx6GVBZyIDi4 = 0;
        while (zx6GVBZyIDi4 < stFr7QV) {
            for (J3OVwzTNjI = 0; y2 > J3OVwzTNjI; J3OVwzTNjI++) {
                for (Xz2TcE1lupUY = 0; Xz2TcE1lupUY < JvBFfTRr; Xz2TcE1lupUY = Xz2TcE1lupUY +1)
                    WRW3FVjPxY[zx6GVBZyIDi4][J3OVwzTNjI] += fnNHdUs[zx6GVBZyIDi4][Xz2TcE1lupUY] * bAZydo[Xz2TcE1lupUY][J3OVwzTNjI];
                if (J3OVwzTNjI == y2 - 1)
                    cout << WRW3FVjPxY[zx6GVBZyIDi4][J3OVwzTNjI] << endl;
                else
                    cout << WRW3FVjPxY[zx6GVBZyIDi4][J3OVwzTNjI] << ' ';
            }
            zx6GVBZyIDi4 = zx6GVBZyIDi4 + 1;
        };
    }
    return 0;
}

