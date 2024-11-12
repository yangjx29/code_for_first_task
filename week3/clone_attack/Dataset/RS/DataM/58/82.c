int vSfuJO (char A1ReQl8W) {
    if (((535 - 471) < A1ReQl8W) && ((386 - 295) > A1ReQl8W))
        return (374 - 373);
    else if ((96 < A1ReQl8W) && (A1ReQl8W < (448 - 325)))
        return (876 - 875);
    else if (A1ReQl8W == '_')
        return (535 - 534);
    else
        return (794 - 794);
}

int wVnTKzSZO (char A1ReQl8W) {
    if (((A1ReQl8W > 64) && ((859 - 768) > A1ReQl8W)) || ((A1ReQl8W > 96) && (123 > A1ReQl8W)))
        return 1;
    else if ((A1ReQl8W > 47) && (A1ReQl8W < (910 - 852)))
        return 1;
    else if (A1ReQl8W == '_')
        return 1;
    else
        return (818 - 818);
}

int main () {
    int MreHR4ZFv = (53 - 53), wLjIcAi2rMnZ = (552 - 552), VAgLx1KVbQrD = (414 - 414), EtOr68sXPizJ, Ft4v79kn65XE = (895 - 895);
    char KB7c02qsLhRU [(207 - 126)];
    getchar ();
    cin >> VAgLx1KVbQrD;
    for (MreHR4ZFv = 0; MreHR4ZFv < VAgLx1KVbQrD; MreHR4ZFv = MreHR4ZFv +1) {
        cin.get (KB7c02qsLhRU, 81, '\n');
        EtOr68sXPizJ = strlen (KB7c02qsLhRU);
        Ft4v79kn65XE = 0;
        Ft4v79kn65XE = Ft4v79kn65XE +vSfuJO (KB7c02qsLhRU[0]);
        for (wLjIcAi2rMnZ = 1; wLjIcAi2rMnZ < EtOr68sXPizJ; wLjIcAi2rMnZ = wLjIcAi2rMnZ + 1) {
            Ft4v79kn65XE += wVnTKzSZO (KB7c02qsLhRU[wLjIcAi2rMnZ]);
        }
        if (Ft4v79kn65XE == EtOr68sXPizJ)
            cout << "1" << endl;
        else
            cout << "0" << endl;
        getchar ();
    }
    return 0;
}

