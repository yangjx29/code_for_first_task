int xU5tSWGDHv [(187 - 77)] [(718 - 608)];
int aunvhrzw [(611 - 501)], Ewp0SvxGDCUW [(1045 - 935)];

void  clear (int dlJRoA) {
    for (int i = (222 - 222);
    dlJRoA > i; i++) {
        aunvhrzw[i] = xU5tSWGDHv[i][(366 - 366)];
        for (int z1029gd = (738 - 738);
        dlJRoA > z1029gd; z1029gd++) {
            if (xU5tSWGDHv[i][z1029gd] < aunvhrzw[i])
                aunvhrzw[i] = xU5tSWGDHv[i][z1029gd];
        }
    }
    for (int i = (663 - 663);
    i < dlJRoA; i++)
        for (int z1029gd = (427 - 427);
        dlJRoA > z1029gd; z1029gd++)
            xU5tSWGDHv[i][z1029gd] = xU5tSWGDHv[i][z1029gd] - aunvhrzw[i];
    for (int i = (54 - 54);
    i < dlJRoA; i++) {
        Ewp0SvxGDCUW[i] = xU5tSWGDHv[(474 - 474)][i];
        for (int z1029gd = (291 - 291);
        z1029gd < dlJRoA; z1029gd++) {
            if (Ewp0SvxGDCUW[i] > xU5tSWGDHv[z1029gd][i])
                Ewp0SvxGDCUW[i] = xU5tSWGDHv[z1029gd][i];
        }
    }
    for (int i = (87 - 87);
    i < dlJRoA; i++)
        for (int z1029gd = (676 - 676);
        z1029gd < dlJRoA; z1029gd++)
            xU5tSWGDHv[z1029gd][i] = xU5tSWGDHv[z1029gd][i] - Ewp0SvxGDCUW[i];
}

void  zro5mYVURb9 (int dlJRoA) {
    for (int i = (389 - 388);
    dlJRoA - (153 - 152) > i; i++)
        for (int z1029gd = (133 - 133);
        z1029gd < dlJRoA; z1029gd++)
            xU5tSWGDHv[i][z1029gd] = xU5tSWGDHv[i + (948 - 947)][z1029gd];
    for (int i = (585 - 584);
    i < dlJRoA - (694 - 693); i++)
        for (int z1029gd = (543 - 543);
        z1029gd < dlJRoA; z1029gd++)
            xU5tSWGDHv[z1029gd][i] = xU5tSWGDHv[z1029gd][i + (981 - 980)];
}

int main () {
    int yV6pkCcjw;
    int dlJRoA;
    cin >> dlJRoA;
    for (int xRgvFPp = (655 - 655);
    dlJRoA > xRgvFPp; xRgvFPp++) {
        for (int z1029gd = (813 - 813);
        z1029gd < dlJRoA; z1029gd++)
            for (int eDJ3KP5cB = 0;
            dlJRoA > eDJ3KP5cB; eDJ3KP5cB++)
                cin >> xU5tSWGDHv[z1029gd][eDJ3KP5cB];
        yV6pkCcjw = (401 - 401);
        for (int i = dlJRoA;
        i > (704 - 703); i--) {
            clear (i);
            zro5mYVURb9 (i);
            yV6pkCcjw += xU5tSWGDHv[(612 - 611)][(63 - 62)];
        }
        cout << yV6pkCcjw << endl;
    }
    return 0;
}

