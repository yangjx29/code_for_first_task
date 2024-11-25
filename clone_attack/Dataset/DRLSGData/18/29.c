int jMTwGvI3i8Fl [10000] [10000];

int yHIUVgt (int x) {
    int oumxYQl8;
    int OSLboJDNfajC;
    if (!(2 != x)) {
        for (int VShNUYlTpkFz = 0;
        VShNUYlTpkFz <= 1; VShNUYlTpkFz = VShNUYlTpkFz +1)
            if (jMTwGvI3i8Fl[VShNUYlTpkFz][0] > jMTwGvI3i8Fl[VShNUYlTpkFz][1]) {
                jMTwGvI3i8Fl[VShNUYlTpkFz][0] = jMTwGvI3i8Fl[VShNUYlTpkFz][0] - jMTwGvI3i8Fl[VShNUYlTpkFz][1];
                jMTwGvI3i8Fl[VShNUYlTpkFz][1] = 0;
            }
            else {
                jMTwGvI3i8Fl[VShNUYlTpkFz][1] = jMTwGvI3i8Fl[VShNUYlTpkFz][1] - jMTwGvI3i8Fl[VShNUYlTpkFz][0];
                jMTwGvI3i8Fl[VShNUYlTpkFz][0] = 0;
            }
        for (int VShNUYlTpkFz = 0;
        1 >= VShNUYlTpkFz; VShNUYlTpkFz = VShNUYlTpkFz +1)
            if (jMTwGvI3i8Fl[0][VShNUYlTpkFz] > jMTwGvI3i8Fl[1][VShNUYlTpkFz]) {
                jMTwGvI3i8Fl[0][VShNUYlTpkFz] = jMTwGvI3i8Fl[0][VShNUYlTpkFz] - jMTwGvI3i8Fl[1][VShNUYlTpkFz];
                jMTwGvI3i8Fl[1][VShNUYlTpkFz] = 0;
            }
            else {
                jMTwGvI3i8Fl[1][VShNUYlTpkFz] = jMTwGvI3i8Fl[1][VShNUYlTpkFz] - jMTwGvI3i8Fl[0][VShNUYlTpkFz];
                jMTwGvI3i8Fl[0][VShNUYlTpkFz] = 0;
            }
        return jMTwGvI3i8Fl[1][1];
    }
    else {
        for (int VShNUYlTpkFz = 0;
        x > VShNUYlTpkFz; VShNUYlTpkFz++) {
            oumxYQl8 = jMTwGvI3i8Fl[VShNUYlTpkFz][0];
            for (int c9obzuWRw = 0;
            x > c9obzuWRw; c9obzuWRw++)
                if (oumxYQl8 > jMTwGvI3i8Fl[VShNUYlTpkFz][c9obzuWRw])
                    oumxYQl8 = jMTwGvI3i8Fl[VShNUYlTpkFz][c9obzuWRw];
            for (int c9obzuWRw = 0;
            c9obzuWRw < x; c9obzuWRw++)
                jMTwGvI3i8Fl[VShNUYlTpkFz][c9obzuWRw] = jMTwGvI3i8Fl[VShNUYlTpkFz][c9obzuWRw] - oumxYQl8;
        }
        for (int VShNUYlTpkFz = 0;
        x > VShNUYlTpkFz; VShNUYlTpkFz++) {
            oumxYQl8 = jMTwGvI3i8Fl[0][VShNUYlTpkFz];
            for (int c9obzuWRw = 0;
            c9obzuWRw < x; c9obzuWRw++)
                if (oumxYQl8 > jMTwGvI3i8Fl[c9obzuWRw][VShNUYlTpkFz])
                    oumxYQl8 = jMTwGvI3i8Fl[c9obzuWRw][VShNUYlTpkFz];
            for (int c9obzuWRw = 0;
            c9obzuWRw < x; c9obzuWRw++)
                jMTwGvI3i8Fl[c9obzuWRw][VShNUYlTpkFz] = jMTwGvI3i8Fl[c9obzuWRw][VShNUYlTpkFz] - oumxYQl8;
        }
        OSLboJDNfajC = jMTwGvI3i8Fl[1][1];
        for (int VShNUYlTpkFz = 0;
        x > VShNUYlTpkFz; VShNUYlTpkFz++)
            for (int c9obzuWRw = 1;
            x - 1 > c9obzuWRw; c9obzuWRw++)
                jMTwGvI3i8Fl[VShNUYlTpkFz][c9obzuWRw] = jMTwGvI3i8Fl[VShNUYlTpkFz][c9obzuWRw + 1];
        for (int VShNUYlTpkFz = 0;
        VShNUYlTpkFz < x - 1; VShNUYlTpkFz++)
            for (int c9obzuWRw = 1;
            c9obzuWRw < x - 1; c9obzuWRw++)
                jMTwGvI3i8Fl[c9obzuWRw][VShNUYlTpkFz] = jMTwGvI3i8Fl[c9obzuWRw + 1][VShNUYlTpkFz];
        return OSLboJDNfajC +yHIUVgt (x - 1);
    }
}

int main () {
    int QoZgJ0;
    int A9qMR4JPAVL;
    A9qMR4JPAVL = 1;
    cin >> QoZgJ0;
    for (A9qMR4JPAVL = 1; A9qMR4JPAVL <= QoZgJ0; A9qMR4JPAVL++) {
        for (int VShNUYlTpkFz = 0;
        VShNUYlTpkFz < QoZgJ0; VShNUYlTpkFz++)
            for (int c9obzuWRw = 0;
            c9obzuWRw < QoZgJ0; c9obzuWRw++)
                cin >> jMTwGvI3i8Fl[VShNUYlTpkFz][c9obzuWRw];
        cout << yHIUVgt (QoZgJ0) << endl;
    }
    return 0;
}

