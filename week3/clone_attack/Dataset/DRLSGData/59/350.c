int R37yg5pmOi, D1JLHiWoksjG, zE4yJsP3 = 0, vmFxof3Q0X = 0, YFaHTuOy8NW = 0;
char iv6haSlqIZwn [100] [100];

void  z9JAtNW0uzy (int TA0XiNtlcJL9) {
    if (!(1 != TA0XiNtlcJL9)) {
        YFaHTuOy8NW = 0;
        for (zE4yJsP3 = 0; zE4yJsP3 < R37yg5pmOi; zE4yJsP3 = zE4yJsP3 + 1) {
            for (vmFxof3Q0X = 0; R37yg5pmOi > vmFxof3Q0X; vmFxof3Q0X = vmFxof3Q0X + 1) {
                if (!('@' != iv6haSlqIZwn[zE4yJsP3][vmFxof3Q0X]))
                    YFaHTuOy8NW = YFaHTuOy8NW +1;
            }
        }
    }
    if (TA0XiNtlcJL9 > 1) {
        z9JAtNW0uzy (TA0XiNtlcJL9 -1);
        for (zE4yJsP3 = 0; R37yg5pmOi > zE4yJsP3; zE4yJsP3 = zE4yJsP3 + 1) {
            for (vmFxof3Q0X = 0; R37yg5pmOi > vmFxof3Q0X; vmFxof3Q0X = vmFxof3Q0X + 1) {
                if (!('@' != iv6haSlqIZwn[zE4yJsP3][vmFxof3Q0X])) {
                    if (!('.' != iv6haSlqIZwn[zE4yJsP3][vmFxof3Q0X + 1]) && vmFxof3Q0X < R37yg5pmOi -1) {
                        iv6haSlqIZwn[zE4yJsP3][vmFxof3Q0X + 1] = '$';
                    }
                    if (!('.' != iv6haSlqIZwn[zE4yJsP3][vmFxof3Q0X - 1]) && 0 < vmFxof3Q0X) {
                        iv6haSlqIZwn[zE4yJsP3][vmFxof3Q0X - 1] = '$';
                    }
                    if (!('.' != iv6haSlqIZwn[zE4yJsP3 - 1][vmFxof3Q0X]) && zE4yJsP3 > 0) {
                        iv6haSlqIZwn[zE4yJsP3 - 1][vmFxof3Q0X] = '$';
                    }
                    if (!('.' != iv6haSlqIZwn[zE4yJsP3 + 1][vmFxof3Q0X]) && zE4yJsP3 < R37yg5pmOi -1) {
                        iv6haSlqIZwn[zE4yJsP3 + 1][vmFxof3Q0X] = '$';
                    }
                }
            }
        }
        YFaHTuOy8NW = 0;
        for (zE4yJsP3 = 0; zE4yJsP3 < R37yg5pmOi; zE4yJsP3 = zE4yJsP3 + 1) {
            for (vmFxof3Q0X = 0; vmFxof3Q0X < R37yg5pmOi; vmFxof3Q0X = vmFxof3Q0X + 1) {
                if (iv6haSlqIZwn[zE4yJsP3][vmFxof3Q0X] == '$')
                    iv6haSlqIZwn[zE4yJsP3][vmFxof3Q0X] = '@';
                if (iv6haSlqIZwn[zE4yJsP3][vmFxof3Q0X] == '@' || iv6haSlqIZwn[zE4yJsP3][vmFxof3Q0X] == '$')
                    YFaHTuOy8NW = YFaHTuOy8NW +1;
            }
        }
    }
}

int main () {
    cin >> R37yg5pmOi;
    for (zE4yJsP3 = 0; zE4yJsP3 < R37yg5pmOi; zE4yJsP3 = zE4yJsP3 + 1) {
        cin >> iv6haSlqIZwn[zE4yJsP3];
    }
    cin >> D1JLHiWoksjG;
    z9JAtNW0uzy (D1JLHiWoksjG);
    cout << YFaHTuOy8NW << endl;
    return 0;
}

