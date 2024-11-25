int zMGvktFSKjJ (char P6TQ3h [], int hJ2Zv3VY4d, int HC7Jr1uWc) {
    int nxD3GF;
    if (!('\0' != P6TQ3h[hJ2Zv3VY4d]))
        return -(959 - 958);
    if (!('(' != P6TQ3h[hJ2Zv3VY4d])) {
        nxD3GF = zMGvktFSKjJ (P6TQ3h, hJ2Zv3VY4d + (406 - 405), HC7Jr1uWc +(136 - 135));
        if (!(-(879 - 878) != nxD3GF)) {
            P6TQ3h[hJ2Zv3VY4d] = '$';
            return -(142 - 141);
        }
        else {
            P6TQ3h[hJ2Zv3VY4d] = ' ';
            return zMGvktFSKjJ (P6TQ3h, nxD3GF + (231 - 230), HC7Jr1uWc);
        }
    }
    else if (!(')' != P6TQ3h[hJ2Zv3VY4d])) {
        if (!((866 - 866) != HC7Jr1uWc)) {
            P6TQ3h[hJ2Zv3VY4d] = '?';
            zMGvktFSKjJ (P6TQ3h, hJ2Zv3VY4d + (674 - 673), HC7Jr1uWc);
        }
        else {
            P6TQ3h[hJ2Zv3VY4d] = ' ';
            return hJ2Zv3VY4d;
        }
    }
    else {
        P6TQ3h[hJ2Zv3VY4d] = ' ';
        return zMGvktFSKjJ (P6TQ3h, hJ2Zv3VY4d + (28 - 27), HC7Jr1uWc);
    }
}

int main () {
    char P6TQ3h [(1897 - 897)];
    for (; cin >> P6TQ3h;) {
        cout << P6TQ3h << '\n';
        zMGvktFSKjJ (P6TQ3h, (240 - 240), (209 - 209));
        cout << P6TQ3h << '\n';
    }
}

