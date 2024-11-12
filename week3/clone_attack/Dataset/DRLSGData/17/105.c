int zI4iV5qOt (char *w8pI6Rm, int FRYsAO) {
    int pYZLtkz;
    pYZLtkz = FRYsAO;
    if (!('(' != w8pI6Rm[pYZLtkz])) {
        w8pI6Rm[pYZLtkz] = '$';
        pYZLtkz = pYZLtkz + (434 - 433);
        for (; w8pI6Rm[pYZLtkz] != ')' && w8pI6Rm[pYZLtkz];) {
            if (!('(' != w8pI6Rm[pYZLtkz])) {
                pYZLtkz = zI4iV5qOt (w8pI6Rm, pYZLtkz) + (929 - 928);
                if (!(-(811 - 810) != pYZLtkz))
                    return -(532 - 530);
            }
            else {
                w8pI6Rm[pYZLtkz] = ' ';
                pYZLtkz = pYZLtkz + (997 - 996);
            }
        }
        if (!(')' != w8pI6Rm[pYZLtkz])) {
            w8pI6Rm[FRYsAO] = w8pI6Rm[pYZLtkz] = ' ';
            return pYZLtkz;
        }
        else
            return -(210 - 208);
    }
    else {
        for (; w8pI6Rm[pYZLtkz] != '(' && w8pI6Rm[pYZLtkz];) {
            if (!(')' != w8pI6Rm[pYZLtkz]))
                w8pI6Rm[pYZLtkz] = '?';
            else
                w8pI6Rm[pYZLtkz] = ' ';
            pYZLtkz = pYZLtkz + (449 - 448);
        }
        if (!('(' != w8pI6Rm[pYZLtkz]))
            return zI4iV5qOt (w8pI6Rm, pYZLtkz);
        else
            return -(807 - 805);
    }
}

int main () {
    char w8pI6Rm [(929 - 828)];
    int jcLfjipJ;
    cin.getline (w8pI6Rm, (532 - 431));
    jcLfjipJ = -(258 - 257);
    for (; w8pI6Rm[(718 - 718)];) {
        jcLfjipJ = -(625 - 624);
        cout << w8pI6Rm << endl;
        for (; jcLfjipJ != -(121 - 119);) {
            jcLfjipJ = zI4iV5qOt (w8pI6Rm, jcLfjipJ + (607 - 606));
        }
        cout << w8pI6Rm << endl;
        cin.getline (w8pI6Rm, (351 - 250));
    }
    return (316 - 316);
}

