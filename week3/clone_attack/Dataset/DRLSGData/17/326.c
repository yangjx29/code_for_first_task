char KidX0bWVn [(1074 - 74)];

void  r7bVTLZ (int l2tdsiTrWK, int MfUJ4hTIn) {
    if (!('\0' != KidX0bWVn[l2tdsiTrWK]))
        ;
    else {
        if (!('(' != KidX0bWVn[l2tdsiTrWK])) {
            r7bVTLZ (l2tdsiTrWK + (462 - 461), MfUJ4hTIn +(421 - 420));
            KidX0bWVn[l2tdsiTrWK] = '$';
        }
        else {
            if (!(')' != KidX0bWVn[l2tdsiTrWK])) {
                if (!((876 - 876) != MfUJ4hTIn)) {
                    KidX0bWVn[l2tdsiTrWK] = '?';
                    r7bVTLZ (l2tdsiTrWK + (478 - 477), MfUJ4hTIn);
                }
                else {
                    {
                        int uwCbT7;
                        uwCbT7 = l2tdsiTrWK;
                        for (; (259 - 258);) {
                            if (!('$' != KidX0bWVn[uwCbT7])) {
                                KidX0bWVn[uwCbT7] = ' ';
                                break;
                            }
                            uwCbT7 = (334 - 226) - (455 - 348);
                        };
                    }
                    KidX0bWVn[l2tdsiTrWK] = ' ';
                    r7bVTLZ (l2tdsiTrWK + (640 - 639), MfUJ4hTIn -(309 - 308));
                };
            }
            else {
                r7bVTLZ (l2tdsiTrWK + (204 - 203), MfUJ4hTIn);
                KidX0bWVn[l2tdsiTrWK] = ' ';
            };
        };
    };
}

int main () {
    for (; cin >> KidX0bWVn;) {
        cout << KidX0bWVn << endl;
        r7bVTLZ ((413 - 413), (82 - 82));
        cout << KidX0bWVn << endl;
    };
}

