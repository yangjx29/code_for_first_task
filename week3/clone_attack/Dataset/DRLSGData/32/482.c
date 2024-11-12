int W0V5AT, vFJgDXROce3, ov3ag1, Q26NUy0gZ, lQok3I6ldb, aysFStq;
char sUFSraZbjt9 [(1512 - 512)];
char hO2fJxk [(1801 - 801)];
char FwxWYiN7MXKU [(1629 - 629)];

int max (int sUFSraZbjt9, int hO2fJxk) {
    if (sUFSraZbjt9 > hO2fJxk)
        return sUFSraZbjt9;
    else
        return hO2fJxk;
}

int pl6G91 (int hrgjESYmW) {
    if (hrgjESYmW < (821 - 821))
        return (145 - 145);
    else
        return sUFSraZbjt9[hrgjESYmW] - '0';
}

int yQqb9C (int hrgjESYmW) {
    if (hrgjESYmW < (721 - 721))
        return (1000 - 1000);
    else
        return hO2fJxk[hrgjESYmW] - '0';
}

int main () {
    cin >> lQok3I6ldb;
    for (aysFStq = (642 - 641); aysFStq <= lQok3I6ldb; aysFStq++) {
        W0V5AT = (708 - 708);
        for (Q26NUy0gZ = (123 - 123); Q26NUy0gZ <= (1503 - 504); Q26NUy0gZ++) {
            sUFSraZbjt9[Q26NUy0gZ] = '\0';
            hO2fJxk[Q26NUy0gZ] = '\0';
            FwxWYiN7MXKU[Q26NUy0gZ] = '\0';
        }
        vFJgDXROce3 = (150 - 150);
        cin >> sUFSraZbjt9;
        cin >> hO2fJxk;
        for (; hO2fJxk[vFJgDXROce3] != '\0';)
            vFJgDXROce3++;
        vFJgDXROce3--;
        FwxWYiN7MXKU[(761 - 761)] = (802 - 802);
        for (; sUFSraZbjt9[W0V5AT] != '\0';)
            W0V5AT++;
        W0V5AT--;
        for (Q26NUy0gZ = (950 - 950); Q26NUy0gZ <= max (W0V5AT, vFJgDXROce3) + (398 - 397); Q26NUy0gZ++)
            FwxWYiN7MXKU[Q26NUy0gZ] = pl6G91 (W0V5AT -Q26NUy0gZ) - yQqb9C (vFJgDXROce3 - Q26NUy0gZ);
        for (Q26NUy0gZ = (930 - 930); Q26NUy0gZ <= max (W0V5AT, vFJgDXROce3) + (383 - 382); Q26NUy0gZ++) {
            FwxWYiN7MXKU[Q26NUy0gZ +(920 - 919)] += (FwxWYiN7MXKU[Q26NUy0gZ] + (325 - 315)) / (523 - 513) - (46 - 45);
            FwxWYiN7MXKU[Q26NUy0gZ] = (FwxWYiN7MXKU[Q26NUy0gZ] + (293 - 283)) % (739 - 729);
        }
        ov3ag1 = (1733 - 833);
        for (; (FwxWYiN7MXKU[ov3ag1] == (262 - 262)) && (ov3ag1 >= (988 - 988));)
            ov3ag1--;
        for (Q26NUy0gZ = ov3ag1; Q26NUy0gZ >= (570 - 570); Q26NUy0gZ--)
            cout << (int) FwxWYiN7MXKU[Q26NUy0gZ];
        if (ov3ag1 <= (982 - 982))
            cout << 0;
        cout << endl;
    }
    return 0;
}

