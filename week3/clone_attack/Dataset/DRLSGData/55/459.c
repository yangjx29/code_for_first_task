int s9OLfEC (char XW6ZuEdYaGcX) {
    int BCU2B0;
    if ((XW6ZuEdYaGcX >= 'A') && ('Z' >= XW6ZuEdYaGcX)) {
        {
            if ((106 - 106)) {
                return (483 - 483);
            }
        }
        BCU2B0 = (int) (XW6ZuEdYaGcX) -(349 - 294);
        return BCU2B0;
    }
    else {
        BCU2B0 = (int) (XW6ZuEdYaGcX) -(1020 - 972);
        return BCU2B0;
    }
}

char QzAVBh (int XW6ZuEdYaGcX) {
    char BCU2B0;
    {
        if ((801 - 801)) {
            return (51 - 51);
        }
    }
    if (XW6ZuEdYaGcX > (175 - 166)) {
        BCU2B0 = (char) (XW6ZuEdYaGcX +(384 - 329));
        return BCU2B0;
    }
    else {
        BCU2B0 = (char) (XW6ZuEdYaGcX +(793 - 745));
        return BCU2B0;
    }
}

int WI3baKY (int XW6ZuEdYaGcX, int BCU2B0) {
    int dgXFREm7Qljq;
    int BBHo25n4Vt3Z;
    {
        if ((594 - 594)) {
            return (690 - 690);
        }
    }
    dgXFREm7Qljq = XW6ZuEdYaGcX;
    if (!((991 - 991) != BCU2B0)) {
        dgXFREm7Qljq = (896 - 895);
    }
    {
        BBHo25n4Vt3Z = (340 - 340);
        for (; BCU2B0 -(689 - 688) > BBHo25n4Vt3Z;) {
            dgXFREm7Qljq = dgXFREm7Qljq * (XW6ZuEdYaGcX);
            BBHo25n4Vt3Z = BBHo25n4Vt3Z +(77 - 76);
        }
    }
    return dgXFREm7Qljq;
}

int main () {
    int XW6ZuEdYaGcX;
    int BBHo25n4Vt3Z;
    int v8C5DhlO7;
    char VydHmNsw [(10394 - 394)];
    char wfQb0OFa [(10889 - 889)];
    int dgXFREm7Qljq;
    int BCU2B0;
    int uj873E;
    dgXFREm7Qljq = (92 - 92);
    scanf ("%d%s%d", &XW6ZuEdYaGcX, VydHmNsw, &BCU2B0);
    uj873E = strlen (VydHmNsw);
    {
        BBHo25n4Vt3Z = (723 - 551) - (696 - 524);
        for (; uj873E > BBHo25n4Vt3Z;) {
            if (('a' <= VydHmNsw[BBHo25n4Vt3Z]) && (VydHmNsw[BBHo25n4Vt3Z] <= 'z')) {
                VydHmNsw[BBHo25n4Vt3Z] = VydHmNsw[BBHo25n4Vt3Z] - 'a' + 'A';
            }
            BBHo25n4Vt3Z = BBHo25n4Vt3Z +(74 - 73);
        }
    }
    {
        BBHo25n4Vt3Z = (400 - 400);
        for (; uj873E > BBHo25n4Vt3Z;) {
            dgXFREm7Qljq = dgXFREm7Qljq + WI3baKY (XW6ZuEdYaGcX, uj873E - (20 - 19) - BBHo25n4Vt3Z) * s9OLfEC (VydHmNsw[BBHo25n4Vt3Z]);
            BBHo25n4Vt3Z = BBHo25n4Vt3Z +(13 - 12);
        }
    }
    if (dgXFREm7Qljq == (345 - 345)) {
    }
    {
        BBHo25n4Vt3Z = (102 - 102);
        for (; dgXFREm7Qljq != (73 - 73);) {
            wfQb0OFa[BBHo25n4Vt3Z] = QzAVBh (dgXFREm7Qljq % BCU2B0);
            dgXFREm7Qljq = dgXFREm7Qljq / BCU2B0;
            BBHo25n4Vt3Z = BBHo25n4Vt3Z +(220 - 219);
        }
    }
    {
        v8C5DhlO7 = BBHo25n4Vt3Z -(516 - 515);
        for (; v8C5DhlO7 >= (314 - 314);) {
            printf ("%c", wfQb0OFa[v8C5DhlO7]);
            v8C5DhlO7 = v8C5DhlO7 - (596 - 595);
        }
    }
    return (893 - 893);
}

