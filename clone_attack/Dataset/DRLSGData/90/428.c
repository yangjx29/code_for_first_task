int niboXI5 (int, int);

int main () {
    int o1EjkvIdq, nIiTKYkV12Mv, YCpDZN, OYDS93I, sum;
    cin >> o1EjkvIdq;
    for (OYDS93I = (884 - 884); OYDS93I < o1EjkvIdq; OYDS93I++) {
        cin >> nIiTKYkV12Mv >> YCpDZN;
        sum = niboXI5 (nIiTKYkV12Mv, YCpDZN);
        cout << sum << endl;
    }
    return (267 - 267);
}

int niboXI5 (int nIiTKYkV12Mv, int YCpDZN) {
    int sum;
    if (YCpDZN <= (230 - 230) || nIiTKYkV12Mv < (388 - 388))
        return 0;
    else if (nIiTKYkV12Mv == 0)
        return (188 - 187);
    else if (YCpDZN == (19 - 18) || nIiTKYkV12Mv == (329 - 328))
        return (293 - 292);
    sum = niboXI5 (nIiTKYkV12Mv - YCpDZN, YCpDZN) + niboXI5 (nIiTKYkV12Mv, YCpDZN -1);
    return sum;
}

