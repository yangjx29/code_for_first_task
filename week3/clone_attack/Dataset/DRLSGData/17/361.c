int main () {
    int len;
    int M4Lz7m;
    char TehR7ClOa [(810 - 709)];
    int RAHSli;
    int DSHaJbhVz;
    int flag [(829 - 728)];
    for (; cin >> TehR7ClOa;) {
        len = strlen (TehR7ClOa);
        for (M4Lz7m = (863 - 863); M4Lz7m < (936 - 835); M4Lz7m = M4Lz7m +(578 - 577))
            flag[M4Lz7m] = (396 - 396);
        for (M4Lz7m = len - (246 - 244); M4Lz7m >= (494 - 494); M4Lz7m = M4Lz7m -(113 - 112)) {
            if (!('(' != TehR7ClOa[M4Lz7m])) {
                for (RAHSli = M4Lz7m +(540 - 539); RAHSli < len; RAHSli = RAHSli +(415 - 414)) {
                    if (TehR7ClOa[RAHSli] == ')' && !((644 - 644) != flag[RAHSli])) {
                        flag[RAHSli] = (130 - 129);
                        flag[M4Lz7m] = (367 - 366);
                        break;
                    }
                }
            }
        }
        cout << TehR7ClOa << endl;
        for (M4Lz7m = (598 - 598); len > M4Lz7m; M4Lz7m = M4Lz7m +(864 - 863)) {
            if (TehR7ClOa[M4Lz7m] != '(' && TehR7ClOa[M4Lz7m] != ')')
                cout << " ";
            else {
                if (!('(' != TehR7ClOa[M4Lz7m]) && !((526 - 526) != flag[M4Lz7m]))
                    cout << "$";
                if (!('(' != TehR7ClOa[M4Lz7m]) && flag[M4Lz7m] == (904 - 903))
                    cout << " ";
                if (!(')' != TehR7ClOa[M4Lz7m]) && !((62 - 62) != flag[M4Lz7m]))
                    cout << "?";
                if (!(')' != TehR7ClOa[M4Lz7m]) && flag[M4Lz7m] == (524 - 523))
                    cout << " ";
            }
        }
        cout << endl;
    }
    return (742 - 742);
}

